module ysyx_22040386_EX_MEM (
    input wire i_EX_MEM_clk,
    input wire i_EX_MEM_rst_n,

    input wire i_EX_MEM_jump_flag,

    input wire i_EX_MEM_zero,
    input wire i_EX_MEM_RegWrite,
    input wire i_EX_MEM_MemWrite,
    input wire i_EX_MEM_MemRead,
    input wire i_EX_MEM_Jal,
    input wire i_EX_MEM_Jalr,
    input wire [2:0] i_EX_MEM_Branch_type,
    input wire [2:0] i_EX_MEM_mem_mask,
    input wire [4:0] i_EX_MEM_reg_rd_addr2,
    input wire [4:0] i_EX_MEM_reg_wr_addr,
    input wire [63:0] i_EX_MEM_ALUresult,
    input wire [63:0] i_EX_MEM_pc_add_imm,
    input wire [63:0] i_EX_MEM_reg_wr_data,
    input wire [63:0] i_EX_MEM_mem_wr_data,
    input wire [63:0] i_EX_MEM_snpc,

    input wire [63:0] i_EX_MEM_pc,

    output reg o_EX_MEM_zero,
    output reg o_EX_MEM_RegWrite,
    output reg o_EX_MEM_MemWrite,
    output reg o_EX_MEM_MemRead,
    output reg o_EX_MEM_Jal,
    output reg o_EX_MEM_Jalr,
    output reg [2:0] o_EX_MEM_Branch_type,
    output reg [2:0] o_EX_MEM_mem_mask,
    output reg [4:0] o_EX_MEM_reg_rd_addr2,
    output reg [4:0] o_EX_MEM_reg_wr_addr,
    output reg [63:0] o_EX_MEM_ALUresult,
    output reg [63:0] o_EX_MEM_pc_add_imm,
    output reg [63:0] o_EX_MEM_reg_wr_data,
    output reg [63:0] o_EX_MEM_mem_wr_data,
    output reg [63:0] o_EX_MEM_snpc,

    output reg [63:0] o_EX_MEM_pc
);

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_zero <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_zero <= 1'b0;
    else
        o_EX_MEM_zero <= i_EX_MEM_zero;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_RegWrite <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_RegWrite <= 1'b0;
    else
        o_EX_MEM_RegWrite <= i_EX_MEM_RegWrite;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_MemWrite <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_MemWrite <= 1'b0;
    else
        o_EX_MEM_MemWrite <= i_EX_MEM_MemWrite;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_MemRead <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_MemRead <= 1'b0;
    else
        o_EX_MEM_MemRead <= i_EX_MEM_MemRead;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_Jal <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_Jal <= 1'b0;
    else
        o_EX_MEM_Jal <= i_EX_MEM_Jal;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_Jalr <= 1'b0;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_Jalr <= 1'b0;
    else
        o_EX_MEM_Jalr <= i_EX_MEM_Jalr;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_Branch_type <= 3'b010;
    else if (i_EX_MEM_jump_flag)
        o_EX_MEM_Branch_type <= 3'b010;
    else
        o_EX_MEM_Branch_type <= i_EX_MEM_Branch_type;
end

//##非数据通路控制信号

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_mem_mask <= 3'd0;
    else
        o_EX_MEM_mem_mask <= i_EX_MEM_mem_mask;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_reg_wr_addr <= 5'd0;
    else
        o_EX_MEM_reg_wr_addr <= i_EX_MEM_reg_wr_addr;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_ALUresult <= 64'd0;
    else
        o_EX_MEM_ALUresult <= i_EX_MEM_ALUresult;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_pc_add_imm <= 64'd0;
    else
        o_EX_MEM_pc_add_imm <= i_EX_MEM_pc_add_imm;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_reg_wr_data <= 64'd0;
    else
        o_EX_MEM_reg_wr_data <= i_EX_MEM_reg_wr_data;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_mem_wr_data <= 64'd0;
    else
        o_EX_MEM_mem_wr_data <= i_EX_MEM_mem_wr_data;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_snpc <= 64'd0;
    else
        o_EX_MEM_snpc <= i_EX_MEM_snpc;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_reg_rd_addr2 <= 5'd0;
    else
        o_EX_MEM_reg_rd_addr2 <= i_EX_MEM_reg_rd_addr2;;
end

always @ (posedge i_EX_MEM_clk) begin
    if (!i_EX_MEM_rst_n)
        o_EX_MEM_pc <= 64'd0;
    else
        o_EX_MEM_pc <= i_EX_MEM_pc;;
end

endmodule
