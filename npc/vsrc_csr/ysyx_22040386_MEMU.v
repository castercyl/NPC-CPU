
`define ADDR_MTIME          64'h200_BFF8
`define ADDR_MTIMECMP       64'h200_4000

module ysyx_22040386_MEMU (
    input wire i_MEM_rst_n,
    input wire i_MEM_clk,
//------------from EX------------------
  //-------------测试信号----------------
    input wire [31:0] i_MEM_inst,
    input wire i_MEM_zero,
    input wire i_MEM_RegWrite,
    input wire i_MEM_MemWrite,
    input wire i_MEM_MemRead,
    input wire i_MEM_Jal,
    input wire i_MEM_Jalr,
    input wire [2:0] i_MEM_FUNCT3,
    input wire [2:0] i_MEM_Branch_type,
    input wire [4:0] i_MEM_reg_wr_addr,
    input wire [63:0] i_MEM_pc_add_imm,
    input wire [63:0] i_MEM_ALUresult,
    //input wire [2:0] i_MEM_mem_mask,
    input wire [63:0] i_MEM_mem_wr_data,
    input wire [63:0] i_MEM_reg_wr_data,
    //-----------csr----------------
    input wire i_MEM_ecall,
    input wire i_MEM_mret,
    input wire i_MEM_csr_RegWrite,
    input wire i_MEM_csr_wen,
    input wire [11:0] i_MEM_csr_waddr,
    input wire [63:0] i_MEM_csr_wdata,
    input wire [63:0] i_MEM_csr_rdata,
    //---------测试仿真需要---------
    input wire [63:0] i_MEM_pc,
//---------------from Ctrl--------------
    input wire i_MEM_timer_intr,

//-----------to IF---------------------------
    output wire o_MEM_Branch,
    output wire [63:0] o_MEM_dnpc,
//-----------to WB---------------------------
    output wire o_MEM_RegWrite,
    output wire [4:0] o_MEM_reg_wr_addr,
    output wire [63:0] o_MEM_reg_wr_data,
    //--------测试用------------------------
    output wire [31:0] o_MEM_inst,
    output wire [63:0] o_MEM_pc,
    //--------csr----------------------
    output wire o_MEM_timer_intr,
    output wire [63:0] o_MEM_trap_pc,

    output wire o_MEM_ecall,
    output wire o_MEM_mret,
    output wire o_MEM_csr_RegWrite,
    output wire o_MEM_csr_wen,
    output wire [11:0] o_MEM_csr_waddr,
    output wire [63:0] o_MEM_csr_wdata,
    output wire [63:0] o_MEM_csr_rdata,
//-----------to ctrl-----------------
    output wire o_MEM_Clint_stop
    //output wire [63:0] o_MEM_trap_pc
    
);
//--------------测试信号-----------------------
assign o_MEM_pc = i_MEM_pc;
assign o_MEM_inst = i_MEM_inst;

//--------------timer intr 消除当前指令的写操作信号----------------
wire MEM_Branch, MEM_MemWrite, MEM_MemRead;
assign o_MEM_Branch       = (i_MEM_timer_intr) ? 1'b0 : MEM_Branch;
assign o_MEM_RegWrite     = (i_MEM_timer_intr) ? 1'b0 : i_MEM_RegWrite;
assign o_MEM_ecall        = (i_MEM_timer_intr) ? 1'b0 : i_MEM_ecall;
assign o_MEM_mret         = (i_MEM_timer_intr) ? 1'b0 : i_MEM_mret;
assign o_MEM_csr_RegWrite = (i_MEM_timer_intr) ? 1'b0 : i_MEM_csr_RegWrite;
assign o_MEM_csr_wen      = (i_MEM_timer_intr) ? 1'b0 : i_MEM_csr_wen;
assign MEM_MemWrite       = (i_MEM_timer_intr) ? 1'b0 : i_MEM_MemWrite;
assign MEM_MemRead        = (i_MEM_timer_intr) ? 1'b0 : i_MEM_MemRead;

assign o_MEM_trap_pc    = i_MEM_pc;
assign o_MEM_timer_intr = i_MEM_timer_intr;
//------------- CSR ------------------------
//assign o_MEM_ecall        = i_MEM_ecall;
//assign o_MEM_mret         = i_MEM_mret;
//assign o_MEM_csr_RegWrite = i_MEM_csr_RegWrite;
//assign o_MEM_csr_wen      = i_MEM_csr_wen;
assign o_MEM_csr_waddr    = i_MEM_csr_waddr;
assign o_MEM_csr_wdata    = i_MEM_csr_wdata;
assign o_MEM_csr_rdata    = i_MEM_csr_rdata;


assign o_MEM_dnpc = (i_MEM_ecall || i_MEM_mret) ? i_MEM_csr_rdata :
                    (i_MEM_Jalr)                ? i_MEM_ALUresult : i_MEM_pc_add_imm;
//---------------------------------------

//--------写 Clint -----------------
//assign o_MEM_clint_wen     = i_MEM_MemWrite;
/*
assign o_MEM_clint_wen     = (i_MEM_timer_interreupt) ? 1'b0 : i_MEM_MemWrite;
assign o_MEM_clint_addr    = i_MEM_ALUresult;
assign o_MEM_clint_wr_data = i_MEM_mem_wr_data;
//assign o_MEM_clint_ren     = i_MEM_MemRead;
assign o_MEM_clint_ren     = (i_MEM_timer_interreupt) ? 1'b0 : i_MEM_MemRead;
*/
//---------------------------------

wire zero_extend;
wire [2:0] MEM_mem_mask;
assign MEM_mem_mask = i_MEM_FUNCT3;
assign zero_extend = ~ MEM_mem_mask[2];//lbu, lhu

wire [63:0] MEM_mem_rd_data, MEM_clint_rdata;
reg [63:0] reg_rd_mem_data, rmdata1;
assign MEM_mem_rd_data = ((i_MEM_ALUresult == `ADDR_MTIME) || (i_MEM_ALUresult == `ADDR_MTIMECMP)) ? MEM_clint_rdata : rmdata1;

assign o_MEM_reg_wr_data = (MEM_MemRead) ? MEM_mem_rd_data : i_MEM_reg_wr_data;

ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (
  .zero(i_MEM_zero), 
  .Jal(i_MEM_Jal), 
  .Jalr(i_MEM_Jalr), 
  .result0(i_MEM_ALUresult[0]), 
  .Branch_type(i_MEM_Branch_type), 
  .ecall(i_MEM_ecall), 
  .mret(i_MEM_mret), 
  .Branch(MEM_Branch)
);

Clint Clint_inst (
  .clk(i_MEM_clk),
  .rst_n(i_MEM_rst_n),
  .i_Clint_wdata(i_MEM_mem_wr_data),
  .i_Clint_addr(i_MEM_ALUresult),
  .i_Clint_wen(MEM_MemWrite),
  .i_Clint_ren(MEM_MemRead),
  .o_Clint_rdata(MEM_clint_rdata),
  .o_Clint_stop(o_MEM_Clint_stop)
);

//中间数据流
//assign o_MEM_RegWrite = i_MEM_RegWrite;
assign o_MEM_reg_wr_addr = i_MEM_reg_wr_addr;

//write to Mem
wire [7:0] Wmask;
reg [7:0] reg_Wmask;
assign Wmask = reg_Wmask;
always @ (*) begin
    case(MEM_mem_mask)
    3'b000: reg_Wmask = 8'b0000_0001 << i_MEM_ALUresult[2:0];     //sb 这里的ALUresult对应的是内存地址
    3'b001: reg_Wmask = 8'b0000_0011 << i_MEM_ALUresult[2:0];     //sh
    3'b010: reg_Wmask = 8'b0000_1111 << i_MEM_ALUresult[2:0];     //sw
    3'b011: reg_Wmask = 8'b1111_1111;                    //sd
    default: reg_Wmask = 8'b1111_1111;
    endcase
end

//read from Mem
always @ (*) begin
  rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
  case (MEM_mem_mask[1:0])
    //bit
    2'b00:begin
      if (i_MEM_ALUresult[2:0] == 3'd0)
        rmdata1 = {{56{reg_rd_mem_data[7] & zero_extend}}, reg_rd_mem_data[7:0]};
      else if(i_MEM_ALUresult[2:0] == 3'd1)
        rmdata1 = {{56{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:8]};
      else if(i_MEM_ALUresult[2:0] == 3'd2)
        rmdata1 = {{56{reg_rd_mem_data[23] & zero_extend}}, reg_rd_mem_data[23:16]};
      else if(i_MEM_ALUresult[2:0] == 3'd3)
        rmdata1 = {{56{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:24]};
      else if(i_MEM_ALUresult[2:0] == 3'd4)
        rmdata1 = {{56{reg_rd_mem_data[39] & zero_extend}}, reg_rd_mem_data[39:32]};
      else if(i_MEM_ALUresult[2:0] == 3'd5)
        rmdata1 = {{56{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:40]};
      else if(i_MEM_ALUresult[2:0] == 3'd6)
        rmdata1 = {{56{reg_rd_mem_data[55] & zero_extend}}, reg_rd_mem_data[55:48]};
      else if(i_MEM_ALUresult[2:0] == 3'd7)
        rmdata1 = {{56{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:56]};
    end
    //half word
    2'b01:begin
      if (i_MEM_ALUresult[2:0] == 3'd0)
        rmdata1 = {{48{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:0]};
      else if(i_MEM_ALUresult[2:0] == 3'd2)
        rmdata1 = {{48{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:16]};
      else if(i_MEM_ALUresult[2:0] == 3'd4)
        rmdata1 = {{48{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:32]};
      else if(i_MEM_ALUresult[2:0] == 3'd6)
        rmdata1 = {{48{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:48]};
      else
        rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
    end
    //word
    2'b10:begin
      if (i_MEM_ALUresult[2])
        rmdata1 = {{32{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:32]};
      else
        rmdata1 = {{32{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:0]};
    end
    2'b11: rmdata1 = reg_rd_mem_data;
  endcase
end

//##DPI-C访存(写+读）##*/
//import "DPI-C" function void pmem_read(
  //input longint raddr, output longint rdata);
import "DPI-C" function void pmem_read(
  input longint pc, input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

always @(*) begin
  if (MEM_MemRead)
    pmem_read(i_MEM_pc, i_MEM_ALUresult, reg_rd_mem_data);
  else
    reg_rd_mem_data = 64'd0;
end
//--------加入Clint后------------
always @ (posedge i_MEM_clk) begin
    //if (i_MEM_MemWrite && (i_MEM_ALUresult != 64'h200_BFF8) && (i_MEM_ALUresult != 64'h200_4000))
    if (MEM_MemWrite)
        pmem_write(i_MEM_ALUresult, i_MEM_mem_wr_data, Wmask);
end

/*
always @ (posedge i_MEM_clk) begin
    if (i_MEM_MemWrite)
        pmem_write(i_MEM_ALUresult, i_MEM_mem_wr_data, Wmask);
end
*/

endmodule
