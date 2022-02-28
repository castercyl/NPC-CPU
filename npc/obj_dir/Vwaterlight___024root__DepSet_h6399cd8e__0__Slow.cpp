// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwaterlight.h for the primary calling header

#include "verilated.h"

#include "Vwaterlight___024root.h"

VL_ATTR_COLD void Vwaterlight___024root___eval_initial(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vwaterlight___024root___eval_settle(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vwaterlight___024root___final(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___final\n"); );
}

VL_ATTR_COLD void Vwaterlight___024root___ctor_var_reset(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->light__DOT__count = VL_RAND_RESET_I(32);
}
