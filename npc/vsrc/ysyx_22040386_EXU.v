module ysyx_22040386_EXU(
    input Word_op,
    input Jal,
    input Jalr,
    input [2:0] Branch_type,
    //input [2:0] funct3,
    input [4:0] ALUctr,
    input [63:0] pc,
    input [63:0] imm,
    input [63:0] src1,
    input [63:0] src2,
    
    output Branch,
    //output [7:0] Wmask,
    output [63:0] dnpc,
    output [63:0] pc_imm,
    output [63:0] result
);

wire zero;
//wire [63:0] real_src1, real_src2;

assign pc_imm = pc + imm;
assign dnpc = (Jalr) ? result : pc_imm;
//assign real_src1 = (Word_op) ? {{32{src1[31]}}, src1[31:0]} : src1;
//assign real_src2 = (Word_op) ? {{32{src2[31]}}, src2[31:0]} : src2;
//assign result = (Word_op) ? {{32{tmp_result[31]}}, tmp_result[31:0]} : tmp_result;
/*
reg [7:0] reg_Wmask,
assign Wmask = reg_Wmask;
always @ (*) begin
    case(funct3)
    2'b000: reg_Wmask = 8'b0000_0001 << result[2:0];     //sb
    2'b001: reg_Wmask = 8'b0000_0011 << result[2:0];     //sh
    2'b010: reg_Wmask = 8'b0000_1111 << result[2:0];     //sw
    2'b011: reg_Wmask = 8'b1111_1111;                    //sd
    default: reg_Wmask = 8'b1111_1111;
    endcase
end
*/
ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (.zero(zero), .Jal(Jal), .Jalr(Jalr), .result0(result[0]), 
.Branch_type(Branch_type), .Branch(Branch));

ysyx_22040386_ALU ysyx_22040386_ALU_inst (.src1(src1), .src2(src2), .ALUctr(ALUctr), .zero(zero), 
.result(result), .Word_op(Word_op));

endmodule
