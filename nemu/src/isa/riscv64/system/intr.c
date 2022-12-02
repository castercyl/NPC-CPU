#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc; // I DO
  cpu.mcause = NO; // I DO
  cpu.mstatus.m.MPIE = cpu.mstatus.m.MIE;//I DO
  cpu.mstatus.m.MIE = 0;//I DO
  return cpu.mtvec; // I DO 

  //return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
