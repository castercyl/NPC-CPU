// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_22040386_TOP__DPI_H_
#define VERILATED_VYSYX_22040386_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc2/ysyx_22040386_IDU.v:161:30
    extern void ebreak();
    // DPI import at vsrc2/ysyx_22040386_IFU.v:26:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc2/ysyx_22040386_MEMU.v:109:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc2/ysyx_22040386_RegisterFile.v:26:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
