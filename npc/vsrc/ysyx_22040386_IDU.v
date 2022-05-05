module ysyx_22040386_IDU (
    input [31:0] I,

    output ALUAsrc,
    output [1:0] ALUBsrc,
    output RegWrite,
    output Branch,
    output MemWrite,
    output [2:0] ALUctr,
    output [7:0] Wmask,
    output [63:0] imm
);

/*### 立即数生成模块 ###*/
reg [63:0] reg_imm;
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
assign imm = reg_imm;

/*### 控制信号生成 ###*/
reg reg_ALUAsrc, reg_RegWrite, reg_Branch, reg_MemWrite;
reg [1:0] reg_ALUBsrc;
reg [2:0] reg_ALUctr;
reg [7:0] reg_Wmask;

assign ALUAsrc = reg_ALUAsrc;
assign ALUBsrc = reg_ALUBsrc;
assign RegWrite = reg_RegWrite;
assign Branch = reg_Branch;
assign ALUctr = reg_ALUctr;
assign MemWrite = reg_MemWrite;
assign Wmask = reg_Wmask;

/*### ALUctr 生成 ###*/
always @ (*) begin
    case (I[6:0])
        7'b110_1111, 
        7'b110_0111:begin  // result = snpc = pc + 4; jalr,jal
            reg_ALUctr = 3'b011;
        end
        7'b011_0111:begin          // result = src2; lui
            reg_ALUctr = 3'b010;
        end
        7'b010_0011,
        7'b001_0011, 7'b001_0111:begin         // result = src1 + src2; addi,auipc,sd
            reg_ALUctr = 3'b000;
        end
        default: reg_ALUctr = 3'b000;
    endcase
end

/*### ALUAsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_1111, 7'b001_0111:begin        // src1 = pc; jal,auipc
            reg_ALUAsrc = 1'b1;
        end
        default: reg_ALUAsrc = 1'b0;          // src1 = rs1
    endcase
end

/*### ALUBsrc 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b010_0011,                      // sd
        7'b011_0111, 7'b001_0111,        // U-Type
        7'b110_1111,                     // jal
        7'b001_0011,                    // addi
        7'b110_0111:begin                // jalr
            reg_ALUBsrc = 2'd1;          // src2 = imm
        end
        default: reg_ALUBsrc = 2'd0;          // src2 = rs2
    endcase
end

/*### RegWrite 生成 ###*/
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

/*### Branch 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b110_1111,                     // jal
        7'b110_0111:begin                // jalr
            reg_Branch = 1'b1;          // 跳转
        end
        default: reg_Branch = 1'b0;
    endcase
end

/*### MemWrite 生成 ###*/
always @ (*) begin
    case(I[6:0])
        7'b010_0011:begin             // S-type
            reg_MemWrite = 1'b1;
        end
        default: reg_MemWrite = 1'b0;
    endcase
end

/*### Wmask 生成 ###*/
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

/*##DPI-C 识别到ebreak指令后自动结束##*/
import "DPI-C" function void ebreak();
always @ (*) begin
  if (I == 32'h0010_0073)
    ebreak();
end

endmodule
