#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t vaddr_read(vaddr_t addr, int len);  // I DO
word_t isa_reg_str2val(const char *s, bool *success);

enum {
  TK_NOTYPE = 256, TK_EQ, NUM, TK_NEGATIVE, TK_NEQ, TK_AND, DEREF, TK_HEX, TK_REG,
  //TK_NEGATIVE:负号； DEREF: 指针；
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal

  //I DO
  {"\\$((\\$0)|(ra)|(sp)|(gp)|(tp)|(t0)|(t1)|(t2)|(s0)|(s1)|(a0)|(a1)|(a2)|(a3)|(a4)|(a5)|(a6)|(a7)|(s2)|(s3)|(s4)|(s5)|(s6)|(s7)|(s8)|(s9)|(s10)|(s11)|(t3)|(t4)|(t5)|(t6))", TK_REG},            // regs
  {"!=", TK_NEQ},       // 要放在[0-9]*之前
  {"&&", TK_AND},       // 要放在[0-9]*之前
  {"\\-", '-'},           // subtraction
  {"\\*", '*'},          // multiplication
  {"/", '/'},          // division
  {"\\(", '('},         // Left parenthesis
  {"\\)", ')'},         // Right parenthesis
  {"0x[0-9,A-F,a-f]*", TK_HEX},  // hexadecimal-number,要放在十进制数之前
  {"0|[1-9][0-9]*", NUM},         // decimal,不要写成[0-9]*会匹配到奇奇怪怪的东西
  //{"!=", TK_NEQ},       // not equal
  //{"&&", TK_AND},      // logic and
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;           //成员rm_so 存放匹配文本串在目标串中的开始位置，rm_eo 存放结束位置

  nr_token = 0;               // 已经识别出的token数目

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
		  //regexec()进行正则表达式的匹配，匹配成功返回数字0
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
          */

		if (substr_len > 31) {       //超过32位溢出，终止程序
			assert(0);
		}
 
         switch (rules[i].token_type) {
			case TK_NOTYPE: break;
			case '+': tokens[nr_token].type = '+'; nr_token = nr_token + 1; break;
			case TK_EQ: tokens[nr_token].type = TK_EQ; nr_token = nr_token + 1; break;
			case TK_NEQ: tokens[nr_token].type = TK_NEQ; nr_token = nr_token + 1; break;
			case '-': tokens[nr_token].type = '-'; nr_token = nr_token + 1; break;
			case '*': tokens[nr_token].type = '*'; nr_token = nr_token + 1; break;
			case '/': tokens[nr_token].type = '/'; nr_token = nr_token + 1; break;
			case '(': tokens[nr_token].type = '('; nr_token = nr_token + 1; break;
			case ')': tokens[nr_token].type = ')'; nr_token = nr_token + 1; break;
			case NUM: tokens[nr_token].type = NUM; strncpy(tokens[nr_token].str, substr_start, substr_len); nr_token = nr_token + 1; break;
			//case TK_NEQ: tokens[nr_token].type = TK_NEQ; nr_token = nr_token + 1; break;
			case TK_AND: tokens[nr_token].type = TK_AND; nr_token = nr_token + 1; break;
			case DEREF: tokens[nr_token].type = DEREF; nr_token = nr_token + 1; break;
			case TK_HEX: tokens[nr_token].type = TK_HEX; strncpy(tokens[nr_token].str, substr_start, substr_len); nr_token = nr_token + 1; break;
			case TK_REG: tokens[nr_token].type = TK_REG; strncpy(tokens[nr_token].str, substr_start+1, substr_len-1); nr_token = nr_token + 1; break; //去掉第一个$
        // above I DO
          default: assert(0);  //TODO();
        }

        break;
       }
     }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

bool check_parentheses(int p, int q) {
	//函数功能：判断括号是否匹配，匹配返回true,反之返回false；
	//设定一计数器count,依次检索p到(q-1)，检索到'('加1；检索到')'减1；
	//最终(count-1)==0,则括号匹配；防止出现（2+3))这种情况；
	//一旦count == 0，则括号不匹配；?
	//依据中途是否出现count < 0的情况，区分(4 + 3)) * ((2 - 1)和(4 + 3) * (2 - 1);
	int count_left = 0;
	int count_right = 0;
	if ((tokens[p].type == '(') & (tokens[q].type == ')')) {
		int i;
		for (i = p; i < q; i++) {
			if (tokens[i].type == '(') count_left = count_left + 1;
			if (tokens[i].type == ')') count_right = count_right + 1;
			//if (count == 0) return false;
			if (count_left < count_right ) assert(0);
			if (count_left == count_right ) return false;
		}
		if ((count_left - count_right - 1) == 0) return true;
		else 
			assert(0);
	}
	else
		return false;
}

int find_op(int p, int q) {
	//函数功能：输入表达式的首尾地址，找出运算式中的主运算符，返回其位置；
	//1.提取运算符；
	//2.判定运算符是否在括号里面，在的话不能作为主运算符；
	//3. 找出优先级最低的运算符 //4.找出同一优先级中最右边的运算符作为主运算符；
	int i;
	int op = p;
	int left = 0;
	int rank = 100;
	for (i = p; i < q; i++) {
		if (tokens[i].type == '(') {
			left = 1;
			continue;
		}
		if (tokens[i].type == ')') {
			left = 0;
			continue;
		}
		if (left == 1) continue;
		switch (tokens[i].type) {
			case '+': if(rank >= 30) {rank = 30; op = i;} break;
			case '-': if(rank >= 30) {rank = 30; op = i;} break;
			case '*': if(rank >= 40) {rank = 40; op = i;} break;
			case '/': if(rank >= 40) {rank = 40; op = i;} break;
			case TK_NEGATIVE: if(rank > 50) {rank = 50; op = i;} break;
			case TK_NEQ: if(rank >= 20) {rank = 20; op = i;} break;
			case TK_AND: if(rank >= 10) {rank = 10; op = i;} break;
			case DEREF:  if(rank >= 50) {rank = 50; op = i;} break;
			case TK_EQ:  if(rank >= 20) {rank = 20; op = i;} break;
			default: break;
		}
	}
	return op;
}

uint64_t eval(int p, int q) {
	if (p > q) {
		assert(0);
	}
	else if (p == q) {
		uint64_t res;
		bool flag_s = true;
		if (tokens[p].type == NUM)
			sscanf(tokens[p].str, "%ld", &res);    //不要用atoi()去转换，'1'会转换为10
		else if (tokens[p].type == TK_HEX)
			sscanf(tokens[p].str,"%lx",&res);
		else if (tokens[p].type == TK_REG)
			res = isa_reg_str2val(tokens[p].str, &flag_s);
		else
			assert(0);
		return res;
	}
	else if (check_parentheses(p,q) == true) {
		return eval(p+1, q-1);
	}
	else  {
		int op = find_op(p,q);
		uint64_t val1,val2;
		if ((tokens[op].type == TK_NEGATIVE) || (tokens[op].type == DEREF)) {   //单目运算符
			val1 = 1;
			val2 = eval(op+1,q);
		}
		else {
			val1 = eval(p,op-1);
			val2 = eval(op+1,q);
		}
		switch (tokens[op].type) {
			case '+': return (val1 + val2);
			case '-': return (val1 - val2);
			case '*': return (val1 * val2);
			case '/': return (val1 / val2);
			case TK_NEGATIVE: return (-1 * val2);
			case TK_NEQ: return (val1 != val2);
			case TK_AND: return (val1 && val2);
			case DEREF: return vaddr_read(val2, 4);
			case TK_EQ: return (val1 == val2);
			default : assert(0);
		}
	}
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int i;

  for (i = 0; i < nr_token; i++) {                                                                                                                                         
	  if ((i == 0) && (tokens[i].type == '-')) tokens[i].type = TK_NEGATIVE;
	  if ((i > 0) && (tokens[i].type == '-') && ((tokens[i-1].type != NUM) && (tokens[i-1].type != TK_HEX) && (tokens[i-1].type != ')')))
		  tokens[i].type = TK_NEGATIVE;
  }

  for (i = 0; i < nr_token; i++) {                //判别是否是指针，*位于最左边或者*号左边不是数字或者右括号‘）’
	  if ((tokens[i].type == '*') && ((i==0) || ((tokens[i-1].type != NUM) && (tokens[i-1].type != TK_HEX) && (tokens[i-1].type != ')'))))
		  tokens[i].type = DEREF;
  }
  //TODO();
  return eval(0, nr_token - 1); 
 // return 0;
}
