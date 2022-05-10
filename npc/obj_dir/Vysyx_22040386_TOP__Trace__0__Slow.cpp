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
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst_n", false,-1);
    tracep->declBit(c+115,"unkown_code", false,-1);
    tracep->declBus(c+116,"Inst", false,-1, 31,0);
    tracep->declQuad(c+117,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst_n", false,-1);
    tracep->declBit(c+115,"unkown_code", false,-1);
    tracep->declBus(c+116,"Inst", false,-1, 31,0);
    tracep->declQuad(c+117,"pc", false,-1, 63,0);
    tracep->declBit(c+119,"Branch", false,-1);
    tracep->declBit(c+120,"MemWrite", false,-1);
    tracep->declBit(c+121,"Reg_to_Mem", false,-1);
    tracep->declBit(c+122,"Result_to_Pc", false,-1);
    tracep->declBit(c+123,"Auipc", false,-1);
    tracep->declBit(c+124,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+125,"Lui", false,-1);
    tracep->declBit(c+121,"MemRead", false,-1);
    tracep->declBit(c+126,"Word_op", false,-1);
    tracep->declBus(c+127,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+128,"mask_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 4,0);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+129,"snpc", false,-1, 63,0);
    tracep->declQuad(c+131,"wr_reg_data", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_data_addr", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+133,"wr_mem_data", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+126,"Word_op", false,-1);
    tracep->declBit(c+124,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBus(c+127,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 4,0);
    tracep->declQuad(c+117,"pc", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declBit(c+119,"Branch", false,-1);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declBit(c+17,"zero", false,-1);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+126,"Word_op", false,-1);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 4,0);
    tracep->declBit(c+17,"zero", false,-1);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declBit(c+18,"cn", false,-1);
    tracep->declBit(c+19,"cn0", false,-1);
    tracep->declBit(c+20,"CF", false,-1);
    tracep->declBit(c+21,"OF", false,-1);
    tracep->declBit(c+22,"SF", false,-1);
    tracep->declBit(c+23,"SUBctr", false,-1);
    tracep->declBit(c+24,"SIGctr", false,-1);
    tracep->declBit(c+25,"less1", false,-1);
    tracep->declBus(c+26,"OPctr", false,-1, 2,0);
    tracep->declQuad(c+27,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+29,"sum", false,-1, 63,0);
    tracep->declQuad(c+31,"real_sum", false,-1, 63,0);
    tracep->declQuad(c+33,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+11,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+17,"zero", false,-1);
    tracep->declBit(c+124,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+35,"result0", false,-1);
    tracep->declBus(c+127,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+119,"Branch", false,-1);
    tracep->declBit(c+36,"w1", false,-1);
    tracep->declBit(c+135,"w2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBus(c+116,"Inst", false,-1, 31,0);
    tracep->declQuad(c+131,"wr_reg_data", false,-1, 63,0);
    tracep->declBit(c+115,"unkown_code", false,-1);
    tracep->declBit(c+126,"Word_op", false,-1);
    tracep->declBit(c+121,"MemRead", false,-1);
    tracep->declBit(c+120,"MemWrite", false,-1);
    tracep->declBit(c+121,"Reg_to_Mem", false,-1);
    tracep->declBit(c+122,"Result_to_Pc", false,-1);
    tracep->declBit(c+123,"Auipc", false,-1);
    tracep->declBit(c+124,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+125,"Lui", false,-1);
    tracep->declBus(c+127,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+128,"mask_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 4,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declQuad(c+133,"wr_mem_data", false,-1, 63,0);
    tracep->declBus(c+37,"ALUop", false,-1, 1,0);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBit(c+39,"ALUBsrc", false,-1);
    tracep->declBus(c+128,"funct3", false,-1, 2,0);
    tracep->declBus(c+136,"funct7", false,-1, 6,0);
    tracep->declBus(c+137,"opcode", false,-1, 6,0);
    tracep->declQuad(c+7,"busA", false,-1, 63,0);
    tracep->declQuad(c+133,"busB", false,-1, 63,0);
    tracep->declBit(c+38,"reg_RegWrite", false,-1);
    tracep->declBit(c+120,"reg_MemWrite", false,-1);
    tracep->declBit(c+39,"reg_ALUBsrc", false,-1);
    tracep->declBit(c+121,"reg_Reg_to_Mem", false,-1);
    tracep->declBit(c+122,"reg_Result_to_Pc", false,-1);
    tracep->declBus(c+127,"reg_Branch_type", false,-1, 2,0);
    tracep->declQuad(c+5,"reg_imm", false,-1, 63,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+137,"opcode", false,-1, 6,0);
    tracep->declBus(c+136,"funct7", false,-1, 6,0);
    tracep->declBus(c+128,"funct3", false,-1, 2,0);
    tracep->declBus(c+116,"Inst", false,-1, 31,0);
    tracep->declBit(c+115,"unkown_code", false,-1);
    tracep->declBit(c+40,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+37,"ALUop", false,-1, 1,0);
    tracep->declBus(c+128,"funct3", false,-1, 2,0);
    tracep->declBus(c+136,"funct7", false,-1, 6,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 4,0);
    tracep->declBus(c+41,"R_ctr", false,-1, 4,0);
    tracep->declBus(c+42,"I_ctr", false,-1, 4,0);
    tracep->declBus(c+138,"B_ctr", false,-1, 4,0);
    tracep->declBus(c+2,"reg_ALUctr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+154,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+38,"wen", false,-1);
    tracep->declQuad(c+131,"wdata", false,-1, 63,0);
    tracep->declBus(c+139,"waddr", false,-1, 4,0);
    tracep->declBus(c+140,"raddr1", false,-1, 4,0);
    tracep->declBus(c+141,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+7,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+133,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+43+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+142,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+114,"rst_n", false,-1);
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+119,"Branch", false,-1);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+117,"pc", false,-1, 63,0);
    tracep->declQuad(c+129,"snpc", false,-1, 63,0);
    tracep->declBus(c+116,"Inst", false,-1, 31,0);
    tracep->declQuad(c+144,"real_pc", false,-1, 63,0);
    tracep->declQuad(c+107,"inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+109,"final_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+120,"MemWrite", false,-1);
    tracep->declBit(c+121,"MemRead", false,-1);
    tracep->declBus(c+128,"mask_type", false,-1, 2,0);
    tracep->declQuad(c+133,"wr_mem_data", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_data_addr", false,-1, 63,0);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declBit(c+146,"zero_extend", false,-1);
    tracep->declQuad(c+111,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+15,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+147,"Wmask", false,-1, 7,0);
    tracep->declBus(c+147,"reg_Wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declBit(c+123,"Auipc", false,-1);
    tracep->declBit(c+122,"Result_to_Pc", false,-1);
    tracep->declBit(c+121,"Reg_to_Mem", false,-1);
    tracep->declBit(c+125,"Lui", false,-1);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+129,"snpc", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declQuad(c+131,"wr_reg_data", false,-1, 63,0);
    tracep->declQuad(c+148,"pc_add", false,-1, 63,0);
    tracep->declQuad(c+150,"real_result", false,-1, 63,0);
    tracep->declQuad(c+152,"final_result", false,-1, 63,0);
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
    tracep->fullBit(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__Jalr));
    tracep->fullCData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),5);
    tracep->fullQData(oldp+3,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result
                                : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullQData(oldp+13,(vlSelf->ysyx_22040386_TOP__DOT__pc_imm),64);
    tracep->fullQData(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullBit(oldp+17,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_sum))))));
    tracep->fullBit(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+20,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                 >> 4U))));
    tracep->fullBit(oldp+21,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 4U))));
    tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 3U))));
    tracep->fullBit(oldp+25,((1U & ((8U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                     ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                 >> 0x3fU)) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                     : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                           >> 4U))))));
    tracep->fullCData(oldp+26,((7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),3);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_sum),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullBit(oldp+35,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result))));
    tracep->fullBit(oldp+36,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullCData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ALUop),2);
    tracep->fullBit(oldp+38,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_RegWrite));
    tracep->fullBit(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc));
    tracep->fullBit(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullCData(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),5);
    tracep->fullCData(oldp+42,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),5);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+107,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__inst_rdata),64);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullBit(oldp+113,(vlSelf->clk));
    tracep->fullBit(oldp+114,(vlSelf->rst_n));
    tracep->fullBit(oldp+115,(vlSelf->unkown_code));
    tracep->fullIData(oldp+116,(vlSelf->Inst),32);
    tracep->fullQData(oldp+117,(vlSelf->pc),64);
    tracep->fullBit(oldp+119,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->Inst)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))));
    tracep->fullBit(oldp+120,((0x23U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+121,((3U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+122,((((0x17U == (0x7fU & vlSelf->Inst)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->Inst))) 
                               | (IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->Inst))))));
    tracep->fullBit(oldp+123,((0x17U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+124,((0x6fU == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+125,((0x37U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+126,((1U & (vlSelf->Inst >> 3U))));
    tracep->fullCData(oldp+127,(((0x63U == (0x7fU & vlSelf->Inst))
                                  ? (7U & (vlSelf->Inst 
                                           >> 0xcU))
                                  : 2U)),3);
    tracep->fullCData(oldp+128,((7U & (vlSelf->Inst 
                                       >> 0xcU))),3);
    tracep->fullQData(oldp+129,((4ULL + vlSelf->pc)),64);
    tracep->fullQData(oldp+131,(((0x37U == (0x7fU & vlSelf->Inst))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm
                                  : ((3U == (0x7fU 
                                             & vlSelf->Inst))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                      : ((((0x17U == 
                                            (0x7fU 
                                             & vlSelf->Inst)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Inst))) 
                                          | (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Inst))))
                                          ? ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->Inst))
                                              ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                              : (4ULL 
                                                 + vlSelf->pc))
                                          : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)))),64);
    tracep->fullQData(oldp+133,(((0U == (0x1fU & (vlSelf->Inst 
                                                  >> 0x14U)))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->Inst 
                                            >> 0x14U))])),64);
    tracep->fullBit(oldp+135,(((0x6fU == (0x7fU & vlSelf->Inst)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullCData(oldp+136,((vlSelf->Inst >> 0x19U)),7);
    tracep->fullCData(oldp+137,((0x7fU & vlSelf->Inst)),7);
    tracep->fullCData(oldp+138,(((0x4000U & vlSelf->Inst)
                                  ? ((0x2000U & vlSelf->Inst)
                                      ? 0x17U : 0x1fU)
                                  : ((0x2000U & vlSelf->Inst)
                                      ? 0U : 0x10U))),5);
    tracep->fullCData(oldp+139,((0x1fU & (vlSelf->Inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+140,((0x1fU & (vlSelf->Inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+141,((0x1fU & (vlSelf->Inst 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+142,(((0U == (0x1fU & (vlSelf->Inst 
                                                  >> 7U)))
                                  ? 0ULL : ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->Inst))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm
                                             : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Inst))
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                 : 
                                                ((((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Inst)) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Inst))) 
                                                  | (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Inst))))
                                                  ? 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Inst))
                                                   ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->pc))
                                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result))))),64);
    tracep->fullQData(oldp+144,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->Inst)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))
                                  ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                      ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result
                                      : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullBit(oldp+146,((1U & (~ (vlSelf->Inst 
                                        >> 0xeU)))));
    tracep->fullCData(oldp+147,(((0x4000U & vlSelf->Inst)
                                  ? 0xffU : (0xffU 
                                             & ((0x2000U 
                                                 & vlSelf->Inst)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->Inst)
                                                  ? 0xffU
                                                  : 
                                                 ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result))))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->Inst)
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)))
                                                  : 
                                                 ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)))))))),8);
    tracep->fullQData(oldp+148,(((0x17U == (0x7fU & vlSelf->Inst))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullQData(oldp+150,(((((0x17U == (0x7fU 
                                              & vlSelf->Inst)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->Inst))) 
                                  | (IData)((0x67U 
                                             == (0x707fU 
                                                 & vlSelf->Inst))))
                                  ? ((0x17U == (0x7fU 
                                                & vlSelf->Inst))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                      : (4ULL + vlSelf->pc))
                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result)),64);
    tracep->fullQData(oldp+152,(((3U == (0x7fU & vlSelf->Inst))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                  : ((((0x17U == (0x7fU 
                                                  & vlSelf->Inst)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->Inst))) 
                                      | (IData)((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Inst))))
                                      ? ((0x17U == 
                                          (0x7fU & vlSelf->Inst))
                                          ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                          : (4ULL + vlSelf->pc))
                                      : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result))),64);
    tracep->fullIData(oldp+154,(5U),32);
    tracep->fullIData(oldp+155,(0x40U),32);
}
