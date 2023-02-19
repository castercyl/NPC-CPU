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
        VL_IN8(top_clk_i,0,0);
        VL_IN8(top_rst_n_i,0,0);
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren;
        CData/*3:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen;
        CData/*3:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_clint_clint_wen;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq;
    };
    struct {
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed;
        CData/*0:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr;
        CData/*0:0*/ __Vclklast__TOP__top_clk_i;
        SData/*15:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop;
        VL_OUT(top_wbinst_o,31,0);
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result;
        IData/*31:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result;
        VL_OUT64(top_wbpc_o,63,0);
        QData/*63:0*/ ysyx_22040386_TOP__DOT__ifmemrdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mem_busrdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_csr_wdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__next_pc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mcause;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mip;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime;
        QData/*63:0*/ ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp;
        QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read__6__rdata;
        QData/*63:0*/ __Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read__7__rdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr;
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
