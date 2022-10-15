
module ysyx_22040386_TOP (
    input wire i_TOP_clk,
    input wire i_TOP_rst_n,

    output wire o_TOP_unkown_code,
    output wire [31:0] o_TOP_inst,
    output wire [63:0] o_TOP_pc,
    output wire o_TOP_Branch,

    //csr test
    output wire o_TOP_mret,
    output wire o_TOP_ecall,
    output wire [63:0] o_TOP_csr_dnpc
);

//csr test
assign o_TOP_mret = EX_MEM_mret;
assign o_TOP_ecall = ID_EX_ecall;
assign o_TOP_csr_dnpc = EX_MEM_csr_dnpc;

assign o_TOP_pc = IF_ID_pc;
assign o_TOP_inst = IF_ID_inst;
assign o_TOP_Branch = MEM_IF_Branch;

//wire TOP_Branch, TOP_RegWrite;
//wire [4:0] TOP_reg_wr_addr;
//wire [63:0] TOP_dnpc, TOP_reg_wr_data;

//##IF/ID
wire [63:0] IF_ID_pc;
wire [31:0] IF_ID_inst;
//##ID/EX
wire ID_EX_RegWrite, ID_EX_Word_op, ID_EX_MemRead, ID_EX_MemWrite, ID_EX_ALUBsrc, ID_EX_Auipc;
wire ID_EX_Jal, ID_EX_Jalr, ID_EX_Lui;
wire [2:0] ID_EX_Branch_type, ID_EX_FUNCT3;
wire [4:0] ID_EX_reg_wr_addr;
wire [5:0] ID_EX_ALUctr;
wire [63:0] ID_EX_imm, ID_EX_reg_rd_data1, ID_EX_reg_rd_data2, ID_EX_pc;

wire ID_EX_ecall, ID_EX_mret;
//--ID/CSR---
wire ID_CSR_csr_ren, ID_CSR_csr_wen;
wire [2:0] ID_CSR_csr_state;
wire [11:0] ID_CSR_csr_waddr, ID_CSR_csr_raddr;
wire [63:0] ID_CSR_csr_wr_data;
//---CSR/EX----
wire CSR_EX_csr_reg_write, CSR_EX_timer_interreupt;
wire [63:0] CSR_EX_csr_r_data, CSR_EX_csr_dnpc;
//##EX/MEM
wire EX_MEM_zero, EX_MEM_RegWrite, EX_MEM_MemWrite, EX_MEM_MemRead, EX_MEM_Jal, EX_MEM_Jalr, EX_MEM_timer_interreupt;
wire [2:0] EX_MEM_FUNCT3, EX_MEM_Branch_type;
wire [4:0] EX_MEM_reg_wr_addr;
wire [63:0] EX_MEM_pc_add_imm, EX_MEM_ALUresult, EX_MEM_mem_wr_data, EX_MEM_reg_wr_data;
wire [63:0] EX_MEM_pc;

wire EX_MEM_ecall, EX_MEM_mret, EX_MEM_csr_reg_write;
wire [63:0] EX_MEM_csr_r_data, EX_MEM_csr_dnpc;
//##MEM/WB
wire MEM_WB_RegWrite;
wire [4:0] MEM_WB_reg_wr_addr;
wire [63:0] MEM_WB_reg_wr_data;

wire MEM_WB_csr_reg_write;
wire [63:0] MEM_WB_csr_r_data;

//##MEM/IF
wire MEM_IF_Branch;
wire [63:0] MEM_IF_dnpc;
//##WB/ID
wire WB_ID_RegWrite;
wire [4:0] WB_ID_reg_wr_addr;
wire [63:0] WB_ID_reg_wr_data;

//----MEM/CLINT------
wire MEM_CLINT_wen;
wire [63:0] MEM_CLINT_wr_data, MEM_CLINT_addr;
wire MEM_CLINT_ren;
wire [63:0] MEM_CLINT_rd_data;
//----CLINT/CSR-------
wire CLINT_CSR_stop;

//模块例化
ysyx_22040386_IFU ysyx_22040386_IFU_inst (
.i_IF_rst_n(i_TOP_rst_n), 
.i_IF_clk(i_TOP_clk), 
.i_IF_Branch(MEM_IF_Branch), 
.i_IF_dnpc(MEM_IF_dnpc), 
.o_IF_pc(IF_ID_pc), 
.o_IF_inst(IF_ID_inst) 
);

ysyx_22040386_IDU ysyx_22040386_IDU_inst (
.i_ID_clk(i_TOP_clk), 
.i_ID_pc(IF_ID_pc), 
.i_ID_inst(IF_ID_inst), 
.i_ID_RegWrite(WB_ID_RegWrite), 
.i_ID_reg_wr_addr(WB_ID_reg_wr_addr), 
.i_ID_reg_wr_data(WB_ID_reg_wr_data), 
.o_ID_unkown_code(o_TOP_unkown_code), 
.o_ID_RegWrite(ID_EX_RegWrite), 
.o_ID_Word_op(ID_EX_Word_op), 
.o_ID_MemRead(ID_EX_MemRead), 
.o_ID_MemWrite(ID_EX_MemWrite), 
.o_ID_ALUBsrc(ID_EX_ALUBsrc), 
.o_ID_Auipc(ID_EX_Auipc), 
.o_ID_Jal(ID_EX_Jal), 
.o_ID_Jalr(ID_EX_Jalr), 
.o_ID_Lui(ID_EX_Lui), 
.o_ID_FUNCT3(ID_EX_FUNCT3), 
.o_ID_Branch_type(ID_EX_Branch_type), 
//.o_ID_mem_mask(ID_EX_mem_mask), 
.o_ID_reg_wr_addr(ID_EX_reg_wr_addr), 
.o_ID_ALUctr(ID_EX_ALUctr), 
.o_ID_imm(ID_EX_imm), 
.o_ID_reg_rd_data1(ID_EX_reg_rd_data1), 
.o_ID_reg_rd_data2(ID_EX_reg_rd_data2), 
.o_ID_pc(ID_EX_pc),
.o_ID_ecall(ID_EX_ecall), 
.o_ID_mret(ID_EX_mret), 
.o_ID_csr_ren(ID_CSR_csr_ren), 
.o_ID_csr_wen(ID_CSR_csr_wen),
.o_ID_csr_state(ID_CSR_csr_state), 
.o_ID_csr_waddr(ID_CSR_csr_waddr), 
.o_ID_csr_raddr(ID_CSR_csr_raddr),
//.o_ID_FUNCT3(ID_EX_FUNCT3)
.o_ID_csr_wr_data(ID_CSR_csr_wr_data)
);

csr csr_inst (
.clk(i_TOP_clk), 
.rst_n(i_TOP_rst_n), 
.csr_state_i(ID_CSR_csr_state), 
.csr_w_addr_i(ID_CSR_csr_waddr),
.csr_wen_i(ID_CSR_csr_wen), 
.csr_w_data_i(ID_CSR_csr_wr_data), 
.csr_r_addr_i(ID_CSR_csr_raddr),
.csr_ren_i(ID_CSR_csr_ren), 
.csr_pc_i(ID_EX_pc), 
.csr_reg_write_o(CSR_EX_csr_reg_write), 
.csr_r_data_o(CSR_EX_csr_r_data), 
.csr_dnpc_o(CSR_EX_csr_dnpc),
.o_Csr_timer_interreupt(CSR_EX_timer_interreupt),
.i_Csr_clint_stop(CLINT_CSR_stop)
);

ysyx_22040386_EXU ysyx_22040386_EXU_inst (
.i_EX_Word_op(ID_EX_Word_op), 
.i_EX_ALUBsrc(ID_EX_ALUBsrc), 
.i_EX_Auipc(ID_EX_Auipc), 
.i_EX_Lui(ID_EX_Lui), 
.i_EX_FUNCT3(ID_EX_FUNCT3),
.i_EX_ALUctr(ID_EX_ALUctr), 
.i_EX_pc(ID_EX_pc), 
.i_EX_imm(ID_EX_imm), 
.i_EX_reg_rd_data1(ID_EX_reg_rd_data1), 
.i_EX_reg_rd_data2(ID_EX_reg_rd_data2), 
.i_EX_reg_wr_addr(ID_EX_reg_wr_addr), 
.i_EX_RegWrite(ID_EX_RegWrite), 
.i_EX_MemWrite(ID_EX_MemWrite), 
.i_EX_MemRead(ID_EX_MemRead), 
.i_EX_Jal(ID_EX_Jal), 
.i_EX_Jalr(ID_EX_Jalr), 
.i_EX_Branch_type(ID_EX_Branch_type), 
.o_EX_zero(EX_MEM_zero), 
.o_EX_pc_add_imm(EX_MEM_pc_add_imm), 
.o_EX_ALUresult(EX_MEM_ALUresult), 
.o_EX_mem_wr_data(EX_MEM_mem_wr_data), 
.o_EX_reg_wr_data(EX_MEM_reg_wr_data), 
.o_EX_reg_wr_addr(EX_MEM_reg_wr_addr), 
.o_EX_FUNCT3(EX_MEM_FUNCT3), 
.o_EX_RegWrite(EX_MEM_RegWrite), 
.o_EX_MemWrite(EX_MEM_MemWrite), 
.o_EX_MemRead(EX_MEM_MemRead), 
.o_EX_Branch_type(EX_MEM_Branch_type), 
.o_EX_Jal(EX_MEM_Jal), 
.o_EX_Jalr(EX_MEM_Jalr),

.i_EX_timer_interreupt(CSR_EX_timer_interreupt),
.i_EX_ecall(ID_EX_ecall), 
.i_EX_mret(ID_EX_mret), 
.i_EX_csr_reg_write(CSR_EX_csr_reg_write),
.i_EX_csr_r_data(CSR_EX_csr_r_data), 
.i_EX_csr_dnpc(CSR_EX_csr_dnpc),
.o_EX_ecall(EX_MEM_ecall), 
.o_EX_mret(EX_MEM_mret), 
.o_EX_csr_reg_write(EX_MEM_csr_reg_write),
.o_EX_csr_r_data(EX_MEM_csr_r_data), 
.o_EX_csr_dnpc(EX_MEM_csr_dnpc),
.o_EX_timer_interreupt(EX_MEM_timer_interreupt),

.o_EX_pc(EX_MEM_pc)
);

ysyx_22040386_MEMU ysyx_22040386_MEMU_inst (
.i_MEM_clk(i_TOP_clk), 
.i_MEM_Jal(EX_MEM_Jal), 
.i_MEM_Jalr(EX_MEM_Jalr), 
.i_MEM_zero(EX_MEM_zero), 
.i_MEM_MemRead(EX_MEM_MemRead), 
.i_MEM_MemWrite(EX_MEM_MemWrite), 
.i_MEM_Branch_type(EX_MEM_Branch_type), 
.i_MEM_FUNCT3(EX_MEM_FUNCT3), 
.i_MEM_mem_wr_data(EX_MEM_mem_wr_data), 
.i_MEM_pc_add_imm(EX_MEM_pc_add_imm), 
.i_MEM_ALUresult(EX_MEM_ALUresult), 
.i_MEM_reg_wr_data(EX_MEM_reg_wr_data), 
.i_MEM_RegWrite(EX_MEM_RegWrite), 
.i_MEM_reg_wr_addr(EX_MEM_reg_wr_addr), 
.o_MEM_dnpc(MEM_IF_dnpc), 
.o_MEM_Branch(MEM_IF_Branch), 
.o_MEM_reg_wr_data(MEM_WB_reg_wr_data), 
.o_MEM_RegWrite(MEM_WB_RegWrite), 
.o_MEM_reg_wr_addr(MEM_WB_reg_wr_addr),

.i_MEM_timer_interreupt(EX_MEM_timer_interreupt),
.i_MEM_ecall(EX_MEM_ecall), 
.i_MEM_mret(EX_MEM_mret), 
.i_MEM_csr_dnpc(EX_MEM_csr_dnpc), 
.i_MEM_csr_reg_write(EX_MEM_csr_reg_write), 
.i_MEM_csr_r_data(EX_MEM_csr_r_data),
.o_MEM_csr_reg_write(MEM_WB_csr_reg_write), 
.o_MEM_csr_r_data(MEM_WB_csr_r_data),

.o_MEM_clint_wr_data(MEM_CLINT_wr_data),
.o_MEM_clint_addr(MEM_CLINT_addr),
.o_MEM_clint_wen(MEM_CLINT_wen),
.o_MEM_clint_ren(MEM_CLINT_ren),
.i_MEM_clint_rd_data(MEM_CLINT_rd_data),

.i_MEM_pc(EX_MEM_pc)
);

ysyx_22040386_WBU ysyx_22040386_WBU_inst (
.i_WB_reg_wr_data(MEM_WB_reg_wr_data), 
.i_WB_RegWrite(MEM_WB_RegWrite), 
.i_WB_reg_wr_addr(MEM_WB_reg_wr_addr), 
.o_WB_reg_wr_data(WB_ID_reg_wr_data), 
.o_WB_RegWrite(WB_ID_RegWrite), 
.o_WB_reg_wr_addr(WB_ID_reg_wr_addr),
.i_WB_csr_reg_write(MEM_WB_csr_reg_write), 
.i_WB_csr_r_data(MEM_WB_csr_r_data)
);

Clint Clint_inst (
  .clk(i_TOP_clk),
  .rst_n(i_TOP_rst_n),
  .i_Clint_wr_data(MEM_CLINT_wr_data),
  .i_Clint_addr(MEM_CLINT_addr),
  .i_Clint_wen(MEM_CLINT_wen),
  .i_Clint_ren(MEM_CLINT_ren),
  .o_Clint_stop(CLINT_CSR_stop),
  .o_Clint_rd_data(MEM_CLINT_rd_data)
);

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
