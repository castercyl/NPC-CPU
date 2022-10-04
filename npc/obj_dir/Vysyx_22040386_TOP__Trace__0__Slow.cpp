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
    tracep->declBit(c+183,"i_TOP_clk", false,-1);
    tracep->declBit(c+184,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+185,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+186,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+187,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+189,"o_TOP_Branch", false,-1);
    tracep->declBit(c+190,"o_TOP_mret", false,-1);
    tracep->declBit(c+191,"o_TOP_ecall", false,-1);
    tracep->declQuad(c+192,"o_TOP_csr_dnpc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+183,"i_TOP_clk", false,-1);
    tracep->declBit(c+184,"i_TOP_rst_n", false,-1);
    tracep->declBit(c+185,"o_TOP_unkown_code", false,-1);
    tracep->declBus(c+186,"o_TOP_inst", false,-1, 31,0);
    tracep->declQuad(c+187,"o_TOP_pc", false,-1, 63,0);
    tracep->declBit(c+189,"o_TOP_Branch", false,-1);
    tracep->declBit(c+190,"o_TOP_mret", false,-1);
    tracep->declBit(c+191,"o_TOP_ecall", false,-1);
    tracep->declQuad(c+192,"o_TOP_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"TOP_Branch", false,-1);
    tracep->declBit(c+2,"TOP_RegWrite", false,-1);
    tracep->declBus(c+3,"TOP_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"TOP_dnpc", false,-1, 63,0);
    tracep->declQuad(c+6,"TOP_reg_wr_data", false,-1, 63,0);
    tracep->declQuad(c+8,"IF_ID_pc", false,-1, 63,0);
    tracep->declBus(c+10,"IF_ID_inst", false,-1, 31,0);
    tracep->declBit(c+11,"ID_EX_RegWrite", false,-1);
    tracep->declBit(c+12,"ID_EX_Word_op", false,-1);
    tracep->declBit(c+13,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+14,"ID_EX_MemWrite", false,-1);
    tracep->declBit(c+15,"ID_EX_ALUBsrc", false,-1);
    tracep->declBit(c+16,"ID_EX_Auipc", false,-1);
    tracep->declBit(c+17,"ID_EX_Jal", false,-1);
    tracep->declBit(c+18,"ID_EX_Jalr", false,-1);
    tracep->declBit(c+19,"ID_EX_Lui", false,-1);
    tracep->declBus(c+20,"ID_EX_Branch_type", false,-1, 2,0);
    tracep->declBus(c+21,"ID_EX_mem_mask", false,-1, 2,0);
    tracep->declBus(c+21,"ID_EX_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+3,"ID_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+22,"ID_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+23,"ID_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+25,"ID_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+27,"ID_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+8,"ID_EX_pc", false,-1, 63,0);
    tracep->declBit(c+29,"ID_EX_ecall", false,-1);
    tracep->declBit(c+30,"ID_EX_mret", false,-1);
    tracep->declBit(c+31,"ID_CSR_csr_ren", false,-1);
    tracep->declBit(c+32,"ID_CSR_csr_wen", false,-1);
    tracep->declBus(c+33,"ID_CSR_csr_state", false,-1, 1,0);
    tracep->declBus(c+34,"ID_CSR_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+34,"ID_CSR_csr_raddr", false,-1, 11,0);
    tracep->declBit(c+31,"CSR_EX_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"CSR_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+37,"CSR_EX_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+39,"EX_MEM_zero", false,-1);
    tracep->declBit(c+11,"EX_MEM_RegWrite", false,-1);
    tracep->declBit(c+14,"EX_MEM_MemWrite", false,-1);
    tracep->declBit(c+13,"EX_MEM_MemRead", false,-1);
    tracep->declBit(c+17,"EX_MEM_Jal", false,-1);
    tracep->declBit(c+18,"EX_MEM_Jalr", false,-1);
    tracep->declBus(c+21,"EX_MEM_mem_mask", false,-1, 2,0);
    tracep->declBus(c+20,"EX_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+3,"EX_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"EX_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+42,"EX_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+27,"EX_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+44,"EX_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+29,"EX_MEM_ecall", false,-1);
    tracep->declBit(c+30,"EX_MEM_mret", false,-1);
    tracep->declBit(c+31,"EX_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"EX_MEM_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_MEM_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+11,"MEM_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"MEM_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"MEM_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+31,"MEM_WB_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"MEM_WB_csr_r_data", false,-1, 63,0);
    tracep->pushNamePrefix("csr_inst ");
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+184,"rst_n", false,-1);
    tracep->declBus(c+33,"csr_state_i", false,-1, 1,0);
    tracep->declBus(c+34,"csr_w_addr_i", false,-1, 11,0);
    tracep->declBit(c+32,"csr_wen_i", false,-1);
    tracep->declQuad(c+25,"csr_w_data_i", false,-1, 63,0);
    tracep->declBus(c+34,"csr_r_addr_i", false,-1, 11,0);
    tracep->declBit(c+31,"csr_ren_i", false,-1);
    tracep->declQuad(c+8,"csr_pc_i", false,-1, 63,0);
    tracep->declBit(c+31,"csr_reg_write_o", false,-1);
    tracep->declQuad(c+35,"csr_r_data_o", false,-1, 63,0);
    tracep->declQuad(c+37,"csr_dnpc_o", false,-1, 63,0);
    tracep->declQuad(c+48,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+50,"mepc", false,-1, 63,0);
    tracep->declQuad(c+52,"mcause", false,-1, 63,0);
    tracep->declQuad(c+54,"mtevc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_EXU_inst ");
    tracep->declBit(c+12,"i_EX_Word_op", false,-1);
    tracep->declBit(c+15,"i_EX_ALUBsrc", false,-1);
    tracep->declBit(c+16,"i_EX_Auipc", false,-1);
    tracep->declBit(c+19,"i_EX_Lui", false,-1);
    tracep->declBus(c+21,"i_EX_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+22,"i_EX_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+8,"i_EX_pc", false,-1, 63,0);
    tracep->declQuad(c+23,"i_EX_imm", false,-1, 63,0);
    tracep->declQuad(c+25,"i_EX_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+27,"i_EX_reg_rd_data2", false,-1, 63,0);
    tracep->declBus(c+3,"i_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+21,"i_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+11,"i_EX_RegWrite", false,-1);
    tracep->declBit(c+14,"i_EX_MemWrite", false,-1);
    tracep->declBit(c+13,"i_EX_MemRead", false,-1);
    tracep->declBit(c+17,"i_EX_Jal", false,-1);
    tracep->declBit(c+18,"i_EX_Jalr", false,-1);
    tracep->declBus(c+20,"i_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+39,"o_EX_zero", false,-1);
    tracep->declQuad(c+40,"o_EX_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+42,"o_EX_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+27,"o_EX_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+44,"o_EX_reg_wr_data", false,-1, 63,0);
    tracep->declBus(c+3,"o_EX_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+21,"o_EX_mem_mask", false,-1, 2,0);
    tracep->declBit(c+11,"o_EX_RegWrite", false,-1);
    tracep->declBit(c+14,"o_EX_MemWrite", false,-1);
    tracep->declBit(c+13,"o_EX_MemRead", false,-1);
    tracep->declBus(c+20,"o_EX_Branch_type", false,-1, 2,0);
    tracep->declBit(c+17,"o_EX_Jal", false,-1);
    tracep->declBit(c+18,"o_EX_Jalr", false,-1);
    tracep->declBit(c+29,"i_EX_ecall", false,-1);
    tracep->declBit(c+30,"i_EX_mret", false,-1);
    tracep->declBit(c+31,"i_EX_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"i_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+37,"i_EX_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+29,"o_EX_ecall", false,-1);
    tracep->declBit(c+30,"o_EX_mret", false,-1);
    tracep->declBit(c+31,"o_EX_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"o_EX_csr_r_data", false,-1, 63,0);
    tracep->declQuad(c+37,"o_EX_csr_dnpc", false,-1, 63,0);
    tracep->declQuad(c+27,"EX_real_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+25,"EX_src1", false,-1, 63,0);
    tracep->declQuad(c+56,"EX_src2", false,-1, 63,0);
    tracep->declQuad(c+58,"EX_snpc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_ALU_inst ");
    tracep->declBit(c+12,"Word_op", false,-1);
    tracep->declBus(c+21,"FUNCT3", false,-1, 2,0);
    tracep->declQuad(c+25,"src1", false,-1, 63,0);
    tracep->declQuad(c+56,"src2", false,-1, 63,0);
    tracep->declBus(c+22,"ALUctr", false,-1, 5,0);
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declQuad(c+42,"result", false,-1, 63,0);
    tracep->declBit(c+60,"cn", false,-1);
    tracep->declBit(c+61,"cn0", false,-1);
    tracep->declBit(c+62,"CF", false,-1);
    tracep->declBit(c+63,"OF", false,-1);
    tracep->declBit(c+64,"SF", false,-1);
    tracep->declBit(c+65,"SUBctr", false,-1);
    tracep->declBit(c+66,"SIGctr", false,-1);
    tracep->declBit(c+67,"less1", false,-1);
    tracep->declBus(c+68,"OPctr", false,-1, 3,0);
    tracep->declBus(c+69,"div32", false,-1, 31,0);
    tracep->declBus(c+70,"rem32", false,-1, 31,0);
    tracep->declQuad(c+71,"real_src2", false,-1, 63,0);
    tracep->declQuad(c+73,"sum", false,-1, 63,0);
    tracep->declQuad(c+75,"src1_shift", false,-1, 63,0);
    tracep->declQuad(c+77,"mul", false,-1, 63,0);
    tracep->declQuad(c+79,"real_mul", false,-1, 63,0);
    tracep->declQuad(c+81,"div64", false,-1, 63,0);
    tracep->declQuad(c+83,"real_div", false,-1, 63,0);
    tracep->declQuad(c+85,"rem64", false,-1, 63,0);
    tracep->declQuad(c+87,"real_rem", false,-1, 63,0);
    tracep->declQuad(c+89,"shift_sig", false,-1, 63,0);
    tracep->declQuad(c+91,"reg_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IDU_inst ");
    tracep->declBit(c+183,"i_ID_clk", false,-1);
    tracep->declQuad(c+8,"i_ID_pc", false,-1, 63,0);
    tracep->declBus(c+10,"i_ID_inst", false,-1, 31,0);
    tracep->declBit(c+2,"i_ID_RegWrite", false,-1);
    tracep->declBus(c+3,"i_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"i_ID_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+185,"o_ID_unkown_code", false,-1);
    tracep->declBit(c+11,"o_ID_RegWrite", false,-1);
    tracep->declBit(c+12,"o_ID_Word_op", false,-1);
    tracep->declBit(c+13,"o_ID_MemRead", false,-1);
    tracep->declBit(c+14,"o_ID_MemWrite", false,-1);
    tracep->declBit(c+15,"o_ID_ALUBsrc", false,-1);
    tracep->declBit(c+16,"o_ID_Auipc", false,-1);
    tracep->declBit(c+17,"o_ID_Jal", false,-1);
    tracep->declBit(c+18,"o_ID_Jalr", false,-1);
    tracep->declBit(c+19,"o_ID_Lui", false,-1);
    tracep->declBus(c+21,"o_ID_FUNCT3", false,-1, 2,0);
    tracep->declBus(c+20,"o_ID_Branch_type", false,-1, 2,0);
    tracep->declBus(c+21,"o_ID_mem_mask", false,-1, 2,0);
    tracep->declBus(c+3,"o_ID_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+22,"o_ID_ALUctr", false,-1, 5,0);
    tracep->declQuad(c+23,"o_ID_imm", false,-1, 63,0);
    tracep->declQuad(c+25,"o_ID_reg_rd_data1", false,-1, 63,0);
    tracep->declQuad(c+27,"o_ID_reg_rd_data2", false,-1, 63,0);
    tracep->declQuad(c+8,"o_ID_pc", false,-1, 63,0);
    tracep->declBit(c+29,"o_ID_ecall", false,-1);
    tracep->declBit(c+30,"o_ID_mret", false,-1);
    tracep->declBit(c+31,"o_ID_csr_ren", false,-1);
    tracep->declBit(c+32,"o_ID_csr_wen", false,-1);
    tracep->declBus(c+33,"o_ID_csr_state", false,-1, 1,0);
    tracep->declBus(c+34,"o_ID_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+34,"o_ID_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+21,"ID_funct3", false,-1, 2,0);
    tracep->declBus(c+93,"ID_opcode", false,-1, 6,0);
    tracep->declBus(c+94,"ID_funct7", false,-1, 6,0);
    tracep->declBus(c+95,"ID_reg_rd_addr1", false,-1, 4,0);
    tracep->declBus(c+96,"ID_reg_rd_addr2", false,-1, 4,0);
    tracep->declBit(c+97,"ID_csrrw", false,-1);
    tracep->declBit(c+98,"ID_csrrs", false,-1);
    tracep->declBit(c+29,"ID_ecall", false,-1);
    tracep->declBit(c+30,"ID_mret", false,-1);
    tracep->declBus(c+99,"ID_ALUop", false,-1, 1,0);
    tracep->pushNamePrefix("code_test_inst ");
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+94,"funct7", false,-1, 6,0);
    tracep->declBus(c+21,"funct3", false,-1, 2,0);
    tracep->declBus(c+10,"Inst", false,-1, 31,0);
    tracep->declBit(c+185,"unkown_code", false,-1);
    tracep->declBit(c+100,"reg_unkown_code", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_ALUcontrol_inst ");
    tracep->declBus(c+99,"ALUop", false,-1, 1,0);
    tracep->declBus(c+21,"funct3", false,-1, 2,0);
    tracep->declBus(c+94,"funct7", false,-1, 6,0);
    tracep->declBus(c+22,"ALUctr", false,-1, 5,0);
    tracep->declBus(c+101,"R_ctr", false,-1, 5,0);
    tracep->declBus(c+102,"I_ctr", false,-1, 5,0);
    tracep->declBus(c+103,"B_ctr", false,-1, 5,0);
    tracep->declBus(c+22,"reg_ALUctr", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_RegisterFile_inst ");
    tracep->declBus(c+194,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+183,"clk", false,-1);
    tracep->declBit(c+2,"wen", false,-1);
    tracep->declQuad(c+6,"wdata", false,-1, 63,0);
    tracep->declBus(c+3,"waddr", false,-1, 4,0);
    tracep->declBus(c+95,"raddr1", false,-1, 4,0);
    tracep->declBus(c+96,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+25,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+27,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+104+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declQuad(c+168,"real_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_IFU_inst ");
    tracep->declBit(c+184,"i_IF_rst_n", false,-1);
    tracep->declBit(c+183,"i_IF_clk", false,-1);
    tracep->declBit(c+1,"i_IF_Branch", false,-1);
    tracep->declQuad(c+4,"i_IF_dnpc", false,-1, 63,0);
    tracep->declQuad(c+8,"o_IF_pc", false,-1, 63,0);
    tracep->declBus(c+10,"o_IF_inst", false,-1, 31,0);
    tracep->declQuad(c+170,"IF_inst_rdata", false,-1, 63,0);
    tracep->declQuad(c+172,"IF_nextpc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_22040386_MEMU_inst ");
    tracep->declBit(c+183,"i_MEM_clk", false,-1);
    tracep->declBit(c+17,"i_MEM_Jal", false,-1);
    tracep->declBit(c+18,"i_MEM_Jalr", false,-1);
    tracep->declBit(c+39,"i_MEM_zero", false,-1);
    tracep->declBit(c+13,"i_MEM_MemRead", false,-1);
    tracep->declBit(c+14,"i_MEM_MemWrite", false,-1);
    tracep->declBus(c+20,"i_MEM_Branch_type", false,-1, 2,0);
    tracep->declBus(c+21,"i_MEM_mem_mask", false,-1, 2,0);
    tracep->declQuad(c+27,"i_MEM_mem_wr_data", false,-1, 63,0);
    tracep->declQuad(c+40,"i_MEM_pc_add_imm", false,-1, 63,0);
    tracep->declQuad(c+42,"i_MEM_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+44,"i_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+11,"i_MEM_RegWrite", false,-1);
    tracep->declBus(c+3,"i_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"o_MEM_dnpc", false,-1, 63,0);
    tracep->declBit(c+1,"o_MEM_Branch", false,-1);
    tracep->declQuad(c+46,"o_MEM_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+11,"o_MEM_RegWrite", false,-1);
    tracep->declBus(c+3,"o_MEM_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+29,"i_MEM_ecall", false,-1);
    tracep->declBit(c+30,"i_MEM_mret", false,-1);
    tracep->declQuad(c+37,"i_MEM_csr_dnpc", false,-1, 63,0);
    tracep->declBit(c+31,"i_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"i_MEM_csr_r_data", false,-1, 63,0);
    tracep->declBit(c+31,"o_MEM_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"o_MEM_csr_r_data", false,-1, 63,0);
    tracep->declBit(c+174,"zero_extend", false,-1);
    tracep->declQuad(c+175,"MEM_mem_rd_data", false,-1, 63,0);
    tracep->declQuad(c+177,"reg_rd_mem_data", false,-1, 63,0);
    tracep->declQuad(c+175,"rmdata1", false,-1, 63,0);
    tracep->declBus(c+179,"Wmask", false,-1, 7,0);
    tracep->declBus(c+179,"reg_Wmask", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_22040386_Branchjuge_inst ");
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declBit(c+17,"Jal", false,-1);
    tracep->declBit(c+18,"Jalr", false,-1);
    tracep->declBit(c+180,"result0", false,-1);
    tracep->declBus(c+20,"Branch_type", false,-1, 2,0);
    tracep->declBit(c+29,"ecall", false,-1);
    tracep->declBit(c+30,"mret", false,-1);
    tracep->declBit(c+1,"Branch", false,-1);
    tracep->declBit(c+181,"w1", false,-1);
    tracep->declBit(c+182,"w2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_22040386_WBU_inst ");
    tracep->declQuad(c+46,"i_WB_reg_wr_data", false,-1, 63,0);
    tracep->declBit(c+11,"i_WB_RegWrite", false,-1);
    tracep->declBus(c+3,"i_WB_reg_wr_addr", false,-1, 4,0);
    tracep->declBit(c+31,"i_WB_csr_reg_write", false,-1);
    tracep->declQuad(c+35,"i_WB_csr_r_data", false,-1, 63,0);
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
    tracep->fullBit(oldp+2,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite) 
                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren))));
    tracep->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 7U))),5);
    tracep->fullQData(oldp+4,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                    ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                    : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))),64);
    tracep->fullQData(oldp+6,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                ? ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
                                    ? ((0x300U == (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
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
                                                : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc
                                                    : 0ULL))))
                                    : 0ULL) : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                                ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
                                                : (
                                                   ((((- (QData)((IData)(
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
    tracep->fullQData(oldp+8,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc),64);
    tracep->fullIData(oldp+10,(vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst),32);
    tracep->fullBit(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_RegWrite));
    tracep->fullBit(oldp+12,((1U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                    >> 3U))));
    tracep->fullBit(oldp+13,((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+14,((0x23U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+15,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_ALUBsrc));
    tracep->fullBit(oldp+16,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+17,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullBit(oldp+18,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr));
    tracep->fullBit(oldp+19,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))));
    tracep->fullCData(oldp+20,(((0x63U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
                                 ? (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                          >> 0xcU))
                                 : 2U)),3);
    tracep->fullCData(oldp+21,((7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+22,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr),6);
    tracep->fullQData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_imm),64);
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1),64);
    tracep->fullQData(oldp+27,(((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf
                                [(0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                           >> 0x14U))])),64);
    tracep->fullBit(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall));
    tracep->fullBit(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret));
    tracep->fullBit(oldp+31,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren));
    tracep->fullBit(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_wen));
    tracep->fullCData(oldp+33,(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_state),2);
    tracep->fullSData(oldp+34,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+35,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_CSR_csr_ren)
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
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc),64);
    tracep->fullBit(oldp+39,((1U & (~ (IData)((0U != vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum))))));
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm),64);
    tracep->fullQData(oldp+42,(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult),64);
    tracep->fullQData(oldp+44,((((((- (QData)((IData)(
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
    tracep->fullQData(oldp+46,(((3U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst))
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
    tracep->fullQData(oldp+48,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mstatus),64);
    tracep->fullQData(oldp+50,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mepc),64);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mcause),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__csr_inst__DOT__mtevc),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2),64);
    tracep->fullQData(oldp+58,((4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc)),64);
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn));
    tracep->fullBit(oldp+61,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0));
    tracep->fullBit(oldp+62,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                 >> 5U))));
    tracep->fullBit(oldp+63,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                              ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0))));
    tracep->fullBit(oldp+64,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+65,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 5U))));
    tracep->fullBit(oldp+66,((1U & ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                    >> 4U))));
    tracep->fullBit(oldp+67,((1U & ((0x10U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))
                                     ? ((IData)((vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum 
                                                 >> 0x3fU)) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                           ^ (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn0)))
                                     : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__cn) 
                                        ^ ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr) 
                                           >> 5U))))));
    tracep->fullCData(oldp+68,((0xfU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__reg_ALUctr))),4);
    tracep->fullIData(oldp+69,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32),32);
    tracep->fullIData(oldp+70,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32),32);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__real_src2),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__sum),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__src1_shift),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul),64);
    tracep->fullQData(oldp+79,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)))
                                 : vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__mul)),64);
    tracep->fullQData(oldp+81,(VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+83,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? ((5U == (7U & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                                  >> 0xcU)))
                                     ? (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32))
                                     : (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__div32))))
                                 : VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+85,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2)),64);
    tracep->fullQData(oldp+87,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                 ? (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__rem32)))
                                 : VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__ID_EX_reg_rd_data1, vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__EX_src2))),64);
    tracep->fullQData(oldp+89,(((8U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
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
    tracep->fullQData(oldp+91,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_EXU_inst__DOT__ysyx_22040386_ALU_inst__DOT__reg_result),64);
    tracep->fullCData(oldp+93,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)),7);
    tracep->fullCData(oldp+94,((vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+95,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+96,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+97,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrw));
    tracep->fullBit(oldp+98,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_csrrs));
    tracep->fullCData(oldp+99,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ALUop),2);
    tracep->fullBit(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__code_test_inst__DOT__reg_unkown_code));
    tracep->fullCData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__R_ctr),6);
    tracep->fullCData(oldp+102,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_ALUcontrol_inst__DOT__I_ctr),6);
    tracep->fullCData(oldp+103,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                  ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                      ? 0x27U : 0x37U)
                                  : ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
                                      ? 0U : 0x20U))),6);
    tracep->fullQData(oldp+104,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[0]),64);
    tracep->fullQData(oldp+106,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[1]),64);
    tracep->fullQData(oldp+108,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[2]),64);
    tracep->fullQData(oldp+110,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[3]),64);
    tracep->fullQData(oldp+112,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[4]),64);
    tracep->fullQData(oldp+114,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[5]),64);
    tracep->fullQData(oldp+116,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[6]),64);
    tracep->fullQData(oldp+118,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[7]),64);
    tracep->fullQData(oldp+120,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[8]),64);
    tracep->fullQData(oldp+122,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[9]),64);
    tracep->fullQData(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[10]),64);
    tracep->fullQData(oldp+126,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[11]),64);
    tracep->fullQData(oldp+128,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[12]),64);
    tracep->fullQData(oldp+130,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[13]),64);
    tracep->fullQData(oldp+132,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[14]),64);
    tracep->fullQData(oldp+134,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[15]),64);
    tracep->fullQData(oldp+136,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[16]),64);
    tracep->fullQData(oldp+138,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[17]),64);
    tracep->fullQData(oldp+140,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[18]),64);
    tracep->fullQData(oldp+142,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[19]),64);
    tracep->fullQData(oldp+144,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[20]),64);
    tracep->fullQData(oldp+146,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[21]),64);
    tracep->fullQData(oldp+148,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[22]),64);
    tracep->fullQData(oldp+150,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[23]),64);
    tracep->fullQData(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[24]),64);
    tracep->fullQData(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[25]),64);
    tracep->fullQData(oldp+156,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[26]),64);
    tracep->fullQData(oldp+158,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[27]),64);
    tracep->fullQData(oldp+160,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[28]),64);
    tracep->fullQData(oldp+162,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[29]),64);
    tracep->fullQData(oldp+164,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[30]),64);
    tracep->fullQData(oldp+166,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ysyx_22040386_RegisterFile_inst__DOT__rf[31]),64);
    tracep->fullQData(oldp+168,(((0U == (0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
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
                                                 ? vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1
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
    tracep->fullQData(oldp+170,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IFU_inst__DOT__IF_inst_rdata),64);
    tracep->fullQData(oldp+172,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__TOP_Branch)
                                  ? (((IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_ecall) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_IDU_inst__DOT__ID_mret))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__CSR_EX_csr_dnpc
                                      : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__ID_EX_Jalr)
                                          ? vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult
                                          : vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_pc_add_imm))
                                  : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__IF_ID_pc))),64);
    tracep->fullBit(oldp+174,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst 
                                        >> 0xeU)))));
    tracep->fullQData(oldp+175,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__rmdata1),64);
    tracep->fullQData(oldp+177,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__reg_rd_mem_data),64);
    tracep->fullCData(oldp+179,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)
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
    tracep->fullBit(oldp+180,((1U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__EX_MEM_ALUresult))));
    tracep->fullBit(oldp+181,(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1));
    tracep->fullBit(oldp+182,(((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__IF_ID_inst)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__ysyx_22040386_MEMU_inst__DOT__ysyx_22040386_Branchjuge_inst__DOT__w1))));
    tracep->fullBit(oldp+183,(vlSelf->i_TOP_clk));
    tracep->fullBit(oldp+184,(vlSelf->i_TOP_rst_n));
    tracep->fullBit(oldp+185,(vlSelf->o_TOP_unkown_code));
    tracep->fullIData(oldp+186,(vlSelf->o_TOP_inst),32);
    tracep->fullQData(oldp+187,(vlSelf->o_TOP_pc),64);
    tracep->fullBit(oldp+189,(vlSelf->o_TOP_Branch));
    tracep->fullBit(oldp+190,(vlSelf->o_TOP_mret));
    tracep->fullBit(oldp+191,(vlSelf->o_TOP_ecall));
    tracep->fullQData(oldp+192,(vlSelf->o_TOP_csr_dnpc),64);
    tracep->fullIData(oldp+194,(5U),32);
    tracep->fullIData(oldp+195,(0x40U),32);
}
