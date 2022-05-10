module ysyx_22040386_IDU (
    input clk,
    input [31:0] Inst,
    input [63:0] wr_reg_data,

    output unkown_code,
    output Word_op,
    output MemRead,
    output MemWrite,
    output Reg_to_Mem,
    output Result_to_Pc,
    output Auipc,
    output Jal,
    output Jalr,
    output Lui,
    output [2:0] Branch_type,
    output [2:0] mask_type,
    output [4:0] ALUctr,
    //output [7:0] Wmask,
    output [63:0] imm,
    output [63:0] src1,
    output [63:0] src2,
    output [63:0] wr_mem_data
);

reg [1:0] ALUop;    //子控模块控制信号
wire RegWrite, ALUBsrc;
wire [2:0] funct3;
wire [6:0] funct7, opcode;
wire [63:0] busA, busB;
assign opcode = Inst[6:0];
assign Word_op = Inst[3];   //Inst的第3位用于判断是否是字操作，如addiw；J型指令不影响
//assign Rmask = funct3;     //读掩码，用于决定从数据存储器中读出的数据的类型,区分load型指令
/*
wire unkown_code;
wire [6:0] opcode;
assign opcode = Inst[6:0];
*/
/*### 数据通路控制信号生成 ###*/
reg reg_RegWrite, reg_MemWrite, reg_ALUBsrc, reg_Reg_to_Mem, reg_Result_to_Pc;
reg [2:0] reg_Branch_type;
//reg [7:0] reg_Wmask;
reg [63:0] reg_imm;

assign RegWrite = reg_RegWrite;
assign MemWrite = reg_MemWrite;
assign ALUBsrc = reg_ALUBsrc;
assign Reg_to_Mem = reg_Reg_to_Mem;
assign Result_to_Pc = reg_Result_to_Pc;
assign Branch_type = reg_Branch_type;
//assign Wmask = reg_Wmask;

assign funct3 = Inst[14:12];
assign mask_type = Inst[14:12];
assign funct7 = Inst[31:25];
//assign slli = (opcode == 7'b001_0011) & (funct3 ==3'b001) & (funct7 == 7'd0);
//assign srli = (opcode == 7'b001_0011) & (funct3 ==3'b101) & (funct7 == 7'd0);
//assign srai = (opcode == 7'b001_0011) & (funct3 ==3'b101) & (funct7 == 7'b010_0000);
//assign shift_imm = slli | srli | srai;
assign src1 = busA;
assign src2 = (ALUBsrc) ? imm : busB;
assign wr_mem_data = busB;
assign imm = reg_imm;
//assign imm = (shift_imm) ? reg_imm & 64'h0000_0000_0000_003F : reg_imm;
assign MemRead = (Inst[6:0] == 7'b000_0011) ? 1'b1 : 1'b0;   //load-type

/*### ALUop信号生成 ###*/
always @ (*) begin
    case(opcode)
        7'b011_1011,
        7'b011_0011: ALUop = 2'b10;    //R
        7'b001_1011,
        7'b001_0011: ALUop = 2'b01;    //I （非load)
        7'b110_0011: ALUop = 2'b11;    //B
        default:     ALUop = 2'b00;     //默认做加法
    endcase
end

/*### 1. RegWrite 生成 ###*/
always @ (*) begin
    case(opcode)
        7'b011_1011,
        7'b011_0011,                            // R
        7'b001_0011, 7'b000_0011, 7'b110_0111,      // I
        7'b001_1011,                                //I(w)
        7'b110_1111,                           // J (jal)
        7'b011_0111, 7'b001_0111:begin           // U
            reg_RegWrite = 1'b1;          // 结果写入寄存器
        end
        default: reg_RegWrite = 1'b0;
    endcase
end

/*### 2. MemWrite 生成 ###*/
always @ (*) begin
    case(opcode)
        7'b010_0011:begin             // S-type
            reg_MemWrite = 1'b1;
        end
        default: reg_MemWrite = 1'b0;
    endcase
end

/*### 3. ALUBsrc 生成 ###*/
always @ (*) begin
    case(opcode)
        7'b011_0111, 7'b001_0111,        // U-type 
        7'b010_0011,     //S-type
        7'b001_1011,
        7'b001_0011, 7'b000_0011, 7'b110_0111:begin          // I-type
            reg_ALUBsrc = 1'b1;          // src2 = imm
        end
        default: reg_ALUBsrc = 1'b0;     // src2 = busB
    endcase
end

/*### 4. Reg_to_Mem 生成 ###*/
always @ (*) begin
    case(opcode)
        7'b000_0011:begin        // Load -I-type
            reg_Reg_to_Mem = 1'b1;                   //rd = mem[]
        end
        default: reg_Reg_to_Mem = 1'b0;
    endcase
end

/*### 5. Result_to_Pc 生成 ###*/
always @ (*) begin
    case(opcode)
        7'b001_0111,                       // auipc
        7'b110_1111:begin                      // jal
            reg_Result_to_Pc = 1'b1;          // rd = pc + 4 or pc + imm
        end
        7'b110_0111:begin             //jalr
            if(funct3 == 3'b000)
                reg_Result_to_Pc = 1'b1;
            else
                reg_Result_to_Pc = 1'b0;
        end
        default: reg_Result_to_Pc = 1'b0;          // rd = result
    endcase
end

/*### 6. Auipc 生成 ###*/
assign Auipc = (opcode == 7'b001_0111) ? 1'b1 : 1'b0;

/*### 7. Jal 生成 ###*/
assign Jal = (opcode == 7'b110_1111) ? 1'b1 : 1'b0;

/*### 8. Jalr 生成 ###*/
assign Jalr = ((opcode == 7'b110_0111) & (funct3 == 3'b000)) ? 1'b1 : 1'b0;

/*### 9. Lui 生成 ###*/
assign Lui = (opcode == 7'b011_0111) ? 1'b1 : 1'b0;

/*### 10. Branch_type 生成 ###*/
always @ (*) begin
    case (opcode)
        7'b110_0011:begin         // B-type
            reg_Branch_type = funct3;               //可能要跳转
        end
        default: reg_Branch_type = 3'b010;        //一定不跳转
    endcase
end

/*### 11. Wmask 生成 ###*/
/*
always @ (*) begin
    case(funct3)
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
*/
/*### 12. 立即数生成模块 ###*/
always @ (*) begin
    case (opcode)
        7'b001_1011,
        7'b001_0011,
        7'b000_0011,
        7'b110_0111: reg_imm = {{52{Inst[31]}}, Inst[31:20]};   // I-Type
        7'b010_0011: reg_imm = {{52{Inst[31]}}, Inst[31:25], Inst[11:7]}; // S-Type
        7'b110_0011: reg_imm = {{51{Inst[31]}}, Inst[31], Inst[7], Inst[30:25], Inst[11:8], 1'b0}; // B-Type
        7'b110_1111: reg_imm = {{43{Inst[31]}}, Inst[31], Inst[19:12], Inst[20], Inst[30:21], 1'b0}; // J-Type
        7'b011_0111,
        7'b001_0111: reg_imm = {{32{Inst[31]}}, Inst[31:12], {12{1'b0}}}; // U-Type
        default: reg_imm = 64'd0;
    endcase
end

//子控模块，根据ALUop产生ALUctr
ysyx_22040386_ALUcontrol ysyx_22040386_ALUcontrol_inst (.ALUop(ALUop), .funct3(funct3), .funct7(funct7), .ALUctr(ALUctr));
//寄存器堆模块
ysyx_22040386_RegisterFile ysyx_22040386_RegisterFile_inst (.clk(clk), .wen(RegWrite), .wdata(wr_reg_data), .waddr(Inst[11:7]), 
.raddr1(Inst[19:15]), .raddr2(Inst[24:20]), .rdata1(busA), .rdata2(busB));

//测试模块，检测出未译码的指令
code_test code_test_inst (.opcode(opcode), .funct7(funct7), .funct3(funct3), .unkown_code(unkown_code), 
.Inst(Inst));


/*##DPI-C 识别到ebreak指令后自动结束##*/

import "DPI-C" function void ebreak();
always @ (*) begin
  if (Inst == 32'h0010_0073)
    ebreak();
end

//assign unkown_code = (opcode != 7'b0010011);
/*
import "DPI-C" function void unkown_inst();
always @ (*) begin
  if (Inst == 32'h0000_0000)
    unkown_inst();
end
*/

endmodule
