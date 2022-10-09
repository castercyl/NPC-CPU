module ysyx_22040386_ALU (
    input Word_op,

    //input DIV_word,
    //input [2:0] FUNCT3,

    input [63:0] src1,
    input [63:0] src2,
    input [5:0] ALUctr,

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
wire [3:0] OPctr; //ALU执行逻辑运算的区分符号
wire [31:0] div32, rem32;
wire [63:0] real_src2, sum, src1_shift, mul, real_mul, div64, real_div, rem64, real_rem, shift_sig;

assign SUBctr = ALUctr[5];
assign SIGctr = ALUctr[4];
assign OPctr = ALUctr[3:0];
assign real_src2 = src2 ^ {64{SUBctr}};
reg [63:0] reg_result;
assign result = (Word_op) ? {{32{reg_result[31]}}, reg_result[31:0]} : reg_result;
assign less1 = (SIGctr) ? SF ^ OF : CF;
assign shift_sig = (Word_op) ? {64{src1[31]}} : {64{src1[63]}};

//加法器
assign {cn0, sum[62:0]} = {1'b0, src1[62:0]} + {1'b0, real_src2[62:0]} + {63'd0, SUBctr};
assign {cn, sum[63]} = {1'b0, src1[63]} + {1'b0, real_src2[63]} + {1'b0, cn0};
assign OF = cn ^ cn0;
assign CF = cn ^ SUBctr;
assign SF = sum[63];
//assign zero = ~(| sum);
//assign real_sum = (Word_op) ? {{32{sum[31]}}, sum[31:0]} : sum;
assign zero = ~(| sum);
//assign zero = (sum == 64'd0) ? 1'b1 : 1'b0;
assign src1_shift = (Word_op) ? {32'd0, src1[31:0]} : src1;
assign mul = src1 * src2;
assign real_mul = (Word_op) ? {{32{mul[31]}}, mul[31:0]} : mul;
assign div32 = src1[31:0] / src2[31:0];
assign div64 = src1 / src2;
assign real_div = (~Word_op) ?          div64 :
                  (~SIGctr) ? {32'd0, div32} :
                  {{32{div32[31]}}, div32};
assign rem32 = src1[31:0] % src2[31:0];
assign rem64 = src1 % src2;
assign real_rem = (Word_op) ? {{32{rem32[31]}}, rem32} : rem64;

// result生成
always @ (*) begin
    case (OPctr)
        4'b0000: reg_result = sum;
        4'b0001: reg_result = src1 & src2;
        4'b0010: reg_result = src1 | src2;
        4'b0011: reg_result = src1 ^ src2;
        4'b0100: reg_result = src1_shift << (src2 & {58'h0, ~Word_op, 5'h1F});
        4'b0101: reg_result = src1_shift >> (src2 & {58'h0, ~Word_op, 5'h1F});
        4'b0110: reg_result = (src1_shift >> (src2 & {58'h0, ~Word_op, 5'h1F})) | 
        (shift_sig << ({58'h0, ~Word_op, 5'h1F} + ~(src2 & {58'h0, ~Word_op, 5'h1F}) + 64'd1));
        4'b0111: reg_result = {63'd0, less1};
        4'b1000: reg_result = real_mul;
        4'b1001: reg_result = real_div;
        4'b1100: reg_result = real_rem;
        default: reg_result = sum;
    endcase
end

endmodule
