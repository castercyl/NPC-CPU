#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      //I DO
      case 0x8000000000000007: {
        ev.event = EVENT_IRQ_TIMER; break;
      }
      case 11: {
        if (c->gpr[17] == -1){
          ev.event = EVENT_YIELD; 
          c->mepc += 4;    //I DO
          break;}
        //if((c->gpr[17]>=0) && (c->gpr[17]<=19))
        else {    //I DO a7
          ev.event = EVENT_SYSCALL; 
          c->mepc += 4;    //I DO
          break;
        }
      }
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  //------I DO------
  int mie_MTIE_set = 0x80;
  if (enable){
    asm volatile("csrsi mstatus, 8"); // set mstatus_MIE = 1
    asm volatile("csrs mie, %0": :"r"(mie_MTIE_set)); // set mie_MTIE = 1; csrsi只能操作5位立即数
  }
  else{
    asm volatile("csrsi mstatus, 8"); // set mstatus_MIE = 1
    asm volatile("csrs mie, 0");//不开启计时器中断
  }
}