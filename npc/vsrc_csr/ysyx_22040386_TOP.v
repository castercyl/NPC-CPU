
module ysyx_22040386_TOP (
    input wire i_TOP_clk,
    input wire i_TOP_rst_n,

    output wire o_TOP_unkown_code,
    output wire [31:0] o_TOP_inst,   //from WB
    output wire [63:0] o_TOP_pc,     //from WB
    output wire o_TOP_Branch,
    
    output wire o_TOP_RegWrite,
    output wire [4:0] o_TOP_reg_waddr,
    output wire [63:0] o_TOP_reg_wdata,
    output wire [63:0] o_TOP_mtvec,
    output wire [63:0] o_TOP_mem_waddr,
    output wire [63:0] o_TOP_mem_wdata,
    output wire o_TOP_mem_write,

    //csr test
    output wire o_TOP_mret,
    output wire o_TOP_ecall
    //output wire [63:0] o_TOP_csr_dnpc
);

assign o_TOP_reg_waddr = WB_ID_reg_wr_addr;
assign o_TOP_reg_wdata = WB_ID_reg_wr_data;
assign o_TOP_RegWrite  = WB_ID_RegWrite;
assign o_TOP_mtvec     = ID_Ctrl_csr_mtvec;
assign o_TOP_mem_waddr = EX_MEM_ALUresult;
assign o_TOP_mem_wdata = EX_MEM_mem_wr_data;
assign o_TOP_mem_write = EX_MEM_MemWrite;

//csr test
assign o_TOP_mret = MEM_WB_mret;
assign o_TOP_ecall = MEM_WB_ecall;
//assign o_TOP_csr_dnpc = EX_MEM_csr_dnpc;

//assign o_TOP_pc = IF_ID_pc;
//assign o_TOP_inst = IF_ID_inst;
assign o_TOP_Branch = MEM_IF_Branch;

//wire TOP_Branch, TOP_RegWrite;
//wire [4:0] TOP_reg_wr_addr;
//wire [63:0] TOP_dnpc, TOP_reg_wr_data;

//----------Ctrl-----------
wire Ctrl_timer_intr;
//-----Ctrl/IF---------
wire [63:0] Ctrl_IF_trap_dnpc;
//----------MEM/IF-------------
wire MEM_IF_Branch;
wire [63:0] MEM_IF_dnpc;
//---------IF/ID------------
wire [63:0] IF_ID_pc;
wire [31:0] IF_ID_inst;
//----------WB/ID----------
wire WB_ID_RegWrite;
wire [4:0] WB_ID_reg_wr_addr;
wire [63:0] WB_ID_reg_wr_data;

wire WB_ID_ecall, WB_ID_mret, WB_ID_csr_wen;
wire [11:0] WB_ID_csr_waddr;
wire [63:0] WB_ID_csr_wdata;

wire WB_ID_csr_timer_intr;
wire [63:0] WB_ID_csr_trap_pc;
//----------ID/EX--------------
wire [31:0] ID_EX_inst;
wire ID_EX_RegWrite, ID_EX_Word_op, ID_EX_MemRead, ID_EX_MemWrite, ID_EX_ALUBsrc, ID_EX_Auipc;
wire ID_EX_Jal, ID_EX_Jalr, ID_EX_Lui;
wire [2:0] ID_EX_Branch_type, ID_EX_FUNCT3;
wire [4:0] ID_EX_reg_wr_addr;
wire [5:0] ID_EX_ALUctr;
wire [63:0] ID_EX_imm, ID_EX_reg_rd_data1, ID_EX_reg_rd_data2, ID_EX_pc;

wire ID_EX_ecall, ID_EX_mret, ID_EX_csr_RegWrite, ID_EX_csr_wen;
wire [11:0] ID_EX_csr_waddr;
wire [63:0] ID_EX_csr_wdata, ID_EX_csr_rdata;
//--------------ID/Ctrl----------------
wire ID_Ctrl_mstatus_mie, ID_Ctrl_mie_mtie;
wire [63:0] ID_Ctrl_csr_mtvec;
//-------------EX/MEM--------------------
wire EX_MEM_zero, EX_MEM_RegWrite, EX_MEM_MemWrite, EX_MEM_MemRead, EX_MEM_Jal, EX_MEM_Jalr;
wire [2:0] EX_MEM_FUNCT3, EX_MEM_Branch_type;
wire [4:0] EX_MEM_reg_wr_addr;
wire [63:0] EX_MEM_pc_add_imm, EX_MEM_ALUresult, EX_MEM_mem_wr_data, EX_MEM_reg_wr_data;
wire [63:0] EX_MEM_pc;

wire EX_MEM_ecall, EX_MEM_mret, EX_MEM_csr_RegWrite, EX_MEM_csr_wen;
wire [11:0] EX_MEM_csr_waddr;
wire [63:0] EX_MEM_csr_wdata, EX_MEM_csr_rdata;

wire [31:0] EX_MEM_inst;
//------------MEM/WB--------------
wire MEM_WB_timer_intr;
wire MEM_WB_RegWrite;
wire [4:0] MEM_WB_reg_wr_addr;
wire [63:0] MEM_WB_reg_wr_data;
wire [63:0] MEM_WB_trap_pc;

wire [31:0] MEM_WB_inst;
wire [63:0] MEM_WB_pc;

wire MEM_WB_ecall, MEM_WB_mret, MEM_WB_csr_RegWrite, MEM_WB_csr_wen;
wire [11:0] MEM_WB_csr_waddr;
wire [63:0] MEM_WB_csr_wdata, MEM_WB_csr_rdata;
//----------------MEM/Ctrl---------------------
wire MEM_Ctrl_Clint_stop;


//模块例化
core_control core_control_inst (
.i_Ctrl_mstatus_mie(ID_Ctrl_mstatus_mie),
.i_Ctrl_mie_mtie(ID_Ctrl_mie_mtie),
.i_Ctrl_mtevc(ID_Ctrl_csr_mtvec),

.i_Ctrl_Clint_stop(MEM_Ctrl_Clint_stop),

.o_Ctrl_timer_intr(Ctrl_timer_intr),

.o_Ctrl_trap_dnpc(Ctrl_IF_trap_dnpc)
);

ysyx_22040386_IFU ysyx_22040386_IFU_inst (
.i_IF_rst_n(i_TOP_rst_n), 
.i_IF_clk(i_TOP_clk), 
.i_IF_Branch(MEM_IF_Branch), 
.i_IF_dnpc(MEM_IF_dnpc),
.i_IF_timer_intr(Ctrl_timer_intr),
.i_IF_trap_dnpc(Ctrl_IF_trap_dnpc),

.o_IF_pc(IF_ID_pc), 
.o_IF_inst(IF_ID_inst) 
);

ysyx_22040386_IDU ysyx_22040386_IDU_inst (
.i_ID_clk(i_TOP_clk), 
.i_ID_rst_n(i_TOP_rst_n),
.i_ID_pc(IF_ID_pc), 
.i_ID_inst(IF_ID_inst), 
.i_ID_RegWrite(WB_ID_RegWrite), 
.i_ID_reg_wr_addr(WB_ID_reg_wr_addr), 
.i_ID_reg_wr_data(WB_ID_reg_wr_data),
.i_ID_ecall(WB_ID_ecall),
.i_ID_mret(WB_ID_mret),
.i_ID_csr_wen(WB_ID_csr_wen),
.i_ID_csr_waddr(WB_ID_csr_waddr),
.i_ID_csr_wdata(WB_ID_csr_wdata),
.i_ID_csr_timer_intr(WB_ID_csr_timer_intr),
.i_ID_csr_trap_pc(WB_ID_csr_trap_pc),

.o_ID_unkown_code(o_TOP_unkown_code), 

.o_ID_inst(ID_EX_inst),
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
.o_ID_csr_RegWrite(ID_EX_csr_RegWrite),
.o_ID_csr_wen(ID_EX_csr_wen),
.o_ID_csr_waddr(ID_EX_csr_waddr),
.o_ID_csr_wdata(ID_EX_csr_wdata),
.o_ID_csr_rdata(ID_EX_csr_rdata),

.o_ID_mstatus_mie(ID_Ctrl_mstatus_mie),
.o_ID_mie_mtie(ID_Ctrl_mie_mtie),
.o_ID_csr_mtvec(ID_Ctrl_csr_mtvec)
);


ysyx_22040386_EXU ysyx_22040386_EXU_inst (
.i_EX_inst(ID_EX_inst),
.i_EX_RegWrite(ID_EX_RegWrite),
.i_EX_Word_op(ID_EX_Word_op),
.i_EX_MemRead(ID_EX_MemRead),
.i_EX_MemWrite(ID_EX_MemWrite),
.i_EX_ALUBsrc(ID_EX_ALUBsrc),
.i_EX_Auipc(ID_EX_Auipc), 
.i_EX_Jal(ID_EX_Jal),
.i_EX_Jalr(ID_EX_Jalr),
.i_EX_Lui(ID_EX_Lui),
.i_EX_FUNCT3(ID_EX_FUNCT3),
.i_EX_Branch_type(ID_EX_Branch_type),
.i_EX_reg_wr_addr(ID_EX_reg_wr_addr),
.i_EX_ALUctr(ID_EX_ALUctr),
.i_EX_imm(ID_EX_imm),
.i_EX_reg_rd_data1(ID_EX_reg_rd_data1), 
.i_EX_reg_rd_data2(ID_EX_reg_rd_data2),
.i_EX_pc(ID_EX_pc),

 .i_EX_ecall(ID_EX_ecall),
 .i_EX_mret(ID_EX_mret),
 .i_EX_csr_RegWrite(ID_EX_csr_RegWrite),
 .i_EX_csr_wen(ID_EX_csr_wen),
 .i_EX_csr_waddr(ID_EX_csr_waddr),
 .i_EX_csr_wdata(ID_EX_csr_wdata),
 .i_EX_csr_rdata(ID_EX_csr_rdata),  
  
.o_EX_zero(EX_MEM_zero),
.o_EX_RegWrite(EX_MEM_RegWrite),
.o_EX_MemWrite(EX_MEM_MemWrite),
.o_EX_MemRead(EX_MEM_MemRead),
.o_EX_Jal(EX_MEM_Jal),
.o_EX_Jalr(EX_MEM_Jalr),
.o_EX_FUNCT3(EX_MEM_FUNCT3),
.o_EX_Branch_type(EX_MEM_Branch_type),
.o_EX_reg_wr_addr(EX_MEM_reg_wr_addr),
.o_EX_pc_add_imm(EX_MEM_pc_add_imm),
.o_EX_ALUresult(EX_MEM_ALUresult), 
.o_EX_mem_wr_data(EX_MEM_mem_wr_data), 
.o_EX_reg_wr_data(EX_MEM_reg_wr_data),

.o_EX_ecall(EX_MEM_ecall),
.o_EX_mret(EX_MEM_mret),
.o_EX_csr_RegWrite(EX_MEM_csr_RegWrite),
.o_EX_csr_wen(EX_MEM_csr_wen),
.o_EX_csr_waddr(EX_MEM_csr_waddr),
.o_EX_csr_wdata(EX_MEM_csr_wdata),
.o_EX_csr_rdata(EX_MEM_csr_rdata),

.o_EX_pc(EX_MEM_pc),

.o_EX_inst(EX_MEM_inst)

);

ysyx_22040386_MEMU ysyx_22040386_MEMU_inst (
.i_MEM_rst_n(i_TOP_rst_n),
.i_MEM_clk(i_TOP_clk),
.i_MEM_inst(EX_MEM_inst),
.i_MEM_zero(EX_MEM_zero),
.i_MEM_RegWrite(EX_MEM_RegWrite),
.i_MEM_MemWrite(EX_MEM_MemWrite),
.i_MEM_MemRead(EX_MEM_MemRead),
.i_MEM_Jal(EX_MEM_Jal), 
.i_MEM_Jalr(EX_MEM_Jalr),
.i_MEM_FUNCT3(EX_MEM_FUNCT3),
.i_MEM_Branch_type(EX_MEM_Branch_type),
.i_MEM_reg_wr_addr(EX_MEM_reg_wr_addr),
.i_MEM_pc_add_imm(EX_MEM_pc_add_imm),
.i_MEM_ALUresult(EX_MEM_ALUresult),
.i_MEM_mem_wr_data(EX_MEM_mem_wr_data),  
.i_MEM_reg_wr_data(EX_MEM_reg_wr_data),
.i_MEM_ecall(EX_MEM_ecall),
.i_MEM_mret(EX_MEM_mret),
.i_MEM_csr_RegWrite(EX_MEM_csr_RegWrite),
.i_MEM_csr_wen(EX_MEM_csr_wen),
.i_MEM_csr_waddr(EX_MEM_csr_waddr),
.i_MEM_csr_wdata(EX_MEM_csr_wdata),
.i_MEM_csr_rdata(EX_MEM_csr_rdata),
.i_MEM_pc(EX_MEM_pc),
.i_MEM_timer_intr(Ctrl_timer_intr),
 
 .o_MEM_Branch(MEM_IF_Branch),
.o_MEM_dnpc(MEM_IF_dnpc), 

.o_MEM_RegWrite(MEM_WB_RegWrite),
.o_MEM_reg_wr_addr(MEM_WB_reg_wr_addr),
.o_MEM_reg_wr_data(MEM_WB_reg_wr_data),

.o_MEM_inst(MEM_WB_inst),

.o_MEM_pc(MEM_WB_pc),

.o_MEM_timer_intr(MEM_WB_timer_intr),
.o_MEM_trap_pc(MEM_WB_trap_pc),

.o_MEM_ecall(MEM_WB_ecall),
.o_MEM_mret(MEM_WB_mret),
.o_MEM_csr_RegWrite(MEM_WB_csr_RegWrite),
.o_MEM_csr_wen(MEM_WB_csr_wen),
.o_MEM_csr_waddr(MEM_WB_csr_waddr),
.o_MEM_csr_wdata(MEM_WB_csr_wdata),
.o_MEM_csr_rdata(MEM_WB_csr_rdata),

.o_MEM_Clint_stop(MEM_Ctrl_Clint_stop)
);

ysyx_22040386_WBU ysyx_22040386_WBU_inst (
.i_WB_inst(MEM_WB_inst),

.i_WB_RegWrite(MEM_WB_RegWrite),
.i_WB_reg_wr_addr(MEM_WB_reg_wr_addr),
.i_WB_reg_wr_data(MEM_WB_reg_wr_data),

.i_WB_timer_intr(MEM_WB_timer_intr),
.i_WB_ecall(MEM_WB_ecall),
.i_WB_mret(MEM_WB_mret),
.i_WB_csr_RegWrite(MEM_WB_csr_RegWrite),
.i_WB_csr_wen(MEM_WB_csr_wen),
.i_WB_csr_waddr(MEM_WB_csr_waddr),
.i_WB_csr_wdata(MEM_WB_csr_wdata),
.i_WB_csr_rdata(MEM_WB_csr_rdata),
.i_WB_trap_pc(MEM_WB_trap_pc),

.i_WB_pc(MEM_WB_pc),

.o_WB_RegWrite(WB_ID_RegWrite),
.o_WB_reg_wr_addr(WB_ID_reg_wr_addr),
.o_WB_reg_wr_data(WB_ID_reg_wr_data),

.o_WB_ecall(WB_ID_ecall),
.o_WB_mret(WB_ID_mret),
.o_WB_csr_wen(WB_ID_csr_wen),
.o_WB_csr_waddr(WB_ID_csr_waddr),
.o_WB_csr_wdata(WB_ID_csr_wdata),

.o_WB_timer_intr(WB_ID_csr_timer_intr),
.o_WB_trap_pc(WB_ID_csr_trap_pc),

.o_WB_pc(o_TOP_pc),
.o_WB_inst(o_TOP_inst)
 
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
