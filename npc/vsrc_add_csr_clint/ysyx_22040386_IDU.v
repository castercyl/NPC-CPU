
`define CSR_MCYCLE          12'hb00
`define CSR_MSTATUS         12'h300
`define CSR_MTVEC           12'h305
`define CSR_MEPC            12'h341
`define CSR_MCAUSE          12'h342
`define CSR_MIE             12'h304
`define CSR_MIP             12'h344
`define CSR_MSCRATCH        12'h340
`define CSR_STATE_IDLE      2'b00
`define CSR_STATE_RW        2'b01
`define CSR_STATE_ECALL     2'b10
`define CSR_STATE_MRET      2'b11


module ysyx_22040386_IDU (
    input wire        i_ID_clk,
    input wire [63:0] i_ID_pc,
    input wire [31:0] i_ID_inst,
    input wire        i_ID_RegWrite,
    input wire [4:0]  i_ID_reg_wr_addr,
    input wire [63:0] i_ID_reg_wr_data,

    output wire o_ID_unkown_code,    //仅用于前期检测未实现的指令

    output reg o_ID_RegWrite,
    output wire o_ID_Word_op,
    output wire o_ID_MemRead,
    output reg o_ID_MemWrite,
    output reg o_ID_ALUBsrc,
    output wire o_ID_Auipc,
    output wire o_ID_Jal,
    output wire o_ID_Jalr,
    output wire o_ID_Lui,
    output reg [2:0] o_ID_Branch_type,
    output wire [2:0] o_ID_mem_mask,
    output wire [4:0] o_ID_reg_wr_addr,
    output wire [5:0] o_ID_ALUctr,
    output reg [63:0] o_ID_imm,
    output wire [63:0] o_ID_reg_rd_data1,
    output wire [63:0] o_ID_reg_rd_data2,
    output wire [63:0] o_ID_pc,

    output wire o_ID_ecall,
    output wire o_ID_mret,
    //to CSR
    output wire        o_ID_csr_ren,
    output wire        o_ID_csr_wen,
    output wire [1:0]  o_ID_csr_state,
    output wire [11:0] o_ID_csr_waddr,
    output wire [11:0] o_ID_csr_raddr
);

//初次关键标志拆分
wire [2:0] ID_funct3;
wire [6:0] ID_opcode, ID_funct7;
wire [4:0] ID_reg_rd_addr1, ID_reg_rd_addr2;

assign ID_funct3 = i_ID_inst[14:12];
assign ID_funct7 = i_ID_inst[31:25];
assign ID_opcode = i_ID_inst[6:0];
assign ID_reg_rd_addr1 = i_ID_inst[19:15];
assign ID_reg_rd_addr2 = i_ID_inst[24:20];

assign o_ID_reg_wr_addr = i_ID_inst[11:7];

//中间数据流，流水线
assign o_ID_pc = i_ID_pc;

//------CSR---------
wire ID_csrrw, ID_csrrs, ID_ecall, ID_mret;
assign ID_csrrs = (ID_opcode == 7'b111_0011) && (ID_funct3 == 3'b010);
assign ID_csrrw = (ID_opcode == 7'b111_0011) && (ID_funct3 == 3'b001);
assign ID_ecall = (ID_opcode == 7'b111_0011) && (i_ID_inst[31:8] == 'd0);
assign ID_mret  = (ID_opcode == 7'b111_0011) && (i_ID_inst[19:7] == 'd0) && (i_ID_inst[24:20] == 5'b0_0010) && (ID_funct7 == 7'b001_1000);

assign o_ID_ecall = ID_ecall;
assign o_ID_mret  = ID_mret;

assign o_ID_csr_raddr = i_ID_inst[31:20];
assign o_ID_csr_waddr = i_ID_inst[31:20];

assign o_ID_csr_ren = ID_csrrs || ID_mret || ID_ecall;
assign o_ID_csr_wen = ID_csrrw || ID_ecall;

assign o_ID_csr_state = (ID_csrrs || ID_csrrw) ? `CSR_STATE_RW   : 
                        (ID_ecall)             ? `CSR_STATE_ECALL:
                        (ID_mret)              ? `CSR_STATE_MRET : `CSR_STATE_IDLE;


/*### 数据通路控制信号生成 ###*/

/*### 1.ALUop信号生成 ###*/
reg [1:0] ID_ALUop;    //子控模块控制信号
always @ (*) begin
    case(ID_opcode)
        7'b011_1011,
        7'b011_0011: ID_ALUop = 2'b10;    //R
        7'b001_1011,
        7'b001_0011: ID_ALUop = 2'b01;    //I （非load)
        7'b110_0011: ID_ALUop = 2'b11;    //B
        default:     ID_ALUop = 2'b00;     //默认做加法
    endcase
end

/*### 2.RegWrite 生成 ###*/
always @ (*) begin
    case(ID_opcode)
        7'b011_1011,
        7'b011_0011,                            // R
        7'b001_0011, 7'b000_0011, 7'b110_0111,      // I
        7'b001_1011,                                //I(w)
        7'b110_1111,                           // J (jal)
        7'b011_0111, 7'b001_0111:begin           // U
            o_ID_RegWrite = 1'b1;          // 结果写入寄存器
        end
        default: o_ID_RegWrite = 1'b0;
    endcase
end

/*### 3. MemWrite 生成 ###*/
always @ (*) begin
    case(ID_opcode)
        7'b010_0011:begin             // S-type
            o_ID_MemWrite = 1'b1;
        end
        default: o_ID_MemWrite = 1'b0;
    endcase
end

/*### 4. ALUBsrc 生成 ###*/
always @ (*) begin
    case(ID_opcode)
        7'b011_0111, 7'b001_0111,        // U-type 
        7'b010_0011,     //S-type
        7'b001_1011,
        7'b001_0011, 7'b000_0011, 7'b110_0111:begin          // I-type
            o_ID_ALUBsrc = 1'b1;          // src2 = imm
        end
        default: o_ID_ALUBsrc = 1'b0;     // src2 = busB
    endcase
end

/*### 5. Auipc 生成 ###*/
assign o_ID_Auipc = (ID_opcode == 7'b001_0111) ? 1'b1 : 1'b0;

/*### 6. Jal 生成 ###*/
assign o_ID_Jal = (ID_opcode == 7'b110_1111) ? 1'b1 : 1'b0;

/*### 7. Jalr 生成 ###*/
assign o_ID_Jalr = ((ID_opcode == 7'b110_0111) & (ID_funct3 == 3'b000)) ? 1'b1 : 1'b0;

/*### 8. Lui 生成 ###*/
assign o_ID_Lui = (ID_opcode == 7'b011_0111) ? 1'b1 : 1'b0;

/*### 9. Branch_type 生成 ###*/
always @ (*) begin
    case (ID_opcode)
        7'b110_0011:begin         // B-type
            o_ID_Branch_type = ID_funct3;               //可能要跳转
        end
        default: o_ID_Branch_type = 3'b010;        //一定不跳转
    endcase
end

/*### 10. 立即数生成模块 ###*/
always @ (*) begin
    case (ID_opcode)
        7'b001_1011,
        7'b001_0011,
        7'b000_0011,
        7'b110_0111: o_ID_imm = {{52{i_ID_inst[31]}}, i_ID_inst[31:20]};   // I-Type
        7'b010_0011: o_ID_imm = {{52{i_ID_inst[31]}}, i_ID_inst[31:25], i_ID_inst[11:7]}; // S-Type
        7'b110_0011: o_ID_imm = {{51{i_ID_inst[31]}}, i_ID_inst[31], i_ID_inst[7], i_ID_inst[30:25], i_ID_inst[11:8], 1'b0}; // B-Type
        7'b110_1111: o_ID_imm = {{43{i_ID_inst[31]}}, i_ID_inst[31], i_ID_inst[19:12], i_ID_inst[20], i_ID_inst[30:21], 1'b0}; // J-Type
        7'b011_0111,
        7'b001_0111: o_ID_imm = {{32{i_ID_inst[31]}}, i_ID_inst[31:12], {12{1'b0}}}; // U-Type
        default: o_ID_imm = 64'd0;
    endcase
end

/*### 11. Word_op 生成 ###*/
assign o_ID_Word_op = i_ID_inst[3];   //Inst的第3位用于判断是否是字操作，如addiw；J型指令不影响

/*### 12. mem_mask 生成 ###*/
assign o_ID_mem_mask = ID_funct3;

/*### 13. MemRead 生成 ###*/
assign o_ID_MemRead = (ID_opcode == 7'b000_0011) ? 1'b1 : 1'b0;   //load-type


//子控模块，根据ALUop产生ALUctr
ysyx_22040386_ALUcontrol ysyx_22040386_ALUcontrol_inst (.ALUop(ID_ALUop), .funct3(ID_funct3), .funct7(ID_funct7), 
.ALUctr(o_ID_ALUctr));
//寄存器堆模块
ysyx_22040386_RegisterFile ysyx_22040386_RegisterFile_inst (.clk(i_ID_clk), .wen(i_ID_RegWrite), .wdata(i_ID_reg_wr_data), 
.waddr(i_ID_reg_wr_addr), .raddr1(ID_reg_rd_addr1), .raddr2(ID_reg_rd_addr2), .rdata1(o_ID_reg_rd_data1), .rdata2(o_ID_reg_rd_data2));

//测试模块，检测出未译码的指令
code_test code_test_inst (.opcode(ID_opcode), .funct7(ID_funct7), .funct3(ID_funct3), .unkown_code(o_ID_unkown_code), 
.Inst(i_ID_inst));


/*##DPI-C 识别到ebreak指令后自动结束##*/

import "DPI-C" function void ebreak();
always @ (*) begin
  if (i_ID_inst == 32'h0010_0073)
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
