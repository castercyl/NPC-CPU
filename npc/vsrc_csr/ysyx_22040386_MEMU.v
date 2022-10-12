module ysyx_22040386_MEMU (
    input wire i_MEM_clk,
    input wire i_MEM_Jal,
    input wire i_MEM_Jalr,
    input wire i_MEM_zero,
    input wire i_MEM_MemRead,
    input wire i_MEM_MemWrite,
    input wire [2:0] i_MEM_Branch_type,
    //input wire [2:0] i_MEM_mem_mask,
    input wire [2:0] i_MEM_FUNCT3,
    input wire [63:0] i_MEM_mem_wr_data,
    input wire [63:0] i_MEM_pc_add_imm,
    input wire [63:0] i_MEM_ALUresult,
    input wire [63:0] i_MEM_reg_wr_data,

    input wire i_MEM_RegWrite,
    input wire [4:0] i_MEM_reg_wr_addr,

    output wire [63:0] o_MEM_dnpc,
    output wire o_MEM_Branch,

    output wire [63:0] o_MEM_reg_wr_data,

    output wire o_MEM_RegWrite,
    output wire [4:0] o_MEM_reg_wr_addr,
    //----------------csr------------------
    input wire i_MEM_ecall,
    input wire i_MEM_mret,
    input wire [63:0] i_MEM_csr_dnpc,
    
    input wire i_MEM_csr_reg_write,
    input wire [63:0] i_MEM_csr_r_data,
    output wire o_MEM_csr_reg_write,
    output wire [63:0] o_MEM_csr_r_data
    //-------------------------------------
);

//############ CSR #####################
//csr 过路信号
assign o_MEM_csr_reg_write = i_MEM_csr_reg_write;
assign o_MEM_csr_r_data    = i_MEM_csr_r_data;

assign o_MEM_dnpc = (i_MEM_ecall || i_MEM_mret) ? i_MEM_csr_dnpc  :
                    (i_MEM_Jalr)                ? i_MEM_ALUresult : i_MEM_pc_add_imm;
//---------------------------------------

wire zero_extend;
wire [2:0] MEM_mem_mask;
assign MEM_mem_mask = i_MEM_FUNCT3;
assign zero_extend = ~ MEM_mem_mask[2];//lbu, lhu

wire [63:0] MEM_mem_rd_data;
reg [63:0] reg_rd_mem_data, rmdata1;
assign MEM_mem_rd_data = rmdata1;

assign o_MEM_reg_wr_data = (i_MEM_MemRead) ? MEM_mem_rd_data : i_MEM_reg_wr_data;

ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (.zero(i_MEM_zero), .Jal(i_MEM_Jal), .Jalr(i_MEM_Jalr), 
.result0(i_MEM_ALUresult[0]), .Branch_type(i_MEM_Branch_type), .ecall(i_MEM_ecall), 
.mret(i_MEM_mret), .Branch(o_MEM_Branch));

//中间数据流
assign o_MEM_RegWrite = i_MEM_RegWrite;
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
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

always @(*) begin
  if (i_MEM_MemRead)
    pmem_read(i_MEM_ALUresult, reg_rd_mem_data);
  else
    reg_rd_mem_data = 64'd0;
end

always @ (posedge i_MEM_clk) begin
    if (i_MEM_MemWrite)
        pmem_write(i_MEM_ALUresult, i_MEM_mem_wr_data, Wmask);
end

endmodule
