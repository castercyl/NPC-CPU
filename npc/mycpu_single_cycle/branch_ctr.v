/*-------------------------------------------------------------------------
// Module:  branch_ctr
// File:    branch_ctr.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1）分支跳转判断(跳转标志生成 + 跳转dnpc计算)
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module branch_ctr (
    input wire [`Aluop_WIDTH-1:0]           bc_aluop_i,
    input wire [`DataBus_WIDTH-1:0]         bc_rs1_i,
    input wire [`DataBus_WIDTH-1:0]         bc_rs2_i,
    input wire [`DataBus_WIDTH-1:0]         bc_pc_i,
    input wire [`DataBus_WIDTH-1:0]         bc_imm_i,

    output reg                              bc_branch_flag_o,
    output reg [`DataBus_WIDTH-1:0]         bc_branch_dnpc_o
);

    wire [`DataBus_WIDTH-1:0] pc_add_imm_result  = bc_pc_i + bc_imm_i; //pc + imm
    wire [`DataBus_WIDTH-1:0] rs1_add_imm_result = bc_rs1_i + bc_imm_i;
    wire [`DataBus_WIDTH-1:0] rs1_sub_rs2_result = (bc_rs1_i[`DataBus_WIDTH-1] == bc_rs2_i[`DataBus_WIDTH-1]) ? bc_rs1_i + (~bc_rs2_i) + `DataBus_WIDTH'd1 
                                                  :`DW_ZERO; //保证不会进行溢出的计算
/* --------------------- branch_flag----------------------*/
    wire rs1_eq_rs2          = (bc_rs1_i == bc_rs2_i);
    wire rs1_ge_rs2_unsigned = (bc_rs1_i >= bc_rs2_i);
    wire rs1_ge_rs2_signed   = (~bc_rs1_i[`DataBus_WIDTH-1] && bc_rs2_i[`DataBus_WIDTH-1]) //正数>负数
                              |((bc_rs1_i[`DataBus_WIDTH-1] == bc_rs2_i[`DataBus_WIDTH-1]) && ~rs1_sub_rs2_result[`DataBus_WIDTH-1]);
    
    always @ (*) begin
        case (bc_aluop_i)
            `ALU_OP_BEQ: begin
                bc_branch_flag_o = rs1_eq_rs2;
            end
            `ALU_OP_BNE: begin
                bc_branch_flag_o = ~rs1_eq_rs2;
            end
            `ALU_OP_BLT: begin
                bc_branch_flag_o = ~rs1_ge_rs2_signed;
            end
            `ALU_OP_BGE: begin
                bc_branch_flag_o = rs1_ge_rs2_signed;
            end
            `ALU_OP_BLTU: begin
                bc_branch_flag_o = ~rs1_ge_rs2_unsigned;
            end
            `ALU_OP_BGEU: begin
                bc_branch_flag_o = rs1_ge_rs2_unsigned;
            end
            `ALU_OP_JAL,
            `ALU_OP_JALR : begin
                bc_branch_flag_o = `ControlEnable;
            end
            default: begin
                bc_branch_flag_o = `ControlDisable;
            end
        endcase
    end
/* --------------------- branch_dnpc----------------------*/
    always @ (*) begin
        case (bc_aluop_i)
            `ALU_OP_BEQ,
            `ALU_OP_BNE,
            `ALU_OP_BLT,
            `ALU_OP_BGE,
            `ALU_OP_BLTU,
            `ALU_OP_BGEU,
            `ALU_OP_JAL: begin
                bc_branch_dnpc_o = pc_add_imm_result;
            end
            `ALU_OP_JALR: begin
                bc_branch_dnpc_o = rs1_add_imm_result & (~`DataBus_WIDTH'd1);
            end
            default: begin
                bc_branch_dnpc_o = `DW_ZERO;
            end
        endcase
    end

//消除Verilator 的 Warning
wire _unused_ok = &{1'b0,
                    rs1_sub_rs2_result[62:0],
                    1'b0};

endmodule
