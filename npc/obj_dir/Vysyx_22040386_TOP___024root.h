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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_TOP_clk,0,0);
        VL_IN8(i_TOP_rst_n,0,0);
        VL_OUT8(o_TOP_unkown_code,0,0);
        VL_OUT8(o_TOP_Branch,0,0);
        VL_OUT8(o_TOP_mret,0,0);
        VL_OUT8(o_TOP_ecall,0,0);
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_RegWrite;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Jalr;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_CSR_csr_ren;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_CSR_csr_wen;
        CData/*2:0*/ ysyx_22040386_TOP__DOT__ID_CSR_csr_state;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__MEM_IF_Branch;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__CLINT_CSR_stop;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrsi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrwi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret;
        CData/*1:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__timer_interreupt_flag;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1;
        CData/*0:0*/ __Vclklast__TOP__i_TOP_clk;
        VL_OUT(o_TOP_inst,31,0);
        IData/*31:0*/ ysyx_22040386_TOP__DOT__IF_ID_inst;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32;
        VL_OUT64(o_TOP_pc,63,0);
        VL_OUT64(o_TOP_csr_dnpc,63,0);
        QData/*63:0*/ ysyx_22040386_TOP__DOT__IF_ID_pc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_imm;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_CSR_csr_wr_data;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_ALUresult;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mie;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__csr_inst__DOT__mip;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime_newvalue;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp_newvalue;
    };
    struct {
        QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__0__rdata;
        QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

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
