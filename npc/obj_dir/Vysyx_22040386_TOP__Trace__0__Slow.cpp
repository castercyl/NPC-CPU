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
    tracep->declBit(c+160,"i_TOP_clk", false,-1);
    tracep->declBit(c+161,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+162,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+163,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+164,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+166,"o_TOP_Branch", false,-1);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+160,"i_TOP_clk", false,-1);
    tracep->declBit(c+161,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+162,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+163,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+164,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+166,"o_TOP_Branch", false,-1);
    tracep->declBit(c+1,"TOP_Branch", false,-1);
    tracep->declBit(c+2,"TOP_RegWrite", false,-1);
    tracep->declBus(c+3,"TOP_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"TOP_dnpc", false,-1, 63,0);
    tracep->declQuad(c+6,"TOP_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+8,"IF_ID_pc", false,-1, 63,0);
    tracep->declBus(c+10,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+2,"ID_EX_RegWrite", false,-1);
    tracep->declBit(c+11,"ID_EX_Word_op", false,-1);
    tracep->declBit(c+12,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+13,"ID_EX_MemWrite", false,-1);
    tracep->declBit(c+14,"ID_EX_ALUBsrc", false,-1);
    tracep->declBit(c+15,"ID_EX_Auipc", false,-1);
    tracep->declBit(c+16,"ID_EX_Jal", false,-1);
    tracep->declBit(c+17,"ID_EX_Jalr", false,-1);
    tracep->declBit(c+18,"ID_EX_Lui", false,-1);
    tracep->declBus(c+19,"ID_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+20,"ID_EX_mem_mask", false,-1, 2,0);
    tracep->declBus(c+3,"ID_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+21,"ID_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+22,"ID_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+24,"ID_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+26,"ID_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_EX_pc", false,-1, 63,0);
    tracep->declBit(c+28,"EX_MEM_zero", false,-1);
    tracep->declBit(c+2,"EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+13,"EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+12,"EX_MEM_MemRead", false,-1);
    tracep->declBit(c+16,"EX_MEM_Jal", false,-1);
    tracep->declBit(c+17,"EX_MEM_Jalr", false,-1);
    tracep->declBus(c+20,"EX_MEM_mem_mask", false,-1, 2,0);
    tracep->declBus(c+19,"EX_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+3,"EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+29,"EX_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+31,"EX_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+26,"EX_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+33,"EX_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"MEM_WB_reg_wr_data", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+11,"i_EX_Word_op", false,-1);
    tracep->declBit(c+14,"i_EX_ALUBsrc", false,-1);
    tracep->declBit(c+15,"i_EX_Auipc", false,-1);
    tracep->declBit(c+18,"i_EX_Lui", false,-1);
    tracep->declBus(c+21,"i_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+8,"i_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+22,"i_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+24,"i_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+26,"i_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+3,"i_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+20,"i_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+2,"i_EX_RegWrite", false,-1);
    tracep->declBit(c+13,"i_EX_MemWrite", false,-1);
    tracep->declBit(c+12,"i_EX_MemRead", false,-1);
    tracep->declBit(c+16,"i_EX_Jal", false,-1);
    tracep->declBit(c+17,"i_EX_Jalr", false,-1);
    tracep->declBus(c+19,"i_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+28,"o_EX_zero", false,-1);
    tracep->declQuad(c+29,"o_EX_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+31,"o_EX_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+26,"o_EX_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+33,"o_EX_reg_wr_data", false,-1, 63,0);
    tracep->declBus(c+3,"o_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+20,"o_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+2,"o_EX_RegWrite", false,-1);
    tracep->declBit(c+13,"o_EX_MemWrite", false,-1);
    tracep->declBit(c+12,"o_EX_MemRead", false,-1);
    tracep->declBus(c+19,"o_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+16,"o_EX_Jal", false,-1);
    tracep->declBit(c+17,"o_EX_Jalr", false,-1);
    tracep->declQuad(c+26,"EX_real_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+24,"EX_src1", false,-1, 63,0);
    tracep->declQuad(c+35,"EX_src2", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_snpc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+11,"Word_op", false,-1);
    tracep->declQuad(c+24,"src1", false,-1, 63,0);
    tracep->declQuad(c+35,"src2", false,-1, 63,0);
    tracep->declBus(c+21,"ALUctr", false,-1, 5,0);
    tracep->declBit(c+28,"zero", false,-1);
    tracep->declQuad(c+31,"result", false,-1, 63,0);
    tracep->declBit(c+39,"cn", false,-1);
    tracep->declBit(c+40,"cn0", false,-1);
    tracep->declBit(c+41,"CF", false,-1);
    tracep->declBit(c+42,"OF", false,-1);
    tracep->declBit(c+43,"SF", false,-1);
    tracep->declBit(c+44,"SUBctr", false,-1);
    tracep->declBit(c+45,"SIGctr", false,-1);
    tracep->declBit(c+46,"less1", false,-1);
    tracep->declBus(c+47,"OPctr", false,-1, 3,0);
    tracep->declBus(c+48,"div32", false,-1, 31,0);
    tracep->declBus(c+49,"rem32", false,-1, 31,0);
    tracep->declQuad(c+50,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+52,"sum", false,-1, 63,0);
    tracep->declQuad(c+54,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+56,"mul", false,-1, 63,0);
    tracep->declQuad(c+58,"real_mul", false,-1, 63,0);
    tracep->declQuad(c+60,"div64", false,-1, 63,0);
    tracep->declQuad(c+62,"real_div", false,-1, 63,0);
    tracep->declQuad(c+64,"rem64", false,-1, 63,0);
    tracep->declQuad(c+66,"real_rem", false,-1, 63,0);
    tracep->declQuad(c+68,"shift_sig", false,-1, 63,0);
    tracep->declQuad(c+70,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+160,"i_ID_clk", false,-1);
    tracep->declQuad(c+8,"i_ID_pc", false,-1, 63,0);
    tracep->declBus(c+10,"i_ID_inst", false,-1, 31,0);
    tracep->declBit(c+2,"i_ID_RegWrite", false,-1);
    tracep->declBus(c+3,"i_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"i_ID_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+162,"o_ID_unkown_code", false,-1);
    tracep->declBit(c+2,"o_ID_RegWrite", false,-1);
    tracep->declBit(c+11,"o_ID_Word_op", false,-1);
    tracep->declBit(c+12,"o_ID_MemRead", false,-1);
    tracep->declBit(c+13,"o_ID_MemWrite", false,-1);
    tracep->declBit(c+14,"o_ID_ALUBsrc", false,-1);
    tracep->declBit(c+15,"o_ID_Auipc", false,-1);
    tracep->declBit(c+16,"o_ID_Jal", false,-1);
    tracep->declBit(c+17,"o_ID_Jalr", false,-1);
    tracep->declBit(c+18,"o_ID_Lui", false,-1);
    tracep->declBus(c+19,"o_ID_Branch_type", false,-1, 2,0);
    tracep->declBus(c+20,"o_ID_mem_mask", false,-1, 2,0);
    tracep->declBus(c+3,"o_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+21,"o_ID_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+22,"o_ID_imm", false,-1, 63,0);
    tracep->declQuad(c+24,"o_ID_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+26,"o_ID_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+8,"o_ID_pc", false,-1, 63,0);
    tracep->declBus(c+20,"ID_funct3", false,-1, 2,0);
    tracep->declBus(c+72,"ID_opcode", false,-1, 6,0);
    tracep->declBus(c+73,"ID_funct7", false,-1, 6,0);
    tracep->declBus(c+74,"ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+75,"ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+76,"ID_ALUop", false,-1, 1,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+72,"opcode", false,-1, 6,0);
    tracep->declBus(c+73,"funct7", false,-1, 6,0);
    tracep->declBus(c+20,"funct3", false,-1, 2,0);
    tracep->declBus(c+10,"Inst", false,-1, 31,0);
    tracep->declBit(c+162,"unkown_code", false,-1);
    tracep->declBit(c+77,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+76,"ALUop", false,-1, 1,0);
    tracep->declBus(c+20,"funct3", false,-1, 2,0);
    tracep->declBus(c+73,"funct7", false,-1, 6,0);
    tracep->declBus(c+21,"ALUctr", false,-1, 5,0);
    tracep->declBus(c+78,"R_ctr", false,-1, 5,0);
    tracep->declBus(c+79,"I_ctr", false,-1, 5,0);
    tracep->declBus(c+80,"B_ctr", false,-1, 5,0);
    tracep->declBus(c+21,"reg_ALUctr", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+167,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+2,"wen", false,-1);
    tracep->declQuad(c+6,"wdata", false,-1, 63,0);
    tracep->declBus(c+3,"waddr", false,-1, 4,0);
    tracep->declBus(c+74,"raddr1", false,-1, 4,0);
    tracep->declBus(c+75,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+24,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+26,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+81+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+145,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+161,"i_IF_rst_n", false,-1);
    tracep->declBit(c+160,"i_IF_clk", false,-1);
    tracep->declBit(c+1,"i_IF_Branch", false,-1);
    tracep->declQuad(c+4,"i_IF_dnpc", false,-1, 63,0);
    tracep->declQuad(c+8,"o_IF_pc", false,-1, 63,0);
    tracep->declBus(c+10,"o_IF_inst", false,-1, 31,0);
    tracep->declQuad(c+147,"IF_inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+149,"IF_nextpc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+160,"i_MEM_clk", false,-1);
    tracep->declBit(c+16,"i_MEM_Jal", false,-1);
    tracep->declBit(c+17,"i_MEM_Jalr", false,-1);
    tracep->declBit(c+28,"i_MEM_zero", false,-1);
    tracep->declBit(c+12,"i_MEM_MemRead", false,-1);
    tracep->declBit(c+13,"i_MEM_MemWrite", false,-1);
    tracep->declBus(c+19,"i_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+20,"i_MEM_mem_mask", false,-1, 2,0);
    tracep->declQuad(c+26,"i_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+29,"i_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+31,"i_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+33,"i_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"i_MEM_RegWrite", false,-1);
    tracep->declBus(c+3,"i_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"o_MEM_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"o_MEM_Branch", false,-1);
    tracep->declQuad(c+6,"o_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"o_MEM_RegWrite", false,-1);
    tracep->declBus(c+3,"o_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+151,"zero_extend", false,-1);
    tracep->declQuad(c+152,"MEM_mem_rd_data", false,-1, 63,0);
    tracep->declQuad(c+154,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+152,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+156,"Wmask", false,-1, 7,0);
    tracep->declBus(c+156,"reg_Wmask", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+28,"zero", false,-1);
    tracep->declBit(c+16,"Jal", false,-1);
    tracep->declBit(c+17,"Jalr", false,-1);
    tracep->declBit(c+157,"result0", false,-1);
    tracep->declBus(c+19,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+1,"Branch", false,-1);
    tracep->declBit(c+158,"w1", false,-1);
    tracep->declBit(c+159,"w2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declQuad(c+6,"i_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"i_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"i_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"o_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"o_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"o_WB_reg_wr_addr", false,-1, 4,0);
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
    tracep->fullBit(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch));
    tracep->fullBit(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite));
    tracep->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 7U))),5);
    tracep->fullQData(oldp+4,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)),64);
    tracep->fullQData(oldp+6,(((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                : (((((- (QData)((IData)(
                                                         ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                      & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
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
                                      & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))),64);
    tracep->fullQData(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc),64);
    tracep->fullIData(oldp+10,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst),32);
    tracep->fullBit(oldp+11,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 3U))));
    tracep->fullBit(oldp+12,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+13,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc));
    tracep->fullBit(oldp+15,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+16,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr));
    tracep->fullBit(oldp+18,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullCData(oldp+19,(((0x63U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                 ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0xcU))
                                 : 2U)),3);
    tracep->fullCData(oldp+20,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+21,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
    tracep->fullQData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm),64);
    tracep->fullQData(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1),64);
    tracep->fullQData(oldp+26,(((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x14U))])),64);
    tracep->fullBit(oldp+28,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult),64);
    tracep->fullQData(oldp+33,((((((- (QData)((IData)(
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr))))) 
                                   & (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)) 
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
                                   & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
    tracep->fullQData(oldp+37,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)),64);
    tracep->fullBit(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+41,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                 >> 5U))));
    tracep->fullBit(oldp+42,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+43,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+44,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
    tracep->fullBit(oldp+45,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 4U))));
    tracep->fullBit(oldp+46,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                     ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                 >> 0x3fU)) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                     : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                           >> 5U))))));
    tracep->fullCData(oldp+47,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
    tracep->fullIData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
    tracep->fullIData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
    tracep->fullQData(oldp+58,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                 : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->fullQData(oldp+60,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+62,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                 : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+64,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+66,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                 : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+68,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                  >> 0x1fU))))))
                                 : (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1 
                                                                  >> 0x3fU)))))))),64);
    tracep->fullQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullCData(oldp+72,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)),7);
    tracep->fullCData(oldp+73,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+74,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+75,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
    tracep->fullBit(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullCData(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
    tracep->fullCData(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
    tracep->fullCData(oldp+80,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                     ? 0x27U : 0x37U)
                                 : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                     ? 0U : 0x20U))),6);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+107,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+115,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+117,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+121,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+127,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+129,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+133,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+135,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+137,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+139,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+141,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+143,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+145,(((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 7U)))
                                  ? 0ULL : ((3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                             : ((((
                                                   (- (QData)((IData)(
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
                                                   & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))))),64);
    tracep->fullQData(oldp+147,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
    tracep->fullQData(oldp+149,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)
                                  ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                      ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                      : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm)
                                  : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc))),64);
    tracep->fullBit(oldp+151,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 0xeU)))));
    tracep->fullQData(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullQData(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullCData(oldp+156,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                  ? 0xffU : (0xffU 
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
                                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))))))),8);
    tracep->fullBit(oldp+157,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))));
    tracep->fullBit(oldp+158,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullBit(oldp+159,(((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullBit(oldp+160,(vlSelf->i_TOP_clk));
    tracep->fullBit(oldp+161,(vlSelf->i_TOP_rst_n));
    tracep->fullBit(oldp+162,(vlSelf->o_TOP_unkown_code));
    tracep->fullIData(oldp+163,(vlSelf->o_TOP_inst),32);
    tracep->fullQData(oldp+164,(vlSelf->o_TOP_pc),64);
    tracep->fullBit(oldp+166,(vlSelf->o_TOP_Branch));
    tracep->fullIData(oldp+167,(5U),32);
    tracep->fullIData(oldp+168,(0x40U),32);
}
