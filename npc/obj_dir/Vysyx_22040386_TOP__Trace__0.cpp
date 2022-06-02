// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040386_TOP__Syms.h"


void Vysyx_22040386_TOP___024root__trace_chg_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040386_TOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040386_TOP___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vysyx_22040386_TOP___024root__trace_chg_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch));
        tracep->chgBit(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o));
        tracep->chgCData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o),5);
        tracep->chgQData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc),64);
        tracep->chgQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o),64);
        tracep->chgBit(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag));
        tracep->chgBit(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag));
        tracep->chgBit(oldp+9,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o) 
                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
        tracep->chgBit(oldp+10,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o) 
                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                 & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
        tracep->chgCData(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw),2);
        tracep->chgCData(oldp+12,(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw),2);
        tracep->chgCData(oldp+13,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o),5);
        tracep->chgCData(oldp+15,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+16,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o),5);
        tracep->chgQData(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i),64);
        tracep->chgQData(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o),64);
        tracep->chgIData(oldp+21,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i),32);
        tracep->chgIData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o),32);
        tracep->chgBit(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i));
        tracep->chgBit(oldp+24,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                       >> 3U))));
        tracep->chgBit(oldp+25,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        tracep->chgBit(oldp+26,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        tracep->chgBit(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i));
        tracep->chgBit(oldp+28,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        tracep->chgBit(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o));
        tracep->chgBit(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o));
        tracep->chgBit(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o));
        tracep->chgBit(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o));
        tracep->chgBit(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o));
        tracep->chgBit(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o));
        tracep->chgBit(oldp+35,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        tracep->chgBit(oldp+36,((IData)((0x67U == (0x707fU 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)))));
        tracep->chgBit(oldp+37,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
        tracep->chgBit(oldp+38,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o));
        tracep->chgBit(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o));
        tracep->chgBit(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o));
        tracep->chgCData(oldp+41,(((0x63U == (0x7fU 
                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))
                                    ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                             >> 0xcU))
                                    : 2U)),3);
        tracep->chgCData(oldp+42,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+43,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o),3);
        tracep->chgCData(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o),3);
        tracep->chgCData(oldp+45,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o),5);
        tracep->chgCData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o),5);
        tracep->chgCData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o),5);
        tracep->chgCData(oldp+49,(((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                    ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                        ? ((0x4000U 
                                            & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                            ? ((0x2000U 
                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                                ? 0x27U
                                                : 0x37U)
                                            : ((0x2000U 
                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                                ? 0U
                                                : 0x20U))
                                        : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr))
                                    : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                        ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr)
                                        : 0U))),6);
        tracep->chgCData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o),6);
        tracep->chgQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i),64);
        tracep->chgQData(oldp+53,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o) 
                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                    & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                    : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))
                                        ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                       [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o]))),64);
        tracep->chgQData(oldp+55,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o) 
                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                    & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                    ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                    : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o))
                                        ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                       [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o]))),64);
        tracep->chgQData(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o),64);
        tracep->chgQData(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o),64);
        tracep->chgQData(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o),64);
        tracep->chgQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o),64);
        tracep->chgBit(oldp+65,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
        tracep->chgBit(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o));
        tracep->chgIData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o),32);
        tracep->chgQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o),64);
        tracep->chgQData(oldp+70,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o)),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o),64);
        tracep->chgBit(oldp+74,((1U & (~ (IData)((0U 
                                                  != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
        tracep->chgBit(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o));
        tracep->chgBit(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o));
        tracep->chgBit(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o));
        tracep->chgBit(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o));
        tracep->chgBit(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o));
        tracep->chgBit(oldp+80,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o));
        tracep->chgCData(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o),3);
        tracep->chgCData(oldp+82,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o),3);
        tracep->chgCData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o),5);
        tracep->chgCData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o),5);
        tracep->chgQData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i),64);
        tracep->chgQData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i),64);
        tracep->chgQData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2),64);
        tracep->chgQData(oldp+91,((((((- (QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o))))) 
                                      & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o)) 
                                     | ((- (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o))) 
                                        & vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o)) 
                                    | ((- (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o))) 
                                       & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i)) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o))))))) 
                                      & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i))),64);
        tracep->chgQData(oldp+93,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o),64);
        tracep->chgQData(oldp+95,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o),64);
        tracep->chgQData(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o),64);
        tracep->chgQData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o),64);
        tracep->chgBit(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o));
        tracep->chgIData(oldp+102,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o),32);
        tracep->chgQData(oldp+103,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                     : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o)),64);
        tracep->chgQData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o),64);
        tracep->chgBit(oldp+107,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o));
        tracep->chgIData(oldp+108,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o),32);
        tracep->chgQData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1),64);
        tracep->chgQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
        tracep->chgBit(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
        tracep->chgBit(oldp+114,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
        tracep->chgBit(oldp+115,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                  ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                     >> 5U))));
        tracep->chgBit(oldp+116,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                  ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
        tracep->chgBit(oldp+117,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                >> 0x3fU)))));
        tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                        >> 5U))));
        tracep->chgBit(oldp+119,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                        >> 4U))));
        tracep->chgBit(oldp+120,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                                         ? ((IData)(
                                                    (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                               ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                         : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                            ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                               >> 5U))))));
        tracep->chgCData(oldp+121,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))),4);
        tracep->chgIData(oldp+122,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
        tracep->chgIData(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
        tracep->chgQData(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
        tracep->chgQData(oldp+126,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
        tracep->chgQData(oldp+128,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
        tracep->chgQData(oldp+130,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
        tracep->chgQData(oldp+132,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                     : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
        tracep->chgQData(oldp+134,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
        tracep->chgQData(oldp+136,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                     : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
        tracep->chgQData(oldp+138,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
        tracep->chgQData(oldp+140,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                     : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
        tracep->chgQData(oldp+142,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                     ? (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                                                      >> 0x1fU))))))
                                     : (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1 
                                                                      >> 0x3fU)))))))),64);
        tracep->chgQData(oldp+144,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
        tracep->chgQData(oldp+146,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))
                                     ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                    [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o])),64);
        tracep->chgQData(oldp+148,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o))
                                     ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                    [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o])),64);
        tracep->chgCData(oldp+150,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)),7);
        tracep->chgCData(oldp+151,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
        tracep->chgCData(oldp+153,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
        tracep->chgCData(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
        tracep->chgCData(oldp+155,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                     ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                         ? 0x27U : 0x37U)
                                     : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                         ? 0U : 0x20U))),6);
        tracep->chgQData(oldp+156,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
        tracep->chgQData(oldp+158,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
        tracep->chgQData(oldp+160,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
        tracep->chgQData(oldp+162,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
        tracep->chgQData(oldp+164,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
        tracep->chgQData(oldp+166,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
        tracep->chgQData(oldp+168,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
        tracep->chgQData(oldp+170,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
        tracep->chgQData(oldp+172,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
        tracep->chgQData(oldp+174,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
        tracep->chgQData(oldp+176,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
        tracep->chgQData(oldp+178,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
        tracep->chgQData(oldp+180,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
        tracep->chgQData(oldp+182,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
        tracep->chgQData(oldp+184,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
        tracep->chgQData(oldp+186,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
        tracep->chgQData(oldp+188,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
        tracep->chgQData(oldp+190,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
        tracep->chgQData(oldp+192,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
        tracep->chgQData(oldp+194,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
        tracep->chgQData(oldp+196,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
        tracep->chgQData(oldp+198,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
        tracep->chgQData(oldp+200,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
        tracep->chgQData(oldp+202,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
        tracep->chgQData(oldp+204,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
        tracep->chgQData(oldp+206,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
        tracep->chgQData(oldp+208,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
        tracep->chgQData(oldp+210,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
        tracep->chgQData(oldp+212,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
        tracep->chgQData(oldp+214,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
        tracep->chgQData(oldp+216,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
        tracep->chgQData(oldp+218,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
        tracep->chgQData(oldp+220,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o))
                                     ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o)),64);
        tracep->chgQData(oldp+222,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
        tracep->chgQData(oldp+224,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc
                                     : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i))),64);
        tracep->chgBit(oldp+226,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)) 
                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag))));
        tracep->chgBit(oldp+227,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o) 
                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o)) 
                                    & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
        tracep->chgQData(oldp+228,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o) 
                                        == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o)) 
                                       & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o)) 
                                     & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                     ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                     : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o)),64);
        tracep->chgBit(oldp+230,((1U & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                           >> 2U)))));
        tracep->chgQData(oldp+231,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
        tracep->chgQData(oldp+233,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
        tracep->chgCData(oldp+235,(((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
                                     ? 0xffU : (0xffU 
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
                                                      & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o)))))))),8);
        tracep->chgBit(oldp+236,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o))));
        tracep->chgBit(oldp+237,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
        tracep->chgBit(oldp+238,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    }
    tracep->chgBit(oldp+239,(vlSelf->i_TOP_clk));
    tracep->chgBit(oldp+240,(vlSelf->i_TOP_rst_n));
    tracep->chgBit(oldp+241,(vlSelf->o_TOP_unkown_code));
    tracep->chgQData(oldp+242,(vlSelf->o_TOP_pc),64);
    tracep->chgIData(oldp+244,(vlSelf->o_TOP_inst),32);
    tracep->chgCData(oldp+245,(vlSelf->o_TOP_fw_EX_src1fw),2);
    tracep->chgCData(oldp+246,(vlSelf->o_TOP_fw_EX_src2fw),2);
    tracep->chgCData(oldp+247,(vlSelf->o_TOP_ID_EX_reg_rd_addr1),5);
    tracep->chgCData(oldp+248,(vlSelf->o_TOP_ID_EX_reg_rd_addr2),5);
    tracep->chgCData(oldp+249,(vlSelf->o_TOP_EX_MEM_reg_wr_addr),5);
    tracep->chgBit(oldp+250,(vlSelf->o_TOP_EX_MEM_RegWrite));
    tracep->chgBit(oldp+251,(vlSelf->o_TOP_Branch));
    tracep->chgBit(oldp+252,(vlSelf->o_TOP_jump_flag));
}

void Vysyx_22040386_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
