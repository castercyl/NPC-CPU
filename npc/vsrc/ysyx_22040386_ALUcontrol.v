module ysyx_22040386_ALUcontrol (
    input [1:0] ALUop,
    input [2:0] funct3,
    input [6:0] funct7,

    output [4:0] ALUctr
);

reg [4:0] R_ctr, I_ctr, B_ctr, reg_ALUctr;
assign ALUctr = reg_ALUctr;

// R-type
always @ (*) begin
    case (funct3)
        3'b000:begin
            if(funct7 == 7'b010_0000)
                R_ctr = 5'b1_0000;  //sub
            else
                R_ctr = 5'b0_0000;  //add
        end
        3'b001: R_ctr = 5'b0_0100;  //sll
        3'b010: R_ctr = 5'b1_1111;  //slt
        3'b011: R_ctr = 5'b1_0111;  //sltu
        3'b100: R_ctr = 5'b0_0011;  //xor
        3'b101:begin
            if(funct7 == 7'b010_0000)
                R_ctr = 5'b1_0110;  //sra
            else
                R_ctr = 5'b0_0101;  //srl
        end
        3'b110: R_ctr = 5'b0_0010;  //or
        3'b111: R_ctr = 5'b0_0001;  //and
    endcase
end

// I-type
always @ (*) begin
    case (funct3)
        3'b000: I_ctr = 5'b0_0000;  //addi
        3'b001: I_ctr = 5'b0_0100;  //slli
        3'b010: I_ctr = 5'b1_1111;  //slti
        3'b011: I_ctr = 5'b1_0111;  //sltiu
        3'b100: I_ctr = 5'b0_0011;  //xori
        3'b101:begin
            if(funct7 == 7'b010_0000)
                I_ctr = 5'b1_0110;  //srai
            else
                I_ctr = 5'b0_0101;  //srli
        end
        3'b110: I_ctr = 5'b0_0010;  //ori
        3'b111: I_ctr = 5'b0_0001;  //andi
    endcase
end

// B-type
always @ (*) begin
    case (funct3)
        3'b000,                     // beq
        3'b001: B_ctr = 5'b10_000;  // bne
        3'b100,                     // blt
        3'b101: B_ctr = 5'b1_1111;  // bge
        3'b110,                     // bltu
        3'b111: B_ctr = 5'b1_0111;  // bgeu
        default: B_ctr = 5'd0;
    endcase
end

// ALUctr 生成
always @ (*) begin
    case(ALUop)
        2'b00: reg_ALUctr = 5'b0_0000;
        2'b11: reg_ALUctr = B_ctr;      //B-type
        2'b01: reg_ALUctr = I_ctr;      //I-type
        2'b10: reg_ALUctr = R_ctr;      //R-type
    endcase
end

endmodule
