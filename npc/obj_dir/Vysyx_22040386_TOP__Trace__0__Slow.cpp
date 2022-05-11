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
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+122,"rst_n", false,-1);
    tracep->declBit(c+123,"unkown_code", false,-1);
    tracep->declBus(c+124,"Inst", false,-1, 31,0);
    tracep->declQuad(c+125,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+122,"rst_n", false,-1);
    tracep->declBit(c+123,"unkown_code", false,-1);
    tracep->declBus(c+124,"Inst", false,-1, 31,0);
    tracep->declQuad(c+125,"pc", false,-1, 63,0);
    tracep->declBit(c+127,"Branch", false,-1);
    tracep->declBit(c+128,"MemWrite", false,-1);
    tracep->declBit(c+129,"Reg_to_Mem", false,-1);
    tracep->declBit(c+130,"Result_to_Pc", false,-1);
    tracep->declBit(c+131,"Auipc", false,-1);
    tracep->declBit(c+132,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+133,"Lui", false,-1);
    tracep->declBit(c+129,"MemRead", false,-1);
    tracep->declBit(c+134,"Word_op", false,-1);
    tracep->declBus(c+135,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+136,"mask_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 5,0);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+137,"snpc", false,-1, 63,0);
    tracep->declQuad(c+139,"wr_reg_data", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_data_addr", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+141,"wr_mem_data", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+134,"Word_op", false,-1);
    tracep->declBit(c+132,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBus(c+135,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 5,0);
    tracep->declQuad(c+125,"pc", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declBit(c+127,"Branch", false,-1);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declBit(c+17,"zero", false,-1);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+134,"Word_op", false,-1);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 5,0);
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
    tracep->declBus(c+26,"OPctr", false,-1, 3,0);
    tracep->declBus(c+27,"div32", false,-1, 31,0);
    tracep->declBus(c+28,"rem32", false,-1, 31,0);
    tracep->declQuad(c+29,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+31,"sum", false,-1, 63,0);
    tracep->declQuad(c+33,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+35,"mul", false,-1, 63,0);
    tracep->declQuad(c+143,"real_mul", false,-1, 63,0);
    tracep->declQuad(c+37,"div64", false,-1, 63,0);
    tracep->declQuad(c+145,"real_div", false,-1, 63,0);
    tracep->declQuad(c+39,"rem64", false,-1, 63,0);
    tracep->declQuad(c+147,"real_rem", false,-1, 63,0);
    tracep->declQuad(c+149,"shift_sig", false,-1, 63,0);
    tracep->declQuad(c+41,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+17,"zero", false,-1);
    tracep->declBit(c+132,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+43,"result0", false,-1);
    tracep->declBus(c+135,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+127,"Branch", false,-1);
    tracep->declBit(c+44,"w1", false,-1);
    tracep->declBit(c+151,"w2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBus(c+124,"Inst", false,-1, 31,0);
    tracep->declQuad(c+139,"wr_reg_data", false,-1, 63,0);
    tracep->declBit(c+123,"unkown_code", false,-1);
    tracep->declBit(c+134,"Word_op", false,-1);
    tracep->declBit(c+129,"MemRead", false,-1);
    tracep->declBit(c+128,"MemWrite", false,-1);
    tracep->declBit(c+129,"Reg_to_Mem", false,-1);
    tracep->declBit(c+130,"Result_to_Pc", false,-1);
    tracep->declBit(c+131,"Auipc", false,-1);
    tracep->declBit(c+132,"Jal", false,-1);
    tracep->declBit(c+1,"Jalr", false,-1);
    tracep->declBit(c+133,"Lui", false,-1);
    tracep->declBus(c+135,"Branch_type", false,-1, 2,0);
    tracep->declBus(c+136,"mask_type", false,-1, 2,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 5,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+7,"src1", false,-1, 63,0);
    tracep->declQuad(c+9,"src2", false,-1, 63,0);
    tracep->declQuad(c+141,"wr_mem_data", false,-1, 63,0);
    tracep->declBus(c+45,"ALUop", false,-1, 1,0);
    tracep->declBit(c+46,"RegWrite", false,-1);
    tracep->declBit(c+47,"ALUBsrc", false,-1);
    tracep->declBus(c+136,"funct3", false,-1, 2,0);
    tracep->declBus(c+152,"funct7", false,-1, 6,0);
    tracep->declBus(c+153,"opcode", false,-1, 6,0);
    tracep->declQuad(c+7,"busA", false,-1, 63,0);
    tracep->declQuad(c+141,"busB", false,-1, 63,0);
    tracep->declBit(c+46,"reg_RegWrite", false,-1);
    tracep->declBit(c+128,"reg_MemWrite", false,-1);
    tracep->declBit(c+47,"reg_ALUBsrc", false,-1);
    tracep->declBit(c+129,"reg_Reg_to_Mem", false,-1);
    tracep->declBit(c+130,"reg_Result_to_Pc", false,-1);
    tracep->declBus(c+135,"reg_Branch_type", false,-1, 2,0);
    tracep->declQuad(c+5,"reg_imm", false,-1, 63,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+153,"opcode", false,-1, 6,0);
    tracep->declBus(c+152,"funct7", false,-1, 6,0);
    tracep->declBus(c+136,"funct3", false,-1, 2,0);
    tracep->declBus(c+124,"Inst", false,-1, 31,0);
    tracep->declBit(c+123,"unkown_code", false,-1);
    tracep->declBit(c+48,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+45,"ALUop", false,-1, 1,0);
    tracep->declBus(c+136,"funct3", false,-1, 2,0);
    tracep->declBus(c+152,"funct7", false,-1, 6,0);
    tracep->declBus(c+2,"ALUctr", false,-1, 5,0);
    tracep->declBus(c+49,"R_ctr", false,-1, 5,0);
    tracep->declBus(c+50,"I_ctr", false,-1, 5,0);
    tracep->declBus(c+154,"B_ctr", false,-1, 5,0);
    tracep->declBus(c+2,"reg_ALUctr", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+170,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+46,"wen", false,-1);
    tracep->declQuad(c+139,"wdata", false,-1, 63,0);
    tracep->declBus(c+155,"waddr", false,-1, 4,0);
    tracep->declBus(c+156,"raddr1", false,-1, 4,0);
    tracep->declBus(c+157,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+7,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+141,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+51+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+158,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+122,"rst_n", false,-1);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+127,"Branch", false,-1);
    tracep->declQuad(c+3,"dnpc", false,-1, 63,0);
    tracep->declQuad(c+125,"pc", false,-1, 63,0);
    tracep->declQuad(c+137,"snpc", false,-1, 63,0);
    tracep->declBus(c+124,"Inst", false,-1, 31,0);
    tracep->declQuad(c+160,"real_pc", false,-1, 63,0);
    tracep->declQuad(c+115,"inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+117,"final_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+128,"MemWrite", false,-1);
    tracep->declBit(c+129,"MemRead", false,-1);
    tracep->declBus(c+136,"mask_type", false,-1, 2,0);
    tracep->declQuad(c+141,"wr_mem_data", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_data_addr", false,-1, 63,0);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declBit(c+162,"zero_extend", false,-1);
    tracep->declQuad(c+119,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+15,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+163,"Wmask", false,-1, 7,0);
    tracep->declBus(c+163,"reg_Wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declBit(c+131,"Auipc", false,-1);
    tracep->declBit(c+130,"Result_to_Pc", false,-1);
    tracep->declBit(c+129,"Reg_to_Mem", false,-1);
    tracep->declBit(c+133,"Lui", false,-1);
    tracep->declQuad(c+15,"rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+137,"snpc", false,-1, 63,0);
    tracep->declQuad(c+13,"pc_imm", false,-1, 63,0);
    tracep->declQuad(c+5,"imm", false,-1, 63,0);
    tracep->declQuad(c+11,"result", false,-1, 63,0);
    tracep->declQuad(c+139,"wr_reg_data", false,-1, 63,0);
    tracep->declQuad(c+164,"pc_add", false,-1, 63,0);
    tracep->declQuad(c+166,"real_result", false,-1, 63,0);
    tracep->declQuad(c+168,"final_result", false,-1, 63,0);
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
    tracep->fullCData(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
    tracep->fullQData(oldp+3,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                ? vlSelf->ysyx_22040386_TOP__DOT__result
                                : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_imm),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__src2),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__result),64);
    tracep->fullQData(oldp+13,(vlSelf->ysyx_22040386_TOP__DOT__pc_imm),64);
    tracep->fullQData(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullBit(oldp+17,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
    tracep->fullBit(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+20,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                 >> 5U))));
    tracep->fullBit(oldp+21,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
    tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 4U))));
    tracep->fullBit(oldp+25,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                     ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                 >> 0x3fU)) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                     : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                           >> 5U))))));
    tracep->fullCData(oldp+26,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
    tracep->fullIData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
    tracep->fullIData(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
    tracep->fullQData(oldp+37,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2)),64);
    tracep->fullQData(oldp+39,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2)),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullBit(oldp+43,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result))));
    tracep->fullBit(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullCData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ALUop),2);
    tracep->fullBit(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_RegWrite));
    tracep->fullBit(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__reg_ALUBsrc));
    tracep->fullBit(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullCData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
    tracep->fullCData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+107,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+115,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__inst_rdata),64);
    tracep->fullQData(oldp+117,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__final_pc),64);
    tracep->fullQData(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullBit(oldp+121,(vlSelf->clk));
    tracep->fullBit(oldp+122,(vlSelf->rst_n));
    tracep->fullBit(oldp+123,(vlSelf->unkown_code));
    tracep->fullIData(oldp+124,(vlSelf->Inst),32);
    tracep->fullQData(oldp+125,(vlSelf->pc),64);
    tracep->fullBit(oldp+127,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->Inst)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))));
    tracep->fullBit(oldp+128,((0x23U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+129,((3U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+130,((((0x17U == (0x7fU & vlSelf->Inst)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->Inst))) 
                               | (IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->Inst))))));
    tracep->fullBit(oldp+131,((0x17U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+132,((0x6fU == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+133,((0x37U == (0x7fU & vlSelf->Inst))));
    tracep->fullBit(oldp+134,((1U & (vlSelf->Inst >> 3U))));
    tracep->fullCData(oldp+135,(((0x63U == (0x7fU & vlSelf->Inst))
                                  ? (7U & (vlSelf->Inst 
                                           >> 0xcU))
                                  : 2U)),3);
    tracep->fullCData(oldp+136,((7U & (vlSelf->Inst 
                                       >> 0xcU))),3);
    tracep->fullQData(oldp+137,((4ULL + vlSelf->pc)),64);
    tracep->fullQData(oldp+139,(((0x37U == (0x7fU & vlSelf->Inst))
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
                                          : vlSelf->ysyx_22040386_TOP__DOT__result)))),64);
    tracep->fullQData(oldp+141,(((0U == (0x1fU & (vlSelf->Inst 
                                                  >> 0x14U)))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->Inst 
                                            >> 0x14U))])),64);
    tracep->fullQData(oldp+143,(((8U & vlSelf->Inst)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->fullQData(oldp+145,(((8U & vlSelf->Inst)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                  : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2))),64);
    tracep->fullQData(oldp+147,(((8U & vlSelf->Inst)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                  : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA, vlSelf->ysyx_22040386_TOP__DOT__src2))),64);
    tracep->fullQData(oldp+149,(((8U & vlSelf->Inst)
                                  ? (- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA 
                                                                   >> 0x1fU))))))
                                  : (- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__busA 
                                                                   >> 0x3fU)))))))),64);
    tracep->fullBit(oldp+151,(((0x6fU == (0x7fU & vlSelf->Inst)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullCData(oldp+152,((vlSelf->Inst >> 0x19U)),7);
    tracep->fullCData(oldp+153,((0x7fU & vlSelf->Inst)),7);
    tracep->fullCData(oldp+154,(((0x4000U & vlSelf->Inst)
                                  ? ((0x2000U & vlSelf->Inst)
                                      ? 0x27U : 0x37U)
                                  : ((0x2000U & vlSelf->Inst)
                                      ? 0U : 0x20U))),6);
    tracep->fullCData(oldp+155,((0x1fU & (vlSelf->Inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+156,((0x1fU & (vlSelf->Inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+157,((0x1fU & (vlSelf->Inst 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+158,(((0U == (0x1fU & (vlSelf->Inst 
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
                                                  : vlSelf->ysyx_22040386_TOP__DOT__result))))),64);
    tracep->fullQData(oldp+160,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->Inst)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1)))
                                  ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__Jalr)
                                      ? vlSelf->ysyx_22040386_TOP__DOT__result
                                      : vlSelf->ysyx_22040386_TOP__DOT__pc_imm)
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullBit(oldp+162,((1U & (~ (vlSelf->Inst 
                                        >> 0xeU)))));
    tracep->fullCData(oldp+163,(((0x4000U & vlSelf->Inst)
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
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result))))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->Inst)
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result)))
                                                  : 
                                                 ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__result)))))))),8);
    tracep->fullQData(oldp+164,(((0x17U == (0x7fU & vlSelf->Inst))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__pc_imm
                                  : (4ULL + vlSelf->pc))),64);
    tracep->fullQData(oldp+166,(((((0x17U == (0x7fU 
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
                                  : vlSelf->ysyx_22040386_TOP__DOT__result)),64);
    tracep->fullQData(oldp+168,(((3U == (0x7fU & vlSelf->Inst))
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
                                      : vlSelf->ysyx_22040386_TOP__DOT__result))),64);
    tracep->fullIData(oldp+170,(5U),32);
    tracep->fullIData(oldp+171,(0x40U),32);
}
