module ysyx_22040386_ALUcontrol (
    input [1:0] ALUop,
    input [2:0] funct3,
    input [6:0] funct7,

    output [5:0] ALUctr
);

reg [5:0] R_ctr, I_ctr, B_ctr, reg_ALUctr;
assign ALUctr = reg_ALUctr;

// R-type
always @ (*) begin
    R_ctr = 6'b00_0000;
    case (funct3)
        3'b000:begin
            if(funct7 == 7'h20)
                R_ctr = 6'b10_0000;  //sub
            else if(funct7 == 7'h00)
                R_ctr = 6'b00_0000;  //add
            else if(funct7 == 7'h01)
                R_ctr = 6'b00_1000;  //mul
        end
        3'b001:begin
            if(funct7 == 7'h00)
                R_ctr = 6'b00_0100;  //sll
        end
        3'b010:begin
            if(funct7 == 7'h00)
                R_ctr = 6'b11_0111;  //slt
        end
        3'b011:begin
            if (funct7 == 7'h00)
                R_ctr = 6'b10_0111;  //sltu
        end
        3'b100:begin
            if (funct7 == 7'h00)
                R_ctr = 6'b00_0011;  //xor
            else if (funct7 == 7'h01)
                R_ctr = 6'b00_1001; //div
        end
        3'b101:begin
            if(funct7 == 7'h20)
                R_ctr = 6'b10_0110;  //sra
            else if (funct7 == 7'h00)
                R_ctr = 6'b00_0101;  //srl
        end
        3'b110:begin
            if (funct7 == 7'h00)
                R_ctr = 6'b00_0010;  //or
            else if (funct7 == 7'h01)
                R_ctr = 6'b00_1100; //rem
        end
        3'b111:begin
            if (funct7 == 7'h00)
                R_ctr = 6'b00_0001;  //and
        end
    endcase
end

// I-type
always @ (*) begin
    I_ctr = 6'b00_0000;
    case (funct3)
        3'b000: I_ctr = 6'b00_0000;  //addi
        3'b001:begin
            if (funct7[6:1] == 6'h00)
                I_ctr = 6'b00_0100;  //slli
        end
        3'b010: I_ctr = 6'b11_0111;  //slti
        3'b011: I_ctr = 6'b10_0111;  //sltiu
        3'b100: I_ctr = 6'b00_0011;  //xori
        3'b101:begin
            if(funct7[6:1] == 6'h10)
                I_ctr = 6'b10_0110;  //srai
            else if (funct7[6:1] == 6'h00)
                I_ctr = 6'b00_0101;  //srli
        end
        3'b110: I_ctr = 6'b00_0010;  //ori
        3'b111: I_ctr = 6'b00_0001;  //andi
    endcase
end

// B-type
always @ (*) begin
    case (funct3)
        3'b000,                     // beq
        3'b001: B_ctr = 6'b10_0000;  // bne
        3'b100,                     // blt
        3'b101: B_ctr = 6'b11_0111;  // bge
        3'b110,                     // bltu
        3'b111: B_ctr = 6'b10_0111;  // bgeu
        default: B_ctr = 6'd0;
    endcase
end

// ALUctr 生成
always @ (*) begin
    case(ALUop)
        2'b00: reg_ALUctr = 6'b00_0000;
        2'b11: reg_ALUctr = B_ctr;      //B-type
        2'b01: reg_ALUctr = I_ctr;      //I-type
        2'b10: reg_ALUctr = R_ctr;      //R-type
    endcase
end

endmodule
