#include <common.h>
void do_syscall(Context *c);//I DO
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: printf("event = EVENT_YIELD; event ID = %d\n", e.event); break; //I DO 1 
    case EVENT_SYSCALL: /*printf("event = EVENT_SYSCALL; event ID = %d\n", e.event);*/ do_syscall(c); break; //I DO
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}