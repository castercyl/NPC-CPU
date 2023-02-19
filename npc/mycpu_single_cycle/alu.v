/*-------------------------------------------------------------------------
// Module:  alu
// File:    alu.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1）计算写入寄存器的值；2）计算内存地址; 3)计算CSR寄存器写入的值
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module alu (
    input wire [`Alusel_WIDTH-1:0]          alu_alusel_i,
    input wire [`Aluop_WIDTH-1:0]           alu_aluop_i,
    input wire [`DataBus_WIDTH-1:0]         alu_rs1_i,
    input wire [`DataBus_WIDTH-1:0]         alu_rs2_i,
    input wire [`DataBus_WIDTH-1:0]         alu_pc_i,
    input wire [`DataBus_WIDTH-1:0]         alu_imm_i,
    input wire [`DataBus_WIDTH-1:0]         alu_csr_rdata_i,
    input wire [`DataBus_WIDTH-1:0]         alu_csrzimm_i,

    output reg [`DataBus_WIDTH-1:0]         alu_result_o,  //reg_wdata or mem_addr
    output reg [`DataBus_WIDTH-1:0]         alu_csr_wdata_o
);
    reg [`DataBus_WIDTH-1:0] logic_result, shift_result, branch_result, arithmetic_result;
    reg [`DataBus_WIDTH-1:0] div_result, mul_result, rem_result;
    reg [`DataBus_WIDTH-1:0] csr_result; //CSR指令中写入reg中的值

/* --------------------- Logic ----------------------*/
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_XOR: begin
                logic_result = alu_rs1_i ^ alu_rs2_i;
            end
            `ALU_OP_OR: begin
                logic_result = alu_rs1_i | alu_rs2_i;
            end
            `ALU_OP_AND: begin
                logic_result = alu_rs1_i & alu_rs2_i;
            end
            `ALU_OP_XORI: begin
                logic_result = alu_rs1_i ^ alu_imm_i;
            end
            `ALU_OP_ORI: begin
                logic_result = alu_rs1_i | alu_imm_i;
            end
            `ALU_OP_ANDI: begin
                logic_result = alu_rs1_i & alu_imm_i;
            end
            default: begin
                logic_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- Shift ----------------------*/
    wire [`DataBus_WIDTH-1:0] sra_mask  = 64'hffff_ffff_ffff_ffff >> alu_rs2_i[5:0];
    wire [`DataBus_WIDTH-1:0] srai_mask = 64'hffff_ffff_ffff_ffff >> alu_imm_i[5:0];

    wire [`DataBus_WIDTH-1:0] slli_result  = alu_rs1_i << alu_imm_i[5:0];
    wire [31:0]               srliw_result = alu_rs1_i[31:0] >> alu_imm_i[4:0];
    wire [31:0]               slliw_result = alu_rs1_i[31:0] << alu_imm_i[4:0];
    wire [31:0]               srlw_result  = alu_rs1_i[31:0] >> alu_rs2_i[4:0];
    wire [31:0]               sllw_result  = alu_rs1_i[31:0] << alu_rs2_i[4:0];
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_SLL: begin
                shift_result = alu_rs1_i << alu_rs2_i[5:0];
            end
            `ALU_OP_SLLW: begin
                shift_result = {{32{sllw_result[31]}}, sllw_result};
            end
            `ALU_OP_SRL: begin
                shift_result = alu_rs1_i >> alu_rs2_i[5:0];
            end
            `ALU_OP_SRLW: begin
                shift_result = {{32{srlw_result[31]}}, srlw_result};
            end
            `ALU_OP_SRA: begin
                shift_result = (alu_rs1_i >> alu_rs2_i[5:0]) 
                              |({`DataBus_WIDTH{alu_rs1_i[`DataBus_WIDTH-1]}} & ~sra_mask);
            end
            `ALU_OP_SRAW: begin
                shift_result = ({{32{alu_rs1_i[31]}}, alu_rs1_i[31:0]} >> alu_rs2_i[4:0])
                              |({`DataBus_WIDTH{alu_rs1_i[31]}} & ~sra_mask);
            end
            `ALU_OP_SLLI: begin
                shift_result = slli_result;
            end
            `ALU_OP_SLLIW: begin
                shift_result = {{32{slliw_result[31]}}, slliw_result};
            end
            `ALU_OP_SRLI: begin
                shift_result = alu_rs1_i >> alu_imm_i[5:0];
            end
            `ALU_OP_SRLIW: begin
                shift_result = {{32{srliw_result[31]}}, srliw_result};
            end
            `ALU_OP_SRAI: begin
                shift_result = (alu_rs1_i >> alu_imm_i[5:0])
                              |({`DataBus_WIDTH{alu_rs1_i[`DataBus_WIDTH-1]}} & ~srai_mask);
            end
            `ALU_OP_SRAIW: begin
                shift_result = ({{32{alu_rs1_i[31]}}, alu_rs1_i[31:0]} >> alu_imm_i[5:0])
                              |({`DataBus_WIDTH{alu_rs1_i[31]}} & ~srai_mask);
            end
            default: begin
                shift_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- Arithmetic ----------------------*/
//暂时不支持溢出报错
    wire [`DataBus_WIDTH-1:0] rs1_add_rs2_result = alu_rs1_i + alu_rs2_i;
    wire [`DataBus_WIDTH-1:0] rs1_add_imm_result = alu_rs1_i + alu_imm_i;
    wire [`DataBus_WIDTH-1:0] rs1_sub_rs2_result = alu_rs1_i + (~alu_rs2_i) + `DataBus_WIDTH'd1;
    wire rs1_ge_rs2_unsigned                     = alu_rs1_i >= alu_rs2_i; 
    wire rs1_ge_rs2_signed                       = (~alu_rs1_i[`DataBus_WIDTH-1] && alu_rs2_i[`DataBus_WIDTH-1])
                                                  |((alu_rs1_i[`DataBus_WIDTH-1] == alu_rs2_i[`DataBus_WIDTH-1]) && ~rs1_sub_rs2_result[`DataBus_WIDTH-1]);
    
    wire [`DataBus_WIDTH-1:0] rs1_sub_imm_result         = alu_rs1_i + (~alu_imm_i) + `DataBus_WIDTH'd1;
    wire rs1_ge_imm_unsigned = alu_rs1_i >= alu_imm_i;
    wire rs1_ge_imm_signed   = (~alu_rs1_i[`DataBus_WIDTH-1] && alu_imm_i[`DataBus_WIDTH-1])
                              |((alu_rs1_i[`DataBus_WIDTH-1] == alu_imm_i[`DataBus_WIDTH-1]) && ~rs1_sub_imm_result[`DataBus_WIDTH-1]);
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_ADD: begin
                arithmetic_result = rs1_add_rs2_result;
            end
            `ALU_OP_ADDW: begin
                arithmetic_result = {{32{rs1_add_rs2_result[31]}}, rs1_add_rs2_result[31:0]};
            end
            `ALU_OP_SUB: begin
                arithmetic_result = rs1_sub_rs2_result;
            end
            `ALU_OP_SUBW: begin
                arithmetic_result = {{32{rs1_sub_rs2_result[31]}}, rs1_sub_rs2_result[31:0]};
            end
            `ALU_OP_SLT: begin
                arithmetic_result = (rs1_ge_rs2_signed) ? `DataBus_WIDTH'd0 : `DataBus_WIDTH'd1;
            end
            `ALU_OP_SLTU: begin
                arithmetic_result = (rs1_ge_rs2_unsigned) ? `DataBus_WIDTH'd0 : `DataBus_WIDTH'd1;
            end
            `ALU_OP_SLTI: begin
                arithmetic_result = (rs1_ge_imm_signed) ? `DataBus_WIDTH'd0 : `DataBus_WIDTH'd1;
            end
            `ALU_OP_SLTIU: begin
                arithmetic_result = (rs1_ge_imm_unsigned) ? `DataBus_WIDTH'd0 : `DataBus_WIDTH'd1;
            end
            `ALU_OP_ADDI: begin
                arithmetic_result = rs1_add_imm_result;
            end
            `ALU_OP_LB: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LH: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LW: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LD: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LBU: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LHU: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LWU: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_SB: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_SH: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_SW: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_SD: begin
                arithmetic_result = alu_rs1_i + alu_imm_i;
            end
            `ALU_OP_LUI: begin
                arithmetic_result = alu_imm_i;
            end
            `ALU_OP_AUIPC: begin
                arithmetic_result = alu_pc_i + alu_imm_i;
            end
            `ALU_OP_ADDIW: begin
                arithmetic_result = {{32{rs1_add_imm_result[31]}}, rs1_add_imm_result[31:0]};
            end
            default: begin
                arithmetic_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- Branch ----------------------*/
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_JAL: begin
                branch_result = alu_pc_i + `DataBus_WIDTH'd4;
            end
            `ALU_OP_JALR: begin
                branch_result = alu_pc_i + `DataBus_WIDTH'd4;
            end
            default: begin
                branch_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- DIV ----------------------*/
    wire [31:0] divw_result  = $signed(alu_rs1_i[31:0]) / $signed(alu_rs2_i[31:0]);
    wire [31:0] divuw_result = alu_rs1_i[31:0] / alu_rs2_i[31:0];
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_DIV: begin
                div_result = $signed(alu_rs1_i) / $signed(alu_rs2_i);
            end
            `ALU_OP_DIVW: begin
                //div_result = $signed({{32{alu_rs1_i[31]}}, alu_rs1_i[31:0]}) / $signed({{32{alu_rs2_i[31]}}, alu_rs2_i[31:0]});
                div_result = {{32{divw_result[31]}}, divw_result};
            end
            `ALU_OP_DIVU: begin
                div_result = alu_rs1_i / alu_rs2_i;
                //div_result = $unsigned(alu_rs1_i) / $unsigned(alu_rs2_i);
            end
            `ALU_OP_DIVUW: begin
                div_result = {{32{divuw_result[31]}}, divuw_result};
            end
            default: begin
                div_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- MUL ----------------------*/
    wire [`DataBus_WIDTH-1:0] muldw_result = $signed(alu_rs1_i) * $signed(alu_rs2_i);
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_MUL: begin
                mul_result = muldw_result;
            end
            `ALU_OP_MULW: begin
                mul_result = {{32{muldw_result[31]}}, muldw_result[31:0]};
            end
            default: begin
                mul_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- REM ----------------------*/
    wire [31:0] remw_result  = $signed(alu_rs1_i[31:0]) % $signed(alu_rs2_i[31:0]);
    wire [31:0] remuw_result = alu_rs1_i[31:0] % alu_rs2_i[31:0];
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_REM: begin
                rem_result = $signed(alu_rs1_i) % $signed(alu_rs2_i);
            end
            `ALU_OP_REMW: begin
                rem_result = {{32{remw_result[31]}}, remw_result};
            end
            `ALU_OP_REMU: begin
                rem_result = alu_rs1_i % alu_rs2_i;
            end
            `ALU_OP_REMUW: begin
                rem_result = {{32{remuw_result[31]}}, remuw_result};
            end
            default: begin
                rem_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- CSR ----------------------*/
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_CSRRS,
            `ALU_OP_CSRRSI,
            `ALU_OP_CSRRW,
            `ALU_OP_CSRRWI: begin
                csr_result = alu_csr_rdata_i;
            end
            default: begin
                csr_result = `DW_ZERO;
            end
        endcase
    end
/* --------------------- ALU_Result ----------------------*/
    always @ (*) begin
        case (alu_alusel_i)
            `ALU_TYPE_LOGIC: begin
                alu_result_o = logic_result;
            end
            `ALU_TYPE_SHIFT: begin
                alu_result_o = shift_result;
            end
            `ALU_TYPE_ARITHMETIC: begin
                alu_result_o = arithmetic_result;
            end
            `ALU_TYPE_BRANCH: begin
                alu_result_o = branch_result;
            end
            `ALU_TYPE_DIV: begin
                alu_result_o = div_result;
            end
            `ALU_TYPE_MUL: begin
                alu_result_o = mul_result;
            end
            `ALU_TYPE_REM: begin
                alu_result_o = rem_result;
            end
            `ALU_TYPE_CSR: begin
                alu_result_o = csr_result;
            end
            default: begin
                alu_result_o = `DW_ZERO;
            end
        endcase
    end
/* --------------------- CSR_Wdata ----------------------*/
    always @ (*) begin
        case (alu_aluop_i)
            `ALU_OP_CSRRS: begin
                alu_csr_wdata_o = alu_csr_rdata_i | alu_rs1_i;
            end
            `ALU_OP_CSRRSI: begin
                alu_csr_wdata_o = alu_csr_rdata_i | alu_csrzimm_i;
            end
            `ALU_OP_CSRRW: begin
                alu_csr_wdata_o = alu_rs1_i;
            end
            `ALU_OP_CSRRWI: begin
                alu_csr_wdata_o = alu_csrzimm_i;
            end
            default: begin
                alu_csr_wdata_o = `DW_ZERO;
            end
        endcase
    end

//消除Verilator 的 Warning
wire _unused_ok = &{1'b0,
                    rs1_sub_imm_result[62:0],
                    1'b0};

/*
    import "DPI-C" function void wdram_test(
        input longint waddr, input longint rs1, input longint imm);

    always @ (*) begin
        if (alu_aluop_i == `ALU_OP_SD)
            wdram_test (alu_pc_i, alu_result_o, arithmetic_result);
    end
*/

endmodule
