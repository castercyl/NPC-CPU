module ysyx_22040386_WBU (
    input wire [63:0] i_WB_reg_wr_data,
    input wire i_WB_RegWrite,
    input wire [4:0] i_WB_reg_wr_addr,

    input wire [63:0] i_WB_pc,

    output wire [63:0] o_WB_reg_wr_data,
    output wire o_WB_RegWrite,
    output wire [4:0] o_WB_reg_wr_addr,

    output wire [63:0] o_WB_pc
);

assign o_WB_reg_wr_data = i_WB_reg_wr_data;
assign o_WB_RegWrite = i_WB_RegWrite;
assign o_WB_reg_wr_addr = i_WB_reg_wr_addr;

assign o_WB_pc = i_WB_pc;

endmodule
