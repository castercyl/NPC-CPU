#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

char *regs_inst[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"}; //I DO

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {   // I DO
  int i = 0;
  
  if (ref_r->pc != cpu.pc){
    printf("Dnpc is false! ref_dnpc:%08lx; nemu_dnpc:%08lx\n",ref_r->pc,cpu.pc);
    printf("\n");
    return false;
  }
  
  for (i = 0; i < 32; i++){
    if (ref_r->gpr[i] != cpu.gpr[i]){
      printf("False: Reg is false! ref_gpr[%s]: 0x%08lx; nemu_gpr[%s]: 0x%08lx\n",regs_inst[i], ref_r->gpr[i], regs_inst[i], cpu.gpr[i]);
      printf("\n");
      return false;
    }
  }
  return true;
}

void isa_difftest_attach() {
}
