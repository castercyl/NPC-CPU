module code_test (
    input [6:0] opcode,
    input [6:0] funct7,
    input [2:0] funct3,
    input [31:0] Inst,

    output unkown_code
);

reg reg_unkown_code;
assign unkown_code = reg_unkown_code;

//assign unkown_code = (Inst == 32'h0000_0413) ? 1'b0 : 1'b1;

/*
always @ (*) begin
    //reg_unkown_code = 1'b1;
    case(Inst[6:0])
        7'b001_0011:begin
             reg_unkown_code = 1'd0;
        end
        //7'b011_0011: reg_unkown_code = 1'd0;
        //7'b110_0011: reg_unkown_code = 1'd0;
        //7'b110_1111: reg_unkown_code = 1'd0;
        default: reg_unkown_code = 1'd1;
    endcase
end
*/


always @ (*) begin
    reg_unkown_code = 1'b1;
    case(opcode)
        7'b011_0011:begin     // R-type
            case (funct3)
                3'd0:begin
                    if(funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //add
                    else if(funct7 == 7'h20)
                        reg_unkown_code = 1'b0; //sub
                    else if(funct7 == 7'h01)
                        reg_unkown_code = 1'b0; //mul
                end
                3'd1:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //sll
                end
                3'd2:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //slt
                end
                3'd3:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //sltu
                end
                3'd4:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //xor
                end
                3'd5:begin
                    if(funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //srl
                    else if(funct7 == 7'h20)
                        reg_unkown_code = 1'b0; //sra
                end
                3'd6:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //or
                end
                3'd7:begin
                    if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //and
                end
            endcase
        end

        // I-type(非load)
        7'b001_0011:begin
            case(funct3)
                3'b000: reg_unkown_code = 1'b0; //addi
                3'd1: begin
                    if (funct7[6:1] == 6'h00)
                        reg_unkown_code = 1'b0; //slli
                end
                3'd2: reg_unkown_code = 1'b0; //slti
                3'd3: reg_unkown_code = 1'b0; //sltiu
                3'd4: reg_unkown_code = 1'b0; //xori
                3'd5:begin
                    if(funct7[6:1] == 6'h00)
                        reg_unkown_code = 1'b0; //srli
                    else if(funct7 == 7'h20)
                        reg_unkown_code = 1'b0; //srai
                end
                3'd6: reg_unkown_code = 1'b0; //ori
                3'd7: reg_unkown_code = 1'b0; //andi
            endcase
        end
        7'b110_0011:begin      //B-type
            case(funct3)
                3'd0: reg_unkown_code = 1'b0; //beq
                3'd1: reg_unkown_code = 1'b0; //bne
                3'd4: reg_unkown_code = 1'b0; //blt
                3'd5: reg_unkown_code = 1'b0; //bge
                3'd6: reg_unkown_code = 1'b0; //bltu
                3'd7: reg_unkown_code = 1'b0; //bgeu
                default: reg_unkown_code = 1'b1;
            endcase
        end
        7'b110_1111: reg_unkown_code = 1'b0; //jal
        7'b011_0111: reg_unkown_code = 1'b0; //lui
        7'b001_0111: reg_unkown_code = 1'b0; //auipc
        7'b110_0111:begin
            if (funct3 == 3'd0)
                reg_unkown_code = 1'b0; //jalr
        end

         //S-type
        7'b010_0011:begin
            case(funct3)
                3'd3: reg_unkown_code = 1'b0; //sd
                3'd0: reg_unkown_code = 1'b0; //sb
                3'd2: reg_unkown_code = 1'b0; //sw
                3'd1: reg_unkown_code = 1'b0; //sh
                default: reg_unkown_code = 1'b1;
            endcase
        end

        //load-I-type
        7'b000_0011:begin
            case(funct3)
                3'd3: reg_unkown_code = 1'b0; //ld
                3'd2: reg_unkown_code = 1'b0; //lw
                3'd4: reg_unkown_code = 1'b0; //lbu
                3'd1: reg_unkown_code = 1'b0; //lh
                3'd5: reg_unkown_code = 1'b0; //lhu
                default: reg_unkown_code = 1'b1; 
            endcase
        end

        //word-I-type
        7'b001_1011:begin
            case(funct3)
                3'd0: reg_unkown_code = 1'b0; //addiw
                3'd1:begin
                    if (funct7[6:1] == 6'h00)
                        reg_unkown_code = 1'b0; //slliw
                end
                3'd5:begin
                    if (funct7[6:1] == 6'h10)
                        reg_unkown_code = 1'b0; //sraiw
                    else if (funct7[6:1] == 6'h00)
                        reg_unkown_code = 1'b0; //srliw
                end
                default: reg_unkown_code = 1'b1; 
            endcase
        end

        //word-R-type
        7'b011_1011:begin
            case(funct3)
                3'd0:begin
                    if(funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //addw
                    else if (funct7 == 7'h01)
                        reg_unkown_code = 1'b0; //mulw 
                    else if (funct7 == 7'h20)
                        reg_unkown_code = 1'b0; //subw
                end
                3'd1:begin
                    if(funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //sllw
                    else
                        reg_unkown_code = 1'b1; 
                end
                3'd4:begin
                    if (funct7 == 7'h01)
                        reg_unkown_code = 1'b0; //divw
                end
                3'd5:begin
                    if (funct7 == 7'h20)
                        reg_unkown_code = 1'b0; //sraw
                    else if (funct7 == 7'h00)
                        reg_unkown_code = 1'b0; //srlw
                end
                3'd6:begin
                    if (funct7 == 7'h01)
                        reg_unkown_code = 1'b0; //remw
                end
                default: reg_unkown_code = 1'b1; 
            endcase
        end

        7'b111_0011:begin
            if(Inst[31:20] == 12'd1)
                reg_unkown_code = 1'b0;   //ebreak
            else
                reg_unkown_code = 1'b1;
        end
        default: reg_unkown_code = 1'b1;
    endcase
end

wire _unused_ok = &{1'b0,
                    Inst[19:0],
                    //funct3,
                    //funct7,  // To be fixed
                    1'b0};

endmodule
