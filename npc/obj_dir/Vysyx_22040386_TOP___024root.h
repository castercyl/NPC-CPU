// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040386_TOP.h for the primary calling header

#ifndef VERILATED_VYSYX_22040386_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040386_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22040386_TOP__Syms;
VL_MODULE(Vysyx_22040386_TOP___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc;
    CData/*2:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(I,31,0);
    VL_OUT64(pc,63,0);
    QData/*63:0*/ ysyx_22040386_TOP__DOT__src1;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__src2;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__sum;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__i_rdata;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm;
    QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__pmem_read__0__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040386_TOP__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040386_TOP___024root(const char* name);
    ~Vysyx_22040386_TOP___024root();
    VL_UNCOPYABLE(Vysyx_22040386_TOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040386_TOP__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
