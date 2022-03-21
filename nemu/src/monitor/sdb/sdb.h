#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

typedef struct watchpoint {        // I DO
	int NO;
	char expr[64];  //用于存储表达式
	uint64_t in_val; //用于存储表达式的初值
	struct watchpoint *next;

	/* TODO: Add more members if necessary */

} WP;

#endif
