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
        tracep->chgCData(oldp+0,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr),3);
        tracep->chgQData(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
        tracep->chgQData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__src1),64);
        tracep->chgQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
        tracep->chgQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__sum),64);
        tracep->chgBit(oldp+9,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                      >> 2U))));
        tracep->chgCData(oldp+10,((3U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))),2);
        tracep->chgQData(oldp+11,((vlSelf->ysyx_22040386_TOP__DOT__src2 
                                   ^ (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                            >> 2U))))))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+13,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
        tracep->chgQData(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
        tracep->chgQData(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
        tracep->chgQData(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
        tracep->chgQData(oldp+21,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
        tracep->chgQData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
        tracep->chgQData(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
        tracep->chgQData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
        tracep->chgQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
        tracep->chgQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
        tracep->chgQData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
        tracep->chgQData(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
        tracep->chgQData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
        tracep->chgQData(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
        tracep->chgQData(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
        tracep->chgQData(oldp+43,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
        tracep->chgQData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
        tracep->chgQData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
        tracep->chgQData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
        tracep->chgQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
        tracep->chgQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
        tracep->chgQData(oldp+55,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
        tracep->chgQData(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
        tracep->chgQData(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
        tracep->chgQData(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
        tracep->chgQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
        tracep->chgQData(oldp+65,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
        tracep->chgQData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
        tracep->chgQData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
        tracep->chgQData(oldp+71,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
        tracep->chgQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
        tracep->chgQData(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
        tracep->chgQData(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    }
    tracep->chgBit(oldp+79,(vlSelf->clk));
    tracep->chgBit(oldp+80,(vlSelf->rst_n));
    tracep->chgIData(oldp+81,(vlSelf->I),32);
    tracep->chgQData(oldp+82,(vlSelf->pc),64);
    tracep->chgBit(oldp+84,(((0x6fU == (0x7fU & vlSelf->I)) 
                             | (0x17U == (0x7fU & vlSelf->I)))));
    tracep->chgBit(oldp+85,((1U & ((0x40U & vlSelf->I)
                                    ? (IData)((0x27U 
                                               == (0x37U 
                                                   & vlSelf->I)))
                                    : ((0x20U & vlSelf->I)
                                        ? (IData)((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->I)))
                                        : (IData)((0x13U 
                                                   == 
                                                   (0x1bU 
                                                    & vlSelf->I))))))));
    tracep->chgBit(oldp+86,(((0x6fU == (0x7fU & vlSelf->I)) 
                             | (0x67U == (0x7fU & vlSelf->I)))));
    tracep->chgCData(oldp+87,((0x1fU & (vlSelf->I >> 0xfU))),5);
    tracep->chgCData(oldp+88,((0x1fU & (vlSelf->I >> 0x14U))),5);
    tracep->chgCData(oldp+89,((0x1fU & (vlSelf->I >> 7U))),5);
    tracep->chgQData(oldp+90,((4ULL + vlSelf->pc)),64);
    tracep->chgQData(oldp+92,(((0U == (0x1fU & (vlSelf->I 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                               [(0x1fU & (vlSelf->I 
                                          >> 0xfU))])),64);
    tracep->chgQData(oldp+94,(((0U == (0x1fU & (vlSelf->I 
                                                >> 0x14U)))
                                ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                               [(0x1fU & (vlSelf->I 
                                          >> 0x14U))])),64);
    tracep->chgQData(oldp+96,(((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                    ? (4ULL + vlSelf->pc)
                                    : vlSelf->ysyx_22040386_TOP__DOT__src2)
                                : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__src1
                                    : vlSelf->ysyx_22040386_TOP__DOT__sum))),64);
    tracep->chgQData(oldp+98,((((0x6fU == (0x7fU & vlSelf->I)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->I)))
                                ? vlSelf->ysyx_22040386_TOP__DOT__sum
                                : (4ULL + vlSelf->pc))),64);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
