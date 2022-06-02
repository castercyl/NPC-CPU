// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040386_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040386_TOP___024root.h"

void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ebreak_TOP();
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0;
void Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h4c45401e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_h3c527890_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_22040386_TOP__ConstPool__TABLE_hb61d5e62_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h81d5cd0f_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_22040386_TOP__ConstPool__TABLE_h5399d6b5_0;

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
    IData/*31:0*/ __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o;
    QData/*63:0*/ __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o;
    CData/*4:0*/ __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o;
    CData/*4:0*/ __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    // Body
    __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o 
        = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o;
    __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o 
        = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o;
    __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o;
    __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o;
    __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 = 0U;
    if (vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_write_TOP(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o, 
                                                                                ((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o) 
                                                                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o)) 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                                                                 ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                                                                 : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o), 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((IData)(0xfU) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o))))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                                                                                 ? 
                                                                                ((IData)(3U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o))))))));
    }
    if (vlSelf->i_TOP_rst_n) {
        if (vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag) {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o = 0U;
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o = 0U;
        } else if (vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag) {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o 
                = (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o));
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o 
                = (0x1fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o));
        } else {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o 
                = (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                            >> 0x14U));
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o 
                = (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                            >> 0xfU));
        }
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o 
            = (4ULL + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o);
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o;
        if (vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag) {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o = 0ULL;
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o = 0x13U;
        } else if (vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag) {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o 
                = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o;
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o;
        } else {
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o 
                = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i;
            __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                = vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i;
        }
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o 
            = (1U & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
                     & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                        & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                           >> 3U))));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o 
            = (1U & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
                     & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum)))));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 2U : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o 
            = ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                    ? ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                        ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                            ? 0x27U : 0x37U) : ((0x2000U 
                                                 & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                                 ? 0U
                                                 : 0x20U))
                    : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr))
                : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                    ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr)
                    : 0U));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i)));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)
                         ? 0U : (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o)));
    } else {
        __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o = 0U;
        __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o = 0U;
        __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o = 0ULL;
        __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o = 0x13U;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o = 2U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o = 0U;
    }
    if (vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o) {
        __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 
            = ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o))
                ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o);
        __Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0 
            = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o;
    }
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o 
            = (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o) 
                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))
                    ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                   [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o]));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o 
            = (((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o) 
                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o))
                    ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                   [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o]));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o = 0ULL;
    }
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o 
        = __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o;
    if (__Vdlyvset__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0) {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[__Vdlyvdim0__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf__v0;
    }
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o 
            = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o 
            = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2;
        if (vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag) {
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o = 0U;
            vlSelf->o_TOP_pc = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o;
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o = 0ULL;
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o 
                = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o;
            vlSelf->o_TOP_pc = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o;
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o 
                = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o;
        }
        vlSelf->o_TOP_unkown_code = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o));
        if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)) 
                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag))))) {
            vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i 
                = vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc;
        }
        vlSelf->o_TOP_inst = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o;
        if (vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag) {
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o = 0U;
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o = 2U;
        } else {
            vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o 
                = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o;
            vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o 
                = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)
                    ? 2U : ((0x63U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))
                             ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                      >> 0xcU)) : 2U));
        }
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o = 0U;
        vlSelf->o_TOP_pc = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o = 0ULL;
        vlSelf->o_TOP_unkown_code = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i = 0x80000000ULL;
        vlSelf->o_TOP_inst = vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o = 2U;
    }
    vlSelf->o_TOP_ID_EX_reg_rd_addr1 = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o;
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf);
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o)
                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o);
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o 
            = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o = 0U;
    }
    if ((0x100073U == vlSelf->o_TOP_inst)) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ebreak_TOP();
    }
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o 
            = (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                     >> 0xcU));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o = 0U;
    }
    vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o)
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o
                                                 : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o);
    __Vtableidx6 = (((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o) 
                     << 4U) | ((8U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o) 
                                      << 3U)) | (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o)));
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1 
        = Vysyx_22040386_TOP__ConstPool__TABLE_h939ed612_0
        [__Vtableidx6];
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)
                         ? 0U : (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o)));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code)));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o = 0U;
    }
    Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
        = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read__1__rdata;
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)
                         ? 0U : vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o 
            = (((((- (QData)((IData)(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o))))) 
                  & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o)) 
                 | ((- (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o))) 
                    & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o)) 
                | ((- (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o))) 
                   & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i)) 
               | ((- (QData)((IData)((1U & (~ ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o))))))) 
                  & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o));
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0U : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o = 0U;
    }
    vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o) 
                                                  | ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)));
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o 
        = __Vdly__ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o;
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i = 
        ((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i 
                        >> 2U))) ? (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata 
                                            >> 0x20U))
          : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata));
    if (vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch) {
        vlSelf->o_TOP_Branch = 1U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc;
    } else {
        vlSelf->o_TOP_Branch = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_nextpc 
            = (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i);
    }
    vlSelf->o_TOP_ID_EX_reg_rd_addr2 = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o;
    if (vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o) {
        Vysyx_22040386_TOP___024root____Vdpiimwrap_ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__pmem_read_TOP(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o, vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata);
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data 
            = vlSelf->__Vtask_ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__pmem_read__3__rdata;
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data = 0ULL;
    }
    if (vlSelf->i_TOP_rst_n) {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o);
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (IData)((0x67U == (0x707fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)))));
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o 
            = vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o 
            = ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)) 
               & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)) 
                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i)));
        vlSelf->o_TOP_EX_MEM_RegWrite = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o 
            = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag)
                ? 0U : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag)
                         ? 0U : (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                          >> 7U))));
    } else {
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o = 0U;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o = 0ULL;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o = 0U;
        vlSelf->o_TOP_EX_MEM_RegWrite = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o;
        vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o = 0U;
    }
    vlSelf->o_TOP_EX_MEM_reg_wr_addr = vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o;
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
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o = __Vdly__ysyx_22040386_TOP__DOT__IF_ID_pc_o;
    vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag = 
        ((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch) 
         & (vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc 
            != vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o));
    vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o = __Vdly__ysyx_22040386_TOP__DOT__IF_ID_inst_o;
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
    vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i 
        = (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o 
           + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o);
    vlSelf->o_TOP_jump_flag = vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag;
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
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
            ? (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1))
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1);
    vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2 
        = ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o)
            ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o
            : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2);
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
