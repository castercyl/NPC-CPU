module ysyx_22040386_WBU (
//-------------测试信号----------------
    input wire [31:0] i_WB_inst,
//----------from MEM--------------------
    input wire i_WB_RegWrite,
    input wire [4:0] i_WB_reg_wr_addr,
    input wire [63:0] i_WB_reg_wr_data,
    //-------------csr----------------
    input wire i_WB_timer_intr,
    input wire i_WB_ecall,
    input wire i_WB_mret,
    input wire i_WB_csr_RegWrite,
    input wire i_WB_csr_wen,
    input wire [11:0] i_WB_csr_waddr,
    input wire [63:0] i_WB_csr_wdata,
    input wire [63:0] i_WB_csr_rdata,
    input wire [63:0] i_WB_trap_pc,
    //------------测试用---------------
    input wire [63:0] i_WB_pc,
//-----------from Ctrl-----------------
    //input wire i_WB_timer_intr,
    //input wire [63:0] i_WB_trap_pc,

//---------------to ID-----------------
    //---to reg------
    output wire o_WB_RegWrite,
    output wire [4:0] o_WB_reg_wr_addr,
    output wire [63:0] o_WB_reg_wr_data,
    //---to csr-------
    output wire o_WB_ecall,
    output wire o_WB_mret,
    output wire o_WB_csr_wen,
    output wire [11:0] o_WB_csr_waddr,
    output wire [63:0] o_WB_csr_wdata,
    
    output wire o_WB_timer_intr,
    output wire [63:0] o_WB_trap_pc,
//----------------to main.cpp-----------
    output wire [63:0] o_WB_pc,
//-------------测试信号----------------
    output wire [31:0] o_WB_inst

);
//-----------测试用-------------
assign o_WB_pc = i_WB_pc;
assign o_WB_inst = i_WB_inst;

//---------csr-------------
assign o_WB_ecall     = i_WB_ecall;
assign o_WB_mret      = i_WB_mret;
assign o_WB_csr_wen   = i_WB_csr_wen;
assign o_WB_csr_waddr = i_WB_csr_waddr;
assign o_WB_csr_wdata = i_WB_csr_wdata;

assign o_WB_timer_intr = i_WB_timer_intr;
assign o_WB_trap_pc    = i_WB_trap_pc;


assign o_WB_reg_wr_data = (i_WB_csr_RegWrite) ? i_WB_csr_rdata : i_WB_reg_wr_data;
assign o_WB_RegWrite = i_WB_RegWrite || i_WB_csr_RegWrite;
assign o_WB_reg_wr_addr = i_WB_reg_wr_addr;

endmodule
