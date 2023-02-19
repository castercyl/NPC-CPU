#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  //uintptr_t mepc, mcause, gpr[32], mstatus;
  uintptr_t gpr[32];  //I DO
  uintptr_t mcause;   //I DO
  uintptr_t mstatus;  //I DO
  uintptr_t mepc;      //I DO
  //uintptr_t mepc, mstatus, mcause, gpr[32]; //I DO
  void *pdir;
};

/*
#define GPR1 gpr[17] // a7
#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]
#endif
*/
#define GPR1 gpr[17] // a7
//#define GPR2 gpr[0]
#define GPR2 gpr[10] //I DO a0 
//#define GPR3 gpr[0]
#define GPR3 gpr[11] //I DO a1
//#define GPR4 gpr[0]
#define GPR4 gpr[12] //I DO a2
//#define GPRx gpr[0]
#define GPRx gpr[10] //I DO a0
#endif
