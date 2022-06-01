module ysyx_22040386_Load_use_control (
    input wire i_id_ID_EX_MemRead_o,
    input wire i_id_MemWrite_o,
    input wire [4:0] i_id_ID_EX_reg_wr_addr_o,
    input wire [4:0] i_id_reg_rd_addr1_i,
    input wire [4:0] i_id_reg_rd_addr2_i,

    output wire o_load_use_flag
);

assign o_load_use_flag = i_id_ID_EX_MemRead_o && ((i_id_ID_EX_reg_wr_addr_o == i_id_reg_rd_addr1_i) ||     //load + 非load
(i_id_ID_EX_reg_wr_addr_o == i_id_reg_rd_addr2_i)) && (i_id_ID_EX_reg_wr_addr_o != 5'd0)
||                                                                                                        // load + store
i_id_ID_EX_MemRead_o && (i_id_ID_EX_reg_wr_addr_o == i_id_reg_rd_addr1_i) && i_id_MemWrite_o && (i_id_ID_EX_reg_wr_addr_o != 5'd0);

endmodule
