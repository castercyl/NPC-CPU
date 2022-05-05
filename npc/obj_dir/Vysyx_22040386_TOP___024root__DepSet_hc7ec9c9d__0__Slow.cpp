// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP___024root.h"

void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ebreak_TOP();

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___settle__TOP__0(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___settle__TOP__0\n"); );
    // Body
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf);
    vlSelf->pc = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc;
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040386_TOP__DOT__i_rdata = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__pmem_read__0__rdata;
    vlSelf->I = ((1U & (IData)((vlSelf->pc >> 2U)))
                  ? (IData)((vlSelf->ysyx_22040386_TOP__DOT__i_rdata 
                             >> 0x20U)) : (IData)(vlSelf->ysyx_22040386_TOP__DOT__i_rdata));
    if ((0x100073U == vlSelf->I)) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ebreak_TOP();
    }
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr 
        = ((0x40U & vlSelf->I) ? ((0x20U & vlSelf->I)
                                   ? ((0x10U & vlSelf->I)
                                       ? 0U : ((4U 
                                                & vlSelf->I)
                                                ? (
                                                   (2U 
                                                    & vlSelf->I)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->I)
                                                     ? 3U
                                                     : 0U)
                                                    : 0U)
                                                : 0U))
                                   : 0U) : ((0x20U 
                                             & vlSelf->I)
                                             ? ((0x10U 
                                                 & vlSelf->I)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->I)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->I)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->I)
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                                 : 0U)
                                             : 0U));
    vlSelf->ysyx_22040386_TOP__DOT__src1 = (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->I)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->I)))
                                             ? vlSelf->pc
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->I 
                                                     >> 0xfU)))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->I 
                                                     >> 0xfU))]));
    if ((0x40U & vlSelf->I)) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm 
            = ((0x20U & vlSelf->I) ? ((0x10U & vlSelf->I)
                                       ? 0ULL : ((8U 
                                                  & vlSelf->I)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->I)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->I)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->I 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->I 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->I) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->I 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->I 
                                                                                >> 0x14U))))))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->I)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->I)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->I 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->I 
                                                                        >> 0x14U))))
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->I)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->I)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->I 
                                                                          >> 0x1fU)))) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(
                                                                       ((0x1000U 
                                                                         & (vlSelf->I 
                                                                            >> 0x13U)) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->I 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->I 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->I 
                                                                                >> 7U))))))))
                                                     : 0ULL)
                                                    : 0ULL))))
                : 0ULL);
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc 
            = (1U & (IData)((0x27U == (0x37U & vlSelf->I))));
    } else if ((0x20U & vlSelf->I)) {
        if ((0x10U & vlSelf->I)) {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm 
                = ((8U & vlSelf->I) ? 0ULL : ((4U & vlSelf->I)
                                               ? ((2U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->I)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->I 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->I))))
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL));
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc 
                = (1U & (IData)((7U == (0xfU & vlSelf->I))));
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm 
                = ((8U & vlSelf->I) ? 0ULL : ((4U & vlSelf->I)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->I)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->I 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->I 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->I 
                                                                             >> 7U))))))
                                                    : 0ULL)
                                                   : 0ULL)));
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc 
                = (1U & (IData)((3U == (0xfU & vlSelf->I))));
        }
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm 
            = ((0x10U & vlSelf->I) ? ((8U & vlSelf->I)
                                       ? 0ULL : ((4U 
                                                  & vlSelf->I)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->I)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->I 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->I))))
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->I)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->I 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->I 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                   : 0ULL)))
                : ((8U & vlSelf->I) ? 0ULL : ((4U & vlSelf->I)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->I)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->I)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->I 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->I 
                                                                       >> 0x14U))))
                                                    : 0ULL)
                                                   : 0ULL))));
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc 
            = (1U & (IData)((0x13U == (0x1bU & vlSelf->I))));
    }
    vlSelf->ysyx_22040386_TOP__DOT__src2 = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc)
                                             ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->I 
                                                     >> 0x14U)))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->I 
                                                     >> 0x14U))]));
    vlSelf->ysyx_22040386_TOP__DOT__sum = ((vlSelf->ysyx_22040386_TOP__DOT__src1 
                                            + (vlSelf->ysyx_22040386_TOP__DOT__src2 
                                               ^ (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                                        >> 2U))))))) 
                                           + (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                                 >> 2U)))));
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___eval_initial(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___eval_settle(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_settle\n"); );
    // Body
    Vysyx_22040386_TOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___final(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___ctor_var_reset(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->I = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__i_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_ysyx_22040386_TOP__DOT__pmem_read__0__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
