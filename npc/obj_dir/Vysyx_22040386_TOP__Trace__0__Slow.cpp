// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040386_TOP__Syms.h"


VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_init_sub__TOP__0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst_n", false,-1);
    tracep->declBus(c+92,"I", false,-1, 31,0);
    tracep->declQuad(c+93,"mem_d_addr", false,-1, 63,0);
    tracep->declQuad(c+95,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst_n", false,-1);
    tracep->declBus(c+92,"I", false,-1, 31,0);
    tracep->declQuad(c+93,"mem_d_addr", false,-1, 63,0);
    tracep->declQuad(c+95,"pc", false,-1, 63,0);
    tracep->declBit(c+97,"RegWrite", false,-1);
    tracep->declBit(c+98,"MemWrite", false,-1);
    tracep->declBit(c+99,"Branch", false,-1);
    tracep->declBit(c+100,"ALUAsrc", false,-1);
    tracep->declBit(c+1,"ALUBsrc", false,-1);
    tracep->declBit(c+101,"DNPCsrc", false,-1);
    tracep->declBit(c+102,"RESULTsrc", false,-1);
    tracep->declBit(c+103,"Mem_to_Reg", false,-1);
    tracep->declBit(c+102,"Jump", false,-1);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+104,"Wmask", false,-1, 7,0);
    tracep->declBit(c+105,"switch", false,-1);
    tracep->declBus(c+106,"rd_reg_addr1", false,-1, 4,0);
    tracep->declBus(c+107,"rd_reg_addr2", false,-1, 4,0);
    tracep->declBus(c+108,"wr_reg_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"snpc", false,-1, 63,0);
    tracep->declQuad(c+111,"busA", false,-1, 63,0);
    tracep->declQuad(c+113,"busB", false,-1, 63,0);
    tracep->declQuad(c+3,"imm", false,-1, 63,0);
    tracep->declQuad(c+5,"final_result", false,-1, 63,0);
    tracep->declQuad(c+115,"wr_reg_data", false,-1, 63,0);
    tracep->declQuad(c+117,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+113,"wr_mem_data", false,-1, 63,0);
    tracep->declQuad(c+7,"rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+9,"i_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+100,"ALUAsrc", false,-1);
    tracep->declBit(c+1,"ALUBsrc", false,-1);
    tracep->declBit(c+102,"Jump", false,-1);
    tracep->declBit(c+99,"Branch", false,-1);
    tracep->declBit(c+101,"DNPCsrc", false,-1);
    tracep->declBit(c+102,"RESULTsrc", false,-1);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declQuad(c+95,"pc", false,-1, 63,0);
    tracep->declQuad(c+3,"imm", false,-1, 63,0);
    tracep->declQuad(c+109,"snpc", false,-1, 63,0);
    tracep->declQuad(c+111,"busA", false,-1, 63,0);
    tracep->declQuad(c+113,"busB", false,-1, 63,0);
    tracep->declBit(c+105,"switch", false,-1);
    tracep->declQuad(c+117,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+5,"final_result", false,-1, 63,0);
    tracep->declBit(c+11,"zero", false,-1);
    tracep->declQuad(c+119,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+12,"result", false,-1, 63,0);
    tracep->declQuad(c+14,"src1", false,-1, 63,0);
    tracep->declQuad(c+16,"src2", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declQuad(c+14,"src1", false,-1, 63,0);
    tracep->declQuad(c+16,"src2", false,-1, 63,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+11,"zero", false,-1);
    tracep->declQuad(c+12,"result", false,-1, 63,0);
    tracep->declBit(c+18,"SUBctr", false,-1);
    tracep->declBus(c+19,"OPctr", false,-1, 1,0);
    tracep->declQuad(c+20,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+22,"sum", false,-1, 63,0);
    tracep->declQuad(c+12,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBus(c+92,"I", false,-1, 31,0);
    tracep->declBit(c+97,"RegWrite", false,-1);
    tracep->declBit(c+98,"MemWrite", false,-1);
    tracep->declBit(c+99,"Branch", false,-1);
    tracep->declBit(c+100,"ALUAsrc", false,-1);
    tracep->declBit(c+1,"ALUBsrc", false,-1);
    tracep->declBit(c+101,"DNPCsrc", false,-1);
    tracep->declBit(c+102,"RESULTsrc", false,-1);
    tracep->declBit(c+103,"Mem_to_Reg", false,-1);
    tracep->declBit(c+102,"Jump", false,-1);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+104,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"imm", false,-1, 63,0);
    tracep->declBit(c+97,"reg_RegWrite", false,-1);
    tracep->declBit(c+98,"reg_MemWrite", false,-1);
    tracep->declBit(c+99,"reg_Branch", false,-1);
    tracep->declBit(c+100,"reg_ALUAsrc", false,-1);
    tracep->declBit(c+1,"reg_ALUBsrc", false,-1);
    tracep->declBit(c+101,"reg_DNPCsrc", false,-1);
    tracep->declBit(c+102,"reg_RESULTsrc", false,-1);
    tracep->declBit(c+103,"reg_Mem_to_Reg", false,-1);
    tracep->declBit(c+102,"reg_Jump", false,-1);
    tracep->declBus(c+2,"reg_ALUctr", false,-1, 2,0);
    tracep->declBus(c+104,"reg_Wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"reg_imm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+91,"rst_n", false,-1);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+105,"switch", false,-1);
    tracep->declQuad(c+117,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+95,"pc", false,-1, 63,0);
    tracep->declQuad(c+109,"snpc", false,-1, 63,0);
    tracep->declQuad(c+121,"real_pc", false,-1, 63,0);
    tracep->declQuad(c+24,"final_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+125,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+97,"wen", false,-1);
    tracep->declQuad(c+115,"wdata", false,-1, 63,0);
    tracep->declBus(c+108,"waddr", false,-1, 4,0);
    tracep->declBus(c+106,"raddr1", false,-1, 4,0);
    tracep->declBus(c+107,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+111,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+113,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+26+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+123,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_init_top(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040386_TOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040386_TOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040386_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_register(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22040386_TOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22040386_TOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22040386_TOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_full_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040386_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040386_TOP___024root*>(voidSelf);
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040386_TOP___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vysyx_22040386_TOP___024root__trace_full_sub_0(Vysyx_22040386_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040386_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040386_TOP___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc));
    tracep->fullCData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr),3);
    tracep->fullQData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__final_result),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__rd_mem_data),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__i_rdata),64);
    tracep->fullBit(oldp+11,((0ULL == vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum)));
    tracep->fullQData(oldp+12,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullQData(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__src1),64);
    tracep->fullQData(oldp+16,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__src2),64);
    tracep->fullBit(oldp+18,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                    >> 2U))));
    tracep->fullCData(oldp+19,((3U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))),2);
    tracep->fullQData(oldp+20,((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__src2 
                                ^ (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                         >> 2U))))))),64);
    tracep->fullQData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
    tracep->fullQData(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+36,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+38,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+42,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+62,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+74,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+80,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+82,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+86,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullBit(oldp+90,(vlSelf->clk));
    tracep->fullBit(oldp+91,(vlSelf->rst_n));
    tracep->fullIData(oldp+92,(vlSelf->I),32);
    tracep->fullQData(oldp+93,(vlSelf->mem_d_addr),64);
    tracep->fullQData(oldp+95,(vlSelf->pc),64);
    tracep->fullBit(oldp+97,((1U & ((0x40U & vlSelf->I)
                                     ? (IData)((0x27U 
                                                == 
                                                (0x37U 
                                                 & vlSelf->I)))
                                     : ((0x20U & vlSelf->I)
                                         ? (IData)(
                                                   (0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->I)))
                                         : (IData)(
                                                   (0x13U 
                                                    == 
                                                    (0x1bU 
                                                     & vlSelf->I))))))));
    tracep->fullBit(oldp+98,((0x23U == (0x7fU & vlSelf->I))));
    tracep->fullBit(oldp+99,((0x63U == (0x7fU & vlSelf->I))));
    tracep->fullBit(oldp+100,((0x17U == (0x7fU & vlSelf->I))));
    tracep->fullBit(oldp+101,((0x67U == (0x7fU & vlSelf->I))));
    tracep->fullBit(oldp+102,(((0x6fU == (0x7fU & vlSelf->I)) 
                               | (0x67U == (0x7fU & vlSelf->I)))));
    tracep->fullBit(oldp+103,((3U == (0x7fU & vlSelf->I))));
    tracep->fullCData(oldp+104,(((0x4000U & vlSelf->I)
                                  ? 0U : ((0x2000U 
                                           & vlSelf->I)
                                           ? ((0x1000U 
                                               & vlSelf->I)
                                               ? 0xffU
                                               : 0xfU)
                                           : ((0x1000U 
                                               & vlSelf->I)
                                               ? 3U
                                               : 1U)))),8);
    tracep->fullBit(oldp+105,((((0x6fU == (0x7fU & vlSelf->I)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->I))) 
                               | ((0x63U == (0x7fU 
                                             & vlSelf->I)) 
                                  & (0ULL == vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum)))));
    tracep->fullCData(oldp+106,((0x1fU & (vlSelf->I 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+107,((0x1fU & (vlSelf->I 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+108,((0x1fU & (vlSelf->I 
                                          >> 7U))),5);
    tracep->fullQData(oldp+109,((4ULL + vlSelf->pc)),64);
    tracep->fullQData(oldp+111,(((0U == (0x1fU & (vlSelf->I 
                                                  >> 0xfU)))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->I 
                                            >> 0xfU))])),64);
    tracep->fullQData(oldp+113,(((0U == (0x1fU & (vlSelf->I 
                                                  >> 0x14U)))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->I 
                                            >> 0x14U))])),64);
    tracep->fullQData(oldp+115,(((3U == (0x7fU & vlSelf->I))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__rd_mem_data
                                  : vlSelf->ysyx_22040386_TOP__DOT__final_result)),64);
    tracep->fullQData(oldp+117,(((0x67U == (0x7fU & vlSelf->I))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result
                                  : (vlSelf->pc + vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm))),64);
    tracep->fullQData(oldp+119,((vlSelf->pc + vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm)),64);
    tracep->fullQData(oldp+121,(((((0x6fU == (0x7fU 
                                              & vlSelf->I)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->I))) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelf->I)) 
                                     & (0ULL == vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum)))
                                  ? ((0x67U == (0x7fU 
                                                & vlSelf->I))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result
                                      : (vlSelf->pc 
                                         + vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm))
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullQData(oldp+123,(((0U == (0x1fU & (vlSelf->I 
                                                  >> 7U)))
                                  ? 0ULL : ((3U == 
                                             (0x7fU 
                                              & vlSelf->I))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__rd_mem_data
                                             : vlSelf->ysyx_22040386_TOP__DOT__final_result))),64);
    tracep->fullIData(oldp+125,(5U),32);
    tracep->fullIData(oldp+126,(0x40U),32);
}
