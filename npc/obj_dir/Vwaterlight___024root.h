// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwaterlight.h for the primary calling header

#ifndef VERILATED_VWATERLIGHT___024ROOT_H_
#define VERILATED_VWATERLIGHT___024ROOT_H_  // guard

#include "verilated.h"

class Vwaterlight__Syms;
VL_MODULE(Vwaterlight___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT16(led,15,0);
    IData/*31:0*/ light__DOT__count;

    // INTERNAL VARIABLES
    Vwaterlight__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vwaterlight___024root(const char* name);
    ~Vwaterlight___024root();
    VL_UNCOPYABLE(Vwaterlight___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vwaterlight__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
