#include "sdb.h"

#define NR_WP 32

word_t expr(char *e, bool *success); //I DO

typedef struct watchpoint {
  int NO;
  char *expr;  //用于存储表达式
  uint64_t in_val; //用于存储表达式的初值
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

// head指正在使用中的监视点结构；free指空闲的监视点结构

WP* new_wp() {
	//从free_链表中返回一个空闲的监视点结构

	//如果free_中没有空闲的监视点结构则报错终止程序
	if (free_ == NULL)
		assert(0);

	//找到free_链表中的最后一个监视点结构
	int i = 0;
	WP *find_end = free_;
	while ( find_end->next != NULL) {
		find_end = find_end->next;
		i = i + 1;
	}

	if (i != 0) 
		wp_pool[i-1].next = NULL;
	else
		free_ = NULL;
   //返回空闲的监视点结构
	return &wp_pool[i];
}

void free_wp(WP *wp) {
	//将wp监视点结构归还到free_链表中

   //head链表如果为空，则不能归还
	if (head == NULL) {
		printf("There is no watchpoints now!");
		return;
	}  
  //在head中找到wp并从head链表中删除
	WP *prev_p = head;
	WP *current_p = prev_p->next;
	int j = wp->NO;
	if  (head->NO == j) {
		head = wp->next;
	}
	else {
		 while (current_p != NULL) {
			if (current_p->NO == j) {
				break;
		 	}
		 	prev_p = current_p;
			current_p = prev_p->next;
		}
		if (current_p == NULL) { 
			printf("There is no such wathpoint in using!");
			return;
		}
		prev_p->next = wp->next;
	}

    // 将归还的wp重新插入free_链表中
	//如果free_链表是NULL的，则作为free_的第一个结构体
	if (free_ == NULL) {
		free_ = wp;
		free_->next = NULL;
		return;
	} 
	//wp插入free_的首端
	if (wp->NO < free_->NO) {
		wp->next = free_->next;
		free_ = wp;
		return;
	} 
	//wp插入中间或者尾端
	prev_p = free_;
	current_p = prev_p->next;
	while (prev_p != NULL) {
		if ((prev_p->NO <  wp->NO) && (wp->NO < current_p->NO)) {
			break;
		}
		prev_p = current_p;
		current_p = prev_p->next;
	} 
	if ((current_p == NULL)  && (prev_p->NO < wp->NO)) {
			prev_p->next = wp;
			wp->next = NULL;
		}
	else { 
		prev_p->next = wp;
		wp->next = current_p;
	}

}

bool check_watchpoints() {
	WP *tmp = head;
	bool success = true;
	bool changed = false;
	uint64_t tmp_val;
	while(tmp->next != NULL) {
		tmp_val = expr(tmp->expr, &success);
		if (tmp->in_val != tmp_val) {
			changed = true;
			printf("watchpoint %d has changed, from 0x%lx to 0x%lx", tmp->NO, tmp->in_val, tmp_val);
			tmp->in_val = tmp_val;
		}
		tmp = tmp->next;
	}
	return changed;
}
