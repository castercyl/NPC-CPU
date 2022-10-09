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
        tracep->chgQData(oldp+0,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc),64);
        tracep->chgIData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst),32);
        tracep->chgBit(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite));
        tracep->chgBit(oldp+4,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                      >> 3U))));
        tracep->chgBit(oldp+5,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
        tracep->chgBit(oldp+6,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
        tracep->chgBit(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc));
        tracep->chgBit(oldp+8,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
        tracep->chgBit(oldp+9,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
        tracep->chgBit(oldp+10,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr));
        tracep->chgBit(oldp+11,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
        tracep->chgCData(oldp+12,(((0x63U == (0x7fU 
                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                    ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                             >> 0xcU))
                                    : 2U)),3);
        tracep->chgCData(oldp+13,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+14,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
        tracep->chgQData(oldp+16,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm),64);
        tracep->chgQData(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1),64);
        tracep->chgQData(oldp+20,(((0U == (0x1fU & 
                                           (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                            >> 0x14U)))
                                    ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                   [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                              >> 0x14U))])),64);
        tracep->chgBit(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall));
        tracep->chgBit(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret));
        tracep->chgBit(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren));
        tracep->chgBit(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wen));
        tracep->chgCData(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state),2);
        tracep->chgSData(oldp+27,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                   >> 0x14U)),12);
        tracep->chgQData(oldp+28,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                    ? ((0x300U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                        ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                        : ((0x341U 
                                            == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0x14U))
                                            ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                            : ((0x342U 
                                                == 
                                                (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U))
                                                ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                    : 0ULL))))
                                    : 0ULL)),64);
        tracep->chgQData(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc),64);
        tracep->chgBit(oldp+32,((1U & (~ (IData)((0U 
                                                  != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
        tracep->chgQData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm),64);
        tracep->chgQData(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult),64);
        tracep->chgQData(oldp+37,((((((- (QData)((IData)(
                                                         ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                      & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
                                     | ((- (QData)((IData)(
                                                           (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                        & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm)) 
                                    | ((- (QData)((IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                       & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)) 
                                                               | (0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) 
                                                              | (0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))))))) 
                                      & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))),64);
        tracep->chgQData(oldp+39,(((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                    : (((((- (QData)((IData)(
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                          & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
                                         | ((- (QData)((IData)(
                                                               (0x37U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                            & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm)) 
                                        | ((- (QData)((IData)(
                                                              (0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                           & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)) 
                                                                   | (0x37U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) 
                                                                  | (0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))))))) 
                                          & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))),64);
        tracep->chgBit(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__MEM_IF_Branch));
        tracep->chgQData(oldp+42,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                    : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                        ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                        : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))),64);
        tracep->chgBit(oldp+44,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren))));
        tracep->chgQData(oldp+45,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                    ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                        ? ((0x300U 
                                            == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0x14U))
                                            ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                            : ((0x341U 
                                                == 
                                                (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U))
                                                ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                                : (
                                                   (0x342U 
                                                    == 
                                                    (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                     : 0ULL))))
                                        : 0ULL) : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                    : 
                                                   (((((- (QData)((IData)(
                                                                          ((0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                                       & (4ULL 
                                                          + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
                                                      | ((- (QData)((IData)(
                                                                            (0x37U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm)) 
                                                     | ((- (QData)((IData)(
                                                                           (0x17U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (~ 
                                                                              ((((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) 
                                                                               | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))))))) 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))))),64);
        tracep->chgQData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus),64);
        tracep->chgQData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc),64);
        tracep->chgQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause),64);
        tracep->chgQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc),64);
        tracep->chgQData(oldp+55,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
        tracep->chgQData(oldp+57,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)),64);
        tracep->chgBit(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
        tracep->chgBit(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
        tracep->chgBit(oldp+61,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                 ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
        tracep->chgBit(oldp+62,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                 ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
        tracep->chgBit(oldp+63,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                       >> 5U))));
        tracep->chgBit(oldp+65,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                       >> 4U))));
        tracep->chgBit(oldp+66,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                        ? ((IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                    >> 0x3fU)) 
                                           ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                        : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                              >> 5U))))));
        tracep->chgCData(oldp+67,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
        tracep->chgIData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
        tracep->chgIData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
        tracep->chgQData(oldp+74,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
        tracep->chgQData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
        tracep->chgQData(oldp+78,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                    : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
        tracep->chgQData(oldp+80,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
        tracep->chgQData(oldp+82,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                    ? ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                        : (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                    : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
        tracep->chgQData(oldp+84,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
        tracep->chgQData(oldp+86,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                    : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
        tracep->chgQData(oldp+88,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                    ? (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                     >> 0x1fU))))))
                                    : (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                     >> 0x3fU)))))))),64);
        tracep->chgQData(oldp+90,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
        tracep->chgCData(oldp+92,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)),7);
        tracep->chgCData(oldp+93,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+94,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+95,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+96,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw));
        tracep->chgBit(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs));
        tracep->chgCData(oldp+98,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
        tracep->chgBit(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
        tracep->chgCData(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
        tracep->chgCData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
        tracep->chgCData(oldp+102,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                     ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                         ? 0x27U : 0x37U)
                                     : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                         ? 0U : 0x20U))),6);
        tracep->chgQData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
        tracep->chgQData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
        tracep->chgQData(oldp+107,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
        tracep->chgQData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
        tracep->chgQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
        tracep->chgQData(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
        tracep->chgQData(oldp+115,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
        tracep->chgQData(oldp+117,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
        tracep->chgQData(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
        tracep->chgQData(oldp+121,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
        tracep->chgQData(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
        tracep->chgQData(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
        tracep->chgQData(oldp+127,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
        tracep->chgQData(oldp+129,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
        tracep->chgQData(oldp+131,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
        tracep->chgQData(oldp+133,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
        tracep->chgQData(oldp+135,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
        tracep->chgQData(oldp+137,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
        tracep->chgQData(oldp+139,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
        tracep->chgQData(oldp+141,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
        tracep->chgQData(oldp+143,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
        tracep->chgQData(oldp+145,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
        tracep->chgQData(oldp+147,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
        tracep->chgQData(oldp+149,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
        tracep->chgQData(oldp+151,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
        tracep->chgQData(oldp+153,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
        tracep->chgQData(oldp+155,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
        tracep->chgQData(oldp+157,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
        tracep->chgQData(oldp+159,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
        tracep->chgQData(oldp+161,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
        tracep->chgQData(oldp+163,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
        tracep->chgQData(oldp+165,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
        tracep->chgQData(oldp+167,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                             >> 7U)))
                                     ? 0ULL : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                                ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                                    ? 
                                                   ((0x300U 
                                                     == 
                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                        : 0ULL))))
                                                    : 0ULL)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                    : 
                                                   (((((- (QData)((IData)(
                                                                          ((0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                                       & (4ULL 
                                                          + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
                                                      | ((- (QData)((IData)(
                                                                            (0x37U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm)) 
                                                     | ((- (QData)((IData)(
                                                                           (0x17U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (~ 
                                                                              ((((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) 
                                                                               | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))))))) 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))))),64);
        tracep->chgQData(oldp+169,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
        tracep->chgQData(oldp+171,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_IF_Branch)
                                     ? (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                         ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                         : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                             ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                             : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))
                                     : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc))),64);
        tracep->chgBit(oldp+173,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0xeU)))));
        tracep->chgQData(oldp+174,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
        tracep->chgQData(oldp+176,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
        tracep->chgCData(oldp+178,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                     ? 0xffU : (0xffU 
                                                & ((0x2000U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 0xffU
                                                     : 
                                                    ((IData)(0xfU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 
                                                    ((IData)(3U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                                                     : 
                                                    ((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))))))),8);
        tracep->chgBit(oldp+179,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))));
        tracep->chgBit(oldp+180,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
        tracep->chgBit(oldp+181,(((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    }
    tracep->chgBit(oldp+182,(vlSelf->i_TOP_clk));
    tracep->chgBit(oldp+183,(vlSelf->i_TOP_rst_n));
    tracep->chgBit(oldp+184,(vlSelf->o_TOP_unkown_code));
    tracep->chgIData(oldp+185,(vlSelf->o_TOP_inst),32);
    tracep->chgQData(oldp+186,(vlSelf->o_TOP_pc),64);
    tracep->chgBit(oldp+188,(vlSelf->o_TOP_Branch));
    tracep->chgBit(oldp+189,(vlSelf->o_TOP_mret));
    tracep->chgBit(oldp+190,(vlSelf->o_TOP_ecall));
    tracep->chgQData(oldp+191,(vlSelf->o_TOP_csr_dnpc),64);
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
