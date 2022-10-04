// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP___024root.h"

void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ebreak_TOP();
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h3c527890_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_hb61d5e62_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h4c45401e_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h8bf8ccdc_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h5399d6b5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0;

VL_INLINE_OPT void Vysyx_22040386_TOP___024root___sequent__TOP__0(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    SData/*9:0*/ __Vtableidx4;
    SData/*9:0*/ __Vtableidx5;
    CData/*4:0*/ __Vtableidx6;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    QData/*63:0*/ __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus;
    QData/*63:0*/ __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc;
    QData/*63:0*/ __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
    QData/*63:0*/ __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
    // Body
    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause 
        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus;
    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc 
        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc;
    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
    __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 = 0U;
    if ((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_write_TOP(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x14U)))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x14U))]), 
                                                                                ((0x4000U 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                                                 ? 0xffU
                                                                                 : 
                                                                                (0xffU 
                                                                                & ((0x2000U 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                                                 ? 
                                                                                ((0x1000U 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((IData)(0xfU) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))))
                                                                                 : 
                                                                                ((0x1000U 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                                                 ? 
                                                                                ((IData)(3U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))))))));
    }
    if (vlSelf->i_TOP_rst_n) {
        if (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wen) 
             & (1U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state)))) {
            if ((0x300U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                            >> 0x14U))) {
                if ((0x341U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U))) {
                    if ((0x342U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x14U))) {
                        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause 
                            = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1;
                    } else if ((0x305U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x14U))) {
                        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause 
                            = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
                    }
                }
            }
            if ((0x300U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                            >> 0x14U))) {
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                    = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1;
            } else if ((0x341U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                   >> 0x14U))) {
                if ((0x342U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U))) {
                    if ((0x305U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x14U))) {
                        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                            = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus;
                    }
                }
            }
            if ((0x300U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                            >> 0x14U))) {
                if ((0x341U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U))) {
                    if ((0x342U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x14U))) {
                        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc 
                            = ((0x305U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x14U))
                                ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1
                                : vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc);
                    }
                }
                if ((0x341U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U))) {
                    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
                        = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1;
                } else if ((0x342U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                       >> 0x14U))) {
                    if ((0x305U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x14U))) {
                        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
                            = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause = 0xbULL;
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                    = ((0xffffffffffffff00ULL & vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus) 
                       | (QData)((IData)(((0x80U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                                                     >> 3U)) 
                                            << 7U)) 
                                          | ((0x70U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                                                          >> 4U)) 
                                                 << 4U)) 
                                             | (7U 
                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus)))))));
            } else {
                if ((3U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause 
                        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
                }
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                    = ((3U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))
                        ? ((0xfffffffffffffff0ULL & vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus) 
                           | (QData)((IData)(((8U & 
                                               ((IData)(
                                                        (vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                                                         >> 7U)) 
                                                << 3U)) 
                                              | (7U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus))))))
                        : vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus);
            }
            if ((2U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                if ((3U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                    __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc 
                        = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc;
                }
            }
            if ((2U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
                    = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc;
            } else if ((3U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))) {
                __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
                    = vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
            }
        }
    } else {
        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause = 0ULL;
        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus = 0xa00001800ULL;
        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc = 0ULL;
        __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc = 0ULL;
    }
    if (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite) 
         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren))) {
        __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 
            = ((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 7U))) ? 0ULL : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                                     ? 
                                                    ((0x300U 
                                                      == 
                                                      (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                                      : 
                                                     ((0x341U 
                                                       == 
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                                       : 
                                                      ((0x342U 
                                                        == 
                                                        (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                        : 
                                                       ((0x305U 
                                                         == 
                                                         (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                          >> 0x14U))
                                                         ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                         : 0ULL))))
                                                     : 0ULL)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                     : 
                                                    (((((- (QData)((IData)(
                                                                           ((0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                                        & (4ULL 
                                                           + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
                                                       | ((- (QData)((IData)(
                                                                             (0x37U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                          & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm)) 
                                                      | ((- (QData)((IData)(
                                                                            (0x17U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))) 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               ((((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))))))) 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))));
        __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                        >> 7U));
    }
    vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
        = __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus;
    vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause 
        = __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause;
    vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc 
        = __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc;
    vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc 
        = __Vdly__ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc;
    if (__Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[__Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    }
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc = ((IData)(vlSelf->i_TOP_rst_n)
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc
                                                 : 0x80000000ULL);
    vlSelf->o_TOP_pc = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc;
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
        = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__0__rdata;
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst = ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc 
                                                              >> 2U)))
                                                   ? (IData)(
                                                             (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata));
    if ((0x100073U == vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ebreak_TOP();
    }
    vlSelf->o_TOP_inst = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst;
    __Vtableidx2 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h3c527890_0
        [__Vtableidx2];
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
    if ((0x40U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        if ((0x20U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
            if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0x2000U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 7U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((2U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((1U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 7U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            } else if ((0x604000U == 
                                        (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 7U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (IData)((7U != (7U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
            } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (1U & (IData)(((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                     | (0x2000U == 
                                        (0x6000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))));
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
        }
    } else if ((0x20U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
            if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                                if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                                } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                                if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                               >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                        } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                                = (0U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0x19U));
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                              >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (IData)((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
            } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                                if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                            if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0x19U))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                       >> 0x19U))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                = (IData)((3U != (0x400fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
        }
    } else if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
            if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((0U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                      >> 0xcU)))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((1U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                             >> 0xcU)))) {
                        if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else if ((5U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                             >> 0xcU)))) {
                        if ((0x10U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                       >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            }
        } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                = (IData)((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
        } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
            if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                        if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                              >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    }
                } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
                    if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x1aU))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
        }
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
            = (1U & (IData)(((3U != (0xfU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                             | (0x7000U == (0x7000U 
                                            & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)))));
    }
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret 
        = (IData)((0x30200073U == vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall 
        = (IData)((0x73U == (0xffffff7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
        = ((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                            >> 0xfU))) ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
           [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                      >> 0xfU))]);
    __Vtableidx3 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc = 
        Vysyx_22040386_TOP__ConstPool__TABLE_hb61d5e62_0
        [__Vtableidx3];
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm = ((0x40U 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x100000U 
                                                                            & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                               >> 0xbU)) 
                                                                           | ((0xff000U 
                                                                               & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x14U))))))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          ((0x1000U 
                                                                            & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                               >> 0x13U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                << 4U)) 
                                                                              | ((0x7e0U 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 7U))))))))
                                                        : 0ULL)
                                                       : 0ULL))))
                                                   : 0ULL)
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 7U))))))
                                                        : 0ULL)
                                                       : 0ULL))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                           >> 0x14U))))
                                                        : 0ULL)
                                                       : 0ULL))))));
    __Vtableidx1 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h4c45401e_0
        [__Vtableidx1];
    __Vtableidx4 = ((0x3f8U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                               >> 0x16U)) | (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0xcU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h8bf8ccdc_0
        [__Vtableidx4];
    __Vtableidx5 = ((0x3f8U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                               >> 0x16U)) | (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0xcU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h5399d6b5_0
        [__Vtableidx5];
    vlSelf->o_TOP_unkown_code = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code;
    vlSelf->o_TOP_mret = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret;
    vlSelf->o_TOP_ecall = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall;
    vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wen 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw) 
           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall));
    vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren 
        = (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs) 
            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret)) 
           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall));
    vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state 
        = (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs) 
            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw))
            ? 1U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall)
                     ? 2U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret)
                              ? 3U : 0U)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift 
        = ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
            ? (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1))
            : vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm 
        = (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc 
           + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc)
            ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm
            : ((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U))) ? 0ULL : 
               vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
               [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                          >> 0x14U))]));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr 
        = ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
            ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                ? ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                    ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                        ? 0x27U : 0x37U) : ((0x2000U 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                             ? 0U : 0x20U))
                : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr))
            : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr)
                : 0U));
    vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc 
        = ((2U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))
            ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
            : ((3U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state))
                ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                : 0ULL));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
        = (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
           * vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
        = VL_DIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1), (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1), (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
        = (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
           ^ (- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                       >> 5U))))));
    vlSelf->o_TOP_csr_dnpc = vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc;
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
        = ((0x8000000000000000ULL & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum) 
           | (0x7fffffffffffffffULL & ((vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                        + vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2) 
                                       + (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                                             >> 5U)))))));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0 
        = (1U & (IData)(((((0x7fffffffffffffffULL & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1) 
                           + (0x7fffffffffffffffULL 
                              & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2)) 
                          + (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                                   >> 5U))))) 
                         >> 0x3fU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn 
        = (1U & ((((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                  >> 0x3fU))) + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
                                                            >> 0x3fU)))) 
                  + (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)) 
                 >> 1U));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                               >> 0x3fU)) 
                                      + (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
                                                 >> 0x3fU))) 
                                     + (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))))) 
              << 0x3fU));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result 
        = ((8U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
            ? ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                ? ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                        : ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                            : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))))
                : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                            ? ((5U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                             >> 0xcU)))
                                ? (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32))
                                : (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32))))
                            : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))
                        : ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul))))
            : ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                ? ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? (QData)((IData)((1U & ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                                  ? 
                                                 ((IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                           >> 0x3fU)) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                                   ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                                   >> 5U))))))
                        : (VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                         (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                          & (0x1fULL 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                     >> 3U))))) 
                                                << 5U)))) 
                           | VL_SHIFTL_QQQ(64,64,64, 
                                           ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                             ? (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                              >> 0x1fU))))))
                                             : (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                              >> 0x3fU))))))), 
                                           (1ULL + 
                                            ((0x1fULL 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                      >> 3U))))) 
                                                 << 5U)) 
                                             + (~ (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                                   & (0x1fULL 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                              >> 3U))))) 
                                                         << 5U)))))))))
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                        (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                         & (0x1fULL 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                    >> 3U))))) 
                                               << 5U))))
                        : VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                        (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                         & (0x1fULL 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                    >> 3U))))) 
                                               << 5U))))))
                : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                           ^ vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)
                        : (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                           | vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                        ? (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                           & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)
                        : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))));
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult 
        = ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)))
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result);
    if ((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata);
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
            = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data = 0ULL;
    }
    __Vtableidx6 = ((0x10U & ((~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))) 
                              << 4U)) | ((8U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult) 
                                                << 3U)) 
                                         | ((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                             ? (7U 
                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0xcU))
                                             : 2U)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0
        [__Vtableidx6];
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 = 0xffffffffffffffffULL;
    if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data
                : ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult 
                                  >> 2U))) ? (((QData)((IData)(
                                                               (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                                                >> 0xeU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                 >> 0x20U))))
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                >> 0x1fU)) 
                                                       & (~ 
                                                          (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                           >> 0xeU)))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))));
    } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = ((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                ? (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                       >> 0xfU)) 
                                              & (~ 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 0xeU))))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))))
                : ((2U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                    ? (((- (QData)((IData)((1U & ((IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x1fU)) 
                                                  & (~ 
                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                      >> 0xeU))))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                >> 0x10U))))))
                    : ((4U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                        ? (((- (QData)((IData)((1U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                            >> 0x2fU)) 
                                                   & (~ 
                                                      (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                       >> 0xeU))))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                    >> 0x20U))))))
                        : ((6U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))
                            ? (((- (QData)((IData)(
                                                   ((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                     >> 0x3fU) 
                                                    & (~ 
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                        >> 0xeU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                        >> 0x30U))))))
                            : 0xffffffffffffffffULL))));
    } else if ((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 7U)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))));
    } else if ((1U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0xfU)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 8U))))));
    } else if ((2U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x17U)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x10U))))));
    } else if ((3U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x1fU)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x18U))))));
    } else if ((4U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x27U)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x20U))))));
    } else if ((5U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x2fU)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x28U))))));
    } else if ((6U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x37U)) 
                                          & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0xeU))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x30U))))));
    } else if ((7U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)(((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                     >> 0x3fU) & (~ 
                                                  (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0xeU)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x38U))))));
    }
    vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch = ((
                                                   ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall)) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)));
    if (vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch) {
        vlSelf->o_TOP_Branch = 1U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                    ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                    : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm));
    } else {
        vlSelf->o_TOP_Branch = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc);
    }
}

void Vysyx_22040386_TOP___024root___eval(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->i_TOP_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__i_TOP_clk)))) {
        Vysyx_22040386_TOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__i_TOP_clk = vlSelf->i_TOP_clk;
}

#ifdef VL_DEBUG
void Vysyx_22040386_TOP___024root___eval_debug_assertions(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_TOP_clk & 0xfeU))) {
        Verilated::overWidthError("i_TOP_clk");}
    if (VL_UNLIKELY((vlSelf->i_TOP_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_TOP_rst_n");}
}
#endif  // VL_DEBUG
