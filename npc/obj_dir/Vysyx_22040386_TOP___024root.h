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
    VL_OUT8(unkown_code,0,0);
    CData/*0:0*/ ysyx_22040386_TOP__DOT__Jalr;
    CData/*1:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ALUop;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_RegWrite;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc;
    CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr;
    CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr;
    CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn;
    CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(Inst,31,0);
    IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32;
    IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32;
    VL_OUT64(pc,63,0);
    QData/*63:0*/ ysyx_22040386_TOP__DOT__src2;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__pc_imm;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__result;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__inst_rdata;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data;
    QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1;
    QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf;
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
