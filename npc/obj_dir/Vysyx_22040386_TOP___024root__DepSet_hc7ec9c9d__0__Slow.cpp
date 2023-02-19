// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP___024root.h"

void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__WBU_inst__DOT__ebreak_TOP();
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__CTRL_inst__DOT__timer_intr_TOP();
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__unkown_inst_TOP();
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_flag_TOP();
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read_TOP(QData/*63:0*/ pc, QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___settle__TOP__0(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___settle__TOP__0\n"); );
    // Body
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr 
        = (((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime 
             >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp) 
            & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus 
                       >> 3U))) & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie 
                                           >> 7U)));
    vlSelf->top_wbpc_o = vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc;
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read__6__rdata);
    vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read__6__rdata;
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
        = ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata));
    vlSelf->top_wbinst_o = vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst;
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall 
        = (IData)((0x73U == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret 
        = (IData)((0x30200073U == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli 
        = (IData)((0x5013U == (0xfc00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai 
        = (IData)((0x40005013U == (0xfc00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw 
        = (IData)((0x101bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw 
        = (IData)((0x4000501bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw 
        = (IData)((0x501bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw 
        = (IData)((0x1bU == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub 
        = (IData)((0x40000033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl 
        = (IData)((0x5033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra 
        = (IData)((0x40005033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw 
        = (IData)((0x4000503bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw 
        = (IData)((0x503bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw 
        = (IData)((0x4000003bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw 
        = (IData)((0x103bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw 
        = (IData)((0x3bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div 
        = (IData)((0x2004033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw 
        = (IData)((0x200403bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw 
        = (IData)((0x200003bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem 
        = (IData)((0x2006033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw 
        = (IData)((0x200603bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu 
        = (IData)((0x2005033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw 
        = (IData)((0x200503bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu 
        = (IData)((0x2007033U == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw 
        = (IData)((0x200703bU == (0xfe00707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    if ((0x100073U == vlSelf->top_wbinst_o)) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__WBU_inst__DOT__ebreak_TOP();
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)
            ? 4U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)
                     ? 1U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                              ? 2U : 0U)));
    if (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs) 
           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))) {
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen 
            = (1U & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)));
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata 
            = ((0x300U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                           >> 0x14U)) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus
                : ((0x341U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                               >> 0x14U)) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                    : ((0x342U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                   >> 0x14U)) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mcause
                        : ((0x305U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                       >> 0x14U)) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                            : ((0x304U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                           >> 0x14U))
                                ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie
                                : ((0x344U == (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                               >> 0x14U))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mip
                                    : 0ULL))))));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata = 0ULL;
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren 
        = (((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid 
        = (((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs)) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi)) 
             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)) 
           | (0x100073U == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel 
        = ((((((((1U & (- (IData)(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi))))) 
                 | (2U & (- (IData)(((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)))))) 
                | (3U & (- (IData)(((((((((((((((((
                                                   (((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)))))) 
               | (4U & (- (IData)(((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)))))) 
              | (6U & (- (IData)(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)))))) 
             | (5U & (- (IData)(((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)))))) 
            | (7U & (- (IData)(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)))))) 
           | (8U & (- (IData)(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop 
        = (((((((((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((1U 
                                                                         & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add)))) 
                                                                        | (2U 
                                                                           & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub))))) 
                                                                       | (3U 
                                                                          & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor))))) 
                                                                      | (4U 
                                                                         & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or))))) 
                                                                     | (5U 
                                                                        & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and))))) 
                                                                    | (6U 
                                                                       & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll))))) 
                                                                   | (7U 
                                                                      & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl))))) 
                                                                  | (8U 
                                                                     & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra))))) 
                                                                 | (9U 
                                                                    & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt))))) 
                                                                | (0xaU 
                                                                   & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu))))) 
                                                               | (0xbU 
                                                                  & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi))))) 
                                                              | (0xcU 
                                                                 & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori))))) 
                                                             | (0xdU 
                                                                & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori))))) 
                                                            | (0xeU 
                                                               & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi))))) 
                                                           | (0xfU 
                                                              & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli))))) 
                                                          | (0x10U 
                                                             & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli))))) 
                                                         | (0x11U 
                                                            & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai))))) 
                                                        | (0x12U 
                                                           & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti))))) 
                                                       | (0x13U 
                                                          & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu))))) 
                                                      | (0x14U 
                                                         & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb))))) 
                                                     | (0x15U 
                                                        & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh))))) 
                                                    | (0x16U 
                                                       & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw))))) 
                                                   | (0x17U 
                                                      & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld))))) 
                                                  | (0x18U 
                                                     & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu))))) 
                                                 | (0x19U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu))))) 
                                                | (0x1aU 
                                                   & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu))))) 
                                               | (0x1bU 
                                                  & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb))))) 
                                              | (0x1cU 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh))))) 
                                             | (0x1dU 
                                                & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw))))) 
                                            | (0x1eU 
                                               & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))))) 
                                           | (0x1fU 
                                              & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq))))) 
                                          | (0x20U 
                                             & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne))))) 
                                         | (0x21U & 
                                            (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt))))) 
                                        | (0x22U & 
                                           (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge))))) 
                                       | (0x23U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu))))) 
                                      | (0x24U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu))))) 
                                     | (0x25U & (- (IData)(
                                                           (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))))) 
                                    | (0x26U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr))))) 
                                   | (0x27U & (- (IData)(
                                                         (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))))) 
                                  | (0x28U & (- (IData)(
                                                        (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))))) 
                                 | (0x29U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw))))) 
                                | (0x2aU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw))))) 
                               | (0x2bU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw))))) 
                              | (0x2cU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw))))) 
                             | (0x32U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw))))) 
                            | (0x33U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw))))) 
                           | (0x34U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw))))) 
                          | (0x35U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw))))) 
                         | (0x3bU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw))))) 
                        | (0x2dU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div))))) 
                       | (0x2eU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw))))) 
                      | (0x2fU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul))))) 
                     | (0x30U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw))))) 
                    | (0x39U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem))))) 
                   | (0x31U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw))))) 
                  | (0x36U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu))))) 
                 | (0x37U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw))))) 
                | (0x3aU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu))))) 
               | (0x38U & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw))))) 
              | (0x3cU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs))))) 
             | (0x3dU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi))))) 
            | (0x3eU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw))))) 
           | (0x3fU & (- (IData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi)))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
        = ((((((- (QData)((IData)((((((((((((((((((
                                                   ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw))))) 
               & (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                       >> 0x1fU)))) 
                   << 0xcU) | (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                               >> 0x14U))))) 
              | ((- (QData)((IData)(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))))) 
                 & (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu))))) 
                & (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                            >> 7U)))))))))) 
            | ((- (QData)((IData)((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))))) 
               & (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                       >> 0x1fU)))) 
                   << 0x15U) | (QData)((IData)(((0x100000U 
                                                 & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                            >> 0x14U)))))))))) 
           | ((- (QData)((IData)(((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))))) 
              & (((QData)((IData)((- (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                              >> 0x1fU))))) 
                  << 0x20U) | (QData)((IData)((0xfffff000U 
                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
        = (((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
            & (0U != (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                               >> 0x14U)))) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr
           [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                      >> 0x14U))] : 0ULL);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
        = (((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs)) 
             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
            & (0U != (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                               >> 0xfU)))) ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr
           [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                      >> 0xfU))] : 0ULL);
    if ((4U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__CTRL_inst__DOT__timer_intr_TOP();
    }
    if (((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid)) 
         & (IData)(vlSelf->top_rst_n_i))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__unkown_inst_TOP();
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_csr_wdata 
        = ((0x3cU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
            ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata 
               | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata)
            : ((0x3dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata 
                   | (QData)((IData)((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                               >> 0xfU)))))
                : ((0x3eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata
                    : ((0x3fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                            >> 0xfU))))
                        : 0ULL))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2 
        = (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
           == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned 
        = (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
           >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed 
        = (1U & (((~ (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                              >> 0x3fU))) & (IData)(
                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                     >> 0x3fU))) 
                 | (((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                    >> 0x3fU))) == 
                     (1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                    >> 0x3fU)))) & 
                    (~ (IData)(((((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 >> 0x3fU))) 
                                  == (1U & (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                    >> 0x3fU))))
                                  ? (1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                             + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))
                                  : 0ULL) >> 0x3fU))))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result 
        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata), (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result 
        = VL_DIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata), (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result 
        = VL_MULS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result 
        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata), (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result 
        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata), (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result 
        = (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
           + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result 
        = (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
           + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result 
        = (1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                   + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__next_pc 
        = ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr) 
             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret))
            ? (((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr))
                ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                    : 0ULL)) : ((1U & ((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                            ? (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2))
                                            : ((0x21U 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed))
                                                : (
                                                   (0x22U 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                    ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed)
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                     ? 
                                                    (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned))
                                                     : 
                                                    ((0x24U 
                                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                      ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned)
                                                      : 
                                                     ((0x25U 
                                                       == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                                      | (0x26U 
                                                         == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))))))))))
                                 ? ((((((((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                          | (0x20U 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                         | (0x21U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                        | (0x22U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                       | (0x23U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                      | (0x24U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                     | (0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                     ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                        + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                     : ((0x26U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                         ? (0xfffffffffffffffeULL 
                                            & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                               + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                         : 0ULL)) : 
                                (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result 
        = (((((((((6U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                  | (0x35U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                 | (7U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                | (0x33U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
               | (8U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
              | (0x32U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
             | (0xfU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
            | (0x29U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
            ? ((6U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                   << (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))
                : ((0x35U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result)))
                    : ((7U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                        ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                           >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))
                        : ((0x33U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result)))
                            : ((8U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                ? ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                    >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                     >> 0x3fU)))))) 
                                      & (~ (0xffffffffffffffffULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata))))))
                                : ((0x32U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? (((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata))) 
                                        >> (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                         >> 0x1fU)))))) 
                                          & (~ (0xffffffffffffffffULL 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata))))))
                                    : ((0xfU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                           << (0x3fU 
                                               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))
                                        : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result))))))))))
            : ((0x10U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                   >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))
                : ((0x2bU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result)))
                    : ((0x11U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                        ? ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                            >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))) 
                           | ((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                             >> 0x3fU)))))) 
                              & (~ (0xffffffffffffffffULL 
                                    >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))))))
                        : ((0x2aU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                            ? (((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata))) 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                 >> 0x1fU)))))) 
                                  & (~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))))))
                            : 0ULL)))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result 
        = ((0x8000U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
            ? 0ULL : ((0x4000U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                       ? 0ULL : ((0x2000U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                  ? 0ULL : ((0x1000U 
                                             & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                             ? 0ULL
                                             : ((0x800U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                 ? 0ULL
                                                 : 
                                                ((0x400U 
                                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                  ? 0ULL
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                   ? 0ULL
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                    ? 0ULL
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                     ? 0ULL
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                      ? 0ULL
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 0ULL
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result)))
                                                            : 0ULL)
                                                           : 0ULL))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 0ULL
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 0ULL
                                                            : 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result)))))
                                                          : 0ULL))
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 0ULL
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 0ULL
                                                            : 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result)))))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 0ULL
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 0ULL
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm
                                                            : 0ULL)
                                                           : 0ULL)
                                                          : 0ULL)))
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 0ULL
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                            : 
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                            + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                             >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                             ? 0ULL
                                                             : 1ULL)
                                                            : 
                                                           ((1U 
                                                             & (((~ (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                             >> 0x3fU))) 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                                            >> 0x3fU))) 
                                                                | (((1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                                >> 0x3fU))) 
                                                                    == 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                                                >> 0x3fU)))) 
                                                                   & (~ (IData)(
                                                                                ((1ULL 
                                                                                + 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                                + 
                                                                                (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))) 
                                                                                >> 0x3fU))))))
                                                             ? 0ULL
                                                             : 1ULL))
                                                           : 0ULL)))
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 0ULL
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result
                                                            : 
                                                           ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                             >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                                             ? 0ULL
                                                             : 1ULL))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 
                                                           ((1U 
                                                             & (((~ (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                             >> 0x3fU))) 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                                            >> 0x3fU))) 
                                                                | (((1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                                                >> 0x3fU))) 
                                                                    == 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                                                >> 0x3fU)))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result 
                                                                                >> 0x3fU))))))
                                                             ? 0ULL
                                                             : 1ULL)
                                                            : 0ULL)))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                          ? 0ULL
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? 0ULL
                                                            : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result
                                                            : 0ULL))))))))))))))));
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult 
        = ((8U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
            ? ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                           ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                                      ? 0ULL : ((((
                                                   (0x3cU 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                                   | (0x3dU 
                                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                                  | (0x3eU 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata
                                                 : 0ULL))))
            : ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                ? ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                        ? ((0x39U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                            ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                            : ((0x31U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result)))
                                : ((0x3aU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                    : ((0x38U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result)))
                                        : 0ULL)))) : 
                       ((0x2dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                         ? VL_DIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                         : ((0x2eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                             ? (((QData)((IData)((- (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result)))
                             : ((0x36U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                 : ((0x37U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result)))
                                     : 0ULL))))) : 
                   ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                     ? ((0x2fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result
                         : ((0x30U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                             ? (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result)))
                             : 0ULL)) : ((0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                          ? (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                          : ((0x26U 
                                              == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                              ? (4ULL 
                                                 + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                              : 0ULL))))
                : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                        ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result
                        : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result)
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel))
                        ? ((3U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                            ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                               ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                            : ((4U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                   | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                : ((5U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                       & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                    : ((0xcU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                           ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                        : ((0xdU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                            ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                               | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                            : ((0xeU 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                : 0ULL))))))
                        : 0ULL))));
    if ((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
          | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_flag_TOP();
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_clint_clint_wen 
        = (((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
            | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
           & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
              & ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))));
    if ((((0x200bff8ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
          & (0x2004000ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
         & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read__7__rdata);
        vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata 
            = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read__7__rdata;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata = 0xffffffffffffffffULL;
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
        = (((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
            | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))
            ? ((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                 | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))
                ? ((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime
                    : ((0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                        ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp
                        : 0ULL)) : 0ULL) : vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata);
    if ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult 
                       >> 2U)))) {
        if ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult 
                           >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))) {
                vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                    = (((- (QData)((IData)(((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                             >> 0x3fU) 
                                            & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                             >> 0x38U))))));
                vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata = 0xffffffffffffffffULL;
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                    = (((- (QData)((IData)((1U & ((IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                           >> 0x37U)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0xeU))))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                             >> 0x30U))))));
                vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata 
                    = (((- (QData)((IData)(((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                             >> 0x3fU) 
                                            & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                >> 0x30U))))));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))) {
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x2fU)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                         >> 0x28U))))));
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata = 0xffffffffffffffffULL;
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x27U)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                         >> 0x20U))))));
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x2fU)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                            >> 0x20U))))));
        }
    } else if ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult 
                              >> 1U)))) {
        if ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))) {
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x1fU)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                         >> 0x18U))))));
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata = 0xffffffffffffffffULL;
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x17U)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                         >> 0x10U))))));
            vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata 
                = (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                       >> 0x1fU)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                  >> 0xeU))))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                            >> 0x10U))))));
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))) {
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                   >> 0xfU)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                           >> 8U))))));
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata = 0xffffffffffffffffULL;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                   >> 7U)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))));
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                   >> 0xfU)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                >> 0xeU))))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))));
    }
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___eval_initial(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__top_clk_i = vlSelf->top_clk_i;
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___eval_settle(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_settle\n"); );
    // Body
    Vysyx_22040386_TOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___final(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___ctor_var_reset(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_clk_i = VL_RAND_RESET_I(1);
    vlSelf->top_rst_n_i = VL_RAND_RESET_I(1);
    vlSelf->top_wbinst_o = VL_RAND_RESET_I(32);
    vlSelf->top_wbpc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_clint_clint_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read__6__rdata = 0;
    vlSelf->__Vtask_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read__7__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
