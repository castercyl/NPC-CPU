module ysyx_22040386_RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,

  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2
  );

  reg [DATA_WIDTH-1:0] rf [31:0];
  wire [DATA_WIDTH-1:0] real_wdata;

//读$a0寄存器永远读出0
  assign rdata1 = (raddr1 == 0) ? 64'd0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0) ? 64'd0 : rf[raddr2];
//写$a0寄存器永远写入0
  assign real_wdata = (waddr == 0) ? 64'd0 : wdata;
  
  always @(posedge clk) begin
    if (wen) rf[waddr] <= real_wdata;
  end
  
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
always @ (*) begin
  set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量
end

endmodule
