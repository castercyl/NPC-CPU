module ysyx_22040386_MEM_WB (
    input wire i_MEM_WB_clk,
    input wire i_MEM_WB_rst_n,

    input wire i_MEM_WB_RegWrite,
    input wire [4:0] i_MEM_WB_reg_wr_addr,
    input wire [63:0] i_MEM_WB_reg_wr_data,

    input wire [63:0] i_MEM_WB_pc,

    output reg o_MEM_WB_RegWrite,
    output reg [4:0] o_MEM_WB_reg_wr_addr,
    output reg [63:0] o_MEM_WB_reg_wr_data,

    output reg [63:0] o_MEM_WB_pc,
    input wire i_MEM_WB_unkown_code,
    input wire [31:0] i_MEM_WB_inst,
    output reg o_MEM_WB_unkown_code,
    output reg [31:0] o_MEM_WB_inst
);

always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_RegWrite <= 1'b0;
    else
        o_MEM_WB_RegWrite <= i_MEM_WB_RegWrite;
end

always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_reg_wr_addr <= 5'd0;
    else
        o_MEM_WB_reg_wr_addr <= i_MEM_WB_reg_wr_addr;
end

always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_reg_wr_data <= 64'd0;
    else
        o_MEM_WB_reg_wr_data <= i_MEM_WB_reg_wr_data;
end

always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_pc <= 64'd0;
    else
        o_MEM_WB_pc <= i_MEM_WB_pc;
end

//仿真测试信号
always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_unkown_code <= 1'b0;
    else
        o_MEM_WB_unkown_code <= i_MEM_WB_unkown_code;
end

always @ (posedge i_MEM_WB_clk) begin
    if (!i_MEM_WB_rst_n)
        o_MEM_WB_inst <= 32'd0;
    else
        o_MEM_WB_inst <= i_MEM_WB_inst;
end

endmodule
