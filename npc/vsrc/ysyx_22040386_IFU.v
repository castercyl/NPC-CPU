module ysyx_22040386_IFU (
input rst_n,
input clk,
input Branch,
input [63:0] dnpc,

output [63:0] pc,
output [63:0] snpc,
output [31:0] Inst
);

wire [63:0] real_pc, inst_rdata;
reg [63:0] final_pc;

assign snpc = pc + 64'd4;
assign real_pc = (Branch) ? dnpc : snpc;
assign Inst = (pc[2]) ? inst_rdata[63:32] : inst_rdata[31:0];  //取指

always @ (posedge clk) begin
  if (!rst_n)
    final_pc <= 64'h0000_0000_8000_0000;
  else
    final_pc <= real_pc;
end

assign pc = final_pc;

//##DPI-C访问内存取指令##*/
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);

always @(*) begin
    pmem_read(pc, inst_rdata);
    //pmem_read(mem_d_addr, rd_mem_data);
end

endmodule
