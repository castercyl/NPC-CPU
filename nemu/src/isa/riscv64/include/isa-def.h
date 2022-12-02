#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;

  word_t mepc;      //I DO 添加系统寄存器
  word_t mcause;   // I DO
  word_t mtvec;    // I DO
  union {
    struct{
      word_t UIE    : 1;
      word_t SIE    : 1;
      word_t ZERO_2 : 1;
      word_t MIE    : 1;
      word_t UPIE   : 1;
      word_t SPIE   : 1;
      word_t ZERO_6 : 1;
      word_t MPIE   : 1;
      word_t SPP    : 1;
      word_t ZERO_9_10 : 2;
      word_t MPP    : 2;
      word_t FS     : 2;
      word_t XS     : 2;
      word_t MPRV   : 1;
      word_t SUM    : 1;
      word_t MXR    : 1;
      word_t TVM    : 1;
      word_t TW     : 1;
      word_t TSR    : 1;
      word_t ZERO_23_62 : 40;
      word_t SD     : 1;
    } m;
    word_t value;
  } mstatus;

} riscv64_CPU_state;

/*
//I DO define CSR
typedef struct {
  word_t mepc;      //I DO 添加系统寄存器
  word_t mcause;   // I DO
  word_t mtvec;    // I DO
  union {
    struct{
      word_t UIE    : 1;
      word_t SIE    : 1;
      word_t ZERO_2 : 1;
      word_t MIE    : 1;
      word_t UPIE   : 1;
      word_t SPIE   : 1;
      word_t ZERO_6 : 1;
      word_t MPIE   : 1;
      word_t SPP    : 1;
      word_t ZERO_9_10 : 2;
      word_t MPP    : 2;
      word_t FS     : 2;
      word_t XS     : 2;
      word_t MPRV   : 1;
      word_t SUM    : 1;
      word_t MXR    : 1;
      word_t TVM    : 1;
      word_t TW     : 1;
      word_t TSR    : 1;
      word_t ZERO_23_62 : 40;
      word_t SD     : 1;
    } m;
    word_t value;
  } mstatus;

} riscv64_CSR_state;
*/

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
