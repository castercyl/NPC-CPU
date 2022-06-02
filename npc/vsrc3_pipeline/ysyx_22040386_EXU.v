module ysyx_22040386_EXU(
    input wire i_EX_Word_op,
    input wire i_EX_ALUBsrc,
    input wire i_EX_Auipc,
    input wire i_EX_Lui,
    input wire [5:0] i_EX_ALUctr,
    input wire [63:0] i_EX_pc,
    input wire [63:0] i_EX_imm,
    input wire [63:0] i_EX_reg_rd_data1,
    input wire [63:0] i_EX_reg_rd_data2,
    
    input wire [4:0] i_EX_reg_rd_addr2,
    input wire [4:0] i_EX_reg_wr_addr,
    input wire [2:0] i_EX_mem_mask,
    input wire i_EX_RegWrite,
    input wire i_EX_MemWrite,
    input wire i_EX_MemRead,
    input wire i_EX_Jal,
    input wire i_EX_Jalr,
    input wire [2:0] i_EX_Branch_type,

    input wire [1:0] i_fw_EX_src1fw,
    input wire [1:0] i_fw_EX_src2fw,
    input wire [63:0] i_ex_MEM_WB_reg_wr_data_o,
    input wire [63:0] i_ex_EX_MEM_reg_wr_data_o,
    
    output wire o_EX_zero,
    output wire [63:0] o_EX_pc_add_imm,
    output wire [63:0] o_EX_ALUresult,
    output wire [63:0] o_EX_mem_wr_data,
    output wire [63:0] o_EX_reg_wr_data,

    output wire [4:0] o_EX_reg_rd_addr2,
    output wire [4:0] o_EX_reg_wr_addr,
    output wire [2:0] o_EX_mem_mask,
    output wire o_EX_RegWrite,
    output wire o_EX_MemWrite,
    output wire o_EX_MemRead,
    output wire [2:0] o_EX_Branch_type,
    output wire o_EX_Jal,
    output wire o_EX_Jalr,

    output wire [63:0] o_EX_snpc,
    output wire [63:0] o_EX_pc,

    input wire i_EX_unkown_code,
    input wire [31:0] i_EX_inst,
    output wire o_EX_unkown_code,
    output wire [31:0] o_EX_inst
);

wire [63:0] EX_src1, EX_src2;
reg [63:0] EX_real_reg_rd_data1, EX_real_reg_rd_data2;

always @ (*) begin
    case (i_fw_EX_src1fw)
    2'b00: EX_real_reg_rd_data1 = i_EX_reg_rd_data1;
    2'b01: EX_real_reg_rd_data1 = i_ex_MEM_WB_reg_wr_data_o;
    2'b10: EX_real_reg_rd_data1 = i_ex_EX_MEM_reg_wr_data_o;
    default: EX_real_reg_rd_data1 = 64'd0;
    endcase
end

always @ (*) begin
    case (i_fw_EX_src2fw)
    2'b00: EX_real_reg_rd_data2 = i_EX_reg_rd_data2;
    2'b01: EX_real_reg_rd_data2 = i_ex_MEM_WB_reg_wr_data_o;
    2'b10: EX_real_reg_rd_data2 = i_ex_EX_MEM_reg_wr_data_o;
    default: EX_real_reg_rd_data2 = 64'd0;
    endcase
end

assign EX_src1 = EX_real_reg_rd_data1;
assign EX_src2 = (i_EX_ALUBsrc) ? i_EX_imm : EX_real_reg_rd_data2;

assign o_EX_snpc = i_EX_pc + 64'd4;

assign o_EX_pc_add_imm = i_EX_pc + i_EX_imm;
assign o_EX_reg_wr_data = ({64{i_EX_Jal | i_EX_Jalr}} & o_EX_snpc) | ({64{i_EX_Lui}} & i_EX_imm) | ({64{i_EX_Auipc}} & o_EX_pc_add_imm) | 
({64{!(i_EX_Jal | i_EX_Jalr | i_EX_Lui | i_EX_Auipc)}} & o_EX_ALUresult);
assign o_EX_mem_wr_data = EX_real_reg_rd_data2;

//中间数据流
assign o_EX_reg_rd_addr2 = i_EX_reg_rd_addr2;
assign o_EX_reg_wr_addr = i_EX_reg_wr_addr;
assign o_EX_mem_mask = i_EX_mem_mask;
assign o_EX_RegWrite = i_EX_RegWrite;
assign o_EX_MemWrite = i_EX_MemWrite;
assign o_EX_MemRead = i_EX_MemRead;
assign o_EX_Branch_type = i_EX_Branch_type;
assign o_EX_Jal = i_EX_Jal;
assign o_EX_Jalr = i_EX_Jalr;

assign o_EX_pc = i_EX_pc;
assign o_EX_unkown_code = i_EX_unkown_code;
assign o_EX_inst = i_EX_inst;
//ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (.zero(zero), .Jal(Jal), .Jalr(Jalr), .result0(result[0]), 
//.Branch_type(Branch_type), .Branch(Branch));

ysyx_22040386_ALU ysyx_22040386_ALU_inst (
.src1(EX_src1),
.src2(EX_src2),
.ALUctr(i_EX_ALUctr),
.zero(o_EX_zero),
.result(o_EX_ALUresult),
.Word_op(i_EX_Word_op)
);

endmodule
