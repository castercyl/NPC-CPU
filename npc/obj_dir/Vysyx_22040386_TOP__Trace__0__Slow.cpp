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
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->declBus(c+82,"I", false,-1, 31,0);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->declBus(c+82,"I", false,-1, 31,0);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->declBit(c+85,"ALUAsrc", false,-1);
    tracep->declBit(c+86,"ALUBsrc", false,-1);
    tracep->declBit(c+86,"RegWrite", false,-1);
    tracep->declBit(c+87,"Branch", false,-1);
    tracep->declBus(c+1,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+88,"rd_reg_addr1", false,-1, 4,0);
    tracep->declBus(c+89,"rd_reg_addr2", false,-1, 4,0);
    tracep->declBus(c+90,"wr_reg_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"snpc", false,-1, 63,0);
    tracep->declQuad(c+93,"busA", false,-1, 63,0);
    tracep->declQuad(c+95,"busB", false,-1, 63,0);
    tracep->declQuad(c+2,"imm", false,-1, 63,0);
    tracep->declQuad(c+4,"src1", false,-1, 63,0);
    tracep->declQuad(c+6,"src2", false,-1, 63,0);
    tracep->declQuad(c+8,"sum", false,-1, 63,0);
    tracep->declQuad(c+97,"result", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBus(c+1,"ALUctr", false,-1, 2,0);
    tracep->declQuad(c+4,"src1", false,-1, 63,0);
    tracep->declQuad(c+6,"src2", false,-1, 63,0);
    tracep->declQuad(c+91,"snpc", false,-1, 63,0);
    tracep->declQuad(c+8,"sum", false,-1, 63,0);
    tracep->declQuad(c+97,"result", false,-1, 63,0);
    tracep->declBit(c+10,"SUBctr", false,-1);
    tracep->declBus(c+11,"OPctr", false,-1, 1,0);
    tracep->declQuad(c+12,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+97,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBus(c+82,"I", false,-1, 31,0);
    tracep->declBit(c+85,"ALUAsrc", false,-1);
    tracep->declBit(c+86,"ALUBsrc", false,-1);
    tracep->declBit(c+86,"RegWrite", false,-1);
    tracep->declBit(c+87,"Branch", false,-1);
    tracep->declBus(c+1,"ALUctr", false,-1, 2,0);
    tracep->declQuad(c+2,"imm", false,-1, 63,0);
    tracep->declQuad(c+2,"reg_imm", false,-1, 63,0);
    tracep->declBit(c+85,"reg_ALUAsrc", false,-1);
    tracep->declBit(c+86,"reg_ALUBsrc", false,-1);
    tracep->declBit(c+86,"reg_RegWrite", false,-1);
    tracep->declBit(c+87,"reg_Branch", false,-1);
    tracep->declBus(c+1,"reg_ALUctr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+87,"Branch", false,-1);
    tracep->declQuad(c+8,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->declQuad(c+91,"snpc", false,-1, 63,0);
    tracep->declQuad(c+99,"real_pc", false,-1, 63,0);
    tracep->declQuad(c+14,"final_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+101,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->declQuad(c+97,"wdata", false,-1, 63,0);
    tracep->declBus(c+90,"waddr", false,-1, 4,0);
    tracep->declBus(c+88,"raddr1", false,-1, 4,0);
    tracep->declBus(c+89,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+93,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+95,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+16+i*2,"rf", true,(i+0), 63,0);
    }
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
    tracep->fullCData(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr),3);
    tracep->fullQData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
    tracep->fullQData(oldp+4,(vlSelf->ysyx_22040386_TOP__DOT__src1),64);
    tracep->fullQData(oldp+6,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
    tracep->fullQData(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__sum),64);
    tracep->fullBit(oldp+10,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                    >> 2U))));
    tracep->fullCData(oldp+11,((3U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))),2);
    tracep->fullQData(oldp+12,((vlSelf->ysyx_22040386_TOP__DOT__src2 
                                ^ (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                         >> 2U))))))),64);
    tracep->fullQData(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
    tracep->fullQData(oldp+16,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+20,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+36,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+38,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+42,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+62,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+74,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullBit(oldp+80,(vlSelf->clk));
    tracep->fullBit(oldp+81,(vlSelf->rst_n));
    tracep->fullIData(oldp+82,(vlSelf->I),32);
    tracep->fullQData(oldp+83,(vlSelf->pc),64);
    tracep->fullBit(oldp+85,(((0x6fU == (0x7fU & vlSelf->I)) 
                              | (0x17U == (0x7fU & vlSelf->I)))));
    tracep->fullBit(oldp+86,((1U & ((0x40U & vlSelf->I)
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
    tracep->fullBit(oldp+87,(((0x6fU == (0x7fU & vlSelf->I)) 
                              | (0x67U == (0x7fU & vlSelf->I)))));
    tracep->fullCData(oldp+88,((0x1fU & (vlSelf->I 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+89,((0x1fU & (vlSelf->I 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+90,((0x1fU & (vlSelf->I 
                                         >> 7U))),5);
    tracep->fullQData(oldp+91,((4ULL + vlSelf->pc)),64);
    tracep->fullQData(oldp+93,(((0U == (0x1fU & (vlSelf->I 
                                                 >> 0xfU)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->I 
                                           >> 0xfU))])),64);
    tracep->fullQData(oldp+95,(((0U == (0x1fU & (vlSelf->I 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->I 
                                           >> 0x14U))])),64);
    tracep->fullQData(oldp+97,(((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                 ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                     ? (4ULL + vlSelf->pc)
                                     : vlSelf->ysyx_22040386_TOP__DOT__src2)
                                 : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                     ? vlSelf->ysyx_22040386_TOP__DOT__src1
                                     : vlSelf->ysyx_22040386_TOP__DOT__sum))),64);
    tracep->fullQData(oldp+99,((((0x6fU == (0x7fU & vlSelf->I)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->I)))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__sum
                                 : (4ULL + vlSelf->pc))),64);
    tracep->fullIData(oldp+101,(5U),32);
    tracep->fullIData(oldp+102,(0x40U),32);
}
