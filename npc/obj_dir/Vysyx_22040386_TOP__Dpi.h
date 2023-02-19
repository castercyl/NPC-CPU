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
    // DPI import at mycpu_single_cycle/idram.v:34:34
    extern void dram_read(long long pc, long long raddr, long long* rdata);
    // DPI import at mycpu_single_cycle/idram.v:44:34
    extern void dram_write(long long pc, long long waddr, long long wdata, char wmask);
    // DPI import at mycpu_single_cycle/WBU.v:46:34
    extern void ebreak();
    // DPI import at mycpu_single_cycle/clint.v:61:34
    extern void generate_skip();
    // DPI import at mycpu_single_cycle/clint.v:55:34
    extern void generate_skip_flag();
    // DPI import at mycpu_single_cycle/idram.v:27:34
    extern void iram_read(long long raddr, long long* rdata);
    // DPI import at mycpu_single_cycle/registerfile.v:62:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at mycpu_single_cycle/CTRL.v:42:34
    extern void timer_intr();
    // DPI import at mycpu_single_cycle/IDU.v:388:34
    extern void unkown_inst();

#ifdef __cplusplus
}
#endif

#endif  // guard
