module ysyx_22040386_TOP (
    input clk,
    input rst_n,
    //input [31:0] I,

    output [31:0] I,
    output [63:0] mem_d_addr,
    output [63:0] pc
);


//控制信号
wire RegWrite, MemWrite, Branch, ALUAsrc, ALUBsrc, DNPCsrc, RESULTsrc, Mem_to_Reg, Jump;
wire [2:0] ALUctr;
wire [7:0] Wmask;
//模块间的连接线
wire switch;
wire [4:0] rd_reg_addr1, rd_reg_addr2, wr_reg_addr;
wire [63:0] snpc, busA, busB, imm, final_result, wr_reg_data, dnpc;

assign rd_reg_addr1 = I[19:15];
assign rd_reg_addr2 = I[24:20];
assign wr_reg_addr = I[11:7];

assign mem_d_addr = final_result;
assign wr_reg_data = (Mem_to_Reg) ? rd_mem_data : final_result;    //???

//模块例化
ysyx_22040386_IFU ysyx_22040386_IFU_inst (.rst_n(rst_n), .clk(clk), .switch(switch), .dnpc(dnpc), .pc(pc), .snpc(snpc));
ysyx_22040386_IDU ysyx_22040386_IDU_inst (.I(I), .RegWrite(RegWrite), .MemWrite(MemWrite), .Branch(Branch), .ALUAsrc(ALUAsrc), 
.ALUBsrc(ALUBsrc), .DNPCsrc(DNPCsrc), .RESULTsrc(RESULTsrc), .Mem_to_Reg(Mem_to_Reg), .Jump(Jump), .ALUctr(ALUctr), .Wmask(Wmask), 
.imm(imm));
ysyx_22040386_EXU ysyx_22040386_EXU_inst (.ALUAsrc(ALUAsrc), .ALUBsrc(ALUBsrc), .Jump(Jump), .Branch(Branch), .DNPCsrc(DNPCsrc), 
.RESULTsrc(RESULTsrc), .ALUctr(ALUctr), .pc(pc), .imm(imm), .snpc(snpc), .busA(busA), .busB(busB), .switch(switch), .dnpc(dnpc), 
.final_result(final_result));
ysyx_22040386_RegisterFile ysyx_22040386_RegisterFile_inst (.clk(clk), .wen(RegWrite), .wdata(wr_reg_data), .waddr(wr_reg_addr),
.raddr1(rd_reg_addr1), .raddr2(rd_reg_addr2), .rdata1(busA), .rdata2(busB));

//##DPI-C访存内存##*/
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);
wire [63:0] wr_mem_data;
wire [63:0] rd_mem_data;
wire [63:0] i_rdata;
assign wr_mem_data = busB;
assign I = (pc[2]) ? i_rdata[63:32] : i_rdata[31:0];  //取指

always @(*) begin
    pmem_read(pc, i_rdata);
    //pmem_read(mem_d_addr, rd_mem_data);
end

always @(*) begin
    pmem_read(mem_d_addr, rd_mem_data);
end

always @ (posedge clk) begin
    if (MemWrite)
        pmem_write(mem_d_addr, wr_mem_data, Wmask);
end

/*
wire _unused_ok = &{1'b0,
                    MemWrite,
                    Wmask,  // To be fixed
                    1'b0};
*/

endmodule
