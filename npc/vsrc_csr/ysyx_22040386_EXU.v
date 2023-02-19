module ysyx_22040386_EXU(
//-------------测试信号----------------
    input wire [31:0] i_EX_inst,
//------------from ID-----------------
    input wire i_EX_RegWrite,
    input wire i_EX_Word_op,
    input wire i_EX_MemRead,
    input wire i_EX_MemWrite,
    input wire i_EX_ALUBsrc,
    input wire i_EX_Auipc,
    input wire i_EX_Jal,
    input wire i_EX_Jalr,
    input wire i_EX_Lui,
    //input wire i_EX_DIV_word,
    input wire [2:0] i_EX_FUNCT3,
    input wire [2:0] i_EX_Branch_type,
    input wire [4:0] i_EX_reg_wr_addr,
    input wire [5:0] i_EX_ALUctr,
    input wire [63:0] i_EX_imm,
    input wire [63:0] i_EX_reg_rd_data1,
    input wire [63:0] i_EX_reg_rd_data2,
    input wire [63:0] i_EX_pc,
    //过路的CSR
    input wire i_EX_ecall,
    input wire i_EX_mret,
    input wire i_EX_csr_RegWrite,
    input wire i_EX_csr_wen,
    input wire [11:0] i_EX_csr_waddr,
    input wire [63:0] i_EX_csr_wdata,
    input wire [63:0] i_EX_csr_rdata,
    
//---------------to MEM---------------
    output wire o_EX_zero,
    output wire o_EX_RegWrite,
    output wire o_EX_MemWrite,
    output wire o_EX_MemRead,
    output wire o_EX_Jal,
    output wire o_EX_Jalr,
    output wire [2:0] o_EX_FUNCT3,
    output wire [2:0] o_EX_Branch_type,
    output wire [4:0] o_EX_reg_wr_addr,
    output wire [63:0] o_EX_pc_add_imm,
    output wire [63:0] o_EX_ALUresult,
    output wire [63:0] o_EX_mem_wr_data,
    output wire [63:0] o_EX_reg_wr_data,

    //output wire [2:0] o_EX_mem_mask,
    //------------------csr  只是过路信号---------------------
    output wire o_EX_ecall,
    output wire o_EX_mret,
    output wire o_EX_csr_RegWrite,
    output wire o_EX_csr_wen,
    output wire [11:0] o_EX_csr_waddr,
    output wire [63:0] o_EX_csr_wdata,
    output wire [63:0] o_EX_csr_rdata,
    //---------------测试仿真需要---------
    output wire [63:0] o_EX_pc,
    //-------------测试信号----------------
    output wire [31:0] o_EX_inst
);

//---------------测试仿真需要---------
assign o_EX_pc = i_EX_pc;
assign o_EX_inst = i_EX_inst;

//--------csr------------------------
assign o_EX_ecall            = i_EX_ecall;
assign o_EX_mret             = i_EX_mret;
assign o_EX_csr_RegWrite     = i_EX_csr_RegWrite;
assign o_EX_csr_wen          = i_EX_csr_wen;
assign o_EX_csr_waddr        = i_EX_csr_waddr;
assign o_EX_csr_wdata        = i_EX_csr_wdata;
assign o_EX_csr_rdata        = i_EX_csr_rdata;


wire [63:0] EX_src1, EX_src2, EX_snpc;

//assign EX_real_reg_rd_data2 = i_EX_reg_rd_data2;
assign EX_src1 = i_EX_reg_rd_data1;
assign EX_src2 = (i_EX_ALUBsrc) ? i_EX_imm : i_EX_reg_rd_data2;

assign EX_snpc = i_EX_pc + 64'd4;

assign o_EX_pc_add_imm = i_EX_pc + i_EX_imm;
assign o_EX_reg_wr_data = ({64{i_EX_Jal | i_EX_Jalr}} & EX_snpc) | ({64{i_EX_Lui}} & i_EX_imm) | ({64{i_EX_Auipc}} & o_EX_pc_add_imm) | 
({64{!(i_EX_Jal | i_EX_Jalr | i_EX_Lui | i_EX_Auipc)}} & o_EX_ALUresult);
assign o_EX_mem_wr_data = i_EX_reg_rd_data2;

//中间数据流
assign o_EX_reg_wr_addr = i_EX_reg_wr_addr;
assign o_EX_FUNCT3 = i_EX_FUNCT3;
//assign o_EX_mem_mask = i_EX_mem_mask;
assign o_EX_RegWrite = i_EX_RegWrite;
assign o_EX_MemWrite = i_EX_MemWrite;
assign o_EX_MemRead = i_EX_MemRead;
assign o_EX_Branch_type = i_EX_Branch_type;
assign o_EX_Jal = i_EX_Jal;
assign o_EX_Jalr = i_EX_Jalr;


//ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (.zero(zero), .Jal(Jal), .Jalr(Jalr), .result0(result[0]), 
//.Branch_type(Branch_type), .Branch(Branch));

ysyx_22040386_ALU ysyx_22040386_ALU_inst (.src1(EX_src1), .src2(EX_src2), .ALUctr(i_EX_ALUctr), .zero(o_EX_zero), 
.result(o_EX_ALUresult), .Word_op(i_EX_Word_op) );

endmodule
