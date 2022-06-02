// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP___024root.h"

void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0;
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h4c45401e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h3c527890_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_hb61d5e62_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h81d5cd0f_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h5399d6b5_0;
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ebreak_TOP();

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___settle__TOP__0(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    SData/*9:0*/ __Vtableidx4;
    SData/*9:0*/ __Vtableidx5;
    CData/*4:0*/ __Vtableidx6;
    // Body
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf);
    vlSelf->o_TOP_ID_EX_reg_rd_addr1 = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o;
    vlSelf->o_TOP_pc = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o;
    vlSelf->o_TOP_unkown_code = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o;
    vlSelf->o_TOP_inst = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o;
    vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o)
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o
                                                 : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o);
    __Vtableidx6 = (((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o) 
                     << 4U) | ((8U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o) 
                                      << 3U)) | (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0
        [__Vtableidx6];
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
        = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata;
    vlSelf->o_TOP_ID_EX_reg_rd_addr2 = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o;
    vlSelf->o_TOP_EX_MEM_reg_wr_addr = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o;
    vlSelf->o_TOP_EX_MEM_RegWrite = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o;
    if (vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata);
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
            = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data = 0ULL;
    }
    vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw 
        = ((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o) 
               == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o)) 
              & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o)) 
             & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o))) 
            << 1U) | (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o) 
                         == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                        & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                       & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o))) 
                      & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o) 
                         != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o))));
    vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw 
        = ((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o) 
               == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o)) 
              & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o)) 
             & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o))) 
            << 1U) | (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o) 
                         == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                        & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                       & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o))) 
                      & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o) 
                         != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o))));
    if ((0x40U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
        if ((0x20U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
            if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (IData)((0x100003U != (0xfff0000fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)));
            } else if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                    = ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                        ? ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                            ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                ? (((- (QData)((IData)(
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                             >> 0x14U))))))))
                                : 0ULL) : 0ULL) : 0ULL);
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (IData)((7U != (7U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)));
            } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                            = (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                            >> 0x14U))));
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                        if ((0U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                    = ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                        ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                            ? (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                        >> 7U))))))))
                            : 0ULL) : 0ULL);
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (1U & (IData)(((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) 
                                     | (0x2000U == 
                                        (0x6000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)))));
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
        }
    } else if ((0x20U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
        if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
            if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                        if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                                } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                               >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                        } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                                = (0U != (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                          >> 0x19U));
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                              >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                    = ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                        ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))))
                            : 0ULL) : 0ULL);
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                    = (IData)((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)));
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                        if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                    if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                    }
                                } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                } else if ((0x20U == 
                                            (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                             >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                                if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                            >> 0x19U))) {
                                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                                }
                            } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                               >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                            if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                        >> 0x19U))) {
                                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                            }
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                              >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((1U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                           >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                = ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                    ? 0ULL : ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                               ? 0ULL : ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                          ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                          >> 7U))))))
                                              : 0ULL)
                                          : 0ULL)));
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                = (IData)((3U != (0x400fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)));
        }
    } else if ((0x10U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
        if ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
            if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                        = (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                        >> 0x14U))));
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    if ((0U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((1U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                             >> 0xcU)))) {
                        if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else if ((5U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                             >> 0xcU)))) {
                        if ((0x10U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                       >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                           >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            }
        } else if ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                = ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                    ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))))
                        : 0ULL) : 0ULL);
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
                = (IData)((3U != (3U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)));
        } else if ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
            if ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
                    = (((- (QData)((IData)((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                    >> 0x14U))));
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                if ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                        if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        } else if ((0x20U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                              >> 0x19U))) {
                            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    }
                } else if ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                } else if ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) {
                    if ((0U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                >> 0x1aU))) {
                        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 0U;
                }
            } else {
                vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
                vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            }
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = 0ULL;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
            vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
        }
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i 
            = ((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                ? 0ULL : ((4U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                           ? 0ULL : ((2U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                      ? ((1U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                                >> 0x14U))))
                                          : 0ULL) : 0ULL)));
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = 1U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code 
            = (1U & ((3U != (0xfU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)) 
                     | ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                         ? (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                            >> 0xdU) : (IData)((0U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))))));
    }
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i 
        = (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o 
           + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o);
    __Vtableidx1 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h4c45401e_0
        [__Vtableidx1];
    __Vtableidx2 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h3c527890_0
        [__Vtableidx2];
    __Vtableidx3 = (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i 
        = Vysyx_22040386_TOP__ConstPool__TABLE_hb61d5e62_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x3f8U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                               >> 0x16U)) | (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                   >> 0xcU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h81d5cd0f_0
        [__Vtableidx4];
    __Vtableidx5 = ((0x3f8U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                               >> 0x16U)) | (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                                   >> 0xcU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h5399d6b5_0
        [__Vtableidx5];
    vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag 
        = ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o) 
             & (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o) 
                 == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o)) 
                | ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o) 
                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o)))) 
            & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o))) 
           | ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o) 
                & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o) 
                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))) 
               & (0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))) 
              & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o))));
    if ((0x100073U == vlSelf->o_TOP_inst)) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ebreak_TOP();
    }
    vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o) 
                                                  | ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)));
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i = 
        ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i 
                        >> 2U))) ? (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
                                            >> 0x20U))
          : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 = 0xffffffffffffffffULL;
    if ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data
                : ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o 
                                  >> 2U))) ? (((QData)((IData)(
                                                               (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                                                >> 2U)))))))) 
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
                                                          ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                           >> 2U)))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))));
    } else if ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = ((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))
                ? (((- (QData)((IData)((1U & ((IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                       >> 0xfU)) 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                  >> 2U))))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))))
                : ((2U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))
                    ? (((- (QData)((IData)((1U & ((IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x1fU)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                      >> 2U))))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                >> 0x10U))))))
                    : ((4U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))
                        ? (((- (QData)((IData)((1U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                            >> 0x2fU)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                       >> 2U))))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                    >> 0x20U))))))
                        : ((6U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))
                            ? (((- (QData)((IData)(
                                                   ((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                     >> 0x3fU) 
                                                    & (~ 
                                                       ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                        >> 2U)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                                        >> 0x30U))))))
                            : 0xffffffffffffffffULL))));
    } else if ((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 7U)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data)))));
    } else if ((1U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0xfU)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 8U))))));
    } else if ((2U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x17U)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x10U))))));
    } else if ((3U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x1fU)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x18U))))));
    } else if ((4U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x27U)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x20U))))));
    } else if ((5U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x2fU)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x28U))))));
    } else if ((6U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)((1U & ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                   >> 0x37U)) 
                                          & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                >> 2U))))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x30U))))));
    } else if ((7U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 
            = (((- (QData)((IData)(((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                     >> 0x3fU) & (~ 
                                                  ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                                   >> 2U)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
                                                           >> 0x38U))))));
    }
    vlSelf->o_TOP_fw_EX_src1fw = vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw;
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
        = ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw))
            ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o
            : ((1U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw))
                ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                : ((2U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw))
                    ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o
                    : 0ULL)));
    vlSelf->o_TOP_fw_EX_src2fw = vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw;
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2 
        = ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw))
            ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o
            : ((1U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw))
                ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                : ((2U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw))
                    ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o
                    : 0ULL)));
    if (vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch) {
        vlSelf->o_TOP_Branch = 1U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc;
        vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag 
            = (vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc 
               != vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o);
    } else {
        vlSelf->o_TOP_Branch = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i);
        vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag = 0U;
    }
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
            ? (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1))
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o)
            ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2);
    vlSelf->o_TOP_jump_flag = vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag;
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
        = (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
           * vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
        = VL_DIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1), (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1), (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
        = (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
           ^ (- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                       >> 5U))))));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
        = ((0x8000000000000000ULL & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum) 
           | (0x7fffffffffffffffULL & ((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                        + vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2) 
                                       + (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                                             >> 5U)))))));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0 
        = (1U & (IData)(((((0x7fffffffffffffffULL & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1) 
                           + (0x7fffffffffffffffULL 
                              & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2)) 
                          + (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                                   >> 5U))))) 
                         >> 0x3fU)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn 
        = (1U & ((((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                  >> 0x3fU))) + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
                                                            >> 0x3fU)))) 
                  + (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)) 
                 >> 1U));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum) 
           | ((QData)((IData)((1U & (((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                               >> 0x3fU)) 
                                      + (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 
                                                 >> 0x3fU))) 
                                     + (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))))) 
              << 0x3fU));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result 
        = ((8U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
            ? ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                ? ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                        : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                            : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))))
                : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                    ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                            : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))
                        : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul))))
            : ((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                ? ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? (QData)((IData)((1U & ((0x10U 
                                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
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
                                                  ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                                   >> 5U))))))
                        : (VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                         (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                          & (0x1fULL 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o))))) 
                                                << 5U)))) 
                           | VL_SHIFTL_QQQ(64,64,64, 
                                           ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                             ? (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                                                              >> 0x1fU))))))
                                             : (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                                                              >> 0x3fU))))))), 
                                           (1ULL + 
                                            ((0x1fULL 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o))))) 
                                                 << 5U)) 
                                             + (~ (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                                   & (0x1fULL 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o))))) 
                                                         << 5U)))))))))
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                        (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                         & (0x1fULL 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o))))) 
                                               << 5U))))
                        : VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift, 
                                        (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
                                         & (0x1fULL 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o))))) 
                                               << 5U))))))
                : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                           ^ vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)
                        : (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                           | vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))
                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                        ? (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                           & vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)
                        : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))));
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)))
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result);
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root___eval_initial(Vysyx_22040386_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__i_TOP_clk = vlSelf->i_TOP_clk;
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
    vlSelf->i_TOP_clk = VL_RAND_RESET_I(1);
    vlSelf->i_TOP_rst_n = VL_RAND_RESET_I(1);
    vlSelf->o_TOP_unkown_code = VL_RAND_RESET_I(1);
    vlSelf->o_TOP_pc = VL_RAND_RESET_Q(64);
    vlSelf->o_TOP_inst = VL_RAND_RESET_I(32);
    vlSelf->o_TOP_fw_EX_src1fw = VL_RAND_RESET_I(2);
    vlSelf->o_TOP_fw_EX_src2fw = VL_RAND_RESET_I(2);
    vlSelf->o_TOP_ID_EX_reg_rd_addr1 = VL_RAND_RESET_I(5);
    vlSelf->o_TOP_ID_EX_reg_rd_addr2 = VL_RAND_RESET_I(5);
    vlSelf->o_TOP_EX_MEM_reg_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->o_TOP_EX_MEM_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->o_TOP_Branch = VL_RAND_RESET_I(1);
    vlSelf->o_TOP_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata = 0;
    vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
