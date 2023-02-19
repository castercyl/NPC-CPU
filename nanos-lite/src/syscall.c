#include <common.h>
#include "syscall.h"
#include <sys/time.h> //I DO
#include <proc.h> //I DO define PCB
//#include <time.h> //I DO
//#include <sys/time.h> //I DO
//int gettimeofday(struct timeval *tv, struct timezone *tz);

//-------I DO--------
int fs_open(const char *pathname, int flags, int mode);
int fs_close(int fd);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
void naive_uload(PCB *pcb, const char *filename);
//int fs_gettimeofday(struct timeval * tv , struct timezone * tz);
//int fs_gettimeofday( );
//struct timeval now1;
//------------------

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

void sys_gettimeofday(Context *c) {
  struct timeval *tv = (struct timeval *)c->GPR2;
  __uint64_t sys_us = io_read(AM_TIMER_UPTIME).us;//见AM读系统时间部分的讲义
  tv->tv_usec = sys_us % 1000000;
  tv->tv_sec = sys_us / 1000000;
  c->GPRx = 0;

}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;    // $a7
//------------I DO--------------------
  a[1] = c->GPR2; //I DO   $a0
  a[2] = c->GPR3; //I DO   $a1
  a[3] = c->GPR4; //I DO   $a2

  switch (a[0]) {
    case SYS_exit  : printf("Do SYS_exit\n"); printf("a0 = %d\n", a[1]); halt(a[1]); break; //I DO SYS_exit 接收的是哪个参数？$a0
    //case SYS_exit: {naive_uload(NULL, "/bin/menu"); c->GPRx = 0; break;} //I DO
    //case SYS_exit: {naive_uload(NULL, "/bin/nterm"); c->GPRx = 0; break;} //I DO
    //case SYS_yield : printf("Do SYS_yield\n"); yield(); c->GPRx = 0; break; //I DO SYS_yield
    case SYS_yield : printf("Do SYS_yield\n"); yield(); c->GPRx = 0; break; //I DO SYS_yield
    case SYS_open  : printf("Do SYS_open\n"); c->GPRx = fs_open((char*)a[1], a[2], a[3]); break;
    case SYS_read  : printf("Do SYS_read\n"); c->GPRx = fs_read((int)a[1], (void*)a[2], (size_t)a[3]); break;
    case SYS_write : printf("Do SYS_write,a[0] = %d, a[1] = %d, a[2] =%d, a[3]=%d\n",a[0],a[1],a[2],a[3]); c->GPRx = fs_write((int)a[1], (void*)a[2], (size_t)a[3]); break;
    case SYS_close : printf("Do SYS_close\n"); c->GPRx = fs_close((int)a[1]); break;
    case SYS_lseek : printf("Do SYS_lseek\n"); c->GPRx = fs_lseek((int)a[1], (size_t)a[2], (int)a[3]); break;
    //case SYS_write : printf("Do SYS_write\n"); c->GPRx = sys_write((int)a[1], (void*)a[2], (size_t)a[3]); break; //I DO SYS_write
    case SYS_brk   : printf("Do SYS_brk\n"); c->GPRx = 0; break; //I DO SYS_brk 当前默认为总是申请成功
    //case SYS_gettimeofday:{/*printf("SYS_gettimeofday\n");*/ struct timeval now1; fs_gettimeofday(&now1, NULL); c->GPRx = now1.tv_sec*1000000 + now1.tv_usec; break;}
    case SYS_execve: {printf("Do_SYS_execve\n"); const char *filename = (const char *)a[1]; naive_uload(NULL, filename); c->GPRx = 0; break;} //I DO
    case SYS_gettimeofday:{printf("SYS_gettimeofday\n"); sys_gettimeofday(c);  break;}
    //case SYS_gettimeofday: printf("SYS_gettimeofday\n"); c->GPRx = get_time(); break;
    //case SYS_brk   : printf("Do SYS_brk\n"); break; //I DO SYS_brk 当前默认为总是申请成功
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
//--------------------------------------
}
