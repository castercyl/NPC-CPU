#include <am.h>
#include <klib-macros.h>

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; } //I DO

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  //uintptr_t addr;
  //addr = 0xa00003f8;
  outb(0xa00003f8, ch); //I DO
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));  //I DO
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
