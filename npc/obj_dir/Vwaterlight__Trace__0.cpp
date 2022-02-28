// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwaterlight__Syms.h"


void Vwaterlight___024root__trace_chg_sub_0(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep);

void Vwaterlight___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_chg_top_0\n"); );
    // Init
    Vwaterlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwaterlight___024root*>(voidSelf);
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vwaterlight___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vwaterlight___024root__trace_chg_sub_0(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->rst));
    tracep->chgBit(oldp+1,(vlSelf->clk));
    tracep->chgSData(oldp+2,(vlSelf->led),16);
    tracep->chgIData(oldp+3,(vlSelf->waterlight__DOT__count),32);
}

void Vwaterlight___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root__trace_cleanup\n"); );
    // Init
    Vwaterlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwaterlight___024root*>(voidSelf);
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
