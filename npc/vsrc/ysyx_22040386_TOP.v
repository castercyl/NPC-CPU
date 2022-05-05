module ysyx_22040386_TOP (
    input clk,
    input rst_n,
    //input [31:0] I,

    output [31:0] I,
    output [63:0] pc
);

wire ALUAsrc, ALUBsrc, RegWrite, Branch, MemWrite;
wire [2:0] ALUctr;
wire [4:0] rd_reg_addr1, rd_reg_addr2, wr_reg_addr;
wire [7:0] Wmask;
wire [63:0] snpc, busA, busB, imm, src1, src2, sum, result;

assign rd_reg_addr1 = I[19:15];
assign rd_reg_addr2 = I[24:20];
assign wr_reg_addr = I[11:7];

assign src1 = (ALUAsrc == 1'b0) ? busA : pc;
assign src2 = (ALUBsrc == 1'b0) ? busB : imm;

ysyx_22040386_IFU ysyx_22040386_IFU_inst (.rst_n(rst_n), .clk(clk), .Branch(Branch), .dnpc(sum), .pc(pc), .snpc(snpc));
ysyx_22040386_IDU ysyx_22040386_IDU_inst (.I(I), .ALUAsrc(ALUAsrc), .ALUBsrc(ALUBsrc), .RegWrite(RegWrite), .Branch(Branch),
.ALUctr(ALUctr), .imm(imm), .MemWrite(MemWrite), .Wmask(Wmask));
ysyx_22040386_EXU ysyx_22040386_EXU_inst (.ALUctr(ALUctr), .src1(src1), .src2(src2), .snpc(snpc), .sum(sum), .result(result));
ysyx_22040386_RegisterFile ysyx_22040386_RegisterFile_inst (.clk(clk), .wen(RegWrite), .wdata(result), .waddr(wr_reg_addr),
.raddr1(rd_reg_addr1), .raddr2(rd_reg_addr2), .rdata1(busA), .rdata2(busB));

//##DPI-C访存内存##*/
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);
wire [63:0] d_wdata;
wire [63:0] i_rdata;
assign d_wdata = busB;
assign I = (pc[2]) ? i_rdata[63:32] : i_rdata[31:0];

always @(*) begin
    pmem_read(pc, i_rdata);
    //pmem_write(result, d_wdata, wmask);
    //pmem_write(waddr, wdata, wmask);
end

always @ (posedge clk) begin
    if (MemWrite)
        pmem_write(result, d_wdata, Wmask);
end

/*
wire _unused_ok = &{1'b0,
                    MemWrite,
                    Wmask,  // To be fixed
                    1'b0};
*/

endmodule
