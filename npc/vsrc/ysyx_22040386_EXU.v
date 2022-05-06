module ysyx_22040386_EXU(
    input ALUAsrc,
    input ALUBsrc,
    input Jump,
    input Branch,
    input DNPCsrc,
    input RESULTsrc,
    input [2:0] ALUctr,
    input [63:0] pc,
    input [63:0] imm,
    input [63:0] snpc,
    input [63:0] busA,
    input [63:0] busB,
    
    output switch,
    output [63:0] dnpc,
    output [63:0] final_result
);

wire zero;
wire [63:0] pc_imm, result, src1,src2;

assign pc_imm = pc + imm;
assign dnpc = (DNPCsrc) ? result : pc_imm;
assign src1 = (ALUAsrc) ? pc : busA;
assign src2 = (ALUBsrc) ? imm : busB;
assign final_result = (RESULTsrc) ? snpc : result;
assign switch = Jump || (Branch && zero);

ysyx_22040386_ALU ysyx_22040386_ALU_inst (.src1(src1), .src2(src2), .ALUctr(ALUctr), .zero(zero), .result(result));

endmodule
