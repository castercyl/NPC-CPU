#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;

  uintptr_t mepc;      //I DO 添加系统寄存器
  uintptr_t mstatus;   //I DO
  uintptr_t mcause;   // I DO
  uintptr_t mtvec;    // I DO
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
