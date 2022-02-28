// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwaterlight.h"
#include "Vwaterlight__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vwaterlight::Vwaterlight(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vwaterlight__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
}

Vwaterlight::Vwaterlight(const char* _vcname__)
    : Vwaterlight(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vwaterlight::~Vwaterlight() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vwaterlight___024root___eval_initial(Vwaterlight___024root* vlSelf);
void Vwaterlight___024root___eval_settle(Vwaterlight___024root* vlSelf);
void Vwaterlight___024root___eval(Vwaterlight___024root* vlSelf);
#ifdef VL_DEBUG
void Vwaterlight___024root___eval_debug_assertions(Vwaterlight___024root* vlSelf);
#endif  // VL_DEBUG
void Vwaterlight___024root___final(Vwaterlight___024root* vlSelf);

static void _eval_initial_loop(Vwaterlight__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vwaterlight___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vwaterlight___024root___eval_settle(&(vlSymsp->TOP));
        Vwaterlight___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vwaterlight::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwaterlight::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwaterlight___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vwaterlight___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vwaterlight::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vwaterlight::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vwaterlight::final() {
    Vwaterlight___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vwaterlight___024root__trace_init_top(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwaterlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwaterlight___024root*>(voidSelf);
    Vwaterlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vwaterlight___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vwaterlight___024root__trace_register(Vwaterlight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vwaterlight::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vwaterlight___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
