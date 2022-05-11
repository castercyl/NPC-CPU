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
        tracep->chgBit(oldp+0,(vlSelf->ysyx_22040386_TOP__DOT__Jalr));
        tracep->chgCData(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
        tracep->chgQData(oldp+2,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                   ? vlSelf->ysyx_22040386_TOP__DOT__result
                                   : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)),64);
        tracep->chgQData(oldp+4,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
        tracep->chgQData(oldp+6,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA),64);
        tracep->chgQData(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
        tracep->chgQData(oldp+10,(vlSelf->ysyx_22040386_TOP__DOT__result),64);
        tracep->chgQData(oldp+12,(vlSelf->ysyx_22040386_TOP__DOT__pc_imm),64);
        tracep->chgQData(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
        tracep->chgBit(oldp+16,((1U & (~ (IData)((0U 
                                                  != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
        tracep->chgBit(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
        tracep->chgBit(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
        tracep->chgBit(oldp+19,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                 ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
        tracep->chgBit(oldp+20,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                 ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
        tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+22,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                       >> 5U))));
        tracep->chgBit(oldp+23,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                       >> 4U))));
        tracep->chgBit(oldp+24,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                        ? ((IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                    >> 0x3fU)) 
                                           ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                        : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                              >> 5U))))));
        tracep->chgCData(oldp+25,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
        tracep->chgIData(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
        tracep->chgIData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
        tracep->chgQData(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
        tracep->chgQData(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
        tracep->chgQData(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
        tracep->chgQData(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
        tracep->chgQData(oldp+36,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2)),64);
        tracep->chgQData(oldp+38,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2)),64);
        tracep->chgQData(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
        tracep->chgBit(oldp+42,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result))));
        tracep->chgBit(oldp+43,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
        tracep->chgCData(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ALUop),2);
        tracep->chgBit(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_RegWrite));
        tracep->chgBit(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc));
        tracep->chgBit(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
        tracep->chgCData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
        tracep->chgCData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
        tracep->chgQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
        tracep->chgQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
        tracep->chgQData(oldp+58,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
        tracep->chgQData(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
        tracep->chgQData(oldp+62,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
        tracep->chgQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
        tracep->chgQData(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
        tracep->chgQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
        tracep->chgQData(oldp+74,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
        tracep->chgQData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
        tracep->chgQData(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
        tracep->chgQData(oldp+80,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
        tracep->chgQData(oldp+82,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
        tracep->chgQData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
        tracep->chgQData(oldp+86,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
        tracep->chgQData(oldp+88,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
        tracep->chgQData(oldp+90,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
        tracep->chgQData(oldp+92,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
        tracep->chgQData(oldp+94,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
        tracep->chgQData(oldp+96,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
        tracep->chgQData(oldp+98,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
        tracep->chgQData(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
        tracep->chgQData(oldp+102,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
        tracep->chgQData(oldp+104,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
        tracep->chgQData(oldp+106,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
        tracep->chgQData(oldp+108,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
        tracep->chgQData(oldp+110,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
        tracep->chgQData(oldp+112,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
        tracep->chgQData(oldp+114,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__inst_rdata),64);
        tracep->chgQData(oldp+116,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
        tracep->chgQData(oldp+118,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    }
    tracep->chgBit(oldp+120,(vlSelf->clk));
    tracep->chgBit(oldp+121,(vlSelf->rst_n));
    tracep->chgBit(oldp+122,(vlSelf->unkown_code));
    tracep->chgIData(oldp+123,(vlSelf->Inst),32);
    tracep->chgQData(oldp+124,(vlSelf->pc),64);
    tracep->chgBit(oldp+126,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                              | ((0x6fU == (0x7fU & vlSelf->Inst)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))));
    tracep->chgBit(oldp+127,((0x23U == (0x7fU & vlSelf->Inst))));
    tracep->chgBit(oldp+128,((3U == (0x7fU & vlSelf->Inst))));
    tracep->chgBit(oldp+129,((((0x17U == (0x7fU & vlSelf->Inst)) 
                               | (0x6fU == (0x7fU & vlSelf->Inst))) 
                              | (IData)((0x67U == (0x707fU 
                                                   & vlSelf->Inst))))));
    tracep->chgBit(oldp+130,((0x17U == (0x7fU & vlSelf->Inst))));
    tracep->chgBit(oldp+131,((0x6fU == (0x7fU & vlSelf->Inst))));
    tracep->chgBit(oldp+132,((0x37U == (0x7fU & vlSelf->Inst))));
    tracep->chgBit(oldp+133,((1U & (vlSelf->Inst >> 3U))));
    tracep->chgCData(oldp+134,(((0x63U == (0x7fU & vlSelf->Inst))
                                 ? (7U & (vlSelf->Inst 
                                          >> 0xcU))
                                 : 2U)),3);
    tracep->chgCData(oldp+135,((7U & (vlSelf->Inst 
                                      >> 0xcU))),3);
    tracep->chgQData(oldp+136,((4ULL + vlSelf->pc)),64);
    tracep->chgQData(oldp+138,(((0x37U == (0x7fU & vlSelf->Inst))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm
                                 : ((3U == (0x7fU & vlSelf->Inst))
                                     ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                     : ((((0x17U == 
                                           (0x7fU & vlSelf->Inst)) 
                                          | (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->Inst))) 
                                         | (IData)(
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Inst))))
                                         ? ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->Inst))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                             : (4ULL 
                                                + vlSelf->pc))
                                         : vlSelf->ysyx_22040386_TOP__DOT__result)))),64);
    tracep->chgQData(oldp+140,(((0U == (0x1fU & (vlSelf->Inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->Inst 
                                           >> 0x14U))])),64);
    tracep->chgQData(oldp+142,(((8U & vlSelf->Inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                 : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->chgQData(oldp+144,(((8U & vlSelf->Inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                 : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2))),64);
    tracep->chgQData(oldp+146,(((8U & vlSelf->Inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                 : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2))),64);
    tracep->chgQData(oldp+148,(((8U & vlSelf->Inst)
                                 ? (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA 
                                                                  >> 0x1fU))))))
                                 : (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA 
                                                                  >> 0x3fU)))))))),64);
    tracep->chgBit(oldp+150,(((0x6fU == (0x7fU & vlSelf->Inst)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->chgCData(oldp+151,((vlSelf->Inst >> 0x19U)),7);
    tracep->chgCData(oldp+152,((0x7fU & vlSelf->Inst)),7);
    tracep->chgCData(oldp+153,(((0x4000U & vlSelf->Inst)
                                 ? ((0x2000U & vlSelf->Inst)
                                     ? 0x27U : 0x37U)
                                 : ((0x2000U & vlSelf->Inst)
                                     ? 0U : 0x20U))),6);
    tracep->chgCData(oldp+154,((0x1fU & (vlSelf->Inst 
                                         >> 7U))),5);
    tracep->chgCData(oldp+155,((0x1fU & (vlSelf->Inst 
                                         >> 0xfU))),5);
    tracep->chgCData(oldp+156,((0x1fU & (vlSelf->Inst 
                                         >> 0x14U))),5);
    tracep->chgQData(oldp+157,(((0U == (0x1fU & (vlSelf->Inst 
                                                 >> 7U)))
                                 ? 0ULL : ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->Inst))
                                            ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Inst))
                                                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                : (
                                                   (((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Inst)) 
                                                     | (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Inst))) 
                                                    | (IData)(
                                                              (0x67U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Inst))))
                                                    ? 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Inst))
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))
                                                    : vlSelf->ysyx_22040386_TOP__DOT__result))))),64);
    tracep->chgQData(oldp+159,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->Inst)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))
                                 ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__result
                                     : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)
                                 : (4ULL + vlSelf->pc))),64);
    tracep->chgBit(oldp+161,((1U & (~ (vlSelf->Inst 
                                       >> 0xeU)))));
    tracep->chgCData(oldp+162,(((0x4000U & vlSelf->Inst)
                                 ? 0xffU : (0xffU & 
                                            ((0x2000U 
                                              & vlSelf->Inst)
                                              ? ((0x1000U 
                                                  & vlSelf->Inst)
                                                  ? 0xffU
                                                  : 
                                                 ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result))))
                                              : ((0x1000U 
                                                  & vlSelf->Inst)
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result)))
                                                  : 
                                                 ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result)))))))),8);
    tracep->chgQData(oldp+163,(((0x17U == (0x7fU & vlSelf->Inst))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                 : (4ULL + vlSelf->pc))),64);
    tracep->chgQData(oldp+165,(((((0x17U == (0x7fU 
                                             & vlSelf->Inst)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->Inst))) 
                                 | (IData)((0x67U == 
                                            (0x707fU 
                                             & vlSelf->Inst))))
                                 ? ((0x17U == (0x7fU 
                                               & vlSelf->Inst))
                                     ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                     : (4ULL + vlSelf->pc))
                                 : vlSelf->ysyx_22040386_TOP__DOT__result)),64);
    tracep->chgQData(oldp+167,(((3U == (0x7fU & vlSelf->Inst))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                 : ((((0x17U == (0x7fU 
                                                 & vlSelf->Inst)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->Inst))) 
                                     | (IData)((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Inst))))
                                     ? ((0x17U == (0x7fU 
                                                   & vlSelf->Inst))
                                         ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                         : (4ULL + vlSelf->pc))
                                     : vlSelf->ysyx_22040386_TOP__DOT__result))),64);
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
