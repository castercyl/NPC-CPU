#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {                             //I DO
      case 11: {
        if((c->gpr[17]>=0) && (c->gpr[17]<=19)){    //I DO a7
          ev.event = EVENT_SYSCALL; break;
        }
        else if (c->gpr[17] == -1){
          ev.event = EVENT_YIELD; break;
        }
        else {
          ev.event = EVENT_ERROR; break;
        }
      }
      //case 11: ev.event = EVENT_YIELD; break; //I DO mcause=0xb
      default: ev.event = EVENT_ERROR; break;
    }
 
  printf("mcause= %x\n",c->mcause); //I DO   这里调用的是自己写的printf函数 
  printf("mstatus= %x\n",c->mstatus); //I DO
  printf("mepc= %x\n",c->mepc); //I DO

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
}
