// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwaterlight__Syms.h"


VL_ATTR_COLD void Vwaterlight___024root__trace_init_sub__TOP__0(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBus(c+3,"led", false,-1, 15,0);
    tracep->pushNamePrefix("waterlight ");
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBus(c+3,"led", false,-1, 15,0);
    tracep->declBus(c+4,"count", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vwaterlight___024root__trace_init_top(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_init_top\n"); );
    // Body
    Vwaterlight___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vwaterlight___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vwaterlight___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vwaterlight___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vwaterlight___024root__trace_register(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vwaterlight___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vwaterlight___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vwaterlight___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vwaterlight___024root__trace_full_sub_0(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vwaterlight___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_full_top_0\n"); );
    // Init
    Vwaterlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwaterlight___024root*>(voidSelf);
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwaterlight___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vwaterlight___024root__trace_full_sub_0(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->rst));
    tracep->fullBit(oldp+2,(vlSelf->clk));
    tracep->fullSData(oldp+3,(vlSelf->led),16);
    tracep->fullIData(oldp+4,(vlSelf->waterlight__DOT__count),32);
}
