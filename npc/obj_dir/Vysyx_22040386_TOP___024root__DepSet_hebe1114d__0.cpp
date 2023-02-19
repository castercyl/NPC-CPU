// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP__Syms.h"
#include "Vysyx_22040386_TOP___024root.h"

extern "C" void unkown_inst();

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__unkown_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__unkown_inst_TOP\n"); );
    // Body
    unkown_inst();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__WBU_inst__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__WBU_inst__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void timer_intr();

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__CTRL_inst__DOT__timer_intr_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__CTRL_inst__DOT__timer_intr_TOP\n"); );
    // Body
    timer_intr();
}

extern "C" void generate_skip_flag();

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_flag_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_flag_TOP\n"); );
    // Body
    generate_skip_flag();
}

extern "C" void generate_skip();

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__generate_skip_TOP\n"); );
    // Body
    generate_skip();
}

extern "C" void iram_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__iram_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    iram_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void dram_read(long long pc, long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read_TOP(QData/*63:0*/ pc, QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_read_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    dram_read(pc__Vcvt, raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void dram_write(long long pc, long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_write_TOP(QData/*63:0*/ pc, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__idram_inst__DOT__dram_write_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    dram_write(pc__Vcvt, waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
