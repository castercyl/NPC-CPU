// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwaterlight.h for the primary calling header

#include "verilated.h"

#include "Vwaterlight___024root.h"

VL_INLINE_OPT void Vwaterlight___024root___sequent__TOP__0(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__led;
    IData/*31:0*/ __Vdly__waterlight__DOT__count;
    // Body
    __Vdly__waterlight__DOT__count = vlSelf->waterlight__DOT__count;
    __Vdly__led = vlSelf->led;
    if (vlSelf->reset) {
        __Vdly__led = 1U;
        __Vdly__waterlight__DOT__count = 0U;
    } else {
        if ((0U == vlSelf->waterlight__DOT__count)) {
            __Vdly__led = ((0xfffeU & ((IData)(vlSelf->led) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->led) 
                                                     >> 0xfU)));
        }
        __Vdly__waterlight__DOT__count = ((0x1388U 
                                           <= vlSelf->waterlight__DOT__count)
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelf->waterlight__DOT__count));
    }
    vlSelf->led = __Vdly__led;
    vlSelf->waterlight__DOT__count = __Vdly__waterlight__DOT__count;
}

void Vwaterlight___024root___eval(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vwaterlight___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vwaterlight___024root___eval_debug_assertions(Vwaterlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwaterlight___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
