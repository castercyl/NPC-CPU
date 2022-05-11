module ysyx_22040386_TOP (
    input clk,
    input rst_n,

    output unkown_code,
    output [31:0] Inst,
    output [63:0] pc
);

wire Branch, MemWrite, Reg_to_Mem, Result_to_Pc, Auipc, Jal, Jalr, Lui, MemRead, Word_op;
wire [2:0] Branch_type, mask_type; 
wire [5:0] ALUctr;
//wire [7:0] Wmask;
wire [63:0] dnpc, snpc, wr_reg_data, imm, src1, src2, mem_data_addr, pc_imm, result, rd_mem_data, wr_mem_data;
assign mem_data_addr = result;

//模块例化
ysyx_22040386_IFU ysyx_22040386_IFU_inst (.rst_n(rst_n), .clk(clk), .Branch(Branch), .dnpc(dnpc), .pc(pc), .snpc(snpc), .Inst(Inst));

ysyx_22040386_IDU ysyx_22040386_IDU_inst (.clk(clk), .Inst(Inst), .wr_reg_data(wr_reg_data), .MemWrite(MemWrite), .Reg_to_Mem(Reg_to_Mem), 
.Result_to_Pc(Result_to_Pc), .Auipc(Auipc), .Jal(Jal), .Jalr(Jalr), .Lui(Lui), .Branch_type(Branch_type), .ALUctr(ALUctr), 
.imm(imm), .src1(src1), .src2(src2), .wr_mem_data(wr_mem_data), .MemRead(MemRead), .Word_op(Word_op), 
.mask_type(mask_type), .unkown_code(unkown_code));

ysyx_22040386_EXU ysyx_22040386_EXU_inst (.Jal(Jal), .Jalr(Jalr), .Branch_type(Branch_type), .ALUctr(ALUctr), .pc(pc), .imm(imm), 
.src1(src1), .src2(src2), .Branch(Branch), .dnpc(dnpc), .pc_imm(pc_imm), .result(result), .Word_op(Word_op));

ysyx_22040386_MEMU ysyx_22040386_MEMU_inst (.clk(clk), .MemWrite(MemWrite), .wr_mem_data(wr_mem_data), .mem_data_addr(mem_data_addr), 
.rd_mem_data(rd_mem_data), .MemRead(MemRead), .mask_type(mask_type));

ysyx_22040386_WBU ysyx_22040386_WBU_inst (.Auipc(Auipc), .Result_to_Pc(Result_to_Pc), .Reg_to_Mem(Reg_to_Mem), .Lui(Lui), 
.rd_mem_data(rd_mem_data), .snpc(snpc), .pc_imm(pc_imm), .imm(imm), .result(result), .wr_reg_data(wr_reg_data));

//##DPI-C访存内存##*/
/*
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
*/
/*
wire _unused_ok = &{1'b0,
                    MemWrite,
                    Wmask,  // To be fixed
                    1'b0};
*/

endmodule
