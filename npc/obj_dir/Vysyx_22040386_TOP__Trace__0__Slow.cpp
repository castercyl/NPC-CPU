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
    tracep->declBit(c+293,"top_clk_i", false,-1);
    tracep->declBit(c+294,"top_rst_n_i", false,-1);
    tracep->declBus(c+295,"top_wbinst_o", false,-1, 31,0);
    tracep->declQuad(c+296,"top_wbpc_o", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040386_TOP ");
    tracep->declBit(c+293,"top_clk_i", false,-1);
    tracep->declBit(c+294,"top_rst_n_i", false,-1);
    tracep->declBus(c+295,"top_wbinst_o", false,-1, 31,0);
    tracep->declQuad(c+296,"top_wbpc_o", false,-1, 63,0);
    tracep->declBit(c+1,"mem_wen", false,-1);
    tracep->declBit(c+2,"mem_ren", false,-1);
    tracep->declQuad(c+3,"ifpc", false,-1, 63,0);
    tracep->declQuad(c+5,"ifmemrdata", false,-1, 63,0);
    tracep->declQuad(c+7,"mem_busrdata", false,-1, 63,0);
    tracep->declQuad(c+9,"mem_buswdata", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_rwaddr", false,-1, 63,0);
    tracep->declBus(c+13,"mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"mempc", false,-1, 63,0);
    tracep->pushNamePrefix("idram_inst ");
    tracep->declBit(c+293,"ram_clk_i", false,-1);
    tracep->declQuad(c+3,"ram_ifpc_i", false,-1, 63,0);
    tracep->declBit(c+1,"ram_mem_wen_i", false,-1);
    tracep->declBit(c+2,"ram_mem_ren_i", false,-1);
    tracep->declQuad(c+9,"ram_mem_buswdata_i", false,-1, 63,0);
    tracep->declQuad(c+11,"ram_mem_rwaddr_i", false,-1, 63,0);
    tracep->declBus(c+13,"ram_mem_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+3,"mem_pc_i", false,-1, 63,0);
    tracep->declQuad(c+5,"ram_ifmemrdata_o", false,-1, 63,0);
    tracep->declQuad(c+7,"ram_mem_busrdata_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mycpu_inst ");
    tracep->declBit(c+293,"core_clk_i", false,-1);
    tracep->declBit(c+294,"core_rst_n_i", false,-1);
    tracep->declQuad(c+5,"core_ifmemrdata_i", false,-1, 63,0);
    tracep->declQuad(c+7,"core_mem_busrdata_i", false,-1, 63,0);
    tracep->declQuad(c+3,"core_ifpc_o", false,-1, 63,0);
    tracep->declBit(c+1,"core_mem_wen_o", false,-1);
    tracep->declBit(c+2,"core_mem_ren_o", false,-1);
    tracep->declQuad(c+9,"core_mem_buswdata_o", false,-1, 63,0);
    tracep->declQuad(c+11,"core_mem_rwaddr_o", false,-1, 63,0);
    tracep->declBus(c+13,"core_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+296,"core_wbpc_o", false,-1, 63,0);
    tracep->declBus(c+295,"core_wbinst_o", false,-1, 31,0);
    tracep->declQuad(c+3,"core_mempc_o", false,-1, 63,0);
    tracep->declQuad(c+3,"if_id_pc", false,-1, 63,0);
    tracep->declBus(c+14,"if_id_inst", false,-1, 31,0);
    tracep->declBit(c+15,"ex_if_branch_flag", false,-1);
    tracep->declQuad(c+16,"ex_if_branch_dnpc", false,-1, 63,0);
    tracep->declBit(c+18,"id_ex_reg_wen", false,-1);
    tracep->declBit(c+19,"id_ex_mem_wen", false,-1);
    tracep->declBit(c+20,"id_ex_mem_ren", false,-1);
    tracep->declBus(c+21,"id_ex_mem_mask", false,-1, 2,0);
    tracep->declBus(c+22,"id_ex_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"id_ex_alusel", false,-1, 3,0);
    tracep->declBus(c+24,"id_ex_aluop", false,-1, 15,0);
    tracep->declQuad(c+25,"id_ex_rs1", false,-1, 63,0);
    tracep->declQuad(c+9,"id_ex_rs2", false,-1, 63,0);
    tracep->declQuad(c+3,"id_ex_pc", false,-1, 63,0);
    tracep->declQuad(c+27,"id_ex_imm", false,-1, 63,0);
    tracep->declBus(c+14,"id_ex_inst", false,-1, 31,0);
    tracep->declBit(c+29,"id_ex_except_ecall", false,-1);
    tracep->declBit(c+30,"id_ex_except_mret", false,-1);
    tracep->declBit(c+31,"id_ex_csr_wen", false,-1);
    tracep->declQuad(c+32,"id_ex_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+34,"id_ex_csrzimm", false,-1, 63,0);
    tracep->declBus(c+36,"id_ex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"ex_ls_reg_wen", false,-1);
    tracep->declBit(c+19,"ex_ls_mem_wen", false,-1);
    tracep->declBit(c+20,"ex_ls_mem_ren", false,-1);
    tracep->declBus(c+21,"ex_ls_mem_mask", false,-1, 2,0);
    tracep->declBus(c+22,"ex_ls_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+11,"ex_ls_aluresult", false,-1, 63,0);
    tracep->declQuad(c+9,"ex_ls_rs2", false,-1, 63,0);
    tracep->declQuad(c+3,"ex_ls_pc", false,-1, 63,0);
    tracep->declBus(c+14,"ex_ls_inst", false,-1, 31,0);
    tracep->declBit(c+31,"ex_ls_csr_wen", false,-1);
    tracep->declBus(c+36,"ex_ls_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"ex_ls_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+29,"ex_ls_except_ecall", false,-1);
    tracep->declBit(c+30,"ex_ls_except_mret", false,-1);
    tracep->declBit(c+39,"ls_wb_reg_wen", false,-1);
    tracep->declBus(c+22,"ls_wb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+40,"ls_wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+3,"ls_wb_pc", false,-1, 63,0);
    tracep->declBus(c+14,"ls_wb_inst", false,-1, 31,0);
    tracep->declBit(c+42,"ls_wb_csr_wen", false,-1);
    tracep->declBus(c+36,"ls_wb_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"ls_wb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"wb_id_reg_wen", false,-1);
    tracep->declBus(c+22,"wb_id_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+40,"wb_id_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+42,"wb_id_csr_wen", false,-1);
    tracep->declBus(c+36,"wb_id_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"wb_id_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"ctrl_if_trap_flag", false,-1);
    tracep->declQuad(c+44,"ctrl_if_trap_dnpc", false,-1, 63,0);
    tracep->declBus(c+46,"ctrl_id_excepttype", false,-1, 3,0);
    tracep->declQuad(c+3,"ctrl_id_exceptpc", false,-1, 63,0);
    tracep->declQuad(c+47,"id_ctrl_mtvecdata", false,-1, 63,0);
    tracep->declQuad(c+49,"id_ctrl_mepcdata", false,-1, 63,0);
    tracep->declBit(c+51,"id_ls_mstatus_mie", false,-1);
    tracep->declBit(c+52,"id_ls_mie_mtie", false,-1);
    tracep->declBit(c+53,"clint_ls_timestop", false,-1);
    tracep->declQuad(c+54,"crossbar_ls_mmio_busrdata", false,-1, 63,0);
    tracep->declBit(c+56,"ls_crossbar_mmio_wen", false,-1);
    tracep->declBit(c+20,"ls_crossbar_mmio_ren", false,-1);
    tracep->declQuad(c+9,"ls_crossbar_mmio_buswdata", false,-1, 63,0);
    tracep->declQuad(c+11,"ls_crossbar_mmio_rwaddr", false,-1, 63,0);
    tracep->declBus(c+13,"ls_crossbar_mem_wmask", false,-1, 7,0);
    tracep->declBit(c+57,"ls_ctrl_except_timerintr", false,-1);
    tracep->declQuad(c+3,"ls_ctrl_exceptpc", false,-1, 63,0);
    tracep->declQuad(c+58,"clint_crossbar_clint_busrdata", false,-1, 63,0);
    tracep->declBit(c+60,"crossbar_clint_clint_wen", false,-1);
    tracep->declBit(c+61,"crossbar_clint_clint_ren", false,-1);
    tracep->declQuad(c+11,"crossbar_clint_clint_rwaddr", false,-1, 63,0);
    tracep->declQuad(c+9,"crossbar_clint_clint_buswdata", false,-1, 63,0);
    tracep->pushNamePrefix("CTRL_inst ");
    tracep->declQuad(c+47,"ctrl_mtvecdata_i", false,-1, 63,0);
    tracep->declQuad(c+49,"ctrl_mepcdata_i", false,-1, 63,0);
    tracep->declBit(c+29,"ctrl_except_ecall_i", false,-1);
    tracep->declBit(c+30,"ctrl_except_mret_i", false,-1);
    tracep->declBit(c+57,"ctrl_except_timerintr_i", false,-1);
    tracep->declQuad(c+3,"ctrl_exceptpc_i", false,-1, 63,0);
    tracep->declBus(c+46,"ctrl_excepttype_o", false,-1, 3,0);
    tracep->declQuad(c+3,"ctrl_exceptpc_o", false,-1, 63,0);
    tracep->declBit(c+43,"ctrl_trap_flag_o", false,-1);
    tracep->declQuad(c+44,"ctrl_trap_dnpc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU_inst ");
    tracep->declBit(c+18,"ex_reg_wen_i", false,-1);
    tracep->declBus(c+22,"ex_reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+19,"ex_mem_wen_i", false,-1);
    tracep->declBit(c+20,"ex_mem_ren_i", false,-1);
    tracep->declBus(c+21,"ex_mem_mask_i", false,-1, 2,0);
    tracep->declBus(c+23,"ex_alusel_i", false,-1, 3,0);
    tracep->declBus(c+24,"ex_aluop_i", false,-1, 15,0);
    tracep->declQuad(c+25,"ex_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+9,"ex_rs2_i", false,-1, 63,0);
    tracep->declQuad(c+3,"ex_pc_i", false,-1, 63,0);
    tracep->declQuad(c+27,"ex_imm_i", false,-1, 63,0);
    tracep->declBit(c+29,"ex_except_ecall_i", false,-1);
    tracep->declBit(c+30,"ex_except_mret_i", false,-1);
    tracep->declQuad(c+32,"ex_csr_rdata_i", false,-1, 63,0);
    tracep->declBit(c+31,"ex_csr_wen_i", false,-1);
    tracep->declBus(c+36,"ex_csr_waddr_i", false,-1, 11,0);
    tracep->declQuad(c+34,"ex_csrzimm_i", false,-1, 63,0);
    tracep->declBit(c+18,"ex_reg_wen_o", false,-1);
    tracep->declBus(c+22,"ex_reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+11,"ex_aluresult_o", false,-1, 63,0);
    tracep->declBit(c+19,"ex_mem_wen_o", false,-1);
    tracep->declBit(c+20,"ex_mem_ren_o", false,-1);
    tracep->declBus(c+21,"ex_mem_mask_o", false,-1, 2,0);
    tracep->declQuad(c+9,"ex_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+3,"ex_pc_o", false,-1, 63,0);
    tracep->declBit(c+31,"ex_csr_wen_o", false,-1);
    tracep->declBus(c+36,"ex_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+37,"ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+29,"ex_except_ecall_o", false,-1);
    tracep->declBit(c+30,"ex_except_mret_o", false,-1);
    tracep->declBit(c+15,"ex_branch_flag_o", false,-1);
    tracep->declQuad(c+16,"ex_branch_dnpc_o", false,-1, 63,0);
    tracep->declBus(c+14,"ex_inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"ex_inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+23,"alu_alusel_i", false,-1, 3,0);
    tracep->declBus(c+24,"alu_aluop_i", false,-1, 15,0);
    tracep->declQuad(c+25,"alu_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+9,"alu_rs2_i", false,-1, 63,0);
    tracep->declQuad(c+3,"alu_pc_i", false,-1, 63,0);
    tracep->declQuad(c+27,"alu_imm_i", false,-1, 63,0);
    tracep->declQuad(c+32,"alu_csr_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+34,"alu_csrzimm_i", false,-1, 63,0);
    tracep->declQuad(c+11,"alu_result_o", false,-1, 63,0);
    tracep->declQuad(c+37,"alu_csr_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+62,"logic_result", false,-1, 63,0);
    tracep->declQuad(c+64,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+66,"branch_result", false,-1, 63,0);
    tracep->declQuad(c+68,"arithmetic_result", false,-1, 63,0);
    tracep->declQuad(c+70,"div_result", false,-1, 63,0);
    tracep->declQuad(c+72,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+74,"rem_result", false,-1, 63,0);
    tracep->declQuad(c+76,"csr_result", false,-1, 63,0);
    tracep->declQuad(c+78,"sra_mask", false,-1, 63,0);
    tracep->declQuad(c+80,"srai_mask", false,-1, 63,0);
    tracep->declQuad(c+82,"slli_result", false,-1, 63,0);
    tracep->declBus(c+84,"srliw_result", false,-1, 31,0);
    tracep->declBus(c+85,"slliw_result", false,-1, 31,0);
    tracep->declBus(c+86,"srlw_result", false,-1, 31,0);
    tracep->declBus(c+87,"sllw_result", false,-1, 31,0);
    tracep->declQuad(c+88,"rs1_add_rs2_result", false,-1, 63,0);
    tracep->declQuad(c+90,"rs1_add_imm_result", false,-1, 63,0);
    tracep->declQuad(c+92,"rs1_sub_rs2_result", false,-1, 63,0);
    tracep->declBit(c+94,"rs1_ge_rs2_unsigned", false,-1);
    tracep->declBit(c+95,"rs1_ge_rs2_signed", false,-1);
    tracep->declQuad(c+96,"rs1_sub_imm_result", false,-1, 63,0);
    tracep->declBit(c+98,"rs1_ge_imm_unsigned", false,-1);
    tracep->declBit(c+99,"rs1_ge_imm_signed", false,-1);
    tracep->declBus(c+100,"divw_result", false,-1, 31,0);
    tracep->declBus(c+101,"divuw_result", false,-1, 31,0);
    tracep->declQuad(c+102,"muldw_result", false,-1, 63,0);
    tracep->declBus(c+104,"remw_result", false,-1, 31,0);
    tracep->declBus(c+105,"remuw_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_ctr_inst ");
    tracep->declBus(c+24,"bc_aluop_i", false,-1, 15,0);
    tracep->declQuad(c+25,"bc_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+9,"bc_rs2_i", false,-1, 63,0);
    tracep->declQuad(c+3,"bc_pc_i", false,-1, 63,0);
    tracep->declQuad(c+27,"bc_imm_i", false,-1, 63,0);
    tracep->declBit(c+15,"bc_branch_flag_o", false,-1);
    tracep->declQuad(c+16,"bc_branch_dnpc_o", false,-1, 63,0);
    tracep->declQuad(c+106,"pc_add_imm_result", false,-1, 63,0);
    tracep->declQuad(c+108,"rs1_add_imm_result", false,-1, 63,0);
    tracep->declQuad(c+110,"rs1_sub_rs2_result", false,-1, 63,0);
    tracep->declBit(c+112,"rs1_eq_rs2", false,-1);
    tracep->declBit(c+113,"rs1_ge_rs2_unsigned", false,-1);
    tracep->declBit(c+114,"rs1_ge_rs2_signed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU_inst ");
    tracep->declBit(c+293,"id_clk_i", false,-1);
    tracep->declBit(c+294,"id_rst_n_i", false,-1);
    tracep->declQuad(c+3,"id_pc_i", false,-1, 63,0);
    tracep->declBus(c+14,"id_inst_i", false,-1, 31,0);
    tracep->declBit(c+39,"id_reg_wen_i", false,-1);
    tracep->declBus(c+22,"id_reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+40,"id_reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+42,"id_csr_wen_i", false,-1);
    tracep->declBus(c+36,"id_csr_waddr_i", false,-1, 11,0);
    tracep->declQuad(c+37,"id_csr_wdata_i", false,-1, 63,0);
    tracep->declBus(c+46,"id_excepttype_i", false,-1, 3,0);
    tracep->declQuad(c+3,"id_exceptpc_i", false,-1, 63,0);
    tracep->declBit(c+18,"id_reg_wen_o", false,-1);
    tracep->declBus(c+22,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+19,"id_mem_wen_o", false,-1);
    tracep->declBit(c+20,"id_mem_ren_o", false,-1);
    tracep->declBus(c+21,"id_mem_mask_o", false,-1, 2,0);
    tracep->declBus(c+23,"id_alusel_o", false,-1, 3,0);
    tracep->declBus(c+24,"id_aluop_o", false,-1, 15,0);
    tracep->declQuad(c+25,"id_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+9,"id_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+3,"id_pc_o", false,-1, 63,0);
    tracep->declBus(c+14,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+27,"id_imm_o", false,-1, 63,0);
    tracep->declBit(c+29,"id_except_ecall_o", false,-1);
    tracep->declBit(c+30,"id_except_mret_o", false,-1);
    tracep->declQuad(c+32,"id_csr_rdata_o", false,-1, 63,0);
    tracep->declBit(c+31,"id_csr_wen_o", false,-1);
    tracep->declBus(c+36,"id_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+34,"id_csrzimm_o", false,-1, 63,0);
    tracep->declQuad(c+47,"id_mtvecdata_o", false,-1, 63,0);
    tracep->declQuad(c+49,"id_mepcdata_o", false,-1, 63,0);
    tracep->declBit(c+51,"id_mstatus_mie_o", false,-1);
    tracep->declBit(c+52,"id_mie_mtie_o", false,-1);
    tracep->declBus(c+115,"opcode", false,-1, 6,0);
    tracep->declBus(c+21,"funct3", false,-1, 2,0);
    tracep->declBus(c+116,"funct7", false,-1, 6,0);
    tracep->declBus(c+22,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+117,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+118,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+119,"inst_add", false,-1);
    tracep->declBit(c+120,"inst_sub", false,-1);
    tracep->declBit(c+121,"inst_xor", false,-1);
    tracep->declBit(c+122,"inst_or", false,-1);
    tracep->declBit(c+123,"inst_and", false,-1);
    tracep->declBit(c+124,"inst_sll", false,-1);
    tracep->declBit(c+125,"inst_srl", false,-1);
    tracep->declBit(c+126,"inst_sra", false,-1);
    tracep->declBit(c+127,"inst_slt", false,-1);
    tracep->declBit(c+128,"inst_sltu", false,-1);
    tracep->declBit(c+129,"inst_sraw", false,-1);
    tracep->declBit(c+130,"inst_srlw", false,-1);
    tracep->declBit(c+131,"inst_subw", false,-1);
    tracep->declBit(c+132,"inst_sllw", false,-1);
    tracep->declBit(c+133,"inst_addw", false,-1);
    tracep->declBit(c+134,"inst_div", false,-1);
    tracep->declBit(c+135,"inst_divw", false,-1);
    tracep->declBit(c+136,"inst_mul", false,-1);
    tracep->declBit(c+137,"inst_mulw", false,-1);
    tracep->declBit(c+138,"inst_rem", false,-1);
    tracep->declBit(c+139,"inst_remw", false,-1);
    tracep->declBit(c+140,"inst_divu", false,-1);
    tracep->declBit(c+141,"inst_divuw", false,-1);
    tracep->declBit(c+142,"inst_remu", false,-1);
    tracep->declBit(c+143,"inst_remuw", false,-1);
    tracep->declBit(c+144,"inst_addi", false,-1);
    tracep->declBit(c+145,"inst_xori", false,-1);
    tracep->declBit(c+146,"inst_ori", false,-1);
    tracep->declBit(c+147,"inst_andi", false,-1);
    tracep->declBit(c+148,"inst_slli", false,-1);
    tracep->declBit(c+149,"inst_srli", false,-1);
    tracep->declBit(c+150,"inst_srai", false,-1);
    tracep->declBit(c+151,"inst_slti", false,-1);
    tracep->declBit(c+152,"inst_sltiu", false,-1);
    tracep->declBit(c+153,"inst_slliw", false,-1);
    tracep->declBit(c+154,"inst_sraiw", false,-1);
    tracep->declBit(c+155,"inst_srliw", false,-1);
    tracep->declBit(c+156,"inst_addiw", false,-1);
    tracep->declBit(c+157,"inst_jalr", false,-1);
    tracep->declBit(c+158,"inst_ebreak", false,-1);
    tracep->declBit(c+29,"inst_ecall", false,-1);
    tracep->declBit(c+30,"inst_mret", false,-1);
    tracep->declBit(c+159,"inst_csrrs", false,-1);
    tracep->declBit(c+160,"inst_csrrw", false,-1);
    tracep->declBit(c+161,"inst_csrrsi", false,-1);
    tracep->declBit(c+162,"inst_csrrwi", false,-1);
    tracep->declBit(c+163,"inst_lb", false,-1);
    tracep->declBit(c+164,"inst_lh", false,-1);
    tracep->declBit(c+165,"inst_lw", false,-1);
    tracep->declBit(c+166,"inst_ld", false,-1);
    tracep->declBit(c+167,"inst_lbu", false,-1);
    tracep->declBit(c+168,"inst_lhu", false,-1);
    tracep->declBit(c+169,"inst_lwu", false,-1);
    tracep->declBit(c+170,"inst_sb", false,-1);
    tracep->declBit(c+171,"inst_sh", false,-1);
    tracep->declBit(c+172,"inst_sw", false,-1);
    tracep->declBit(c+173,"inst_sd", false,-1);
    tracep->declBit(c+174,"inst_beq", false,-1);
    tracep->declBit(c+175,"inst_bne", false,-1);
    tracep->declBit(c+176,"inst_blt", false,-1);
    tracep->declBit(c+177,"inst_bge", false,-1);
    tracep->declBit(c+178,"inst_bltu", false,-1);
    tracep->declBit(c+179,"inst_bgeu", false,-1);
    tracep->declBit(c+180,"inst_jal", false,-1);
    tracep->declBit(c+181,"inst_lui", false,-1);
    tracep->declBit(c+182,"inst_auipc", false,-1);
    tracep->declBit(c+183,"inst_valid", false,-1);
    tracep->declQuad(c+184,"immI", false,-1, 63,0);
    tracep->declQuad(c+186,"immS", false,-1, 63,0);
    tracep->declQuad(c+188,"immB", false,-1, 63,0);
    tracep->declQuad(c+190,"immJ", false,-1, 63,0);
    tracep->declQuad(c+192,"immU", false,-1, 63,0);
    tracep->declBit(c+194,"type_I", false,-1);
    tracep->declBit(c+19,"type_S", false,-1);
    tracep->declBit(c+195,"type_B", false,-1);
    tracep->declBit(c+180,"type_J", false,-1);
    tracep->declBit(c+196,"type_U", false,-1);
    tracep->declQuad(c+27,"imm", false,-1, 63,0);
    tracep->declBit(c+197,"reg1_ren", false,-1);
    tracep->declBit(c+198,"reg2_ren", false,-1);
    tracep->declQuad(c+25,"reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+9,"reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+199,"alusel_logic", false,-1);
    tracep->declBit(c+200,"alusel_shift", false,-1);
    tracep->declBit(c+201,"alusel_arithmetic", false,-1);
    tracep->declBit(c+202,"alusel_branch", false,-1);
    tracep->declBit(c+203,"alusel_div", false,-1);
    tracep->declBit(c+204,"alusel_mul", false,-1);
    tracep->declBit(c+205,"alusel_rem", false,-1);
    tracep->declBit(c+31,"alusel_csr", false,-1);
    tracep->declBit(c+31,"csr_ren", false,-1);
    tracep->declBus(c+36,"csr_raddr", false,-1, 11,0);
    tracep->pushNamePrefix("csr_inst ");
    tracep->declBit(c+293,"csr_clk_i", false,-1);
    tracep->declBit(c+294,"csr_rst_n_i", false,-1);
    tracep->declBit(c+31,"csr_ren_i", false,-1);
    tracep->declBus(c+36,"csr_raddr_i", false,-1, 11,0);
    tracep->declBit(c+42,"csr_wen_i", false,-1);
    tracep->declBus(c+36,"csr_waddr_i", false,-1, 11,0);
    tracep->declQuad(c+37,"csr_wdata_i", false,-1, 63,0);
    tracep->declBus(c+46,"csr_execpttype_i", false,-1, 3,0);
    tracep->declQuad(c+3,"csr_exceptpc_i", false,-1, 63,0);
    tracep->declQuad(c+32,"csr_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+47,"csr_mtvecdata_o", false,-1, 63,0);
    tracep->declQuad(c+49,"csr_mepcdata_o", false,-1, 63,0);
    tracep->declBit(c+51,"csr_mstatus_mie_o", false,-1);
    tracep->declBit(c+52,"csr_mie_mtie_o", false,-1);
    tracep->declQuad(c+206,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+49,"mepc", false,-1, 63,0);
    tracep->declQuad(c+208,"mcause", false,-1, 63,0);
    tracep->declQuad(c+47,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+210,"mie", false,-1, 63,0);
    tracep->declQuad(c+212,"mip", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registerfile_inst ");
    tracep->declBit(c+293,"reg_clk_i", false,-1);
    tracep->declBit(c+294,"reg_rst_n_i", false,-1);
    tracep->declBit(c+39,"reg_wen_i", false,-1);
    tracep->declBus(c+22,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+40,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+197,"reg1_ren_i", false,-1);
    tracep->declBus(c+117,"reg1_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+25,"reg1_rdata_o", false,-1, 63,0);
    tracep->declBit(c+198,"reg2_ren_i", false,-1);
    tracep->declBus(c+118,"reg2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+9,"reg2_rdata_o", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+214+i*2,"gpr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU_inst ");
    tracep->declBit(c+293,"if_clk_i", false,-1);
    tracep->declBit(c+294,"if_rst_n_i", false,-1);
    tracep->declQuad(c+5,"if_memrdata_i", false,-1, 63,0);
    tracep->declBit(c+15,"if_branch_flag_i", false,-1);
    tracep->declQuad(c+16,"if_branch_dnpc_i", false,-1, 63,0);
    tracep->declBit(c+43,"if_trap_flag_i", false,-1);
    tracep->declQuad(c+44,"if_trap_dnpc_i", false,-1, 63,0);
    tracep->declQuad(c+3,"if_pc_o", false,-1, 63,0);
    tracep->declBus(c+14,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+278,"next_pc", false,-1, 63,0);
    tracep->declQuad(c+3,"current_pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU_inst ");
    tracep->declBit(c+51,"ls_mstatus_mie_i", false,-1);
    tracep->declBit(c+52,"ls_mie_mtie_i", false,-1);
    tracep->declBit(c+53,"ls_timestop_i", false,-1);
    tracep->declBit(c+18,"ls_reg_wen_i", false,-1);
    tracep->declBus(c+22,"ls_reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+11,"ls_aluresult_i", false,-1, 63,0);
    tracep->declBit(c+19,"ls_mem_wen_i", false,-1);
    tracep->declBit(c+20,"ls_mem_ren_i", false,-1);
    tracep->declBus(c+21,"ls_mem_mask_i", false,-1, 2,0);
    tracep->declQuad(c+9,"ls_rs2_i", false,-1, 63,0);
    tracep->declQuad(c+3,"ls_pc_i", false,-1, 63,0);
    tracep->declBit(c+31,"ls_csr_wen_i", false,-1);
    tracep->declBus(c+36,"ls_csr_waddr_i", false,-1, 11,0);
    tracep->declQuad(c+37,"ls_csr_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+54,"ls_mmio_busrdata_i", false,-1, 63,0);
    tracep->declBit(c+56,"ls_mmio_wen_o", false,-1);
    tracep->declBit(c+20,"ls_mmio_ren_o", false,-1);
    tracep->declQuad(c+9,"ls_mmio_buswdata_o", false,-1, 63,0);
    tracep->declQuad(c+11,"ls_mmio_rwaddr_o", false,-1, 63,0);
    tracep->declBus(c+13,"ls_mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+39,"ls_reg_wen_o", false,-1);
    tracep->declBus(c+22,"ls_reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+40,"ls_reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+42,"ls_csr_wen_o", false,-1);
    tracep->declBus(c+36,"ls_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+37,"ls_csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+57,"ls_except_timerintr_o", false,-1);
    tracep->declQuad(c+3,"ls_exceptpc_o", false,-1, 63,0);
    tracep->declQuad(c+3,"ls_pc_o", false,-1, 63,0);
    tracep->declBus(c+14,"ls_inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"ls_inst_o", false,-1, 31,0);
    tracep->declQuad(c+3,"ls_mempc_o", false,-1, 63,0);
    tracep->declBit(c+57,"timer_intr", false,-1);
    tracep->declBit(c+280,"mem_data_extend", false,-1);
    tracep->declQuad(c+281,"lb_rdata", false,-1, 63,0);
    tracep->declQuad(c+283,"lh_rdata", false,-1, 63,0);
    tracep->declQuad(c+285,"lw_rdata", false,-1, 63,0);
    tracep->declQuad(c+54,"ld_rdata", false,-1, 63,0);
    tracep->declQuad(c+287,"mem_rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU_inst ");
    tracep->declBit(c+39,"wb_reg_wen_i", false,-1);
    tracep->declBus(c+22,"wb_reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+40,"wb_reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+42,"wb_csr_wen_i", false,-1);
    tracep->declBus(c+36,"wb_csr_waddr_i", false,-1, 11,0);
    tracep->declQuad(c+37,"wb_csr_wdata_i", false,-1, 63,0);
    tracep->declBit(c+39,"wb_reg_wen_o", false,-1);
    tracep->declBus(c+22,"wb_reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+40,"wb_reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+42,"wb_csr_wen_o", false,-1);
    tracep->declBus(c+36,"wb_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+37,"wb_csr_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+3,"wb_pc_i", false,-1, 63,0);
    tracep->declQuad(c+296,"wb_pc_o", false,-1, 63,0);
    tracep->declBus(c+14,"wb_inst_i", false,-1, 31,0);
    tracep->declBus(c+295,"wb_inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_inst ");
    tracep->declBit(c+293,"clint_clk_i", false,-1);
    tracep->declBit(c+294,"clint_rst_n_i", false,-1);
    tracep->declBit(c+61,"clint_ren_i", false,-1);
    tracep->declQuad(c+11,"clint_rwaddr_i", false,-1, 63,0);
    tracep->declBit(c+60,"clint_wen_i", false,-1);
    tracep->declQuad(c+9,"clint_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+58,"clint_rdata_o", false,-1, 63,0);
    tracep->declBit(c+53,"clint_timestop_o", false,-1);
    tracep->declQuad(c+289,"mtime", false,-1, 63,0);
    tracep->declQuad(c+291,"mtimecmp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_crossbar_inst ");
    tracep->declBit(c+56,"crossbar_mmio_wen_i", false,-1);
    tracep->declBit(c+20,"crossbar_mmio_ren_i", false,-1);
    tracep->declQuad(c+9,"crossbar_mmio_buswdata_i", false,-1, 63,0);
    tracep->declQuad(c+11,"crossbar_mmio_rwaddr_i", false,-1, 63,0);
    tracep->declBus(c+13,"crossbar_mem_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+58,"crossbar_clint_busrdata_i", false,-1, 63,0);
    tracep->declQuad(c+7,"crossbar_mem_busrdata_i", false,-1, 63,0);
    tracep->declQuad(c+54,"crossbar_mmio_busrdata_o", false,-1, 63,0);
    tracep->declBit(c+60,"crossbar_clint_wen_o", false,-1);
    tracep->declBit(c+61,"crossbar_clint_ren_o", false,-1);
    tracep->declQuad(c+11,"crossbar_clint_rwaddr_o", false,-1, 63,0);
    tracep->declQuad(c+9,"crossbar_clint_buswdata_o", false,-1, 63,0);
    tracep->declBit(c+1,"crossbar_mem_wen_o", false,-1);
    tracep->declBit(c+2,"crossbar_mem_ren_o", false,-1);
    tracep->declQuad(c+9,"crossbar_mem_buswdata_o", false,-1, 63,0);
    tracep->declQuad(c+11,"crossbar_mem_rwaddr_o", false,-1, 63,0);
    tracep->declBus(c+13,"crossbar_mem_wmask_o", false,-1, 7,0);
    tracep->popNamePrefix(3);
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
    tracep->fullBit(oldp+1,((((0x200bff8ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                              & (0x2004000ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                             & ((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                                & ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))))));
    tracep->fullBit(oldp+2,((((0x200bff8ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                              & (0x2004000ULL != vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                             & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))));
    tracep->fullQData(oldp+3,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040386_TOP__DOT__ifmemrdata),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040386_TOP__DOT__mem_busrdata),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult),64);
    tracep->fullCData(oldp+13,(((0x4000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                 ? 0U : (0xffU & ((0x2000U 
                                                   & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                                    ? 0xffU
                                                    : 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                    : 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))))))),8);
    tracep->fullIData(oldp+14,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst),32);
    tracep->fullBit(oldp+15,((1U & ((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2)
                                     : ((0x20U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                         ? (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2))
                                         : ((0x21U 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                             ? (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed))
                                             : ((0x22U 
                                                 == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                 ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed)
                                                 : 
                                                ((0x23U 
                                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned))
                                                  : 
                                                 ((0x24U 
                                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                   ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned)
                                                   : 
                                                  ((0x25U 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                                   | (0x26U 
                                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))))))))))));
    tracep->fullQData(oldp+16,(((((((((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                      | (0x20U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                     | (0x21U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                    | (0x22U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                   | (0x23U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                  | (0x24U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                 | (0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                 ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                    + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                 : ((0x26U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (0xfffffffffffffffeULL 
                                        & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                           + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                     : 0ULL))),64);
    tracep->fullBit(oldp+18,(((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))));
    tracep->fullBit(oldp+19,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd))));
    tracep->fullBit(oldp+20,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren));
    tracep->fullCData(oldp+21,((7U & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+22,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+23,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_alusel),4);
    tracep->fullSData(oldp+24,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop),16);
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata),64);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm),64);
    tracep->fullBit(oldp+29,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall));
    tracep->fullBit(oldp+30,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret));
    tracep->fullBit(oldp+31,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi))));
    tracep->fullQData(oldp+32,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata),64);
    tracep->fullQData(oldp+34,((QData)((IData)((0x1fU 
                                                & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                   >> 0xfU))))),64);
    tracep->fullSData(oldp+36,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_csr_wdata),64);
    tracep->fullBit(oldp+39,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                              & (((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi)))));
    tracep->fullQData(oldp+40,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren)
                                 ? ((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                     ? ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata
                                         : ((0U == 
                                             (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                    >> 0x20U))))
                                                 : 0xffffffffffffffffULL)))
                                     : ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata
                                         : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata))
                                 : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)),64);
    tracep->fullBit(oldp+42,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ls_wb_csr_wen));
    tracep->fullBit(oldp+43,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret))));
    tracep->fullQData(oldp+44,((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                                 : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                                     : 0ULL))),64);
    tracep->fullCData(oldp+46,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ctrl_id_excepttype),4);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc),64);
    tracep->fullBit(oldp+51,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus 
                                            >> 3U)))));
    tracep->fullBit(oldp+52,((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie 
                                            >> 7U)))));
    tracep->fullBit(oldp+53,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime 
                              >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp)));
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata),64);
    tracep->fullBit(oldp+56,(((~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr)) 
                              & ((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)))));
    tracep->fullBit(oldp+57,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr));
    tracep->fullQData(oldp+58,(((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                                  | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))
                                 ? ((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                                     ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime
                                     : ((0x2004000ULL 
                                         == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)
                                         ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp
                                         : 0ULL)) : 0ULL)),64);
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_clint_clint_wen));
    tracep->fullBit(oldp+61,((((0x200bff8ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult) 
                               | (0x2004000ULL == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)) 
                              & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_mem_ren))));
    tracep->fullQData(oldp+62,(((3U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                    ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                 : ((4U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                        | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                     : ((5U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                         ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                            & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                         : ((0xcU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                             ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                ^ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                             : ((0xdU 
                                                 == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                 ? 
                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 | vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                  ? 
                                                 (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                  & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                                  : 0ULL))))))),64);
    tracep->fullQData(oldp+64,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__shift_result),64);
    tracep->fullQData(oldp+66,(((0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                 : ((0x26U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)
                                     : 0ULL))),64);
    tracep->fullQData(oldp+68,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__arithmetic_result),64);
    tracep->fullQData(oldp+70,(((0x2dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? VL_DIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                 : ((0x2eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result)))
                                     : ((0x36U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                         ? VL_DIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                         : ((0x37U 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result)))
                                             : 0ULL))))),64);
    tracep->fullQData(oldp+72,(((0x2fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result
                                 : ((0x30U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result)))
                                     : 0ULL))),64);
    tracep->fullQData(oldp+74,(((0x39U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                 ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                 : ((0x31U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result)))
                                     : ((0x3aU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                         ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata, vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)
                                         : ((0x38U 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result)))
                                             : 0ULL))))),64);
    tracep->fullQData(oldp+76,((((((0x3cU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                   | (0x3dU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                  | (0x3eU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                 | (0x3fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                 ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_csr_rdata
                                 : 0ULL)),64);
    tracep->fullQData(oldp+78,((0xffffffffffffffffULL 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))),64);
    tracep->fullQData(oldp+80,((0xffffffffffffffffULL 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
    tracep->fullQData(oldp+82,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                << (0x3fU & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
    tracep->fullIData(oldp+84,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srliw_result),32);
    tracep->fullIData(oldp+85,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__slliw_result),32);
    tracep->fullIData(oldp+86,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__srlw_result),32);
    tracep->fullIData(oldp+87,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__sllw_result),32);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_rs2_result),64);
    tracep->fullQData(oldp+90,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_add_imm_result),64);
    tracep->fullQData(oldp+92,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result),64);
    tracep->fullBit(oldp+94,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                              >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)));
    tracep->fullBit(oldp+95,((1U & (((~ (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 >> 0x3fU))) 
                                     & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                >> 0x3fU))) 
                                    | (((1U & (IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                       >> 0x3fU))) 
                                        == (1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                          >> 0x3fU)))) 
                                       & (~ (IData)(
                                                    (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__rs1_sub_rs2_result 
                                                     >> 0x3fU))))))));
    tracep->fullQData(oldp+96,((1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                        + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)))),64);
    tracep->fullBit(oldp+98,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                              >= vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)));
    tracep->fullBit(oldp+99,((1U & (((~ (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 >> 0x3fU))) 
                                     & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                >> 0x3fU))) 
                                    | (((1U & (IData)(
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                       >> 0x3fU))) 
                                        == (1U & (IData)(
                                                         (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm 
                                                          >> 0x3fU)))) 
                                       & (~ (IData)(
                                                    ((1ULL 
                                                      + 
                                                      (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                       + 
                                                       (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))) 
                                                     >> 0x3fU))))))));
    tracep->fullIData(oldp+100,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divw_result),32);
    tracep->fullIData(oldp+101,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__divuw_result),32);
    tracep->fullQData(oldp+102,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__muldw_result),64);
    tracep->fullIData(oldp+104,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remw_result),32);
    tracep->fullIData(oldp+105,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__alu_inst__DOT__remuw_result),32);
    tracep->fullQData(oldp+106,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                 + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)),64);
    tracep->fullQData(oldp+108,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                 + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)),64);
    tracep->fullQData(oldp+110,((((1U & (IData)((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 >> 0x3fU))) 
                                  == (1U & (IData)(
                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata 
                                                    >> 0x3fU))))
                                  ? (1ULL + (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                             + (~ vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg2_rdata)))
                                  : 0ULL)),64);
    tracep->fullBit(oldp+112,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2));
    tracep->fullBit(oldp+113,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned));
    tracep->fullBit(oldp+114,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed));
    tracep->fullCData(oldp+115,((0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)),7);
    tracep->fullCData(oldp+116,((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+117,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+118,((0x1fU & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+119,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add));
    tracep->fullBit(oldp+120,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub));
    tracep->fullBit(oldp+121,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor));
    tracep->fullBit(oldp+122,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or));
    tracep->fullBit(oldp+123,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and));
    tracep->fullBit(oldp+124,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll));
    tracep->fullBit(oldp+125,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl));
    tracep->fullBit(oldp+126,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra));
    tracep->fullBit(oldp+127,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt));
    tracep->fullBit(oldp+128,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu));
    tracep->fullBit(oldp+129,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw));
    tracep->fullBit(oldp+130,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw));
    tracep->fullBit(oldp+131,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw));
    tracep->fullBit(oldp+132,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw));
    tracep->fullBit(oldp+133,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw));
    tracep->fullBit(oldp+134,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div));
    tracep->fullBit(oldp+135,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw));
    tracep->fullBit(oldp+136,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul));
    tracep->fullBit(oldp+137,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw));
    tracep->fullBit(oldp+138,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem));
    tracep->fullBit(oldp+139,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw));
    tracep->fullBit(oldp+140,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu));
    tracep->fullBit(oldp+141,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw));
    tracep->fullBit(oldp+142,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu));
    tracep->fullBit(oldp+143,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw));
    tracep->fullBit(oldp+144,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi));
    tracep->fullBit(oldp+145,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori));
    tracep->fullBit(oldp+146,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori));
    tracep->fullBit(oldp+147,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi));
    tracep->fullBit(oldp+148,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli));
    tracep->fullBit(oldp+149,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli));
    tracep->fullBit(oldp+150,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai));
    tracep->fullBit(oldp+151,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti));
    tracep->fullBit(oldp+152,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu));
    tracep->fullBit(oldp+153,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw));
    tracep->fullBit(oldp+154,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw));
    tracep->fullBit(oldp+155,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw));
    tracep->fullBit(oldp+156,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw));
    tracep->fullBit(oldp+157,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr));
    tracep->fullBit(oldp+158,((0x100073U == vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)));
    tracep->fullBit(oldp+159,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs));
    tracep->fullBit(oldp+160,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw));
    tracep->fullBit(oldp+161,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrsi));
    tracep->fullBit(oldp+162,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrwi));
    tracep->fullBit(oldp+163,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb));
    tracep->fullBit(oldp+164,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh));
    tracep->fullBit(oldp+165,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw));
    tracep->fullBit(oldp+166,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld));
    tracep->fullBit(oldp+167,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu));
    tracep->fullBit(oldp+168,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu));
    tracep->fullBit(oldp+169,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu));
    tracep->fullBit(oldp+170,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb));
    tracep->fullBit(oldp+171,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh));
    tracep->fullBit(oldp+172,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw));
    tracep->fullBit(oldp+173,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd));
    tracep->fullBit(oldp+174,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq));
    tracep->fullBit(oldp+175,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne));
    tracep->fullBit(oldp+176,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt));
    tracep->fullBit(oldp+177,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge));
    tracep->fullBit(oldp+178,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu));
    tracep->fullBit(oldp+179,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu));
    tracep->fullBit(oldp+180,((0x6fU == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
    tracep->fullBit(oldp+181,((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
    tracep->fullBit(oldp+182,((0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))));
    tracep->fullBit(oldp+183,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_valid));
    tracep->fullQData(oldp+184,((((- (QData)((IData)(
                                                     (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                              >> 0x14U))))),64);
    tracep->fullQData(oldp+186,((((- (QData)((IData)(
                                                     (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+188,((((- (QData)((IData)(
                                                     (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0x1fU)))) 
                                  << 0xdU) | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                          >> 7U))))))))),64);
    tracep->fullQData(oldp+190,((((- (QData)((IData)(
                                                     (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                           >> 0x14U))))))))),64);
    tracep->fullQData(oldp+192,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))))),64);
    tracep->fullBit(oldp+194,((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw))));
    tracep->fullBit(oldp+195,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu))));
    tracep->fullBit(oldp+196,(((0x37U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)) 
                               | (0x17U == (0x7fU & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)))));
    tracep->fullBit(oldp+197,((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi)) 
                                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq)) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrs)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_csrrw))));
    tracep->fullBit(oldp+198,((((((((((((((((((((((
                                                   ((((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor)) 
                                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll)) 
                                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw))));
    tracep->fullBit(oldp+199,(((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xor) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_or)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_and)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_xori)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ori)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_andi))));
    tracep->fullBit(oldp+200,(((((((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sll) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srl)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sra)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slli)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srli)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srai)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slliw)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraiw)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srliw)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sraw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_srlw)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sllw))));
    tracep->fullBit(oldp+201,((((((((((((((((((((((
                                                   ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_add) 
                                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sub)) 
                                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slt)) 
                                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltu)) 
                                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_slti)) 
                                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sltiu)) 
                                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addi)) 
                                              | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lb)) 
                                             | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lh)) 
                                            | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lw)) 
                                           | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ld)) 
                                          | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lbu)) 
                                         | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lhu)) 
                                        | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_lwu)) 
                                       | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sb)) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sh)) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sw)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_sd)) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addiw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_subw)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_addw))));
    tracep->fullBit(oldp+202,(((((((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_beq) 
                                     | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bne)) 
                                    | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_blt)) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bge)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bltu)) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_bgeu)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst))) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_jalr))));
    tracep->fullBit(oldp+203,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_div) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divu)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_divuw))));
    tracep->fullBit(oldp+204,(((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mul) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mulw))));
    tracep->fullBit(oldp+205,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_rem) 
                                 | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remw)) 
                                | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remu)) 
                               | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_remuw))));
    tracep->fullQData(oldp+206,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mstatus),64);
    tracep->fullQData(oldp+208,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mcause),64);
    tracep->fullQData(oldp+210,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mie),64);
    tracep->fullQData(oldp+212,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mip),64);
    tracep->fullQData(oldp+214,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[0]),64);
    tracep->fullQData(oldp+216,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[1]),64);
    tracep->fullQData(oldp+218,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[2]),64);
    tracep->fullQData(oldp+220,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[3]),64);
    tracep->fullQData(oldp+222,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[4]),64);
    tracep->fullQData(oldp+224,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[5]),64);
    tracep->fullQData(oldp+226,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[6]),64);
    tracep->fullQData(oldp+228,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[7]),64);
    tracep->fullQData(oldp+230,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[8]),64);
    tracep->fullQData(oldp+232,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[9]),64);
    tracep->fullQData(oldp+234,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[10]),64);
    tracep->fullQData(oldp+236,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[11]),64);
    tracep->fullQData(oldp+238,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[12]),64);
    tracep->fullQData(oldp+240,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[13]),64);
    tracep->fullQData(oldp+242,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[14]),64);
    tracep->fullQData(oldp+244,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[15]),64);
    tracep->fullQData(oldp+246,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[16]),64);
    tracep->fullQData(oldp+248,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[17]),64);
    tracep->fullQData(oldp+250,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[18]),64);
    tracep->fullQData(oldp+252,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[19]),64);
    tracep->fullQData(oldp+254,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[20]),64);
    tracep->fullQData(oldp+256,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[21]),64);
    tracep->fullQData(oldp+258,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[22]),64);
    tracep->fullQData(oldp+260,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[23]),64);
    tracep->fullQData(oldp+262,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[24]),64);
    tracep->fullQData(oldp+264,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[25]),64);
    tracep->fullQData(oldp+266,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[26]),64);
    tracep->fullQData(oldp+268,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[27]),64);
    tracep->fullQData(oldp+270,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[28]),64);
    tracep->fullQData(oldp+272,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[29]),64);
    tracep->fullQData(oldp+274,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[30]),64);
    tracep->fullQData(oldp+276,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__registerfile_inst__DOT__gpr[31]),64);
    tracep->fullQData(oldp+278,(((((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr) 
                                   | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall)) 
                                  | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret))
                                  ? (((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_ecall) 
                                      | (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__timer_intr))
                                      ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mtvec
                                      : ((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__inst_mret)
                                          ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__csr_inst__DOT__mepc
                                          : 0ULL)) : 
                                 ((1U & ((0x1fU == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                          ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2)
                                          : ((0x20U 
                                              == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                              ? (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_eq_rs2))
                                              : ((0x21U 
                                                  == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed))
                                                  : 
                                                 ((0x22U 
                                                   == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                   ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_signed)
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned))
                                                    : 
                                                   ((0x24U 
                                                     == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                                     ? (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__EXU_inst__DOT__branch_ctr_inst__DOT__rs1_ge_rs2_unsigned)
                                                     : 
                                                    ((0x25U 
                                                      == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                                     | (0x26U 
                                                        == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))))))))))
                                   ? ((((((((0x1fU 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)) 
                                            | (0x20U 
                                               == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                           | (0x21U 
                                              == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                          | (0x22U 
                                             == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                         | (0x23U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                        | (0x24U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))) 
                                       | (0x25U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop)))
                                       ? (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc 
                                          + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm)
                                       : ((0x26U == (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__id_ex_aluop))
                                           ? (0xfffffffffffffffeULL 
                                              & (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__reg1_rdata 
                                                 + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IDU_inst__DOT__imm))
                                           : 0ULL))
                                   : (4ULL + vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__IFU_inst__DOT__current_pc)))),64);
    tracep->fullBit(oldp+280,((1U & (~ (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                        >> 0xeU)))));
    tracep->fullQData(oldp+281,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata),64);
    tracep->fullQData(oldp+283,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata),64);
    tracep->fullQData(oldp+285,(((0U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                              >> 0x1fU)) 
                                                                     & (~ 
                                                                        (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                         >> 0xeU)))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                  : ((4U == (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                      ? (((QData)((IData)(
                                                          (- (IData)((IData)(
                                                                             ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                               >> 0x3fU) 
                                                                              & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                            >> 0x20U))))
                                      : 0xffffffffffffffffULL))),64);
    tracep->fullQData(oldp+287,(((0x2000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                  ? ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                      ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata
                                      : ((0U == (7U 
                                                 & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x1fU)) 
                                                                             & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata)))
                                          : ((4U == 
                                              (7U & (IData)(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__ex_ls_aluresult)))
                                              ? (((QData)((IData)(
                                                                  (- (IData)((IData)(
                                                                                ((vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                                >> 0x3fU) 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst 
                                                                                >> 0xeU)))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__crossbar_ls_mmio_busrdata 
                                                                    >> 0x20U))))
                                              : 0xffffffffffffffffULL)))
                                  : ((0x1000U & vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__if_id_inst)
                                      ? vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lh_rdata
                                      : vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__LSU_inst__DOT__lb_rdata))),64);
    tracep->fullQData(oldp+289,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtime),64);
    tracep->fullQData(oldp+291,(vlSelf->ysyx_22040386_TOP__DOT__mycpu_inst__DOT__clint_inst__DOT__mtimecmp),64);
    tracep->fullBit(oldp+293,(vlSelf->top_clk_i));
    tracep->fullBit(oldp+294,(vlSelf->top_rst_n_i));
    tracep->fullIData(oldp+295,(vlSelf->top_wbinst_o),32);
    tracep->fullQData(oldp+296,(vlSelf->top_wbpc_o),64);
}
