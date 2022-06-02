module ysyx_22040386_ID_EX (
    input wire i_ID_EX_clk,
    input wire i_ID_EX_rst_n,

    input wire i_ID_EX_load_use_flag,
    input wire i_ID_EX_jump_flag,

    input wire i_ID_EX_Word_op,
    input wire i_ID_EX_RegWrite,
    input wire i_ID_EX_MemWrite,
    input wire i_ID_EX_ALUBsrc,
    input wire i_ID_EX_MemRead,
    input wire i_ID_EX_Auipc,
    input wire i_ID_EX_Jal,
    input wire i_ID_EX_Jalr,
    input wire i_ID_EX_Lui,
    input wire [2:0] i_ID_EX_Branch_type,
    input wire [2:0] i_ID_EX_mem_mask,
    input wire [4:0] i_ID_EX_reg_wr_addr,
    input wire [5:0] i_ID_EX_ALUctr,
    input wire [63:0] i_ID_EX_pc,
    input wire [63:0] i_ID_EX_imm,
    input wire [63:0] i_ID_EX_reg_rd_data1,
    input wire [63:0] i_ID_EX_reg_rd_data2,
    input wire [4:0] i_ID_EX_reg_rd_addr1,
    input wire [4:0] i_ID_EX_reg_rd_addr2,

    input wire i_ID_EX_unkown_code,    //仅用于前期检测未实现的指令
    input  wire [31:0] i_ID_EX_inst,    //用于五级流水测试检测ebreak停程序

    output reg o_ID_EX_Word_op,
    output reg o_ID_EX_RegWrite,
    output reg o_ID_EX_MemWrite,
    output reg o_ID_EX_ALUBsrc,
    output reg o_ID_EX_MemRead,
    output reg o_ID_EX_Auipc,
    output reg o_ID_EX_Jal,
    output reg o_ID_EX_Jalr,
    output reg o_ID_EX_Lui,
    output reg [2:0] o_ID_EX_Branch_type,
    output reg [2:0] o_ID_EX_mem_mask,
    output reg [4:0] o_ID_EX_reg_wr_addr,
    output reg [5:0] o_ID_EX_ALUctr,
    output reg [63:0] o_ID_EX_pc,
    output reg [63:0] o_ID_EX_imm,
    output reg [63:0] o_ID_EX_reg_rd_data1,
    output reg [63:0] o_ID_EX_reg_rd_data2,
    output reg [4:0] o_ID_EX_reg_rd_addr1,
    output reg [4:0] o_ID_EX_reg_rd_addr2,

    output reg o_ID_EX_unkown_code,    //仅用于前期检测未实现的指令
    output reg [31:0] o_ID_EX_inst   //用于五级流水测试检测ebreak停程序
);

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Word_op <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Word_op <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Word_op <= 1'b0;
    else
        o_ID_EX_Word_op <= i_ID_EX_Word_op;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_RegWrite <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_RegWrite <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_RegWrite <= 1'b0;
    else
        o_ID_EX_RegWrite <= i_ID_EX_RegWrite;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_MemWrite <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_MemWrite <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_MemWrite <= 1'b0;
    else
        o_ID_EX_MemWrite <= i_ID_EX_MemWrite;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_ALUBsrc <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_ALUBsrc <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_ALUBsrc <= 1'b0;
    else
        o_ID_EX_ALUBsrc <= i_ID_EX_ALUBsrc;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_MemRead <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_MemRead <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_MemRead <= 1'b0;
    else
        o_ID_EX_MemRead <= i_ID_EX_MemRead;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Auipc <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Auipc <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Auipc <= 1'b0;
    else
        o_ID_EX_Auipc <= i_ID_EX_Auipc;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Jal <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Jal <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Jal <= 1'b0;
    else
        o_ID_EX_Jal <= i_ID_EX_Jal;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Jalr <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Jalr <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Jalr <= 1'b0;
    else
        o_ID_EX_Jalr <= i_ID_EX_Jalr;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Lui <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Lui <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Lui <= 1'b0;
    else
        o_ID_EX_Lui <= i_ID_EX_Lui;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_Branch_type <= 3'b010;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_Branch_type <= 3'b010;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_Branch_type <= 3'b010;
    else
        o_ID_EX_Branch_type <= i_ID_EX_Branch_type;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_reg_rd_addr1 <= 5'd0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_reg_rd_addr1 <= 5'd0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_reg_rd_addr1 <= 5'd0;
    else
        o_ID_EX_reg_rd_addr1 <= i_ID_EX_reg_rd_addr1;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_reg_rd_addr2 <= 5'd0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_reg_rd_addr2 <= 5'd0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_reg_rd_addr2 <= 5'd0;
    else
        o_ID_EX_reg_rd_addr2 <= i_ID_EX_reg_rd_addr2;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_reg_wr_addr <= 5'd0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_reg_wr_addr <= 5'd0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_reg_wr_addr <= 5'd0;
    else
        o_ID_EX_reg_wr_addr <= i_ID_EX_reg_wr_addr;
end

//##非数据通路控制信号

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_mem_mask <= 3'd0;
    else
        o_ID_EX_mem_mask <=  i_ID_EX_mem_mask;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_ALUctr <= 6'd0;
    else
        o_ID_EX_ALUctr <= i_ID_EX_ALUctr;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_pc <= 64'd0;
    else if (i_ID_EX_jump_flag)     //为了DIFTESE测试需要
        o_ID_EX_pc <= 64'd0;
    else
        o_ID_EX_pc <= i_ID_EX_pc;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_imm <= 64'd0;
    else
        o_ID_EX_imm <= i_ID_EX_imm;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_reg_rd_data1 <= 64'd0;
    else
        o_ID_EX_reg_rd_data1 <= i_ID_EX_reg_rd_data1;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_reg_rd_data2 <= 64'd0;
    else
        o_ID_EX_reg_rd_data2 <= i_ID_EX_reg_rd_data2;
end

//仿真测试信号
always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_unkown_code <= 1'b0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_unkown_code <= 1'b0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_unkown_code <= 1'b0;
    else
        o_ID_EX_unkown_code <= i_ID_EX_unkown_code;
end

always @ (posedge i_ID_EX_clk) begin
    if (!i_ID_EX_rst_n)
        o_ID_EX_inst <= 32'd0;
    else if (i_ID_EX_jump_flag)
        o_ID_EX_inst <= 32'd0;
    else if (i_ID_EX_load_use_flag)
        o_ID_EX_inst <= 32'd0;
    else
        o_ID_EX_inst <= i_ID_EX_inst;
end

endmodule
