module ysyx_22040386_IFU (
input rst_n,
input clk,
input Branch,
input [63:0] dnpc,

output [63:0] pc,
output [63:0] snpc
);

wire [63:0] real_pc;
reg [63:0] final_pc;

assign snpc = pc + 64'd4;
assign real_pc = (Branch) ? dnpc : snpc;

always @ (posedge clk) begin
  if (!rst_n)
    final_pc <= 64'h0000_0000_8000_000;
  else
    final_pc <= real_pc;
end

assign pc = final_pc;

endmodule
