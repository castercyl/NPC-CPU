module ysyx_22040386_IDU (
    input [31:0] I,
    
    output RegWrite,
    output MemWrite,
    output Branch,
    output ALUAsrc,
    output ALUBsrc,
    output DNPCsrc,
    output RESULTsrc,
    output Mem_to_Reg,
    output Jump,
    output [2:0] ALUctr,
    output [7:0] Wmask,
    output [63:0] imm
);

/*### 控制信号生成 ###*/
reg reg_RegWrite, reg_MemWrite, reg_Branch, reg_ALUAsrc, reg_ALUBsrc, reg_DNPCsrc, reg_RESULTsrc, reg_Mem_to_Reg, reg_Jump;
reg [2:0] reg_ALUctr;
reg [7:0] reg_Wmask;
reg [63:0] reg_imm;

assign RegWrite = reg_RegWrite;
assign MemWrite = reg_MemWrite;
assign Branch = reg_Branch;
assign ALUAsrc = reg_ALUAsrc;
assign ALUBsrc = reg_ALUBsrc;
assign DNPCsrc = reg_DNPCsrc;
assign RESULTsrc = reg_RESULTsrc;
assign Mem_to_Reg = reg_Mem_to_Reg;
assign Jump = reg_Jump;
assign ALUctr = reg_ALUctr;
assign Wmask = reg_Wmask;
assign imm = reg_imm;

/*### 1. RegWrite 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b011_0111, 7'b001_0111,        // U-Type
        7'b110_1111,                     // jal
        7'b001_0011,                     // addi
        7'b110_0111:begin                // jalr
            reg_RegWrite = 1'b1;          // 结果写入寄存器
        end
        default: reg_RegWrite = 1'b0;
    endcase
end

/*### 2. MemWrite 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b010_0011:begin             // S-type
            reg_MemWrite = 1'b1;
        end
        default: reg_MemWrite = 1'b0;
    endcase
end

/*### 3. Branch 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_0011:begin                // beq
            reg_Branch = 1'b1;          // 跳转
        end
        default: reg_Branch = 1'b0;
    endcase
end

/*### 4. ALUAsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b001_0111:begin        // src1 = pc; auipc
            reg_ALUAsrc = 1'b1;
        end
        default: reg_ALUAsrc = 1'b0;          // src1 = rs1
    endcase
end

/*### 5. ALUBsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b000_0011,                       // load-I-type
        7'b010_0011,                      // sd
        7'b011_0111, 7'b001_0111,        // U-Type
        7'b110_1111,                     // jal
        7'b001_0011,                    // addi
        7'b110_0111:begin                // jalr
            reg_ALUBsrc = 1'b1;          // src2 = imm
        end
        default: reg_ALUBsrc = 1'b0;          // src2 = rs2
    endcase
end

/*### 6. DNPCsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_0111:begin        // jalr
            reg_DNPCsrc = 1'b1;   // dnpc = rs1 + imm
        end
        default: reg_DNPCsrc = 1'b0;          // dnpc = pc + imm
    endcase
end

/*### 7. RESULTsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_1111,               // jal
        7'b110_0111:begin          // jalr
            reg_RESULTsrc = 1'b1;   // final_result = pc + 4
        end
        default: reg_RESULTsrc = 1'b0;          // final_result = rsult
    endcase
end

/*### 8. Mem_to_Reg 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b000_0011:begin          // load
            reg_Mem_to_Reg = 1'b1;               // reg_wdata = mem_data
        end
        default: reg_Mem_to_Reg = 1'b0;          // reg_wdata = final_result
    endcase
end

/*### 9. Jump 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_1111,          //jal
        7'b110_0111:begin     //jalr
            reg_Jump = 1'b1;               //一定跳转
        end
        default: reg_Jump = 1'b0;          //可能跳转
    endcase
end

/*### 10. ALUctr 生成 ###*/
always @ (*) begin
    case (I[6:0])
        7'b110_0011:begin         // beq
            reg_ALUctr = 3'b100;               // result = src1 - src2
        end
        7'b011_0111:begin         // lui
            reg_ALUctr = 3'b010;               // result = src2
        end
        7'b000_0011,               // ld
        7'b010_0011,              // sd
        7'b001_0111:begin         // auipc
            reg_ALUctr = 3'b000;               // result = src1 + src2
        end
        default: reg_ALUctr = 3'b000;
    endcase
end

/*### 11. Wmask 生成 ###*/
always @ (*) begin
    case(I[14:12])
        3'b000:begin                  // sb
            reg_Wmask = 8'b0000_0001;
        end
        3'b001:begin                 // Sh
            reg_Wmask = 8'b0000_0011;
        end
        3'b010:begin                // sw
            reg_Wmask = 8'b0000_1111;
        end
        3'b011:begin                // sd
            reg_Wmask = 8'b1111_1111;
        end
        default: reg_Wmask = 8'd0;
    endcase
end

/*### 12. 立即数生成模块 ###*/
always @ (*) begin
    case (I[6:0])
        7'b001_0011,
        7'b000_0011,
        7'b110_0111: reg_imm = {{52{I[31]}}, I[31:20]};   // I-Type
        7'b010_0011: reg_imm = {{52{I[31]}}, I[31:25], I[11:7]}; // S-Type
        7'b110_0011: reg_imm = {{51{I[31]}}, I[31], I[7], I[30:25], I[11:8], 1'b0}; // B-Type
        7'b110_1111: reg_imm = {{43{I[31]}}, I[31], I[19:12], I[20], I[30:21], 1'b0}; // J-Type
        7'b011_0111,
        7'b001_0111: reg_imm = {{32{I[31]}}, I[31:12], {12{1'b0}}}; // U-Type
        default: reg_imm = 64'd0;
    endcase
end

/*##DPI-C 识别到ebreak指令后自动结束##*/
import "DPI-C" function void ebreak();
always @ (*) begin
  if (I == 32'h0010_0073)
    ebreak();
end

endmodule
