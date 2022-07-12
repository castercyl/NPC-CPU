#include <common.h>
#include "syscall.h"

int sys_write(int fd, const void* buf, size_t len){ //I DO
  Log("sys_write:fd=%d, len=%d\n", fd, len);
  if ((fd == 1) || (fd == 2)) {
    int i = 0;
    for(; i < len; i++){
      putch(((char*)buf)[i]);
    }
    return 0;
  }
  return -1;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;    // $a7

  a[1] = c->GPR2; //I DO   $a0
  a[2] = c->GPR3; //I DO   $a1
  a[3] = c->GPR4; //I DO   $a2

  switch (a[0]) {
    case 0 : printf("Do syscall ID = %d\n",a[0]); halt(c->GPRx); break; //I DO SYS_exit 接收的是哪个参数？
    case 1 : printf("Do syscall ID = %d\n",a[0]); yield(); c->GPRx = 0; break; //I DO SYS_yield
    case 4 : printf("Do syscall ID = %d\n",a[0]); c->GPRx = sys_write((int)a[1], (void*)a[2], (size_t)a[3]); break; //I DO SYS_write
    case 9 : c->GPRx = 0; break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
