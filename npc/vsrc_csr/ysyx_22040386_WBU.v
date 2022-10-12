module ysyx_22040386_WBU (
    input wire [63:0] i_WB_reg_wr_data,
    input wire i_WB_RegWrite,
    input wire [4:0] i_WB_reg_wr_addr,
    //-------------csr----------------
    input wire i_WB_csr_reg_write,
    input wire [63:0] i_WB_csr_r_data,

    output wire [63:0] o_WB_reg_wr_data,
    output wire o_WB_RegWrite,
    output wire [4:0] o_WB_reg_wr_addr
    //----------------------------
);

assign o_WB_reg_wr_data = (i_WB_csr_reg_write) ? i_WB_csr_r_data : i_WB_reg_wr_data;
assign o_WB_RegWrite = i_WB_RegWrite || i_WB_csr_reg_write;
assign o_WB_reg_wr_addr = i_WB_reg_wr_addr;

endmodule
