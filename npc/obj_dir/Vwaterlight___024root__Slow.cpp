// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwaterlight.h for the primary calling header

#include "verilated.h"

#include "Vwaterlight__Syms.h"
#include "Vwaterlight___024root.h"

void Vwaterlight___024root___ctor_var_reset(Vwaterlight___024root* vlSelf);

Vwaterlight___024root::Vwaterlight___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vwaterlight___024root___ctor_var_reset(this);
}

void Vwaterlight___024root::__Vconfigure(Vwaterlight__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vwaterlight___024root::~Vwaterlight___024root() {
}
