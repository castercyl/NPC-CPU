module ysyx_22040386_ALU (
    input Word_op,
    input [63:0] src1,
    input [63:0] src2,
    input [4:0] ALUctr,

    output zero,
    output [63:0] result
);

wire cn;   //加法最高位进位
wire cn0;  //加法次高位进位
wire CF;  //借位/进位标志位
wire OF;  //溢出标志位
wire SF;  //符号位
wire SUBctr;
wire SIGctr;  //为1表示选择有符号数计算， 为0表示无符号数计算
wire less1;
wire [2:0] OPctr;
wire [63:0] real_src2, sum, real_sum, src1_shift;

assign SUBctr = ALUctr[4];
assign SIGctr = ALUctr[3];
assign OPctr = ALUctr[2:0];
assign real_src2 = src2 ^ {64{SUBctr}};
reg [63:0] reg_result;
assign result = reg_result;
assign less1 = (SIGctr) ? SF ^ OF : CF;

//加法器
assign {cn0, sum[62:0]} = {1'b0, src1[62:0]} + {1'b0, real_src2[62:0]} + {63'd0, SUBctr};
assign {cn, sum[63]} = {1'b0, src1[63]} + {1'b0, real_src2[63]} + {1'b0, cn0};
assign OF = cn ^ cn0;
assign CF = cn ^ SUBctr;
assign SF = sum[63];
//assign zero = ~(| sum);
assign real_sum = (Word_op) ? {{32{sum[31]}}, sum[31:0]} : sum;
assign zero = ~(| real_sum);
//assign zero = (sum == 64'd0) ? 1'b1 : 1'b0;
assign src1_shift = (Word_op) ? {{32{src1[31]}}, src1[31:0]} : src1;

// result生成
always @ (*) begin
    case (OPctr)
        3'b000: reg_result = real_sum;
        3'b001: reg_result = src1 & src2;
        3'b010: reg_result = src1 | src2;
        3'b011: reg_result = src1 ^ src2;
        3'b100: reg_result = src1_shift << (src2 & {58'h0, ~Word_op, 5'h1F});
        3'b101: reg_result = src1_shift >> (src2 & {58'h0, ~Word_op, 5'h1F});
        3'b110: reg_result = (src1_shift >> (src2 & {58'h0, ~Word_op, 5'h1F})) | ({64{src1_shift[63]}} << (sum & {58'h0, ~Word_op, 5'h1F}));
        3'b111: reg_result = {63'd0, less1};
    endcase
end

endmodule
