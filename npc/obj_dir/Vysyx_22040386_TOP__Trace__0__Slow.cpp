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
    tracep->declBit(c+209,"i_TOP_clk", false,-1);
    tracep->declBit(c+210,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+211,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+212,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+213,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+215,"o_TOP_Branch", false,-1);
    tracep->declBit(c+216,"o_TOP_mret", false,-1);
    tracep->declBit(c+217,"o_TOP_ecall", false,-1);
    tracep->declQuad(c+218,"o_TOP_csr_dnpc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+209,"i_TOP_clk", false,-1);
    tracep->declBit(c+210,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+211,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+212,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+213,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+215,"o_TOP_Branch", false,-1);
    tracep->declBit(c+216,"o_TOP_mret", false,-1);
    tracep->declBit(c+217,"o_TOP_ecall", false,-1);
    tracep->declQuad(c+218,"o_TOP_csr_dnpc", false,-1, 63,0);
    tracep->declQuad(c+1,"IF_ID_pc", false,-1, 63,0);
    tracep->declBus(c+3,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+4,"ID_EX_RegWrite", false,-1);
    tracep->declBit(c+5,"ID_EX_Word_op", false,-1);
    tracep->declBit(c+6,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+7,"ID_EX_MemWrite", false,-1);
    tracep->declBit(c+8,"ID_EX_ALUBsrc", false,-1);
    tracep->declBit(c+9,"ID_EX_Auipc", false,-1);
    tracep->declBit(c+10,"ID_EX_Jal", false,-1);
    tracep->declBit(c+11,"ID_EX_Jalr", false,-1);
    tracep->declBit(c+12,"ID_EX_Lui", false,-1);
    tracep->declBus(c+13,"ID_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+14,"ID_EX_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+15,"ID_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+16,"ID_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+17,"ID_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+21,"ID_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+1,"ID_EX_pc", false,-1, 63,0);
    tracep->declBit(c+23,"ID_EX_ecall", false,-1);
    tracep->declBit(c+24,"ID_EX_mret", false,-1);
    tracep->declBit(c+25,"ID_CSR_csr_ren", false,-1);
    tracep->declBit(c+26,"ID_CSR_csr_wen", false,-1);
    tracep->declBus(c+27,"ID_CSR_csr_state", false,-1, 2,0);
    tracep->declBus(c+28,"ID_CSR_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+28,"ID_CSR_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+29,"ID_CSR_csr_wr_data", false,-1, 63,0);
    tracep->declBit(c+25,"CSR_EX_csr_reg_write", false,-1);
    tracep->declBit(c+31,"CSR_EX_timer_interreupt", false,-1);
    tracep->declQuad(c+32,"CSR_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+34,"CSR_EX_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+36,"EX_MEM_zero", false,-1);
    tracep->declBit(c+4,"EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+7,"EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+6,"EX_MEM_MemRead", false,-1);
    tracep->declBit(c+10,"EX_MEM_Jal", false,-1);
    tracep->declBit(c+11,"EX_MEM_Jalr", false,-1);
    tracep->declBit(c+31,"EX_MEM_timer_interreupt", false,-1);
    tracep->declBus(c+14,"EX_MEM_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+13,"EX_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+15,"EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"EX_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+39,"EX_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+21,"EX_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+41,"EX_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+1,"EX_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+23,"EX_MEM_ecall", false,-1);
    tracep->declBit(c+24,"EX_MEM_mret", false,-1);
    tracep->declBit(c+25,"EX_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"EX_MEM_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+34,"EX_MEM_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+4,"MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+15,"MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"MEM_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+25,"MEM_WB_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"MEM_WB_csr_r_data", false,-1, 63,0);
    tracep->declBit(c+45,"MEM_IF_Branch", false,-1);
    tracep->declQuad(c+46,"MEM_IF_dnpc", false,-1, 63,0);
    tracep->declBit(c+48,"WB_ID_RegWrite", false,-1);
    tracep->declBus(c+15,"WB_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"WB_ID_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+7,"MEM_CLINT_wen", false,-1);
    tracep->declQuad(c+21,"MEM_CLINT_wr_data", false,-1, 63,0);
    tracep->declQuad(c+39,"MEM_CLINT_addr", false,-1, 63,0);
    tracep->declBit(c+6,"MEM_CLINT_ren", false,-1);
    tracep->declQuad(c+51,"MEM_CLINT_rd_data", false,-1, 63,0);
    tracep->declBit(c+53,"CLINT_CSR_stop", false,-1);
    tracep->pushNamePrefix("Clint_inst ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"rst_n", false,-1);
    tracep->declQuad(c+21,"i_Clint_wr_data", false,-1, 63,0);
    tracep->declQuad(c+39,"i_Clint_addr", false,-1, 63,0);
    tracep->declBit(c+7,"i_Clint_wen", false,-1);
    tracep->declBit(c+6,"i_Clint_ren", false,-1);
    tracep->declQuad(c+51,"o_Clint_rd_data", false,-1, 63,0);
    tracep->declBit(c+53,"o_Clint_stop", false,-1);
    tracep->declQuad(c+54,"mtime", false,-1, 63,0);
    tracep->declQuad(c+56,"mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+58,"mtime_newvalue", false,-1, 63,0);
    tracep->declQuad(c+60,"mtimecmp_newvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_inst ");
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+210,"rst_n", false,-1);
    tracep->declBus(c+27,"csr_state_i", false,-1, 2,0);
    tracep->declBus(c+28,"csr_w_addr_i", false,-1, 11,0);
    tracep->declBit(c+26,"csr_wen_i", false,-1);
    tracep->declQuad(c+29,"csr_w_data_i", false,-1, 63,0);
    tracep->declBus(c+28,"csr_r_addr_i", false,-1, 11,0);
    tracep->declBit(c+25,"csr_ren_i", false,-1);
    tracep->declQuad(c+1,"csr_pc_i", false,-1, 63,0);
    tracep->declBit(c+53,"i_Csr_clint_stop", false,-1);
    tracep->declBit(c+25,"csr_reg_write_o", false,-1);
    tracep->declQuad(c+32,"csr_r_data_o", false,-1, 63,0);
    tracep->declQuad(c+34,"csr_dnpc_o", false,-1, 63,0);
    tracep->declBit(c+31,"o_Csr_timer_interreupt", false,-1);
    tracep->declQuad(c+62,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+64,"mepc", false,-1, 63,0);
    tracep->declQuad(c+66,"mcause", false,-1, 63,0);
    tracep->declQuad(c+68,"mtevc", false,-1, 63,0);
    tracep->declQuad(c+70,"mie", false,-1, 63,0);
    tracep->declQuad(c+72,"mip", false,-1, 63,0);
    tracep->declBit(c+31,"timer_interreupt_flag", false,-1);
    tracep->declQuad(c+74,"mip_newvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+5,"i_EX_Word_op", false,-1);
    tracep->declBit(c+8,"i_EX_ALUBsrc", false,-1);
    tracep->declBit(c+9,"i_EX_Auipc", false,-1);
    tracep->declBit(c+12,"i_EX_Lui", false,-1);
    tracep->declBus(c+14,"i_EX_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+16,"i_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+1,"i_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"i_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+19,"i_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+21,"i_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+15,"i_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+4,"i_EX_RegWrite", false,-1);
    tracep->declBit(c+7,"i_EX_MemWrite", false,-1);
    tracep->declBit(c+6,"i_EX_MemRead", false,-1);
    tracep->declBit(c+10,"i_EX_Jal", false,-1);
    tracep->declBit(c+11,"i_EX_Jalr", false,-1);
    tracep->declBus(c+13,"i_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+36,"o_EX_zero", false,-1);
    tracep->declQuad(c+37,"o_EX_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+39,"o_EX_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+21,"o_EX_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+41,"o_EX_reg_wr_data", false,-1, 63,0);
    tracep->declBus(c+15,"o_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+14,"o_EX_FUNCT3", false,-1, 2,0);
    tracep->declBit(c+4,"o_EX_RegWrite", false,-1);
    tracep->declBit(c+7,"o_EX_MemWrite", false,-1);
    tracep->declBit(c+6,"o_EX_MemRead", false,-1);
    tracep->declBus(c+13,"o_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+10,"o_EX_Jal", false,-1);
    tracep->declBit(c+11,"o_EX_Jalr", false,-1);
    tracep->declBit(c+31,"i_EX_timer_interreupt", false,-1);
    tracep->declBit(c+23,"i_EX_ecall", false,-1);
    tracep->declBit(c+24,"i_EX_mret", false,-1);
    tracep->declBit(c+25,"i_EX_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"i_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+34,"i_EX_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+31,"o_EX_timer_interreupt", false,-1);
    tracep->declBit(c+23,"o_EX_ecall", false,-1);
    tracep->declBit(c+24,"o_EX_mret", false,-1);
    tracep->declBit(c+25,"o_EX_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"o_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+34,"o_EX_csr_dnpc", false,-1, 63,0);
    tracep->declQuad(c+1,"o_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_src1", false,-1, 63,0);
    tracep->declQuad(c+76,"EX_src2", false,-1, 63,0);
    tracep->declQuad(c+78,"EX_snpc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+5,"Word_op", false,-1);
    tracep->declQuad(c+19,"src1", false,-1, 63,0);
    tracep->declQuad(c+76,"src2", false,-1, 63,0);
    tracep->declBus(c+16,"ALUctr", false,-1, 5,0);
    tracep->declBit(c+36,"zero", false,-1);
    tracep->declQuad(c+39,"result", false,-1, 63,0);
    tracep->declBit(c+80,"cn", false,-1);
    tracep->declBit(c+81,"cn0", false,-1);
    tracep->declBit(c+82,"CF", false,-1);
    tracep->declBit(c+83,"OF", false,-1);
    tracep->declBit(c+84,"SF", false,-1);
    tracep->declBit(c+85,"SUBctr", false,-1);
    tracep->declBit(c+86,"SIGctr", false,-1);
    tracep->declBit(c+87,"less1", false,-1);
    tracep->declBus(c+88,"OPctr", false,-1, 3,0);
    tracep->declBus(c+89,"div32", false,-1, 31,0);
    tracep->declBus(c+90,"rem32", false,-1, 31,0);
    tracep->declQuad(c+91,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+93,"sum", false,-1, 63,0);
    tracep->declQuad(c+95,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+97,"mul", false,-1, 63,0);
    tracep->declQuad(c+99,"real_mul", false,-1, 63,0);
    tracep->declQuad(c+101,"div64", false,-1, 63,0);
    tracep->declQuad(c+103,"real_div", false,-1, 63,0);
    tracep->declQuad(c+105,"rem64", false,-1, 63,0);
    tracep->declQuad(c+107,"real_rem", false,-1, 63,0);
    tracep->declQuad(c+109,"shift_sig", false,-1, 63,0);
    tracep->declQuad(c+111,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+209,"i_ID_clk", false,-1);
    tracep->declQuad(c+1,"i_ID_pc", false,-1, 63,0);
    tracep->declBus(c+3,"i_ID_inst", false,-1, 31,0);
    tracep->declBit(c+48,"i_ID_RegWrite", false,-1);
    tracep->declBus(c+15,"i_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"i_ID_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+211,"o_ID_unkown_code", false,-1);
    tracep->declBit(c+4,"o_ID_RegWrite", false,-1);
    tracep->declBit(c+5,"o_ID_Word_op", false,-1);
    tracep->declBit(c+6,"o_ID_MemRead", false,-1);
    tracep->declBit(c+7,"o_ID_MemWrite", false,-1);
    tracep->declBit(c+8,"o_ID_ALUBsrc", false,-1);
    tracep->declBit(c+9,"o_ID_Auipc", false,-1);
    tracep->declBit(c+10,"o_ID_Jal", false,-1);
    tracep->declBit(c+11,"o_ID_Jalr", false,-1);
    tracep->declBit(c+12,"o_ID_Lui", false,-1);
    tracep->declBus(c+14,"o_ID_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+13,"o_ID_Branch_type", false,-1, 2,0);
    tracep->declBus(c+15,"o_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+16,"o_ID_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+17,"o_ID_imm", false,-1, 63,0);
    tracep->declQuad(c+19,"o_ID_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+21,"o_ID_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+1,"o_ID_pc", false,-1, 63,0);
    tracep->declBit(c+23,"o_ID_ecall", false,-1);
    tracep->declBit(c+24,"o_ID_mret", false,-1);
    tracep->declBit(c+25,"o_ID_csr_ren", false,-1);
    tracep->declBit(c+26,"o_ID_csr_wen", false,-1);
    tracep->declBus(c+27,"o_ID_csr_state", false,-1, 2,0);
    tracep->declBus(c+28,"o_ID_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+28,"o_ID_csr_raddr", false,-1, 11,0);
    tracep->declQuad(c+29,"o_ID_csr_wr_data", false,-1, 63,0);
    tracep->declBus(c+14,"ID_funct3", false,-1, 2,0);
    tracep->declBus(c+113,"ID_opcode", false,-1, 6,0);
    tracep->declBus(c+114,"ID_funct7", false,-1, 6,0);
    tracep->declBus(c+115,"ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+116,"ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+117,"ID_csrrw", false,-1);
    tracep->declBit(c+118,"ID_csrrs", false,-1);
    tracep->declBit(c+119,"ID_csrrsi", false,-1);
    tracep->declBit(c+120,"ID_csrrwi", false,-1);
    tracep->declBit(c+23,"ID_ecall", false,-1);
    tracep->declBit(c+24,"ID_mret", false,-1);
    tracep->declQuad(c+121,"ID_csr_imm", false,-1, 63,0);
    tracep->declBus(c+123,"ID_ALUop", false,-1, 1,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+113,"opcode", false,-1, 6,0);
    tracep->declBus(c+114,"funct7", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"Inst", false,-1, 31,0);
    tracep->declBit(c+211,"unkown_code", false,-1);
    tracep->declBit(c+124,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+123,"ALUop", false,-1, 1,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+114,"funct7", false,-1, 6,0);
    tracep->declBus(c+16,"ALUctr", false,-1, 5,0);
    tracep->declBus(c+125,"R_ctr", false,-1, 5,0);
    tracep->declBus(c+126,"I_ctr", false,-1, 5,0);
    tracep->declBus(c+127,"B_ctr", false,-1, 5,0);
    tracep->declBus(c+16,"reg_ALUctr", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+221,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+209,"clk", false,-1);
    tracep->declBit(c+48,"wen", false,-1);
    tracep->declQuad(c+49,"wdata", false,-1, 63,0);
    tracep->declBus(c+15,"waddr", false,-1, 4,0);
    tracep->declBus(c+115,"raddr1", false,-1, 4,0);
    tracep->declBus(c+116,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+19,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+21,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+128+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+192,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+210,"i_IF_rst_n", false,-1);
    tracep->declBit(c+209,"i_IF_clk", false,-1);
    tracep->declBit(c+45,"i_IF_Branch", false,-1);
    tracep->declQuad(c+46,"i_IF_dnpc", false,-1, 63,0);
    tracep->declQuad(c+1,"o_IF_pc", false,-1, 63,0);
    tracep->declBus(c+3,"o_IF_inst", false,-1, 31,0);
    tracep->declQuad(c+194,"IF_inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+196,"IF_nextpc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+209,"i_MEM_clk", false,-1);
    tracep->declBit(c+10,"i_MEM_Jal", false,-1);
    tracep->declBit(c+11,"i_MEM_Jalr", false,-1);
    tracep->declBit(c+36,"i_MEM_zero", false,-1);
    tracep->declBit(c+6,"i_MEM_MemRead", false,-1);
    tracep->declBit(c+7,"i_MEM_MemWrite", false,-1);
    tracep->declBus(c+13,"i_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+14,"i_MEM_FUNCT3", false,-1, 2,0);
    tracep->declQuad(c+21,"i_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+37,"i_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+39,"i_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+41,"i_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+4,"i_MEM_RegWrite", false,-1);
    tracep->declBus(c+15,"i_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"o_MEM_dnpc", false,-1, 63,0);
    tracep->declBit(c+45,"o_MEM_Branch", false,-1);
    tracep->declQuad(c+43,"o_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+4,"o_MEM_RegWrite", false,-1);
    tracep->declBus(c+15,"o_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"i_MEM_clint_rd_data", false,-1, 63,0);
    tracep->declQuad(c+21,"o_MEM_clint_wr_data", false,-1, 63,0);
    tracep->declQuad(c+39,"o_MEM_clint_addr", false,-1, 63,0);
    tracep->declBit(c+7,"o_MEM_clint_wen", false,-1);
    tracep->declBit(c+6,"o_MEM_clint_ren", false,-1);
    tracep->declBit(c+31,"i_MEM_timer_interreupt", false,-1);
    tracep->declBit(c+23,"i_MEM_ecall", false,-1);
    tracep->declBit(c+24,"i_MEM_mret", false,-1);
    tracep->declQuad(c+34,"i_MEM_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+25,"i_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"i_MEM_csr_r_data", false,-1, 63,0);
    tracep->declBit(c+25,"o_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"o_MEM_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+1,"i_MEM_pc", false,-1, 63,0);
    tracep->declBit(c+198,"zero_extend", false,-1);
    tracep->declBus(c+14,"MEM_mem_mask", false,-1, 2,0);
    tracep->declQuad(c+199,"MEM_mem_rd_data", false,-1, 63,0);
    tracep->declQuad(c+201,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+203,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+205,"Wmask", false,-1, 7,0);
    tracep->declBus(c+205,"reg_Wmask", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+36,"zero", false,-1);
    tracep->declBit(c+10,"Jal", false,-1);
    tracep->declBit(c+11,"Jalr", false,-1);
    tracep->declBit(c+206,"result0", false,-1);
    tracep->declBus(c+13,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+31,"timer_interreupt", false,-1);
    tracep->declBit(c+23,"ecall", false,-1);
    tracep->declBit(c+24,"mret", false,-1);
    tracep->declBit(c+45,"Branch", false,-1);
    tracep->declBit(c+207,"w1", false,-1);
    tracep->declBit(c+208,"w2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declQuad(c+43,"i_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+4,"i_WB_RegWrite", false,-1);
    tracep->declBus(c+15,"i_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+25,"i_WB_csr_reg_write", false,-1);
    tracep->declQuad(c+32,"i_WB_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+49,"o_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+48,"o_WB_RegWrite", false,-1);
    tracep->declBus(c+15,"o_WB_reg_wr_addr", false,-1, 4,0);
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
    tracep->fullQData(oldp+1,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc),64);
    tracep->fullIData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst),32);
    tracep->fullBit(oldp+4,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite));
    tracep->fullBit(oldp+5,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                   >> 3U))));
    tracep->fullBit(oldp+6,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+7,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc));
    tracep->fullBit(oldp+9,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+10,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr));
    tracep->fullBit(oldp+12,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullCData(oldp+13,(((0x63U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                 ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0xcU))
                                 : 2U)),3);
    tracep->fullCData(oldp+14,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+16,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
    tracep->fullQData(oldp+17,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm),64);
    tracep->fullQData(oldp+19,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1),64);
    tracep->fullQData(oldp+21,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2),64);
    tracep->fullBit(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall));
    tracep->fullBit(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret));
    tracep->fullBit(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren));
    tracep->fullBit(oldp+26,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wen));
    tracep->fullCData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state),3);
    tracep->fullSData(oldp+28,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wr_data),64);
    tracep->fullBit(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__timer_interreupt_flag));
    tracep->fullQData(oldp+32,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                 ? ((0x300U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                >> 0x14U))
                                     ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                     : ((0x341U == 
                                         (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0x14U))
                                         ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                         : ((0x342U 
                                             == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                             : ((0x305U 
                                                 == 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                 : 0ULL))))
                                 : 0ULL)),64);
    tracep->fullQData(oldp+34,(vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc),64);
    tracep->fullBit(oldp+36,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult),64);
    tracep->fullQData(oldp+41,((((((- (QData)((IData)(
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
    tracep->fullQData(oldp+43,(((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                 ? (((0x200bff8ULL 
                                      == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult) 
                                     | (0x2004000ULL 
                                        == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                     ? ((3U == (0x7fU 
                                                & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                         ? ((0x200bff8ULL 
                                             == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                             ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime
                                             : ((0x2004000ULL 
                                                 == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp
                                                 : 0ULL))
                                         : 0ULL) : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1)
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
    tracep->fullBit(oldp+45,(vlSelf->ysyx_22040386_TOP__DOT__MEM_IF_Branch));
    tracep->fullQData(oldp+46,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__timer_interreupt_flag)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                 : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                     : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))),64);
    tracep->fullBit(oldp+48,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren))));
    tracep->fullQData(oldp+49,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                 ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                     ? ((0x300U == 
                                         (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0x14U))
                                         ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                         : ((0x341U 
                                             == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U))
                                             ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                             : ((0x342U 
                                                 == 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                  : 0ULL))))
                                     : 0ULL) : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                 ? 
                                                (((0x200bff8ULL 
                                                   == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult) 
                                                  | (0x2004000ULL 
                                                     == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                   ? 
                                                  ((0x200bff8ULL 
                                                    == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime
                                                    : 
                                                   ((0x2004000ULL 
                                                     == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp
                                                     : 0ULL))
                                                   : 0ULL)
                                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1)
                                                 : 
                                                (((((- (QData)((IData)(
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
    tracep->fullQData(oldp+51,(((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                 ? ((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime
                                     : ((0x2004000ULL 
                                         == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp
                                         : 0ULL)) : 0ULL)),64);
    tracep->fullBit(oldp+53,(vlSelf->ysyx_22040386_TOP__DOT__CLINT_CSR_stop));
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp),64);
    tracep->fullQData(oldp+58,((((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                 & (0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2
                                 : vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime)),64);
    tracep->fullQData(oldp+60,((((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                                 & (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data2
                                 : vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp)),64);
    tracep->fullQData(oldp+62,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc),64);
    tracep->fullQData(oldp+66,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause),64);
    tracep->fullQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc),64);
    tracep->fullQData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mie),64);
    tracep->fullQData(oldp+72,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mip),64);
    tracep->fullQData(oldp+74,(((((IData)((vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus 
                                           >> 3U)) 
                                  & (IData)((vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mie 
                                             >> 7U))) 
                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__CLINT_CSR_stop))
                                 ? 0x80ULL : 0ULL)),64);
    tracep->fullQData(oldp+76,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
    tracep->fullQData(oldp+78,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)),64);
    tracep->fullBit(oldp+80,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+81,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+82,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                 >> 5U))));
    tracep->fullBit(oldp+83,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+84,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+85,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
    tracep->fullBit(oldp+86,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 4U))));
    tracep->fullBit(oldp+87,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                     ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                 >> 0x3fU)) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                     : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                           >> 5U))))));
    tracep->fullCData(oldp+88,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
    tracep->fullIData(oldp+89,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
    tracep->fullIData(oldp+90,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+93,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+95,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullQData(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
    tracep->fullQData(oldp+99,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                 : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->fullQData(oldp+101,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+103,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                  ? ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                      : (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32)))
                                  : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+105,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+107,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                  : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+109,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
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
    tracep->fullQData(oldp+111,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullCData(oldp+113,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)),7);
    tracep->fullCData(oldp+114,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+115,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+116,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+117,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw));
    tracep->fullBit(oldp+118,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs));
    tracep->fullBit(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrsi));
    tracep->fullBit(oldp+120,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrwi));
    tracep->fullQData(oldp+121,((QData)((IData)((0x1fU 
                                                 & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                    >> 0xfU))))),64);
    tracep->fullCData(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
    tracep->fullBit(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullCData(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
    tracep->fullCData(oldp+126,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
    tracep->fullCData(oldp+127,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                  ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                      ? 0x27U : 0x37U)
                                  : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                      ? 0U : 0x20U))),6);
    tracep->fullQData(oldp+128,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+130,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+132,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+134,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+136,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+138,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+140,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+142,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+144,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+146,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+148,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+150,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+156,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+158,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+160,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+162,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+164,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+166,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+168,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+170,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+172,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+174,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+176,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+178,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+180,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+182,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+184,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+186,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+188,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+190,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+192,(((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 7U)))
                                  ? 0ULL : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                             ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                                 ? 
                                                ((0x300U 
                                                  == 
                                                  (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                     : 0ULL))))
                                                 : 0ULL)
                                             : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                 ? 
                                                (((0x200bff8ULL 
                                                   == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult) 
                                                  | (0x2004000ULL 
                                                     == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                   ? 
                                                  ((0x200bff8ULL 
                                                    == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime
                                                    : 
                                                   ((0x2004000ULL 
                                                     == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                                     ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp
                                                     : 0ULL))
                                                   : 0ULL)
                                                  : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1)
                                                 : 
                                                (((((- (QData)((IData)(
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
                                                    & vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)))))),64);
    tracep->fullQData(oldp+194,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
    tracep->fullQData(oldp+196,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__MEM_IF_Branch)
                                  ? ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__timer_interreupt_flag)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                      : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                          ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                          : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))
                                  : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc))),64);
    tracep->fullBit(oldp+198,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 0xeU)))));
    tracep->fullQData(oldp+199,((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult) 
                                  | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))
                                  ? ((3U == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                      ? ((0x200bff8ULL 
                                          == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                          ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtime
                                          : ((0x2004000ULL 
                                              == vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult)
                                              ? vlSelf->ysyx_22040386_TOP__DOT__Clint_inst__DOT__mtimecmp
                                              : 0ULL))
                                      : 0ULL) : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1)),64);
    tracep->fullQData(oldp+201,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullQData(oldp+203,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullCData(oldp+205,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
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
    tracep->fullBit(oldp+206,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))));
    tracep->fullBit(oldp+207,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullBit(oldp+208,(((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullBit(oldp+209,(vlSelf->i_TOP_clk));
    tracep->fullBit(oldp+210,(vlSelf->i_TOP_rst_n));
    tracep->fullBit(oldp+211,(vlSelf->o_TOP_unkown_code));
    tracep->fullIData(oldp+212,(vlSelf->o_TOP_inst),32);
    tracep->fullQData(oldp+213,(vlSelf->o_TOP_pc),64);
    tracep->fullBit(oldp+215,(vlSelf->o_TOP_Branch));
    tracep->fullBit(oldp+216,(vlSelf->o_TOP_mret));
    tracep->fullBit(oldp+217,(vlSelf->o_TOP_ecall));
    tracep->fullQData(oldp+218,(vlSelf->o_TOP_csr_dnpc),64);
    tracep->fullIData(oldp+220,(5U),32);
    tracep->fullIData(oldp+221,(0x40U),32);
}
