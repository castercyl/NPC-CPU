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
        VL_OUT8(o_TOP_fw_EX_src1fw,1,0);
        VL_OUT8(o_TOP_fw_EX_src2fw,1,0);
        VL_OUT8(o_TOP_ID_EX_reg_rd_addr1,4,0);
        VL_OUT8(o_TOP_ID_EX_reg_rd_addr2,4,0);
        VL_OUT8(o_TOP_EX_MEM_reg_wr_addr,4,0);
        VL_OUT8(o_TOP_EX_MEM_RegWrite,0,0);
        VL_OUT8(o_TOP_Branch,0,0);
        VL_OUT8(o_TOP_jump_flag,0,0);
        CData/*0:0*/ ysyx_22040386_TOP__DOT__TOP_Branch;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__TOP_load_use_flag;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__TOP_jump_flag;
        CData/*1:0*/ ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw;
        CData/*1:0*/ ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Word_op_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_MemRead_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Auipc_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Jal_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Jalr_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_Lui_o;
        CData/*2:0*/ ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o;
        CData/*2:0*/ ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_zero_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_Jal_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o;
        CData/*2:0*/ ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o;
        CData/*2:0*/ ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o;
        CData/*4:0*/ ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o;
        CData/*1:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr;
        CData/*5:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1;
        CData/*0:0*/ __Vclklast__TOP__i_TOP_clk;
        VL_OUT(o_TOP_inst,31,0);
        IData/*31:0*/ ysyx_22040386_TOP__DOT__IF_ID_inst_i;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__IF_ID_inst_o;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__ID_EX_inst_o;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__EX_MEM_inst_o;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__MEM_WB_inst_o;
    };
    struct {
        IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32;
        VL_OUT64(o_TOP_pc,63,0);
        QData/*63:0*/ ysyx_22040386_TOP__DOT__TOP_dnpc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__IF_ID_pc_i;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__IF_ID_pc_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_imm_i;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_imm_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ID_EX_pc_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_pc_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_snpc_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__MEM_WB_pc_o;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1;
        QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata;
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
