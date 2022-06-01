module ysyx_22040386_jump_control (
    input wire i_mem_Branch,
    input wire [63:0] i_mem_snpc,
    input wire [63:0] i_mem_dnpc,

    output wire o_jump_flag
);

assign o_jump_flag = i_mem_Branch && (i_mem_dnpc != i_mem_snpc);

endmodule
