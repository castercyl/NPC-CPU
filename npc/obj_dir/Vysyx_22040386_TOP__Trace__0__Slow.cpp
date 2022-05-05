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
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst_n", false,-1);
    tracep->declBus(c+85,"I", false,-1, 31,0);
    tracep->declQuad(c+86,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst_n", false,-1);
    tracep->declBus(c+85,"I", false,-1, 31,0);
    tracep->declQuad(c+86,"pc", false,-1, 63,0);
    tracep->declBit(c+88,"ALUAsrc", false,-1);
    tracep->declBit(c+1,"ALUBsrc", false,-1);
    tracep->declBit(c+89,"RegWrite", false,-1);
    tracep->declBit(c+90,"Branch", false,-1);
    tracep->declBit(c+91,"MemWrite", false,-1);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+92,"rd_reg_addr1", false,-1, 4,0);
    tracep->declBus(c+93,"rd_reg_addr2", false,-1, 4,0);
    tracep->declBus(c+94,"wr_reg_addr", false,-1, 4,0);
    tracep->declBus(c+95,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+96,"snpc", false,-1, 63,0);
    tracep->declQuad(c+98,"busA", false,-1, 63,0);
    tracep->declQuad(c+100,"busB", false,-1, 63,0);
    tracep->declQuad(c+3,"imm", false,-1, 63,0);
    tracep->declQuad(c+5,"src1", false,-1, 63,0);
    tracep->declQuad(c+7,"src2", false,-1, 63,0);
    tracep->declQuad(c+9,"sum", false,-1, 63,0);
    tracep->declQuad(c+102,"result", false,-1, 63,0);
    tracep->declQuad(c+100,"d_wdata", false,-1, 63,0);
    tracep->declQuad(c+11,"i_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declQuad(c+5,"src1", false,-1, 63,0);
    tracep->declQuad(c+7,"src2", false,-1, 63,0);
    tracep->declQuad(c+96,"snpc", false,-1, 63,0);
    tracep->declQuad(c+9,"sum", false,-1, 63,0);
    tracep->declQuad(c+102,"result", false,-1, 63,0);
    tracep->declBit(c+13,"SUBctr", false,-1);
    tracep->declBus(c+14,"OPctr", false,-1, 1,0);
    tracep->declQuad(c+15,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+102,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBus(c+85,"I", false,-1, 31,0);
    tracep->declBit(c+88,"ALUAsrc", false,-1);
    tracep->declBit(c+1,"ALUBsrc", false,-1);
    tracep->declBit(c+89,"RegWrite", false,-1);
    tracep->declBit(c+90,"Branch", false,-1);
    tracep->declBit(c+91,"MemWrite", false,-1);
    tracep->declBus(c+2,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+95,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"imm", false,-1, 63,0);
    tracep->declQuad(c+3,"reg_imm", false,-1, 63,0);
    tracep->declBit(c+88,"reg_ALUAsrc", false,-1);
    tracep->declBit(c+1,"reg_ALUBsrc", false,-1);
    tracep->declBit(c+89,"reg_RegWrite", false,-1);
    tracep->declBit(c+90,"reg_Branch", false,-1);
    tracep->declBit(c+91,"reg_MemWrite", false,-1);
    tracep->declBus(c+2,"reg_ALUctr", false,-1, 2,0);
    tracep->declBus(c+95,"reg_Wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+84,"rst_n", false,-1);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+90,"Branch", false,-1);
    tracep->declQuad(c+9,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+86,"pc", false,-1, 63,0);
    tracep->declQuad(c+96,"snpc", false,-1, 63,0);
    tracep->declQuad(c+104,"real_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"final_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+108,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+109,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+89,"wen", false,-1);
    tracep->declQuad(c+102,"wdata", false,-1, 63,0);
    tracep->declBus(c+94,"waddr", false,-1, 4,0);
    tracep->declBus(c+92,"raddr1", false,-1, 4,0);
    tracep->declBus(c+93,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+98,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+100,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+19+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+106,"real_wdata", false,-1, 63,0);
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
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__src1),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__sum),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__i_rdata),64);
    tracep->fullBit(oldp+13,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                    >> 2U))));
    tracep->fullCData(oldp+14,((3U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))),2);
    tracep->fullQData(oldp+15,((vlSelf->ysyx_22040386_TOP__DOT__src2 
                                ^ (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr) 
                                                         >> 2U))))))),64);
    tracep->fullQData(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
    tracep->fullQData(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+21,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullBit(oldp+83,(vlSelf->clk));
    tracep->fullBit(oldp+84,(vlSelf->rst_n));
    tracep->fullIData(oldp+85,(vlSelf->I),32);
    tracep->fullQData(oldp+86,(vlSelf->pc),64);
    tracep->fullBit(oldp+88,(((0x6fU == (0x7fU & vlSelf->I)) 
                              | (0x17U == (0x7fU & vlSelf->I)))));
    tracep->fullBit(oldp+89,((1U & ((0x40U & vlSelf->I)
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
    tracep->fullBit(oldp+90,(((0x6fU == (0x7fU & vlSelf->I)) 
                              | (0x67U == (0x7fU & vlSelf->I)))));
    tracep->fullBit(oldp+91,((0x23U == (0x7fU & vlSelf->I))));
    tracep->fullCData(oldp+92,((0x1fU & (vlSelf->I 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+93,((0x1fU & (vlSelf->I 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+94,((0x1fU & (vlSelf->I 
                                         >> 7U))),5);
    tracep->fullCData(oldp+95,(((0x4000U & vlSelf->I)
                                 ? 0U : ((0x2000U & vlSelf->I)
                                          ? ((0x1000U 
                                              & vlSelf->I)
                                              ? 0xffU
                                              : 0xfU)
                                          : ((0x1000U 
                                              & vlSelf->I)
                                              ? 3U : 1U)))),8);
    tracep->fullQData(oldp+96,((4ULL + vlSelf->pc)),64);
    tracep->fullQData(oldp+98,(((0U == (0x1fU & (vlSelf->I 
                                                 >> 0xfU)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->I 
                                           >> 0xfU))])),64);
    tracep->fullQData(oldp+100,(((0U == (0x1fU & (vlSelf->I 
                                                  >> 0x14U)))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->I 
                                            >> 0x14U))])),64);
    tracep->fullQData(oldp+102,(((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                  ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                      ? (4ULL + vlSelf->pc)
                                      : vlSelf->ysyx_22040386_TOP__DOT__src2)
                                  : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__src1
                                      : vlSelf->ysyx_22040386_TOP__DOT__sum))),64);
    tracep->fullQData(oldp+104,((((0x6fU == (0x7fU 
                                             & vlSelf->I)) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->I)))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__sum
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullQData(oldp+106,(((0U == (0x1fU & (vlSelf->I 
                                                  >> 7U)))
                                  ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->pc)
                                                 : vlSelf->ysyx_22040386_TOP__DOT__src2)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUctr))
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__src1
                                                 : vlSelf->ysyx_22040386_TOP__DOT__sum)))),64);
    tracep->fullIData(oldp+108,(5U),32);
    tracep->fullIData(oldp+109,(0x40U),32);
}
