module ysyx_22040386_MEMU (
    input clk,
    input MemWrite,
    input MemRead,
    input [2:0] mask_type,
    input [63:0] wr_mem_data,
    input [63:0] mem_data_addr,

    output [63:0] rd_mem_data
);

wire zero_extend;
assign zero_extend = ~ mask_type[2];
reg [63:0] reg_rd_mem_data, rmdata1;
assign rd_mem_data = rmdata1;

//write to Mem
wire [7:0] Wmask;
reg [7:0] reg_Wmask;
assign Wmask = reg_Wmask;
always @ (*) begin
    case(mask_type)
    3'b000: reg_Wmask = 8'b0000_0001 << mem_data_addr[2:0];     //sb
    3'b001: reg_Wmask = 8'b0000_0011 << mem_data_addr[2:0];     //sh
    3'b010: reg_Wmask = 8'b0000_1111 << mem_data_addr[2:0];     //sw
    3'b011: reg_Wmask = 8'b1111_1111;                    //sd
    default: reg_Wmask = 8'b1111_1111;
    endcase
end

//read from Mem
always @ (*) begin
  rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
  case (mask_type[1:0])
    //bit
    2'b00:begin
      if (mem_data_addr[2:0] == 3'd0)
        rmdata1 = {{56{reg_rd_mem_data[7] & zero_extend}}, reg_rd_mem_data[7:0]};
      else if(mem_data_addr[2:0] == 3'd1)
        rmdata1 = {{56{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:8]};
      else if(mem_data_addr[2:0] == 3'd2)
        rmdata1 = {{56{reg_rd_mem_data[23] & zero_extend}}, reg_rd_mem_data[23:16]};
      else if(mem_data_addr[2:0] == 3'd3)
        rmdata1 = {{56{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:24]};
      else if(mem_data_addr[2:0] == 3'd4)
        rmdata1 = {{56{reg_rd_mem_data[39] & zero_extend}}, reg_rd_mem_data[39:32]};
      else if(mem_data_addr[2:0] == 3'd5)
        rmdata1 = {{56{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:40]};
      else if(mem_data_addr[2:0] == 3'd6)
        rmdata1 = {{56{reg_rd_mem_data[55] & zero_extend}}, reg_rd_mem_data[55:48]};
      else if(mem_data_addr[2:0] == 3'd7)
        rmdata1 = {{56{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:56]};
    end
    //half word
    2'b01:begin
      if (mem_data_addr[2:0] == 3'd0)
        rmdata1 = {{48{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:0]};
      else if(mem_data_addr[2:0] == 3'd2)
        rmdata1 = {{48{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:16]};
      else if(mem_data_addr[2:0] == 3'd4)
        rmdata1 = {{48{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:32]};
      else if(mem_data_addr[2:0] == 3'd6)
        rmdata1 = {{48{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:48]};
      else
        rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
    end
    //word
    2'b10:begin
      if (mem_data_addr[2])
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
  if (MemRead)
    pmem_read(mem_data_addr, reg_rd_mem_data);
  else
    reg_rd_mem_data = 64'd0;
end

always @ (posedge clk) begin
    if (MemWrite)
        pmem_write(mem_data_addr, wr_mem_data, Wmask);
end

endmodule
