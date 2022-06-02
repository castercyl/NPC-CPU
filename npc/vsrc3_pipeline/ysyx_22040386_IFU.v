module ysyx_22040386_IFU (
input wire i_IF_rst_n,
input wire i_IF_clk,
input wire i_IF_Branch,
input wire i_IF_load_use_flag,
input wire [63:0] i_IF_dnpc,

output wire [4:0] o_IF_reg_rd_addr1,
output wire [4:0] o_IF_reg_rd_addr2,
output reg [63:0] o_IF_pc,
output wire [31:0] o_IF_inst
);

//计算PC
wire [63:0] IF_inst_rdata, IF_nextpc;

wire IF_load_use_flag;
assign IF_load_use_flag = (i_IF_Branch) ? 1'b0 : i_IF_load_use_flag;  //Branch优先级高于load_use

always @ (posedge i_IF_clk) begin
  if (!i_IF_rst_n)
    o_IF_pc <= 64'h0000_0000_8000_0000;
  else if (IF_load_use_flag)
    o_IF_pc = o_IF_pc;
  else
    o_IF_pc <= IF_nextpc;
end

assign IF_nextpc = (i_IF_Branch) ? i_IF_dnpc : (o_IF_pc + 64'd4);

//##DPI-C访问内存取指令##*/
assign o_IF_inst = (o_IF_pc[2]) ? IF_inst_rdata[63:32] : IF_inst_rdata[31:0];  //取指
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);

always @(*) begin
    pmem_read(o_IF_pc, IF_inst_rdata);
    //pmem_read(mem_d_addr, rd_mem_data);
end


//读寄存器地址的提前译码
assign o_IF_reg_rd_addr1 = o_IF_inst[19:15];
assign o_IF_reg_rd_addr2 = o_IF_inst[24:20];

endmodule
