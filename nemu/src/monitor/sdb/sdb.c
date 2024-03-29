#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

void cpu_quit();

/*typedef struct watchpoint {
	int NO;
	char *expr;  //用于存储表达式
	uint64_t in_val; //用于存储表达式的初值
	struct watchpoint *next;


} WP;     //为什么不可以直接调用watchopits.c的WP?*/

//typedef struct watchpoint WP;

//static WP* head1 = NULL;
//extern struct watchpoint;
//typedef struct watchpoint WP;
//typedef extern struct wathpoint WP;

//word_t expr(char *e, bool *success); //头文件"sdb.h"里有

WP* new_wp();                       //I DO 调用一个空闲的监视点
void free_wp(int n);               // I DO 释放一个不使用的监视点
//WP *wp_used[32];           //I DO 用于存储正在使用的监视点结构
void info_w();              // I DO 打印正在使用的监视点的值

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) { 
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  //nemu_state.state == NEMU_END;  //I DO
  cpu_quit();           //I DO
  return -1;            //I DO 原本是返回-1
}

static int cmd_help(char *args);

static int cmd_si(char *args) {       //简易调试中的si指令
	int n;                            
	if (args == NULL) {               //此时的args指向输入的第二个参宿，若没有则args == NULL
		cpu_exec(1);
	}
	else {
		n = atoi(args);             //由于第二个参数是字符串，所以将其转换为整型才能放入cpu执行的函数中
		cpu_exec(n);
	}
	return 0;
}

static int cmd_info(char *args) {
	void isa_reg_display();
	if (*args == 'r') {
		isa_reg_display();
	} 
	else if (*args == 'w') {
		info_w(); 
	}
	else printf("Please input r or w !\n");
	return 0;
}

static int cmd_x(char *args) {
	word_t vaddr_read(vaddr_t addr, int len);
	int n,i,j;
	bool success =true;
	char *args_1 = strtok(NULL, " ");
	char *args_2 = strtok(NULL, " ");
	n = atoi(args_1);
	//vaddr_t add = strtoul(args_2, NULL, 16);
	vaddr_t add = expr(args_2, &success); 
	for(i = 0; i < n; i++) {
		printf("0x%lx:",add + 4*i);
		for(j = 0; j < 4; j++) { 
			printf(" %02lx ",vaddr_read(add+i*4+j, 1));
		}
		printf("\n");
	}
	return 0;
}

static int cmd_p(char *args) {
	//word_t expr(char *e, bool *success);
	bool i = true;
	bool *success = &i;
	printf("%lu\n",expr(args, success));
	return 0;
}

static int cmd_w(char *args) {
	bool success = true;
	WP *tmp_wp = new_wp();
	/*if (head1 == NULL) 
		head1 = tmp_wp;
	else
		head1-> next  = tmp_wp;*/
	strcpy(tmp_wp->expr, args);  //exper是个64的字符数组
	//tmp_wp->expr = args;
	tmp_wp->in_val = expr(args, &success);
	printf("Watchpoint[%d] is set up on %s now.\n",tmp_wp->NO, tmp_wp->expr);
	return 0;
}

static int cmd_d(char *args) {
	if (args == NULL) {
		printf("Need the NO of the watchpoint!\n");
	}
	else {
		int n;
		sscanf(args, "%d", &n);
		free_wp(n);
	}
	return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Single stp", cmd_si},
  {"info", "Display regs or watchpoints", cmd_info},
  {"x", "Scanning memory", cmd_x},
  {"p", "Evaluates the value of an expression", cmd_p},
  {"w", "Set up a new watchpoint", cmd_w},
  {"d", "Free the Watchpoint", cmd_d},
	
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  } 

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
      */
    char *args = cmd + strlen(cmd) + 1;
    if  (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
