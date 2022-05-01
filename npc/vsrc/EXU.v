module EXU(
    input [2:0] ALUctr,
    input [63:0] src1,
    input [63:0] src2,
    input [63:0] snpc,

    output [63:0] sum,
    output [63:0] result
);

wire SUBctr;
wire [1:0] OPctr;
wire [63:0] real_src2;
reg [63:0] reg_result;

assign SUBctr = ALUctr[2];
assign OPctr = ALUctr[1:0];
assign real_src2 = src2 ^ {64{SUBctr}};
assign sum = src1 + real_src2 + SUBctr;

always @ (*) begin
    case (OPctr)
        2'b00: reg_result = sum;
        2'b01: reg_result = src1;
        2'b10: reg_result = src2;
        2'b11: reg_result = snpc;
    endcase
end

assign result = reg_result;

endmodule