// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040386_TOP.h"
#include "Vysyx_22040386_TOP__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040386_TOP::Vysyx_22040386_TOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22040386_TOP__Syms(_vcontextp__, _vcname__, this)}
    , i_TOP_clk{vlSymsp->TOP.i_TOP_clk}
    , i_TOP_rst_n{vlSymsp->TOP.i_TOP_rst_n}
    , o_TOP_unkown_code{vlSymsp->TOP.o_TOP_unkown_code}
    , o_TOP_fw_EX_src1fw{vlSymsp->TOP.o_TOP_fw_EX_src1fw}
    , o_TOP_fw_EX_src2fw{vlSymsp->TOP.o_TOP_fw_EX_src2fw}
    , o_TOP_ID_EX_reg_rd_addr1{vlSymsp->TOP.o_TOP_ID_EX_reg_rd_addr1}
    , o_TOP_ID_EX_reg_rd_addr2{vlSymsp->TOP.o_TOP_ID_EX_reg_rd_addr2}
    , o_TOP_EX_MEM_reg_wr_addr{vlSymsp->TOP.o_TOP_EX_MEM_reg_wr_addr}
    , o_TOP_EX_MEM_RegWrite{vlSymsp->TOP.o_TOP_EX_MEM_RegWrite}
    , o_TOP_Branch{vlSymsp->TOP.o_TOP_Branch}
    , o_TOP_jump_flag{vlSymsp->TOP.o_TOP_jump_flag}
    , o_TOP_inst{vlSymsp->TOP.o_TOP_inst}
    , o_TOP_pc{vlSymsp->TOP.o_TOP_pc}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22040386_TOP::Vysyx_22040386_TOP(const char* _vcname__)
    : Vysyx_22040386_TOP(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040386_TOP::~Vysyx_22040386_TOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22040386_TOP___024root___eval_initial(Vysyx_22040386_TOP___024root* vlSelf);
void Vysyx_22040386_TOP___024root___eval_settle(Vysyx_22040386_TOP___024root* vlSelf);
void Vysyx_22040386_TOP___024root___eval(Vysyx_22040386_TOP___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22040386_TOP___024root___eval_debug_assertions(Vysyx_22040386_TOP___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040386_TOP___024root___final(Vysyx_22040386_TOP___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22040386_TOP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22040386_TOP___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22040386_TOP___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22040386_TOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vysyx_22040386_TOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040386_TOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040386_TOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22040386_TOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22040386_TOP::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22040386_TOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vysyx_22040386_TOP::final() {
    Vysyx_22040386_TOP___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vysyx_22040386_TOP___024root__trace_init_top(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_22040386_TOP___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_register(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040386_TOP::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_22040386_TOP___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
