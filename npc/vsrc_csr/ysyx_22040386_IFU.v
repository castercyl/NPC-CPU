module ysyx_22040386_IFU (
input wire i_IF_rst_n,
input wire i_IF_clk,
//from MEM
input wire i_IF_Branch,
input wire [63:0] i_IF_dnpc,
//form CTRL
input wire i_IF_timer_intr,
input wire [63:0] i_IF_trap_dnpc,

//to ID
output reg [63:0] o_IF_pc,
output wire [31:0] o_IF_inst
);

//计算PC
wire [63:0] IF_inst_rdata, IF_nextpc;

assign IF_nextpc = (i_IF_timer_intr)   ? i_IF_trap_dnpc : 
                   (i_IF_Branch) ? i_IF_dnpc    : (o_IF_pc + 64'd4);

always @ (posedge i_IF_clk) begin
  if (!i_IF_rst_n)
    o_IF_pc <= 64'h0000_0000_8000_0000;
  else
    o_IF_pc <= IF_nextpc;
end


//##DPI-C访问内存取指令##*/
assign o_IF_inst = (o_IF_pc[2]) ? IF_inst_rdata[63:32] : IF_inst_rdata[31:0];  //取指
import "DPI-C" function void pmem_read(
  input longint pc, input longint raddr, output longint rdata);

always @(*) begin
    pmem_read(o_IF_pc, o_IF_pc, IF_inst_rdata);
    //pmem_read(mem_d_addr, rd_mem_data);
end

endmodule
