module ysyx_22040386_ALU (
    input [63:0] src1,
    input [63:0] src2,
    input [2:0] ALUctr,

    output zero,
    output [63:0] result
);

wire SUBctr;
wire [1:0] OPctr;
wire [63:0] real_src2, sum;
reg [63:0] reg_result;

assign result = reg_result;
assign SUBctr = ALUctr[2];
assign OPctr = ALUctr[1:0];
assign real_src2 = src2 ^ {64{SUBctr}};
assign sum = src1 + real_src2 + {63'd0, SUBctr};
assign zero = (sum == 64'd0) ? 1'b1 : 1'b0;

always @ (*) begin
    case (OPctr)
        2'b00: reg_result = sum;
        2'b01: reg_result = src1;
        2'b10: reg_result = src2;
        default: reg_result = sum;
    endcase
end

endmodule
