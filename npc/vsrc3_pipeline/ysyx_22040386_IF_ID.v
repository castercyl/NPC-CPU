module ysyx_22040386_IF_ID (
    input wire i_IF_ID_clk,
    input wire i_IF_ID_rst_n,

    input wire i_IF_ID_jump_flag,
    input wire i_IF_ID_load_use_flag,

    input wire [31:0] i_IF_ID_inst,
    input wire [63:0] i_IF_ID_pc,
    input wire [4:0] i_IF_ID_reg_rd_addr1,
    input wire [4:0] i_IF_ID_reg_rd_addr2,

    output reg [31:0] o_IF_ID_inst,
    output reg [63:0] o_IF_ID_pc,
    output reg [4:0] o_IF_ID_reg_rd_addr1,
    output reg [4:0] o_IF_ID_reg_rd_addr2
);

always @ (posedge i_IF_ID_clk) begin
    if (!i_IF_ID_rst_n)
        o_IF_ID_inst <= 32'h13;
    else if (i_IF_ID_jump_flag)
        o_IF_ID_inst <= 32'h13;
    else if (i_IF_ID_load_use_flag)
        o_IF_ID_inst <= o_IF_ID_inst;
    else
        o_IF_ID_inst <= i_IF_ID_inst;
end

always @ (posedge i_IF_ID_clk) begin
    if (!i_IF_ID_rst_n)
        o_IF_ID_pc <= 64'd0;
    else if (i_IF_ID_jump_flag)
        o_IF_ID_pc <= 64'd0;
    else if (i_IF_ID_load_use_flag)
        o_IF_ID_pc <= o_IF_ID_pc;
    else
        o_IF_ID_pc <= i_IF_ID_pc;
end

always @ (posedge i_IF_ID_clk) begin
    if (!i_IF_ID_rst_n)
        o_IF_ID_reg_rd_addr1 <= 5'd0;
    else if (i_IF_ID_jump_flag)
        o_IF_ID_reg_rd_addr1 <= 5'd0;
    else if (i_IF_ID_load_use_flag)
        o_IF_ID_reg_rd_addr1 <= o_IF_ID_reg_rd_addr1;
    else
        o_IF_ID_reg_rd_addr1 <= i_IF_ID_reg_rd_addr1;
end

always @ (posedge i_IF_ID_clk) begin
    if (!i_IF_ID_rst_n)
        o_IF_ID_reg_rd_addr2 <= 5'd0;
    else if (i_IF_ID_jump_flag)
        o_IF_ID_reg_rd_addr2 <= 5'd0;
    else if (i_IF_ID_load_use_flag)
        o_IF_ID_reg_rd_addr2 <= o_IF_ID_reg_rd_addr2;
    else
        o_IF_ID_reg_rd_addr2 <= i_IF_ID_reg_rd_addr2;
end

endmodule
