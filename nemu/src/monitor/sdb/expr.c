#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, NUM,

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
  {"\\-", '-'},           // subtraction
  {"\\*", '*'},          // multiplication
  {"/", '/'},          // division
  {"\\(", '('},         // Left parenthesis
  {"\\)", ')'},         // Right parenthesis
  {"[0-9]*", NUM},         // decimal
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
			case '-': tokens[nr_token].type = '-'; nr_token = nr_token + 1; break;
			case '*': tokens[nr_token].type = '*'; nr_token = nr_token + 1; break;
			case '/': tokens[nr_token].type = '/'; nr_token = nr_token + 1; break;
			case '(': tokens[nr_token].type = '('; nr_token = nr_token + 1; break;
			case ')': tokens[nr_token].type = ')'; nr_token = nr_token + 1; break;
			case NUM: tokens[nr_token].type = NUM; strcpy(tokens[nr_token].str, substr_start); nr_token = nr_token + 1; break;
        // above I DO
          default: TODO();
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
	int count = 0;
	if ((tokens[p].type == '(') & (tokens[q].type == ')')) {
		int i;
		for (i = p; i < q; i++) {
			if (tokens[i].type == '(') count = count + 1;
			if (tokens[i].type == ')') count = count - 1;
			//if (count == 0) return false;
			if (count < 0 ) assert(0);
		}
		if ((count - 1) == 0) return true;
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
	int rank = 0;
	for (i = p; i < q; i++) {
		if (tokens[i].type == '(') {
			left = 1;
			continue;
		}
		if (tokens[i].type == '(') {
			left = 0;
		}
		if (left == 1) continue;
		switch (tokens[i].type) {
			case '+': if(rank <= 10) {rank = 10; op = i;} break;
			case '-': if(rank <= 10) {rank = 10; op = i;} break;
			case '*': if(rank <= 20) {rank = 20; op = i;} break;
			case '/': if(rank <= 20) {rank = 20; op = i;} break;
			default: break;
		}
	}
	return op;
}

uint32_t eval(int p, int q) {
	if (p > q) {
		assert(0);
	}
	else if (p == q) {
		return atoi(tokens[p].str);
	}
	else if (check_parentheses(p,q) == true) {
		return eval(p+1, q-1);
	}
	else  {
		int op = find_op(p,q);
		uint32_t val1 = eval(p, op-1);
		uint32_t val2 = eval(op+1, q);

		switch (tokens[op].type) {
			case '+': return (val1 + val2);
			case '-': return (val1 - val2);
			case '*': return (val1 * val2);
			case '/': return (val1 / val2);
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
  //TODO();
  return eval(0, nr_token - 1); 
 // return 0;
}
