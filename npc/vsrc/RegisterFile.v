module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,

  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2,
  );

  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];

  assign rdata1 = (raddr1 == 0) ? 64'd0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0) ? 64'd0 : rf[raddr2];

  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  
endmodule