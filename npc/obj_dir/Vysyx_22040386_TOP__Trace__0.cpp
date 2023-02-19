// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040386_TOP__Syms.h"


void Vysyx_22040386_TOP___024root__trace_chg_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040386_TOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040386_TOP___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vysyx_22040386_TOP___024root__trace_chg_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((((0x200bff8ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                                 & (0x2004000ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                                & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                                   & ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))))));
        tracep->chgBit(oldp+1,((((0x200bff8ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                                 & (0x2004000ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))));
        tracep->chgQData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc),64);
        tracep->chgQData(oldp+4,(vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata),64);
        tracep->chgQData(oldp+6,(vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata),64);
        tracep->chgQData(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata),64);
        tracep->chgQData(oldp+10,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult),64);
        tracep->chgCData(oldp+12,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                    ? 0U : (0xffU & 
                                            ((0x2000U 
                                              & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                              ? ((0x1000U 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                                  ? 0xffU
                                                  : 
                                                 ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))))
                                              : ((0x1000U 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                  : 
                                                 ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))))))),8);
        tracep->chgIData(oldp+13,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst),32);
        tracep->chgBit(oldp+14,((1U & ((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
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
                                                         == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))))))))))));
        tracep->chgQData(oldp+15,(((((((((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                         | (0x20U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
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
                                        : 0ULL))),64);
        tracep->chgBit(oldp+17,((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
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
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
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
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))));
        tracep->chgBit(oldp+18,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))));
        tracep->chgBit(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren));
        tracep->chgCData(oldp+20,((7U & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+21,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel),4);
        tracep->chgSData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop),16);
        tracep->chgQData(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata),64);
        tracep->chgQData(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm),64);
        tracep->chgBit(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall));
        tracep->chgBit(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret));
        tracep->chgBit(oldp+30,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))));
        tracep->chgQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata),64);
        tracep->chgQData(oldp+33,((QData)((IData)((0x1fU 
                                                   & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0xfU))))),64);
        tracep->chgSData(oldp+35,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                   >> 0x14U)),12);
        tracep->chgQData(oldp+36,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_csr_wdata),64);
        tracep->chgBit(oldp+38,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                                 & (((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
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
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                                            | (0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                           | (0x17U 
                                                              == 
                                                              (0x7fU 
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
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi)))));
        tracep->chgQData(oldp+39,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren)
                                    ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                        ? ((0x1000U 
                                            & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata
                                            : ((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                       >> 0x20U))))
                                                    : 0xffffffffffffffffULL)))
                                        : ((0x1000U 
                                            & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata
                                            : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata))
                                    : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)),64);
        tracep->chgBit(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen));
        tracep->chgBit(oldp+42,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret))));
        tracep->chgQData(oldp+43,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                                    : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                                        ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                                        : 0ULL))),64);
        tracep->chgCData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype),4);
        tracep->chgQData(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec),64);
        tracep->chgQData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc),64);
        tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus 
                                               >> 3U)))));
        tracep->chgBit(oldp+51,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie 
                                               >> 7U)))));
        tracep->chgBit(oldp+52,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime 
                                 >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp)));
        tracep->chgQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata),64);
        tracep->chgBit(oldp+55,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                                 & ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)))));
        tracep->chgBit(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr));
        tracep->chgQData(oldp+57,(((((0x200bff8ULL 
                                      == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                                     | (0x2004000ULL 
                                        == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                                    & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))
                                    ? ((0x200bff8ULL 
                                        == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                                        ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime
                                        : ((0x2004000ULL 
                                            == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                                            ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp
                                            : 0ULL))
                                    : 0ULL)),64);
        tracep->chgBit(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_clint_clint_wen));
        tracep->chgBit(oldp+60,((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                                  | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))));
        tracep->chgQData(oldp+61,(((3U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                       ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                    : ((4U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                           | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                        : ((5U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                            ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                   ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                    ? 
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                    | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                     ? 
                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                     : 0ULL))))))),64);
        tracep->chgQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result),64);
        tracep->chgQData(oldp+65,(((0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                    : ((0x26U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                        : 0ULL))),64);
        tracep->chgQData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result),64);
        tracep->chgQData(oldp+69,(((0x2dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? VL_DIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                    : ((0x2eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result)))
                                        : ((0x36U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                            ? VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                            : ((0x37U 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result)))
                                                : 0ULL))))),64);
        tracep->chgQData(oldp+71,(((0x2fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result
                                    : ((0x30U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result)))
                                        : 0ULL))),64);
        tracep->chgQData(oldp+73,(((0x39U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                    ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                    : ((0x31U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result)))
                                        : ((0x3aU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                            ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                            : ((0x38U 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result)))
                                                : 0ULL))))),64);
        tracep->chgQData(oldp+75,((((((0x3cU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                      | (0x3dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                     | (0x3eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                    | (0x3fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata
                                    : 0ULL)),64);
        tracep->chgQData(oldp+77,((0xffffffffffffffffULL 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))),64);
        tracep->chgQData(oldp+79,((0xffffffffffffffffULL 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
        tracep->chgQData(oldp+81,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                   << (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
        tracep->chgIData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result),32);
        tracep->chgIData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result),32);
        tracep->chgIData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result),32);
        tracep->chgIData(oldp+86,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result),32);
        tracep->chgQData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result),64);
        tracep->chgQData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result),64);
        tracep->chgQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result),64);
        tracep->chgBit(oldp+93,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                 >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)));
        tracep->chgBit(oldp+94,((1U & (((~ (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                    >> 0x3fU))) 
                                        & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                   >> 0x3fU))) 
                                       | (((1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                          >> 0x3fU))) 
                                           == (1U & (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                             >> 0x3fU)))) 
                                          & (~ (IData)(
                                                       (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result 
                                                        >> 0x3fU))))))));
        tracep->chgQData(oldp+95,((1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                           + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
        tracep->chgBit(oldp+97,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                 >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)));
        tracep->chgBit(oldp+98,((1U & (((~ (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                    >> 0x3fU))) 
                                        & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                   >> 0x3fU))) 
                                       | (((1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                          >> 0x3fU))) 
                                           == (1U & (IData)(
                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                             >> 0x3fU)))) 
                                          & (~ (IData)(
                                                       ((1ULL 
                                                         + 
                                                         (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                          + 
                                                          (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))) 
                                                        >> 0x3fU))))))));
        tracep->chgIData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result),32);
        tracep->chgIData(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result),32);
        tracep->chgQData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result),64);
        tracep->chgIData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result),32);
        tracep->chgIData(oldp+104,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result),32);
        tracep->chgQData(oldp+105,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                    + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)),64);
        tracep->chgQData(oldp+107,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                    + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)),64);
        tracep->chgQData(oldp+109,((((1U & (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                    >> 0x3fU))) 
                                     == (1U & (IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                       >> 0x3fU))))
                                     ? (1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))
                                     : 0ULL)),64);
        tracep->chgBit(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2));
        tracep->chgBit(oldp+112,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned));
        tracep->chgBit(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed));
        tracep->chgCData(oldp+114,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)),7);
        tracep->chgCData(oldp+115,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+116,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+117,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+118,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add));
        tracep->chgBit(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub));
        tracep->chgBit(oldp+120,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor));
        tracep->chgBit(oldp+121,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or));
        tracep->chgBit(oldp+122,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and));
        tracep->chgBit(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll));
        tracep->chgBit(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl));
        tracep->chgBit(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra));
        tracep->chgBit(oldp+126,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt));
        tracep->chgBit(oldp+127,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu));
        tracep->chgBit(oldp+128,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw));
        tracep->chgBit(oldp+129,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw));
        tracep->chgBit(oldp+130,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw));
        tracep->chgBit(oldp+131,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw));
        tracep->chgBit(oldp+132,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw));
        tracep->chgBit(oldp+133,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div));
        tracep->chgBit(oldp+134,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw));
        tracep->chgBit(oldp+135,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul));
        tracep->chgBit(oldp+136,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw));
        tracep->chgBit(oldp+137,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem));
        tracep->chgBit(oldp+138,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw));
        tracep->chgBit(oldp+139,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu));
        tracep->chgBit(oldp+140,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw));
        tracep->chgBit(oldp+141,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu));
        tracep->chgBit(oldp+142,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw));
        tracep->chgBit(oldp+143,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi));
        tracep->chgBit(oldp+144,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori));
        tracep->chgBit(oldp+145,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori));
        tracep->chgBit(oldp+146,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi));
        tracep->chgBit(oldp+147,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli));
        tracep->chgBit(oldp+148,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli));
        tracep->chgBit(oldp+149,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai));
        tracep->chgBit(oldp+150,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti));
        tracep->chgBit(oldp+151,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu));
        tracep->chgBit(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw));
        tracep->chgBit(oldp+153,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw));
        tracep->chgBit(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw));
        tracep->chgBit(oldp+155,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw));
        tracep->chgBit(oldp+156,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr));
        tracep->chgBit(oldp+157,((0x100073U == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
        tracep->chgBit(oldp+158,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs));
        tracep->chgBit(oldp+159,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw));
        tracep->chgBit(oldp+160,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi));
        tracep->chgBit(oldp+161,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi));
        tracep->chgBit(oldp+162,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb));
        tracep->chgBit(oldp+163,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh));
        tracep->chgBit(oldp+164,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw));
        tracep->chgBit(oldp+165,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld));
        tracep->chgBit(oldp+166,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu));
        tracep->chgBit(oldp+167,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu));
        tracep->chgBit(oldp+168,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu));
        tracep->chgBit(oldp+169,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb));
        tracep->chgBit(oldp+170,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh));
        tracep->chgBit(oldp+171,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw));
        tracep->chgBit(oldp+172,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd));
        tracep->chgBit(oldp+173,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq));
        tracep->chgBit(oldp+174,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne));
        tracep->chgBit(oldp+175,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt));
        tracep->chgBit(oldp+176,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge));
        tracep->chgBit(oldp+177,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu));
        tracep->chgBit(oldp+178,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu));
        tracep->chgBit(oldp+179,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
        tracep->chgBit(oldp+180,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
        tracep->chgBit(oldp+181,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
        tracep->chgBit(oldp+182,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid));
        tracep->chgQData(oldp+183,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+185,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+187,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
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
                                                                             >> 7U))))))))),64);
        tracep->chgQData(oldp+189,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                              >> 0x14U))))))))),64);
        tracep->chgQData(oldp+191,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))))),64);
        tracep->chgBit(oldp+193,(((((((((((((((((((
                                                   (((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi) 
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
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw))));
        tracep->chgBit(oldp+194,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu))));
        tracep->chgBit(oldp+195,(((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))));
        tracep->chgBit(oldp+196,(((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
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
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw))));
        tracep->chgBit(oldp+197,(((((((((((((((((((
                                                   (((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
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
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw))));
        tracep->chgBit(oldp+198,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi))));
        tracep->chgBit(oldp+199,(((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll) 
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
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw))));
        tracep->chgBit(oldp+200,(((((((((((((((((((
                                                   (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
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
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw))));
        tracep->chgBit(oldp+201,(((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr))));
        tracep->chgBit(oldp+202,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw))));
        tracep->chgBit(oldp+203,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw))));
        tracep->chgBit(oldp+204,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw))));
        tracep->chgQData(oldp+205,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus),64);
        tracep->chgQData(oldp+207,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mcause),64);
        tracep->chgQData(oldp+209,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie),64);
        tracep->chgQData(oldp+211,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mip),64);
        tracep->chgQData(oldp+213,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[0]),64);
        tracep->chgQData(oldp+215,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[1]),64);
        tracep->chgQData(oldp+217,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[2]),64);
        tracep->chgQData(oldp+219,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[3]),64);
        tracep->chgQData(oldp+221,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[4]),64);
        tracep->chgQData(oldp+223,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[5]),64);
        tracep->chgQData(oldp+225,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[6]),64);
        tracep->chgQData(oldp+227,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[7]),64);
        tracep->chgQData(oldp+229,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[8]),64);
        tracep->chgQData(oldp+231,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[9]),64);
        tracep->chgQData(oldp+233,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[10]),64);
        tracep->chgQData(oldp+235,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[11]),64);
        tracep->chgQData(oldp+237,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[12]),64);
        tracep->chgQData(oldp+239,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[13]),64);
        tracep->chgQData(oldp+241,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[14]),64);
        tracep->chgQData(oldp+243,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[15]),64);
        tracep->chgQData(oldp+245,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[16]),64);
        tracep->chgQData(oldp+247,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[17]),64);
        tracep->chgQData(oldp+249,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[18]),64);
        tracep->chgQData(oldp+251,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[19]),64);
        tracep->chgQData(oldp+253,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[20]),64);
        tracep->chgQData(oldp+255,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[21]),64);
        tracep->chgQData(oldp+257,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[22]),64);
        tracep->chgQData(oldp+259,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[23]),64);
        tracep->chgQData(oldp+261,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[24]),64);
        tracep->chgQData(oldp+263,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[25]),64);
        tracep->chgQData(oldp+265,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[26]),64);
        tracep->chgQData(oldp+267,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[27]),64);
        tracep->chgQData(oldp+269,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[28]),64);
        tracep->chgQData(oldp+271,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[29]),64);
        tracep->chgQData(oldp+273,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[30]),64);
        tracep->chgQData(oldp+275,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[31]),64);
        tracep->chgQData(oldp+277,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret))
                                     ? (((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr))
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                                         : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                                             ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                                             : 0ULL))
                                     : ((1U & ((0x1fU 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2))
                                                    : 
                                                   ((0x21U 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                     ? 
                                                    (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed))
                                                     : 
                                                    ((0x22U 
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
                                         ? ((((((((0x1fU 
                                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                                  | (0x20U 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                                 | (0x21U 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                                | (0x22U 
                                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                               | (0x23U 
                                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                              | (0x24U 
                                                 == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                             | (0x25U 
                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                             ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                                + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                             : ((0x26U 
                                                 == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                    + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                                 : 0ULL))
                                         : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)))),64);
        tracep->chgBit(oldp+279,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                           >> 0xeU)))));
        tracep->chgQData(oldp+280,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata),64);
        tracep->chgQData(oldp+282,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata),64);
        tracep->chgQData(oldp+284,(((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x1fU)) 
                                                                        & (~ 
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                            >> 0xeU)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                     : ((4U == (7U 
                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                         ? (((QData)((IData)(
                                                             (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                               >> 0x20U))))
                                         : 0xffffffffffffffffULL))),64);
        tracep->chgQData(oldp+286,(((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                     ? ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata
                                         : ((0U == 
                                             (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                    >> 0x20U))))
                                                 : 0xffffffffffffffffULL)))
                                     : ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata
                                         : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata))),64);
        tracep->chgQData(oldp+288,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime),64);
        tracep->chgQData(oldp+290,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp),64);
    }
    tracep->chgBit(oldp+292,(vlSelf->top_clk_i));
    tracep->chgBit(oldp+293,(vlSelf->top_rst_n_i));
    tracep->chgIData(oldp+294,(vlSelf->top_wbinst_o),32);
    tracep->chgQData(oldp+295,(vlSelf->top_wbpc_o),64);
}

void Vysyx_22040386_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
