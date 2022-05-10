module ysyx_22040386_WBU (
    input Auipc,
    input Result_to_Pc,
    input Reg_to_Mem,
    input Lui,
    input [63:0] rd_mem_data,
    input [63:0] snpc,
    input [63:0] pc_imm,
    input [63:0] imm,
    input [63:0] result,

    output [63:0] wr_reg_data
);

wire [63:0] pc_add, real_result, final_result;

assign pc_add = (Auipc) ? pc_imm : snpc;
assign real_result = (Result_to_Pc) ? pc_add : result;
assign final_result = (Reg_to_Mem) ? rd_mem_data : real_result;
assign wr_reg_data = (Lui) ? imm : final_result;

endmodule
