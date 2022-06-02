module ysyx_22040386_TOP (
    input wire i_TOP_clk,
    input wire i_TOP_rst_n,

    output wire o_TOP_unkown_code,
    //output wire [31:0] o_TOP_inst,
    output wire [63:0] o_TOP_pc,
    //output wire o_TOP_Branch
    output wire [31:0] o_TOP_inst,
    output wire [1:0] o_TOP_fw_EX_src1fw,
    output wire [1:0] o_TOP_fw_EX_src2fw,
    output wire [4:0] o_TOP_ID_EX_reg_rd_addr1,
    output wire [4:0] o_TOP_ID_EX_reg_rd_addr2,
    output wire [4:0] o_TOP_EX_MEM_reg_wr_addr,
    output wire o_TOP_EX_MEM_RegWrite,
    output wire o_TOP_Branch,
    output wire o_TOP_jump_flag
);

assign o_TOP_fw_EX_src1fw = TOP_fw_EX_src1fw;
assign o_TOP_fw_EX_src2fw = TOP_fw_EX_src2fw;
assign o_TOP_ID_EX_reg_rd_addr1 = ID_EX_reg_rd_addr1_o;
assign o_TOP_ID_EX_reg_rd_addr2 = ID_EX_reg_rd_addr2_o;
assign o_TOP_EX_MEM_reg_wr_addr = EX_MEM_reg_wr_addr_o;
assign o_TOP_EX_MEM_RegWrite = EX_MEM_RegWrite_o;
assign o_TOP_Branch = TOP_Branch;
assign o_TOP_jump_flag = TOP_jump_flag;

wire TOP_Branch, TOP_RegWrite;
wire [4:0] TOP_reg_wr_addr;
wire [63:0] TOP_dnpc, TOP_reg_wr_data;

wire TOP_load_use_flag, TOP_jump_flag;
wire TOP_fw_ID_reg_rd1fw, TOP_fw_ID_reg_rd2fw;
wire [1:0] TOP_fw_EX_src1fw, TOP_fw_EX_src2fw;

//##IF/ID
wire [4:0] IF_ID_reg_rd_addr1_i, IF_ID_reg_rd_addr1_o, IF_ID_reg_rd_addr2_i, IF_ID_reg_rd_addr2_o;
wire [63:0] IF_ID_pc_i, IF_ID_pc_o;
wire [31:0] IF_ID_inst_i, IF_ID_inst_o;
//##ID/EX
wire ID_EX_RegWrite_i, ID_EX_Word_op_i, ID_EX_MemRead_i, ID_EX_MemWrite_i, ID_EX_ALUBsrc_i, ID_EX_Auipc_i;
wire ID_EX_RegWrite_o, ID_EX_Word_op_o, ID_EX_MemRead_o, ID_EX_MemWrite_o, ID_EX_ALUBsrc_o, ID_EX_Auipc_o;
wire ID_EX_Jal_i, ID_EX_Jalr_i, ID_EX_Lui_i;
wire ID_EX_Jal_o, ID_EX_Jalr_o, ID_EX_Lui_o;
wire [2:0] ID_EX_Branch_type_i, ID_EX_mem_mask_i;
wire [2:0] ID_EX_Branch_type_o, ID_EX_mem_mask_o;
wire [4:0] ID_EX_reg_wr_addr_i, ID_EX_reg_rd_addr1_i, ID_EX_reg_rd_addr2_i;
wire [4:0] ID_EX_reg_wr_addr_o, ID_EX_reg_rd_addr1_o, ID_EX_reg_rd_addr2_o;
wire [5:0] ID_EX_ALUctr_i;
wire [5:0] ID_EX_ALUctr_o;
wire [63:0] ID_EX_imm_i, ID_EX_reg_rd_data1_i, ID_EX_reg_rd_data2_i, ID_EX_pc_i;
wire [63:0] ID_EX_imm_o, ID_EX_reg_rd_data1_o, ID_EX_reg_rd_data2_o, ID_EX_pc_o;

wire ID_EX_unkown_code_i, ID_EX_unkown_code_o;
wire [31:0] ID_EX_inst_i, ID_EX_inst_o;
//##EX/MEM
wire [63:0] EX_MEM_pc_i, EX_MEM_pc_o; //###
wire [63:0] EX_MEM_snpc_i, EX_MEM_snpc_o;
wire EX_MEM_zero_i, EX_MEM_RegWrite_i, EX_MEM_MemWrite_i, EX_MEM_MemRead_i, EX_MEM_Jal_i, EX_MEM_Jalr_i;
wire EX_MEM_zero_o, EX_MEM_RegWrite_o, EX_MEM_MemWrite_o, EX_MEM_MemRead_o, EX_MEM_Jal_o, EX_MEM_Jalr_o;
wire [2:0] EX_MEM_mem_mask_i, EX_MEM_Branch_type_i;
wire [2:0] EX_MEM_mem_mask_o, EX_MEM_Branch_type_o;
wire [4:0] EX_MEM_reg_wr_addr_i, EX_MEM_reg_rd_addr2_i;
wire [4:0] EX_MEM_reg_wr_addr_o, EX_MEM_reg_rd_addr2_o;
wire [63:0] EX_MEM_pc_add_imm_i, EX_MEM_ALUresult_i, EX_MEM_mem_wr_data_i, EX_MEM_reg_wr_data_i;
wire [63:0] EX_MEM_pc_add_imm_o, EX_MEM_ALUresult_o, EX_MEM_mem_wr_data_o, EX_MEM_reg_wr_data_o;

wire EX_MEM_unkown_code_i, EX_MEM_unkown_code_o;
wire [31:0] EX_MEM_inst_i, EX_MEM_inst_o;
//##MEM/WB
wire MEM_WB_RegWrite_i;
wire MEM_WB_RegWrite_o;
wire [4:0] MEM_WB_reg_wr_addr_i;
wire [4:0] MEM_WB_reg_wr_addr_o;
wire [63:0] MEM_WB_reg_wr_data_i;
wire [63:0] MEM_WB_reg_wr_data_o;
wire [63:0] MEM_WB_pc_i, MEM_WB_pc_o;

wire MEM_WB_unkown_code_i, MEM_WB_unkown_code_o;
wire [31:0] MEM_WB_inst_i, MEM_WB_inst_o;

//模块例化
ysyx_22040386_IFU ysyx_22040386_IFU_inst (
.i_IF_rst_n(i_TOP_rst_n),
.i_IF_clk(i_TOP_clk),
.i_IF_Branch(TOP_Branch),
.i_IF_load_use_flag(TOP_load_use_flag),
.i_IF_dnpc(TOP_dnpc),
.o_IF_pc(IF_ID_pc_i),
.o_IF_inst(IF_ID_inst_i),
.o_IF_reg_rd_addr1(IF_ID_reg_rd_addr1_i),
.o_IF_reg_rd_addr2(IF_ID_reg_rd_addr2_i)
);

ysyx_22040386_IF_ID ysyx_22040386_IF_ID_inst (
.i_IF_ID_clk(i_TOP_clk),
.i_IF_ID_rst_n(i_TOP_rst_n),
.i_IF_ID_jump_flag(TOP_jump_flag),
.i_IF_ID_load_use_flag(TOP_load_use_flag),
.i_IF_ID_inst(IF_ID_inst_i),
.i_IF_ID_pc(IF_ID_pc_i),
.i_IF_ID_reg_rd_addr1(IF_ID_reg_rd_addr1_i),
.i_IF_ID_reg_rd_addr2(IF_ID_reg_rd_addr2_i),
.o_IF_ID_inst(IF_ID_inst_o),
.o_IF_ID_pc(IF_ID_pc_o),
.o_IF_ID_reg_rd_addr1(IF_ID_reg_rd_addr1_o),
.o_IF_ID_reg_rd_addr2(IF_ID_reg_rd_addr2_o)
);

ysyx_22040386_IDU ysyx_22040386_IDU_inst (
.i_ID_clk(i_TOP_clk),
.i_ID_pc(IF_ID_pc_o),
.i_ID_inst(IF_ID_inst_o),
.i_ID_RegWrite(TOP_RegWrite),
.i_ID_reg_wr_addr(TOP_reg_wr_addr),
.i_ID_reg_wr_data(TOP_reg_wr_data),
.i_ID_reg_rd_addr1(IF_ID_reg_rd_addr1_o),
.i_ID_reg_rd_addr2(IF_ID_reg_rd_addr2_o),
.i_fw_ID_reg_rd1fw(TOP_fw_ID_reg_rd1fw),
.i_fw_ID_reg_rd2fw(TOP_fw_ID_reg_rd2fw),
.i_id_ID_EX_MemRead_o(ID_EX_MemRead_o),
.i_id_ID_EX_reg_wr_addr_o(ID_EX_reg_wr_addr_o),
.i_id_MEM_WB_reg_wr_data_o(MEM_WB_reg_wr_data_o),

.o_load_use_flag(TOP_load_use_flag),
.o_ID_RegWrite(ID_EX_RegWrite_i),
.o_ID_Word_op(ID_EX_Word_op_i),
.o_ID_MemRead(ID_EX_MemRead_i),
.o_ID_MemWrite(ID_EX_MemWrite_i),
.o_ID_ALUBsrc(ID_EX_ALUBsrc_i),
.o_ID_Auipc(ID_EX_Auipc_i),
.o_ID_Jal(ID_EX_Jal_i),
.o_ID_Jalr(ID_EX_Jalr_i),
.o_ID_Lui(ID_EX_Lui_i),
.o_ID_Branch_type(ID_EX_Branch_type_i),
.o_ID_mem_mask(ID_EX_mem_mask_i),
.o_ID_reg_wr_addr(ID_EX_reg_wr_addr_i),
.o_ID_ALUctr(ID_EX_ALUctr_i),
.o_ID_imm(ID_EX_imm_i),
.o_ID_reg_rd_data1(ID_EX_reg_rd_data1_i),
.o_ID_reg_rd_data2(ID_EX_reg_rd_data2_i),
.o_ID_pc(ID_EX_pc_i),
.o_ID_reg_rd_addr1(ID_EX_reg_rd_addr1_i),
.o_ID_reg_rd_addr2(ID_EX_reg_rd_addr2_i),

.o_ID_unkown_code(ID_EX_unkown_code_i),
.o_ID_inst(ID_EX_inst_i)
);

ysyx_22040386_ID_EX ysyx_22040386_ID_EX_inst (
.i_ID_EX_clk(i_TOP_clk),
.i_ID_EX_rst_n(i_TOP_rst_n),
.i_ID_EX_load_use_flag(TOP_load_use_flag),
.i_ID_EX_jump_flag(TOP_jump_flag),
.i_ID_EX_Word_op(ID_EX_Word_op_i),
.i_ID_EX_RegWrite(ID_EX_RegWrite_i),
.i_ID_EX_MemWrite(ID_EX_MemWrite_i),
.i_ID_EX_ALUBsrc(ID_EX_ALUBsrc_i),
.i_ID_EX_MemRead(ID_EX_MemRead_i),
.i_ID_EX_Auipc(ID_EX_Auipc_i),
.i_ID_EX_Jal(ID_EX_Jal_i),
.i_ID_EX_Jalr(ID_EX_Jalr_i),
.i_ID_EX_Lui(ID_EX_Lui_i),
.i_ID_EX_Branch_type(ID_EX_Branch_type_i),
.i_ID_EX_mem_mask(ID_EX_mem_mask_i),
.i_ID_EX_reg_wr_addr(ID_EX_reg_wr_addr_i),
.i_ID_EX_ALUctr(ID_EX_ALUctr_i),
.i_ID_EX_pc(ID_EX_pc_i),
.i_ID_EX_imm(ID_EX_imm_i),
.i_ID_EX_reg_rd_data1(ID_EX_reg_rd_data1_i),
.i_ID_EX_reg_rd_data2(ID_EX_reg_rd_data2_i),
.i_ID_EX_reg_rd_addr1(ID_EX_reg_rd_addr1_i),
.i_ID_EX_reg_rd_addr2(ID_EX_reg_rd_addr2_i),

.o_ID_EX_Word_op(ID_EX_Word_op_o),
.o_ID_EX_RegWrite(ID_EX_RegWrite_o),
.o_ID_EX_MemWrite(ID_EX_MemWrite_o),
.o_ID_EX_ALUBsrc(ID_EX_ALUBsrc_o),
.o_ID_EX_MemRead(ID_EX_MemRead_o),
.o_ID_EX_Auipc(ID_EX_Auipc_o),
.o_ID_EX_Jal(ID_EX_Jal_o),
.o_ID_EX_Jalr(ID_EX_Jalr_o),
.o_ID_EX_Lui(ID_EX_Lui_o),
.o_ID_EX_Branch_type(ID_EX_Branch_type_o),
.o_ID_EX_mem_mask(ID_EX_mem_mask_o),
.o_ID_EX_reg_wr_addr(ID_EX_reg_wr_addr_o),
.o_ID_EX_ALUctr(ID_EX_ALUctr_o),
.o_ID_EX_pc(ID_EX_pc_o),
.o_ID_EX_imm(ID_EX_imm_o),
.o_ID_EX_reg_rd_data1(ID_EX_reg_rd_data1_o),
.o_ID_EX_reg_rd_data2(ID_EX_reg_rd_data2_o),
.o_ID_EX_reg_rd_addr1(ID_EX_reg_rd_addr1_o),
.o_ID_EX_reg_rd_addr2(ID_EX_reg_rd_addr2_o),

.i_ID_EX_unkown_code(ID_EX_unkown_code_i),
.i_ID_EX_inst(ID_EX_inst_i),
.o_ID_EX_unkown_code(ID_EX_unkown_code_o),
.o_ID_EX_inst(ID_EX_inst_o)
);

ysyx_22040386_EXU ysyx_22040386_EXU_inst (
.i_EX_Word_op(ID_EX_Word_op_o),
.i_EX_ALUBsrc(ID_EX_ALUBsrc_o),
.i_EX_Auipc(ID_EX_Auipc_o),
.i_EX_Lui(ID_EX_Lui_o),
.i_EX_ALUctr(ID_EX_ALUctr_o),
.i_EX_pc(ID_EX_pc_o),
.i_EX_imm(ID_EX_imm_o),
.i_EX_reg_rd_data1(ID_EX_reg_rd_data1_o),
.i_EX_reg_rd_data2(ID_EX_reg_rd_data2_o),
.i_EX_reg_rd_addr2(ID_EX_reg_rd_addr2_o),
.i_EX_reg_wr_addr(ID_EX_reg_wr_addr_o),
.i_EX_mem_mask(ID_EX_mem_mask_o),
.i_EX_RegWrite(ID_EX_RegWrite_o),
.i_EX_MemWrite(ID_EX_MemWrite_o),
.i_EX_MemRead(ID_EX_MemRead_o),
.i_EX_Jal(ID_EX_Jal_o),
.i_EX_Jalr(ID_EX_Jalr_o),
.i_EX_Branch_type(ID_EX_Branch_type_o),
.i_fw_EX_src1fw(TOP_fw_EX_src1fw),
.i_fw_EX_src2fw(TOP_fw_EX_src2fw),
.i_ex_MEM_WB_reg_wr_data_o(MEM_WB_reg_wr_data_o),
.i_ex_EX_MEM_reg_wr_data_o(EX_MEM_reg_wr_data_o),

.o_EX_zero(EX_MEM_zero_i),
.o_EX_pc_add_imm(EX_MEM_pc_add_imm_i),
.o_EX_ALUresult(EX_MEM_ALUresult_i),
.o_EX_mem_wr_data(EX_MEM_mem_wr_data_i),
.o_EX_reg_wr_data(EX_MEM_reg_wr_data_i),
.o_EX_reg_rd_addr2(EX_MEM_reg_rd_addr2_i),
.o_EX_reg_wr_addr(EX_MEM_reg_wr_addr_i),
.o_EX_mem_mask(EX_MEM_mem_mask_i),
.o_EX_RegWrite(EX_MEM_RegWrite_i),
.o_EX_MemWrite(EX_MEM_MemWrite_i),
.o_EX_MemRead(EX_MEM_MemRead_i),
.o_EX_Branch_type(EX_MEM_Branch_type_i),
.o_EX_Jal(EX_MEM_Jal_i),
.o_EX_Jalr(EX_MEM_Jalr_i),
.o_EX_snpc(EX_MEM_snpc_i),
.o_EX_pc(EX_MEM_pc_i),

.i_EX_unkown_code(ID_EX_unkown_code_o),
.i_EX_inst(ID_EX_inst_o),
.o_EX_unkown_code(EX_MEM_unkown_code_i),
.o_EX_inst(EX_MEM_inst_i)
);

ysyx_22040386_EX_MEM ysyx_22040386_EX_MEM_inst(
.i_EX_MEM_clk(i_TOP_clk),
.i_EX_MEM_rst_n(i_TOP_rst_n),
.i_EX_MEM_jump_flag(TOP_jump_flag),
.i_EX_MEM_zero(EX_MEM_zero_i),
.i_EX_MEM_RegWrite(EX_MEM_RegWrite_i),
.i_EX_MEM_MemWrite(EX_MEM_MemWrite_i),
.i_EX_MEM_MemRead(EX_MEM_MemRead_i),
.i_EX_MEM_Jal(EX_MEM_Jal_i),
.i_EX_MEM_Jalr(EX_MEM_Jalr_i),
.i_EX_MEM_Branch_type(EX_MEM_Branch_type_i),
.i_EX_MEM_mem_mask(EX_MEM_mem_mask_i),
.i_EX_MEM_reg_rd_addr2(EX_MEM_reg_rd_addr2_i),
.i_EX_MEM_reg_wr_addr(EX_MEM_reg_wr_addr_i),
.i_EX_MEM_ALUresult(EX_MEM_ALUresult_i),
.i_EX_MEM_pc_add_imm(EX_MEM_pc_add_imm_i),
.i_EX_MEM_reg_wr_data(EX_MEM_reg_wr_data_i),
.i_EX_MEM_mem_wr_data(EX_MEM_mem_wr_data_i),
.i_EX_MEM_snpc(EX_MEM_snpc_i),
.i_EX_MEM_pc(EX_MEM_pc_i),
.o_EX_MEM_zero(EX_MEM_zero_o),
.o_EX_MEM_RegWrite(EX_MEM_RegWrite_o),
.o_EX_MEM_MemWrite(EX_MEM_MemWrite_o),
.o_EX_MEM_MemRead(EX_MEM_MemRead_o),
.o_EX_MEM_Jal(EX_MEM_Jal_o),
.o_EX_MEM_Jalr(EX_MEM_Jalr_o),
.o_EX_MEM_Branch_type(EX_MEM_Branch_type_o),
.o_EX_MEM_mem_mask(EX_MEM_mem_mask_o),
.o_EX_MEM_reg_rd_addr2(EX_MEM_reg_rd_addr2_o),
.o_EX_MEM_reg_wr_addr(EX_MEM_reg_wr_addr_o),
.o_EX_MEM_ALUresult(EX_MEM_ALUresult_o),
.o_EX_MEM_pc_add_imm(EX_MEM_pc_add_imm_o),
.o_EX_MEM_reg_wr_data(EX_MEM_reg_wr_data_o),
.o_EX_MEM_mem_wr_data(EX_MEM_mem_wr_data_o),
.o_EX_MEM_snpc(EX_MEM_snpc_o),
.o_EX_MEM_pc(EX_MEM_pc_o),

.i_EX_MEM_unkown_code(EX_MEM_unkown_code_i),
.i_EX_MEM_inst(EX_MEM_inst_i),
.o_EX_MEM_unkown_code(EX_MEM_unkown_code_o),
.o_EX_MEM_inst(EX_MEM_inst_o)
);

ysyx_22040386_MEMU ysyx_22040386_MEMU_inst (
.i_MEM_clk(i_TOP_clk),
.i_MEM_Jal(EX_MEM_Jal_o),
.i_MEM_Jalr(EX_MEM_Jalr_o),
.i_MEM_zero(EX_MEM_zero_o),
.i_MEM_MemRead(EX_MEM_MemRead_o),
.i_MEM_MemWrite(EX_MEM_MemWrite_o),
.i_MEM_Branch_type(EX_MEM_Branch_type_o),
.i_MEM_mem_mask(EX_MEM_mem_mask_o),
.i_MEM_mem_wr_data(EX_MEM_mem_wr_data_o),
.i_MEM_pc_add_imm(EX_MEM_pc_add_imm_o),
.i_MEM_ALUresult(EX_MEM_ALUresult_o),
.i_MEM_reg_wr_data(EX_MEM_reg_wr_data_o),
.i_MEM_snpc(EX_MEM_snpc_o),
.i_MEM_pc(EX_MEM_pc_o),
.i_mem_EX_MEM_RegWrite_o(EX_MEM_RegWrite_o),
.i_mem_MEM_WB_RegWrite_o(MEM_WB_RegWrite_o),
.i_mem_IF_ID_reg_rd_addr1_o(IF_ID_reg_rd_addr1_o),
.i_mem_IF_ID_reg_rd_addr2_o(IF_ID_reg_rd_addr2_o),
.i_mem_ID_EX_reg_rd_addr1_o(ID_EX_reg_rd_addr1_o),
.i_mem_ID_EX_reg_rd_addr2_o(ID_EX_reg_rd_addr2_o),
.i_mem_EX_MEM_reg_rd_addr2_o(EX_MEM_reg_rd_addr2_o),
.i_mem_EX_MEM_reg_wr_addr_o(EX_MEM_reg_wr_addr_o),
.i_mem_MEM_WB_reg_wr_addr_o(MEM_WB_reg_wr_addr_o),
.i_mem_MEM_WB_reg_wr_data_o(MEM_WB_reg_wr_data_o),
.i_MEM_RegWrite(EX_MEM_RegWrite_o),
.i_MEM_reg_wr_addr(EX_MEM_reg_wr_addr_o),

.o_MEM_dnpc(TOP_dnpc),
.o_MEM_Branch(TOP_Branch),
.o_MEM_reg_wr_data(MEM_WB_reg_wr_data_i),
.o_MEM_RegWrite(MEM_WB_RegWrite_i),
.o_MEM_reg_wr_addr(MEM_WB_reg_wr_addr_i),
.o_jump_flag(TOP_jump_flag),
.o_fw_ID_reg_rd1fw(TOP_fw_ID_reg_rd1fw),
.o_fw_ID_reg_rd2fw(TOP_fw_ID_reg_rd2fw),
.o_fw_EX_src1fw(TOP_fw_EX_src1fw),
.o_fw_EX_src2fw(TOP_fw_EX_src2fw),
.o_MEM_pc(MEM_WB_pc_i),

.i_MEM_unkown_code(EX_MEM_unkown_code_o),
.i_MEM_inst(EX_MEM_inst_o),
.o_MEM_unkown_code(MEM_WB_unkown_code_i),
.o_MEM_inst(MEM_WB_inst_i)
);

ysyx_22040386_MEM_WB ysyx_22040386_MEM_WB_inst (
.i_MEM_WB_clk(i_TOP_clk),
.i_MEM_WB_rst_n(i_TOP_rst_n),
.i_MEM_WB_RegWrite(MEM_WB_RegWrite_i),
.i_MEM_WB_reg_wr_addr(MEM_WB_reg_wr_addr_i),
.i_MEM_WB_reg_wr_data(MEM_WB_reg_wr_data_i),
.i_MEM_WB_pc(MEM_WB_pc_i),

.o_MEM_WB_RegWrite(MEM_WB_RegWrite_o),
.o_MEM_WB_reg_wr_addr(MEM_WB_reg_wr_addr_o),
.o_MEM_WB_reg_wr_data(MEM_WB_reg_wr_data_o),
.o_MEM_WB_pc(MEM_WB_pc_o),

.i_MEM_WB_unkown_code(MEM_WB_unkown_code_i),
.i_MEM_WB_inst(MEM_WB_inst_i),
.o_MEM_WB_unkown_code(MEM_WB_unkown_code_o),
.o_MEM_WB_inst(MEM_WB_inst_o)
);

ysyx_22040386_WBU ysyx_22040386_WBU_inst (
.i_WB_reg_wr_data(MEM_WB_reg_wr_data_o),
.i_WB_RegWrite(MEM_WB_RegWrite_o),
.i_WB_reg_wr_addr(MEM_WB_reg_wr_addr_o),
.i_WB_pc(MEM_WB_pc_o),

.o_WB_reg_wr_data(TOP_reg_wr_data),
.o_WB_RegWrite(TOP_RegWrite),
.o_WB_reg_wr_addr(TOP_reg_wr_addr),
.o_WB_pc(o_TOP_pc),

.i_WB_unkown_code(MEM_WB_unkown_code_o),
.i_WB_inst(MEM_WB_inst_o),
.o_WB_unkown_code(o_TOP_unkown_code),
.o_WB_inst(o_TOP_inst)
);

/*##DPI-C 识别到ebreak指令后自动结束##*/
import "DPI-C" function void ebreak();
always @ (*) begin
  if (o_TOP_inst == 32'h0010_0073)
    ebreak();
end

//##DPI-C访存内存##*/
/*
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);
wire [63:0] wr_mem_data;
wire [63:0] rd_mem_data;
wire [63:0] i_rdata;
assign wr_mem_data = busB;
assign I = (pc[2]) ? i_rdata[63:32] : i_rdata[31:0];  //取指

always @(*) begin
    pmem_read(pc, i_rdata);
    //pmem_read(mem_d_addr, rd_mem_data);
end

always @(*) begin
    pmem_read(mem_d_addr, rd_mem_data);
end

always @ (posedge clk) begin
    if (MemWrite)
        pmem_write(mem_d_addr, wr_mem_data, Wmask);
end
*/
/*
wire _unused_ok = &{1'b0,
                    MemWrite,
                    Wmask,  // To be fixed
                    1'b0};
*/

endmodule
