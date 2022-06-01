module ysyx_22040386_FWcontrol (
    input wire i_fw_EX_MEM_RegWrite,
    input wire i_fw_EX_MEM_MemWrite,
    input wire i_fw_MEM_WB_RegWrite,

    input wire [4:0] i_fw_EX_MEM_reg_wr_addr,
    input wire [4:0] i_fw_MEM_WB_reg_wr_addr,
    input wire [4:0] i_fw_EX_MEM_reg_rd_addr2,
    input wire [4:0] i_fw_ID_EX_reg_rd_addr1,
    input wire [4:0] i_fw_ID_EX_reg_rd_addr2,
    input wire [4:0] i_fw_IF_ID_reg_rd_addr1,
    input wire [4:0] i_fw_IF_ID_reg_rd_addr2,

    output wire o_fw_MEM_disrcfw,
    output wire o_fw_ID_reg_rd1fw,
    output wire o_fw_ID_reg_rd2fw,
    output wire [1:0] o_fw_EX_src1fw,
    output wire [1:0] o_fw_EX_src2fw
);

assign o_fw_EX_src1fw[1] = (i_fw_ID_EX_reg_rd_addr1 == i_fw_EX_MEM_reg_wr_addr) && i_fw_EX_MEM_RegWrite 
&& (i_fw_EX_MEM_reg_wr_addr != 5'd0);

assign o_fw_EX_src1fw[0] = (i_fw_ID_EX_reg_rd_addr1 == i_fw_MEM_WB_reg_wr_addr) && i_fw_MEM_WB_RegWrite 
&& (i_fw_MEM_WB_reg_wr_addr != 5'd0) && (i_fw_EX_MEM_reg_wr_addr != i_fw_ID_EX_reg_rd_addr1);

assign o_fw_EX_src2fw[1] = (i_fw_ID_EX_reg_rd_addr2 == i_fw_EX_MEM_reg_wr_addr) && i_fw_EX_MEM_RegWrite 
&& (i_fw_EX_MEM_reg_wr_addr != 5'd0);

assign o_fw_EX_src2fw[0] = (i_fw_ID_EX_reg_rd_addr2 == i_fw_MEM_WB_reg_wr_addr) && i_fw_MEM_WB_RegWrite 
&& (i_fw_MEM_WB_reg_wr_addr != 5'd0) && (i_fw_EX_MEM_reg_wr_addr != i_fw_ID_EX_reg_rd_addr2);

assign o_fw_ID_reg_rd1fw = (i_fw_IF_ID_reg_rd_addr1 == i_fw_MEM_WB_reg_wr_addr) && i_fw_MEM_WB_RegWrite
&& (i_fw_MEM_WB_reg_wr_addr != 5'd0);

assign o_fw_ID_reg_rd2fw = (i_fw_IF_ID_reg_rd_addr2 == i_fw_MEM_WB_reg_wr_addr) && i_fw_MEM_WB_RegWrite
&& (i_fw_MEM_WB_reg_wr_addr != 5'd0);

assign o_fw_MEM_disrcfw = (i_MEM_WB_reg_wr_addr == i_fw_EX_MEM_reg_rd_addr2) && i_fw_MEM_WB_RegWrite 
&& i_fw_EX_MEM_MemWrite && (i_fw_MEM_WB_reg_wr_addr != 5'd0);

endmodule
