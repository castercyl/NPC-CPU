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
    tracep->declBit(c+240,"i_TOP_clk", false,-1);
    tracep->declBit(c+241,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+242,"o_TOP_unkown_code", false,-1);
    tracep->declQuad(c+243,"o_TOP_pc", false,-1, 63,0);
    tracep->declBus(c+245,"o_TOP_inst", false,-1, 31,0);
    tracep->declBus(c+246,"o_TOP_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+247,"o_TOP_fw_EX_src2fw", false,-1, 1,0);
    tracep->declBus(c+248,"o_TOP_ID_EX_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+249,"o_TOP_ID_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+250,"o_TOP_EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+251,"o_TOP_EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+252,"o_TOP_Branch", false,-1);
    tracep->declBit(c+253,"o_TOP_jump_flag", false,-1);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+240,"i_TOP_clk", false,-1);
    tracep->declBit(c+241,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+242,"o_TOP_unkown_code", false,-1);
    tracep->declQuad(c+243,"o_TOP_pc", false,-1, 63,0);
    tracep->declBus(c+245,"o_TOP_inst", false,-1, 31,0);
    tracep->declBus(c+246,"o_TOP_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+247,"o_TOP_fw_EX_src2fw", false,-1, 1,0);
    tracep->declBus(c+248,"o_TOP_ID_EX_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+249,"o_TOP_ID_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+250,"o_TOP_EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+251,"o_TOP_EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+252,"o_TOP_Branch", false,-1);
    tracep->declBit(c+253,"o_TOP_jump_flag", false,-1);
    tracep->declBit(c+1,"TOP_Branch", false,-1);
    tracep->declBit(c+2,"TOP_RegWrite", false,-1);
    tracep->declBus(c+3,"TOP_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"TOP_dnpc", false,-1, 63,0);
    tracep->declQuad(c+6,"TOP_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+8,"TOP_load_use_flag", false,-1);
    tracep->declBit(c+9,"TOP_jump_flag", false,-1);
    tracep->declBit(c+10,"TOP_fw_ID_reg_rd1fw", false,-1);
    tracep->declBit(c+11,"TOP_fw_ID_reg_rd2fw", false,-1);
    tracep->declBus(c+12,"TOP_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+13,"TOP_fw_EX_src2fw", false,-1, 1,0);
    tracep->declBus(c+14,"IF_ID_reg_rd_addr1_i", false,-1, 4,0);
    tracep->declBus(c+15,"IF_ID_reg_rd_addr1_o", false,-1, 4,0);
    tracep->declBus(c+16,"IF_ID_reg_rd_addr2_i", false,-1, 4,0);
    tracep->declBus(c+17,"IF_ID_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declQuad(c+18,"IF_ID_pc_i", false,-1, 63,0);
    tracep->declQuad(c+20,"IF_ID_pc_o", false,-1, 63,0);
    tracep->declBus(c+22,"IF_ID_inst_i", false,-1, 31,0);
    tracep->declBus(c+23,"IF_ID_inst_o", false,-1, 31,0);
    tracep->declBit(c+24,"ID_EX_RegWrite_i", false,-1);
    tracep->declBit(c+25,"ID_EX_Word_op_i", false,-1);
    tracep->declBit(c+26,"ID_EX_MemRead_i", false,-1);
    tracep->declBit(c+27,"ID_EX_MemWrite_i", false,-1);
    tracep->declBit(c+28,"ID_EX_ALUBsrc_i", false,-1);
    tracep->declBit(c+29,"ID_EX_Auipc_i", false,-1);
    tracep->declBit(c+30,"ID_EX_RegWrite_o", false,-1);
    tracep->declBit(c+31,"ID_EX_Word_op_o", false,-1);
    tracep->declBit(c+32,"ID_EX_MemRead_o", false,-1);
    tracep->declBit(c+33,"ID_EX_MemWrite_o", false,-1);
    tracep->declBit(c+34,"ID_EX_ALUBsrc_o", false,-1);
    tracep->declBit(c+35,"ID_EX_Auipc_o", false,-1);
    tracep->declBit(c+36,"ID_EX_Jal_i", false,-1);
    tracep->declBit(c+37,"ID_EX_Jalr_i", false,-1);
    tracep->declBit(c+38,"ID_EX_Lui_i", false,-1);
    tracep->declBit(c+39,"ID_EX_Jal_o", false,-1);
    tracep->declBit(c+40,"ID_EX_Jalr_o", false,-1);
    tracep->declBit(c+41,"ID_EX_Lui_o", false,-1);
    tracep->declBus(c+42,"ID_EX_Branch_type_i", false,-1, 2,0);
    tracep->declBus(c+43,"ID_EX_mem_mask_i", false,-1, 2,0);
    tracep->declBus(c+44,"ID_EX_Branch_type_o", false,-1, 2,0);
    tracep->declBus(c+45,"ID_EX_mem_mask_o", false,-1, 2,0);
    tracep->declBus(c+46,"ID_EX_reg_wr_addr_i", false,-1, 4,0);
    tracep->declBus(c+15,"ID_EX_reg_rd_addr1_i", false,-1, 4,0);
    tracep->declBus(c+17,"ID_EX_reg_rd_addr2_i", false,-1, 4,0);
    tracep->declBus(c+47,"ID_EX_reg_wr_addr_o", false,-1, 4,0);
    tracep->declBus(c+48,"ID_EX_reg_rd_addr1_o", false,-1, 4,0);
    tracep->declBus(c+49,"ID_EX_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declBus(c+50,"ID_EX_ALUctr_i", false,-1, 5,0);
    tracep->declBus(c+51,"ID_EX_ALUctr_o", false,-1, 5,0);
    tracep->declQuad(c+52,"ID_EX_imm_i", false,-1, 63,0);
    tracep->declQuad(c+54,"ID_EX_reg_rd_data1_i", false,-1, 63,0);
    tracep->declQuad(c+56,"ID_EX_reg_rd_data2_i", false,-1, 63,0);
    tracep->declQuad(c+20,"ID_EX_pc_i", false,-1, 63,0);
    tracep->declQuad(c+58,"ID_EX_imm_o", false,-1, 63,0);
    tracep->declQuad(c+60,"ID_EX_reg_rd_data1_o", false,-1, 63,0);
    tracep->declQuad(c+62,"ID_EX_reg_rd_data2_o", false,-1, 63,0);
    tracep->declQuad(c+64,"ID_EX_pc_o", false,-1, 63,0);
    tracep->declBit(c+66,"ID_EX_unkown_code_i", false,-1);
    tracep->declBit(c+67,"ID_EX_unkown_code_o", false,-1);
    tracep->declBus(c+23,"ID_EX_inst_i", false,-1, 31,0);
    tracep->declBus(c+68,"ID_EX_inst_o", false,-1, 31,0);
    tracep->declQuad(c+64,"EX_MEM_pc_i", false,-1, 63,0);
    tracep->declQuad(c+69,"EX_MEM_pc_o", false,-1, 63,0);
    tracep->declQuad(c+71,"EX_MEM_snpc_i", false,-1, 63,0);
    tracep->declQuad(c+73,"EX_MEM_snpc_o", false,-1, 63,0);
    tracep->declBit(c+75,"EX_MEM_zero_i", false,-1);
    tracep->declBit(c+30,"EX_MEM_RegWrite_i", false,-1);
    tracep->declBit(c+33,"EX_MEM_MemWrite_i", false,-1);
    tracep->declBit(c+32,"EX_MEM_MemRead_i", false,-1);
    tracep->declBit(c+39,"EX_MEM_Jal_i", false,-1);
    tracep->declBit(c+40,"EX_MEM_Jalr_i", false,-1);
    tracep->declBit(c+76,"EX_MEM_zero_o", false,-1);
    tracep->declBit(c+77,"EX_MEM_RegWrite_o", false,-1);
    tracep->declBit(c+78,"EX_MEM_MemWrite_o", false,-1);
    tracep->declBit(c+79,"EX_MEM_MemRead_o", false,-1);
    tracep->declBit(c+80,"EX_MEM_Jal_o", false,-1);
    tracep->declBit(c+81,"EX_MEM_Jalr_o", false,-1);
    tracep->declBus(c+45,"EX_MEM_mem_mask_i", false,-1, 2,0);
    tracep->declBus(c+44,"EX_MEM_Branch_type_i", false,-1, 2,0);
    tracep->declBus(c+82,"EX_MEM_mem_mask_o", false,-1, 2,0);
    tracep->declBus(c+83,"EX_MEM_Branch_type_o", false,-1, 2,0);
    tracep->declBus(c+47,"EX_MEM_reg_wr_addr_i", false,-1, 4,0);
    tracep->declBus(c+49,"EX_MEM_reg_rd_addr2_i", false,-1, 4,0);
    tracep->declBus(c+84,"EX_MEM_reg_wr_addr_o", false,-1, 4,0);
    tracep->declBus(c+85,"EX_MEM_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declQuad(c+86,"EX_MEM_pc_add_imm_i", false,-1, 63,0);
    tracep->declQuad(c+88,"EX_MEM_ALUresult_i", false,-1, 63,0);
    tracep->declQuad(c+90,"EX_MEM_mem_wr_data_i", false,-1, 63,0);
    tracep->declQuad(c+92,"EX_MEM_reg_wr_data_i", false,-1, 63,0);
    tracep->declQuad(c+94,"EX_MEM_pc_add_imm_o", false,-1, 63,0);
    tracep->declQuad(c+96,"EX_MEM_ALUresult_o", false,-1, 63,0);
    tracep->declQuad(c+98,"EX_MEM_mem_wr_data_o", false,-1, 63,0);
    tracep->declQuad(c+100,"EX_MEM_reg_wr_data_o", false,-1, 63,0);
    tracep->declBit(c+67,"EX_MEM_unkown_code_i", false,-1);
    tracep->declBit(c+102,"EX_MEM_unkown_code_o", false,-1);
    tracep->declBus(c+68,"EX_MEM_inst_i", false,-1, 31,0);
    tracep->declBus(c+103,"EX_MEM_inst_o", false,-1, 31,0);
    tracep->declBit(c+77,"MEM_WB_RegWrite_i", false,-1);
    tracep->declBit(c+2,"MEM_WB_RegWrite_o", false,-1);
    tracep->declBus(c+84,"MEM_WB_reg_wr_addr_i", false,-1, 4,0);
    tracep->declBus(c+3,"MEM_WB_reg_wr_addr_o", false,-1, 4,0);
    tracep->declQuad(c+104,"MEM_WB_reg_wr_data_i", false,-1, 63,0);
    tracep->declQuad(c+6,"MEM_WB_reg_wr_data_o", false,-1, 63,0);
    tracep->declQuad(c+69,"MEM_WB_pc_i", false,-1, 63,0);
    tracep->declQuad(c+106,"MEM_WB_pc_o", false,-1, 63,0);
    tracep->declBit(c+102,"MEM_WB_unkown_code_i", false,-1);
    tracep->declBit(c+108,"MEM_WB_unkown_code_o", false,-1);
    tracep->declBus(c+103,"MEM_WB_inst_i", false,-1, 31,0);
    tracep->declBus(c+109,"MEM_WB_inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+31,"i_EX_Word_op", false,-1);
    tracep->declBit(c+34,"i_EX_ALUBsrc", false,-1);
    tracep->declBit(c+35,"i_EX_Auipc", false,-1);
    tracep->declBit(c+41,"i_EX_Lui", false,-1);
    tracep->declBus(c+51,"i_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+64,"i_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+58,"i_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+60,"i_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+62,"i_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+49,"i_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+47,"i_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+45,"i_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+30,"i_EX_RegWrite", false,-1);
    tracep->declBit(c+33,"i_EX_MemWrite", false,-1);
    tracep->declBit(c+32,"i_EX_MemRead", false,-1);
    tracep->declBit(c+39,"i_EX_Jal", false,-1);
    tracep->declBit(c+40,"i_EX_Jalr", false,-1);
    tracep->declBus(c+44,"i_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+12,"i_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+13,"i_fw_EX_src2fw", false,-1, 1,0);
    tracep->declQuad(c+6,"i_ex_MEM_WB_reg_wr_data_o", false,-1, 63,0);
    tracep->declQuad(c+100,"i_ex_EX_MEM_reg_wr_data_o", false,-1, 63,0);
    tracep->declBit(c+75,"o_EX_zero", false,-1);
    tracep->declQuad(c+86,"o_EX_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+88,"o_EX_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+90,"o_EX_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+92,"o_EX_reg_wr_data", false,-1, 63,0);
    tracep->declBus(c+49,"o_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+47,"o_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+45,"o_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+30,"o_EX_RegWrite", false,-1);
    tracep->declBit(c+33,"o_EX_MemWrite", false,-1);
    tracep->declBit(c+32,"o_EX_MemRead", false,-1);
    tracep->declBus(c+44,"o_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+39,"o_EX_Jal", false,-1);
    tracep->declBit(c+40,"o_EX_Jalr", false,-1);
    tracep->declQuad(c+71,"o_EX_snpc", false,-1, 63,0);
    tracep->declQuad(c+64,"o_EX_pc", false,-1, 63,0);
    tracep->declBit(c+67,"i_EX_unkown_code", false,-1);
    tracep->declBus(c+68,"i_EX_inst", false,-1, 31,0);
    tracep->declBit(c+67,"o_EX_unkown_code", false,-1);
    tracep->declBus(c+68,"o_EX_inst", false,-1, 31,0);
    tracep->declQuad(c+110,"EX_src1", false,-1, 63,0);
    tracep->declQuad(c+112,"EX_src2", false,-1, 63,0);
    tracep->declQuad(c+110,"EX_real_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+90,"EX_real_reg_rd_data2", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+31,"Word_op", false,-1);
    tracep->declQuad(c+110,"src1", false,-1, 63,0);
    tracep->declQuad(c+112,"src2", false,-1, 63,0);
    tracep->declBus(c+51,"ALUctr", false,-1, 5,0);
    tracep->declBit(c+75,"zero", false,-1);
    tracep->declQuad(c+88,"result", false,-1, 63,0);
    tracep->declBit(c+114,"cn", false,-1);
    tracep->declBit(c+115,"cn0", false,-1);
    tracep->declBit(c+116,"CF", false,-1);
    tracep->declBit(c+117,"OF", false,-1);
    tracep->declBit(c+118,"SF", false,-1);
    tracep->declBit(c+119,"SUBctr", false,-1);
    tracep->declBit(c+120,"SIGctr", false,-1);
    tracep->declBit(c+121,"less1", false,-1);
    tracep->declBus(c+122,"OPctr", false,-1, 3,0);
    tracep->declBus(c+123,"div32", false,-1, 31,0);
    tracep->declBus(c+124,"rem32", false,-1, 31,0);
    tracep->declQuad(c+125,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+127,"sum", false,-1, 63,0);
    tracep->declQuad(c+129,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+131,"mul", false,-1, 63,0);
    tracep->declQuad(c+133,"real_mul", false,-1, 63,0);
    tracep->declQuad(c+135,"div64", false,-1, 63,0);
    tracep->declQuad(c+137,"real_div", false,-1, 63,0);
    tracep->declQuad(c+139,"rem64", false,-1, 63,0);
    tracep->declQuad(c+141,"real_rem", false,-1, 63,0);
    tracep->declQuad(c+143,"shift_sig", false,-1, 63,0);
    tracep->declQuad(c+145,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_EX_MEM_inst ");
    tracep->declBit(c+240,"i_EX_MEM_clk", false,-1);
    tracep->declBit(c+241,"i_EX_MEM_rst_n", false,-1);
    tracep->declBit(c+9,"i_EX_MEM_jump_flag", false,-1);
    tracep->declBit(c+75,"i_EX_MEM_zero", false,-1);
    tracep->declBit(c+30,"i_EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+33,"i_EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+32,"i_EX_MEM_MemRead", false,-1);
    tracep->declBit(c+39,"i_EX_MEM_Jal", false,-1);
    tracep->declBit(c+40,"i_EX_MEM_Jalr", false,-1);
    tracep->declBus(c+44,"i_EX_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+45,"i_EX_MEM_mem_mask", false,-1, 2,0);
    tracep->declBus(c+49,"i_EX_MEM_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+47,"i_EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"i_EX_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+86,"i_EX_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+92,"i_EX_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+90,"i_EX_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+71,"i_EX_MEM_snpc", false,-1, 63,0);
    tracep->declQuad(c+64,"i_EX_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+76,"o_EX_MEM_zero", false,-1);
    tracep->declBit(c+77,"o_EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+78,"o_EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+79,"o_EX_MEM_MemRead", false,-1);
    tracep->declBit(c+80,"o_EX_MEM_Jal", false,-1);
    tracep->declBit(c+81,"o_EX_MEM_Jalr", false,-1);
    tracep->declBus(c+83,"o_EX_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+82,"o_EX_MEM_mem_mask", false,-1, 2,0);
    tracep->declBus(c+85,"o_EX_MEM_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+84,"o_EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"o_EX_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+94,"o_EX_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+100,"o_EX_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+98,"o_EX_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+73,"o_EX_MEM_snpc", false,-1, 63,0);
    tracep->declQuad(c+69,"o_EX_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+67,"i_EX_MEM_unkown_code", false,-1);
    tracep->declBus(c+68,"i_EX_MEM_inst", false,-1, 31,0);
    tracep->declBit(c+102,"o_EX_MEM_unkown_code", false,-1);
    tracep->declBus(c+103,"o_EX_MEM_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+240,"i_ID_clk", false,-1);
    tracep->declQuad(c+20,"i_ID_pc", false,-1, 63,0);
    tracep->declBus(c+23,"i_ID_inst", false,-1, 31,0);
    tracep->declBit(c+2,"i_ID_RegWrite", false,-1);
    tracep->declBus(c+3,"i_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"i_ID_reg_wr_data", false,-1, 63,0);
    tracep->declBus(c+15,"i_ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"i_ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+10,"i_fw_ID_reg_rd1fw", false,-1);
    tracep->declBit(c+11,"i_fw_ID_reg_rd2fw", false,-1);
    tracep->declBit(c+32,"i_id_ID_EX_MemRead_o", false,-1);
    tracep->declBus(c+47,"i_id_ID_EX_reg_wr_addr_o", false,-1, 4,0);
    tracep->declQuad(c+6,"i_id_MEM_WB_reg_wr_data_o", false,-1, 63,0);
    tracep->declBit(c+66,"o_ID_unkown_code", false,-1);
    tracep->declBus(c+23,"o_ID_inst", false,-1, 31,0);
    tracep->declBit(c+8,"o_load_use_flag", false,-1);
    tracep->declBit(c+24,"o_ID_RegWrite", false,-1);
    tracep->declBit(c+25,"o_ID_Word_op", false,-1);
    tracep->declBit(c+26,"o_ID_MemRead", false,-1);
    tracep->declBit(c+27,"o_ID_MemWrite", false,-1);
    tracep->declBit(c+28,"o_ID_ALUBsrc", false,-1);
    tracep->declBit(c+29,"o_ID_Auipc", false,-1);
    tracep->declBit(c+36,"o_ID_Jal", false,-1);
    tracep->declBit(c+37,"o_ID_Jalr", false,-1);
    tracep->declBit(c+38,"o_ID_Lui", false,-1);
    tracep->declBus(c+42,"o_ID_Branch_type", false,-1, 2,0);
    tracep->declBus(c+43,"o_ID_mem_mask", false,-1, 2,0);
    tracep->declBus(c+46,"o_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+50,"o_ID_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+52,"o_ID_imm", false,-1, 63,0);
    tracep->declQuad(c+54,"o_ID_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+56,"o_ID_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+20,"o_ID_pc", false,-1, 63,0);
    tracep->declBus(c+15,"o_ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"o_ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declQuad(c+147,"ID_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+149,"ID_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+43,"ID_funct3", false,-1, 2,0);
    tracep->declBus(c+151,"ID_opcode", false,-1, 6,0);
    tracep->declBus(c+152,"ID_funct7", false,-1, 6,0);
    tracep->declBus(c+15,"ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+153,"ID_ALUop", false,-1, 1,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+151,"opcode", false,-1, 6,0);
    tracep->declBus(c+152,"funct7", false,-1, 6,0);
    tracep->declBus(c+43,"funct3", false,-1, 2,0);
    tracep->declBus(c+23,"Inst", false,-1, 31,0);
    tracep->declBit(c+66,"unkown_code", false,-1);
    tracep->declBit(c+66,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+153,"ALUop", false,-1, 1,0);
    tracep->declBus(c+43,"funct3", false,-1, 2,0);
    tracep->declBus(c+152,"funct7", false,-1, 6,0);
    tracep->declBus(c+50,"ALUctr", false,-1, 5,0);
    tracep->declBus(c+154,"R_ctr", false,-1, 5,0);
    tracep->declBus(c+155,"I_ctr", false,-1, 5,0);
    tracep->declBus(c+156,"B_ctr", false,-1, 5,0);
    tracep->declBus(c+50,"reg_ALUctr", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_Load_use_control_inst ");
    tracep->declBit(c+32,"i_id_ID_EX_MemRead_o", false,-1);
    tracep->declBit(c+27,"i_id_MemWrite_o", false,-1);
    tracep->declBus(c+47,"i_id_ID_EX_reg_wr_addr_o", false,-1, 4,0);
    tracep->declBus(c+15,"i_id_reg_rd_addr1_i", false,-1, 4,0);
    tracep->declBus(c+17,"i_id_reg_rd_addr2_i", false,-1, 4,0);
    tracep->declBit(c+8,"o_load_use_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+254,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+255,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+240,"clk", false,-1);
    tracep->declBit(c+2,"wen", false,-1);
    tracep->declQuad(c+6,"wdata", false,-1, 63,0);
    tracep->declBus(c+3,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+17,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+147,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+149,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+157+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+221,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_ID_EX_inst ");
    tracep->declBit(c+240,"i_ID_EX_clk", false,-1);
    tracep->declBit(c+241,"i_ID_EX_rst_n", false,-1);
    tracep->declBit(c+8,"i_ID_EX_load_use_flag", false,-1);
    tracep->declBit(c+9,"i_ID_EX_jump_flag", false,-1);
    tracep->declBit(c+25,"i_ID_EX_Word_op", false,-1);
    tracep->declBit(c+24,"i_ID_EX_RegWrite", false,-1);
    tracep->declBit(c+27,"i_ID_EX_MemWrite", false,-1);
    tracep->declBit(c+28,"i_ID_EX_ALUBsrc", false,-1);
    tracep->declBit(c+26,"i_ID_EX_MemRead", false,-1);
    tracep->declBit(c+29,"i_ID_EX_Auipc", false,-1);
    tracep->declBit(c+36,"i_ID_EX_Jal", false,-1);
    tracep->declBit(c+37,"i_ID_EX_Jalr", false,-1);
    tracep->declBit(c+38,"i_ID_EX_Lui", false,-1);
    tracep->declBus(c+42,"i_ID_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+43,"i_ID_EX_mem_mask", false,-1, 2,0);
    tracep->declBus(c+46,"i_ID_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+50,"i_ID_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+20,"i_ID_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+52,"i_ID_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+54,"i_ID_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+56,"i_ID_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+15,"i_ID_EX_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"i_ID_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+66,"i_ID_EX_unkown_code", false,-1);
    tracep->declBus(c+23,"i_ID_EX_inst", false,-1, 31,0);
    tracep->declBit(c+31,"o_ID_EX_Word_op", false,-1);
    tracep->declBit(c+30,"o_ID_EX_RegWrite", false,-1);
    tracep->declBit(c+33,"o_ID_EX_MemWrite", false,-1);
    tracep->declBit(c+34,"o_ID_EX_ALUBsrc", false,-1);
    tracep->declBit(c+32,"o_ID_EX_MemRead", false,-1);
    tracep->declBit(c+35,"o_ID_EX_Auipc", false,-1);
    tracep->declBit(c+39,"o_ID_EX_Jal", false,-1);
    tracep->declBit(c+40,"o_ID_EX_Jalr", false,-1);
    tracep->declBit(c+41,"o_ID_EX_Lui", false,-1);
    tracep->declBus(c+44,"o_ID_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+45,"o_ID_EX_mem_mask", false,-1, 2,0);
    tracep->declBus(c+47,"o_ID_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+51,"o_ID_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+64,"o_ID_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+58,"o_ID_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+60,"o_ID_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+62,"o_ID_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+48,"o_ID_EX_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+49,"o_ID_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+67,"o_ID_EX_unkown_code", false,-1);
    tracep->declBus(c+68,"o_ID_EX_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+241,"i_IF_rst_n", false,-1);
    tracep->declBit(c+240,"i_IF_clk", false,-1);
    tracep->declBit(c+1,"i_IF_Branch", false,-1);
    tracep->declBit(c+8,"i_IF_load_use_flag", false,-1);
    tracep->declQuad(c+4,"i_IF_dnpc", false,-1, 63,0);
    tracep->declBus(c+14,"o_IF_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+16,"o_IF_reg_rd_addr2", false,-1, 4,0);
    tracep->declQuad(c+18,"o_IF_pc", false,-1, 63,0);
    tracep->declBus(c+22,"o_IF_inst", false,-1, 31,0);
    tracep->declQuad(c+223,"IF_inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+225,"IF_nextpc", false,-1, 63,0);
    tracep->declBit(c+227,"IF_load_use_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_IF_ID_inst ");
    tracep->declBit(c+240,"i_IF_ID_clk", false,-1);
    tracep->declBit(c+241,"i_IF_ID_rst_n", false,-1);
    tracep->declBit(c+9,"i_IF_ID_jump_flag", false,-1);
    tracep->declBit(c+8,"i_IF_ID_load_use_flag", false,-1);
    tracep->declBus(c+22,"i_IF_ID_inst", false,-1, 31,0);
    tracep->declQuad(c+18,"i_IF_ID_pc", false,-1, 63,0);
    tracep->declBus(c+14,"i_IF_ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+16,"i_IF_ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+23,"o_IF_ID_inst", false,-1, 31,0);
    tracep->declQuad(c+20,"o_IF_ID_pc", false,-1, 63,0);
    tracep->declBus(c+15,"o_IF_ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"o_IF_ID_reg_rd_addr2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+240,"i_MEM_clk", false,-1);
    tracep->declBit(c+80,"i_MEM_Jal", false,-1);
    tracep->declBit(c+81,"i_MEM_Jalr", false,-1);
    tracep->declBit(c+76,"i_MEM_zero", false,-1);
    tracep->declBit(c+79,"i_MEM_MemRead", false,-1);
    tracep->declBit(c+78,"i_MEM_MemWrite", false,-1);
    tracep->declBus(c+83,"i_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+82,"i_MEM_mem_mask", false,-1, 2,0);
    tracep->declQuad(c+98,"i_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+94,"i_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+96,"i_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+100,"i_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+73,"i_MEM_snpc", false,-1, 63,0);
    tracep->declQuad(c+69,"i_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+77,"i_mem_EX_MEM_RegWrite_o", false,-1);
    tracep->declBit(c+2,"i_mem_MEM_WB_RegWrite_o", false,-1);
    tracep->declBus(c+15,"i_mem_IF_ID_reg_rd_addr1_o", false,-1, 4,0);
    tracep->declBus(c+17,"i_mem_IF_ID_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declBus(c+48,"i_mem_ID_EX_reg_rd_addr1_o", false,-1, 4,0);
    tracep->declBus(c+49,"i_mem_ID_EX_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declBus(c+85,"i_mem_EX_MEM_reg_rd_addr2_o", false,-1, 4,0);
    tracep->declBus(c+84,"i_mem_EX_MEM_reg_wr_addr_o", false,-1, 4,0);
    tracep->declBus(c+3,"i_mem_MEM_WB_reg_wr_addr_o", false,-1, 4,0);
    tracep->declQuad(c+6,"i_mem_MEM_WB_reg_wr_data_o", false,-1, 63,0);
    tracep->declBit(c+77,"i_MEM_RegWrite", false,-1);
    tracep->declBus(c+84,"i_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"o_MEM_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"o_MEM_Branch", false,-1);
    tracep->declQuad(c+104,"o_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+77,"o_MEM_RegWrite", false,-1);
    tracep->declBus(c+84,"o_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+9,"o_jump_flag", false,-1);
    tracep->declBit(c+10,"o_fw_ID_reg_rd1fw", false,-1);
    tracep->declBit(c+11,"o_fw_ID_reg_rd2fw", false,-1);
    tracep->declBus(c+12,"o_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+13,"o_fw_EX_src2fw", false,-1, 1,0);
    tracep->declQuad(c+69,"o_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+102,"i_MEM_unkown_code", false,-1);
    tracep->declBus(c+103,"i_MEM_inst", false,-1, 31,0);
    tracep->declBit(c+102,"o_MEM_unkown_code", false,-1);
    tracep->declBus(c+103,"o_MEM_inst", false,-1, 31,0);
    tracep->declBit(c+228,"fw_MEM_disrcfw", false,-1);
    tracep->declQuad(c+229,"MEM_real_mem_wr_data", false,-1, 63,0);
    tracep->declBit(c+231,"zero_extend", false,-1);
    tracep->declQuad(c+232,"MEM_mem_rd_data", false,-1, 63,0);
    tracep->declQuad(c+234,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+232,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+236,"Wmask", false,-1, 7,0);
    tracep->declBus(c+236,"reg_Wmask", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+76,"zero", false,-1);
    tracep->declBit(c+80,"Jal", false,-1);
    tracep->declBit(c+81,"Jalr", false,-1);
    tracep->declBit(c+237,"result0", false,-1);
    tracep->declBus(c+83,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+1,"Branch", false,-1);
    tracep->declBit(c+238,"w1", false,-1);
    tracep->declBit(c+239,"w2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_FWcontrol_inst ");
    tracep->declBit(c+77,"i_fw_EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+78,"i_fw_EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+2,"i_fw_MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+84,"i_fw_EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+3,"i_fw_MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+85,"i_fw_EX_MEM_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+48,"i_fw_ID_EX_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+49,"i_fw_ID_EX_reg_rd_addr2", false,-1, 4,0);
    tracep->declBus(c+15,"i_fw_IF_ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+17,"i_fw_IF_ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+228,"o_fw_MEM_disrcfw", false,-1);
    tracep->declBit(c+10,"o_fw_ID_reg_rd1fw", false,-1);
    tracep->declBit(c+11,"o_fw_ID_reg_rd2fw", false,-1);
    tracep->declBus(c+12,"o_fw_EX_src1fw", false,-1, 1,0);
    tracep->declBus(c+13,"o_fw_EX_src2fw", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_jump_control_inst ");
    tracep->declBit(c+1,"i_mem_Branch", false,-1);
    tracep->declQuad(c+73,"i_mem_snpc", false,-1, 63,0);
    tracep->declQuad(c+4,"i_mem_dnpc", false,-1, 63,0);
    tracep->declBit(c+9,"o_jump_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_MEM_WB_inst ");
    tracep->declBit(c+240,"i_MEM_WB_clk", false,-1);
    tracep->declBit(c+241,"i_MEM_WB_rst_n", false,-1);
    tracep->declBit(c+77,"i_MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+84,"i_MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"i_MEM_WB_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+69,"i_MEM_WB_pc", false,-1, 63,0);
    tracep->declBit(c+2,"o_MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"o_MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"o_MEM_WB_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+106,"o_MEM_WB_pc", false,-1, 63,0);
    tracep->declBit(c+102,"i_MEM_WB_unkown_code", false,-1);
    tracep->declBus(c+103,"i_MEM_WB_inst", false,-1, 31,0);
    tracep->declBit(c+108,"o_MEM_WB_unkown_code", false,-1);
    tracep->declBus(c+109,"o_MEM_WB_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declQuad(c+6,"i_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"i_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"i_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+106,"i_WB_pc", false,-1, 63,0);
    tracep->declQuad(c+6,"o_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+2,"o_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"o_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+243,"o_WB_pc", false,-1, 63,0);
    tracep->declBit(c+108,"i_WB_unkown_code", false,-1);
    tracep->declBus(c+109,"i_WB_inst", false,-1, 31,0);
    tracep->declBit(c+242,"o_WB_unkown_code", false,-1);
    tracep->declBus(c+245,"o_WB_inst", false,-1, 31,0);
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
    tracep->fullBit(oldp+2,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o));
    tracep->fullCData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o),5);
    tracep->fullQData(oldp+4,(vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc),64);
    tracep->fullQData(oldp+6,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o),64);
    tracep->fullBit(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag));
    tracep->fullBit(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__TOP_jump_flag));
    tracep->fullBit(oldp+10,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o) 
                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                              & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
    tracep->fullBit(oldp+11,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o) 
                                == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                              & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
    tracep->fullCData(oldp+12,(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src1fw),2);
    tracep->fullCData(oldp+13,(vlSelf->ysyx_22040386_TOP__DOT__TOP_fw_EX_src2fw),2);
    tracep->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o),5);
    tracep->fullCData(oldp+16,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o),5);
    tracep->fullQData(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i),64);
    tracep->fullQData(oldp+20,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_o),64);
    tracep->fullIData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_i),32);
    tracep->fullIData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o),32);
    tracep->fullBit(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_i));
    tracep->fullBit(oldp+25,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                    >> 3U))));
    tracep->fullBit(oldp+26,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    tracep->fullBit(oldp+27,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    tracep->fullBit(oldp+28,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_i));
    tracep->fullBit(oldp+29,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    tracep->fullBit(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite_o));
    tracep->fullBit(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o));
    tracep->fullBit(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemRead_o));
    tracep->fullBit(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_MemWrite_o));
    tracep->fullBit(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc_o));
    tracep->fullBit(oldp+35,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Auipc_o));
    tracep->fullBit(oldp+36,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    tracep->fullBit(oldp+37,((IData)((0x67U == (0x707fU 
                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)))));
    tracep->fullBit(oldp+38,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))));
    tracep->fullBit(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jal_o));
    tracep->fullBit(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr_o));
    tracep->fullBit(oldp+41,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Lui_o));
    tracep->fullCData(oldp+42,(((0x63U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o))
                                 ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                          >> 0xcU))
                                 : 2U)),3);
    tracep->fullCData(oldp+43,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+44,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Branch_type_o),3);
    tracep->fullCData(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_mem_mask_o),3);
    tracep->fullCData(oldp+46,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_wr_addr_o),5);
    tracep->fullCData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr1_o),5);
    tracep->fullCData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_addr2_o),5);
    tracep->fullCData(oldp+50,(((2U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                 ? ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                     ? ((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                         ? ((0x2000U 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                             ? 0x27U
                                             : 0x37U)
                                         : ((0x2000U 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                             ? 0U : 0x20U))
                                     : (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr))
                                 : ((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop))
                                     ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr)
                                     : 0U))),6);
    tracep->fullCData(oldp+51,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o),6);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_i),64);
    tracep->fullQData(oldp+54,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o) 
                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                 & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                 : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))
                                     ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                    [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o]))),64);
    tracep->fullQData(oldp+56,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o) 
                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)) 
                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                 & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                 : ((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o))
                                     ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                    [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o]))),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm_o),64);
    tracep->fullQData(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1_o),64);
    tracep->fullQData(oldp+62,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2_o),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o),64);
    tracep->fullBit(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullBit(oldp+67,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_unkown_code_o));
    tracep->fullIData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_inst_o),32);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_o),64);
    tracep->fullQData(oldp+71,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__ID_EX_pc_o)),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_snpc_o),64);
    tracep->fullBit(oldp+75,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
    tracep->fullBit(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_zero_o));
    tracep->fullBit(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_RegWrite_o));
    tracep->fullBit(oldp+78,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o));
    tracep->fullBit(oldp+79,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o));
    tracep->fullBit(oldp+80,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o));
    tracep->fullBit(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jalr_o));
    tracep->fullCData(oldp+82,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o),3);
    tracep->fullCData(oldp+83,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Branch_type_o),3);
    tracep->fullCData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_addr_o),5);
    tracep->fullCData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o),5);
    tracep->fullQData(oldp+86,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_i),64);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_i),64);
    tracep->fullQData(oldp+90,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data2),64);
    tracep->fullQData(oldp+92,((((((- (QData)((IData)(
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
    tracep->fullQData(oldp+94,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm_o),64);
    tracep->fullQData(oldp+96,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o),64);
    tracep->fullQData(oldp+98,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o),64);
    tracep->fullQData(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o),64);
    tracep->fullBit(oldp+102,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_unkown_code_o));
    tracep->fullIData(oldp+103,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_inst_o),32);
    tracep->fullQData(oldp+104,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemRead_o)
                                  ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                  : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_wr_data_o)),64);
    tracep->fullQData(oldp+106,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_pc_o),64);
    tracep->fullBit(oldp+108,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_unkown_code_o));
    tracep->fullIData(oldp+109,(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_inst_o),32);
    tracep->fullQData(oldp+110,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1),64);
    tracep->fullQData(oldp+112,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
    tracep->fullBit(oldp+114,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+115,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+116,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                               ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                  >> 5U))));
    tracep->fullBit(oldp+117,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                               ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+118,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                             >> 0x3fU)))));
    tracep->fullBit(oldp+119,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                     >> 5U))));
    tracep->fullBit(oldp+120,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                     >> 4U))));
    tracep->fullBit(oldp+121,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))
                                      ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                  >> 0x3fU)) 
                                         ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                            ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                      : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                         ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o) 
                                            >> 5U))))));
    tracep->fullCData(oldp+122,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUctr_o))),4);
    tracep->fullIData(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
    tracep->fullIData(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
    tracep->fullQData(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+127,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+129,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
    tracep->fullQData(oldp+133,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->fullQData(oldp+135,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+137,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                  : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+139,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+141,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                  : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_real_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+143,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Word_op_o)
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
    tracep->fullQData(oldp+145,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullQData(oldp+147,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr1_o])),64);
    tracep->fullQData(oldp+149,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                 [vlSelf->ysyx_22040386_TOP__DOT__IF_ID_reg_rd_addr2_o])),64);
    tracep->fullCData(oldp+151,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)),7);
    tracep->fullCData(oldp+152,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+153,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
    tracep->fullCData(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
    tracep->fullCData(oldp+155,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
    tracep->fullCData(oldp+156,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                  ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                      ? 0x27U : 0x37U)
                                  : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst_o)
                                      ? 0U : 0x20U))),6);
    tracep->fullQData(oldp+157,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+159,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+161,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+163,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+165,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+167,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+169,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+171,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+173,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+175,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+177,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+179,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+181,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+183,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+185,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+187,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+189,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+191,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+193,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+195,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+197,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+199,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+201,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+203,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+205,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+207,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+209,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+211,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+213,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+215,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+217,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+219,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+221,(((0U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o))
                                  ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o)),64);
    tracep->fullQData(oldp+223,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
    tracep->fullQData(oldp+225,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)
                                  ? vlSelf->ysyx_22040386_TOP__DOT__TOP_dnpc
                                  : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc_i))),64);
    tracep->fullBit(oldp+227,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)) 
                               & (IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_load_use_flag))));
    tracep->fullBit(oldp+228,((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o) 
                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o)) 
                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o)) 
                               & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))));
    tracep->fullQData(oldp+229,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o) 
                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_reg_rd_addr2_o)) 
                                    & (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_RegWrite_o)) 
                                   & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_MemWrite_o)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_addr_o)))
                                  ? vlSelf->ysyx_22040386_TOP__DOT__MEM_WB_reg_wr_data_o
                                  : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_wr_data_o)),64);
    tracep->fullBit(oldp+231,((1U & (~ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o) 
                                        >> 2U)))));
    tracep->fullQData(oldp+232,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullQData(oldp+234,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullCData(oldp+236,(((4U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_mem_mask_o))
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
    tracep->fullBit(oldp+237,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult_o))));
    tracep->fullBit(oldp+238,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullBit(oldp+239,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_Jal_o) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullBit(oldp+240,(vlSelf->i_TOP_clk));
    tracep->fullBit(oldp+241,(vlSelf->i_TOP_rst_n));
    tracep->fullBit(oldp+242,(vlSelf->o_TOP_unkown_code));
    tracep->fullQData(oldp+243,(vlSelf->o_TOP_pc),64);
    tracep->fullIData(oldp+245,(vlSelf->o_TOP_inst),32);
    tracep->fullCData(oldp+246,(vlSelf->o_TOP_fw_EX_src1fw),2);
    tracep->fullCData(oldp+247,(vlSelf->o_TOP_fw_EX_src2fw),2);
    tracep->fullCData(oldp+248,(vlSelf->o_TOP_ID_EX_reg_rd_addr1),5);
    tracep->fullCData(oldp+249,(vlSelf->o_TOP_ID_EX_reg_rd_addr2),5);
    tracep->fullCData(oldp+250,(vlSelf->o_TOP_EX_MEM_reg_wr_addr),5);
    tracep->fullBit(oldp+251,(vlSelf->o_TOP_EX_MEM_RegWrite));
    tracep->fullBit(oldp+252,(vlSelf->o_TOP_Branch));
    tracep->fullBit(oldp+253,(vlSelf->o_TOP_jump_flag));
    tracep->fullIData(oldp+254,(5U),32);
    tracep->fullIData(oldp+255,(0x40U),32);
}
