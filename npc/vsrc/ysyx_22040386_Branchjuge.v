module ysyx_22040386_Branchjuge (
    input zero,
    input Jal,
    input Jalr,
    input result0,
    input [2:0] Branch_type,
    
    output Branch
);

reg w1;
wire w2;

always @ (*) begin
    case (Branch_type)
        3'b000: w1 = zero;
        3'b001: w1 = ~zero;
        3'b100: w1 = result0;
        3'b101: w1 = ~result0;
        3'b110: w1 = result0;
        3'b111: w1 = ~result0;
        default: w1 = 1'b0;
    endcase
end

assign w2 = (Jal) ? 1'b1 : w1;
assign Branch = (Jalr) ? 1'b1 : w2;

endmodule
