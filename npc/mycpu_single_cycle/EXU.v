/*-------------------------------------------------------------------------
// Module:  EXU
// File:    EXU.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)ALU(计算写入寄存器的值 或 访存地址的计算)； 2）分支跳转判断(跳转标志生成 + 跳转dnpc计算)
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module EXU (
    //input wire                              ex_clk_i,
    //input wire                              ex_rst_n_i,
    /* --------signals from IDU --------------------*/
    input wire                              ex_reg_wen_i,
    input wire [`RegAddrBus_WIDTH-1:0]      ex_reg_waddr_i,
    input wire                              ex_mem_wen_i, 
    input wire                              ex_mem_ren_i,
    input wire [2:0]                        ex_mem_mask_i,
    input wire [`Alusel_WIDTH-1:0]          ex_alusel_i,
    input wire [`Aluop_WIDTH-1:0]           ex_aluop_i,
    input wire [`DataBus_WIDTH-1:0]         ex_rs1_i, //read from reg
    input wire [`DataBus_WIDTH-1:0]         ex_rs2_i, //read from reg
    input wire [`DataBus_WIDTH-1:0]         ex_pc_i,
    input wire [`DataBus_WIDTH-1:0]         ex_imm_i,
    input wire                              ex_except_ecall_i, //异常ecall的信息采集
    input wire                              ex_except_mret_i,  //异常mret的信息采集
    input wire [`DataBus_WIDTH-1:0]         ex_csr_rdata_i,
    input wire                              ex_csr_wen_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      ex_csr_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         ex_csrzimm_i,
    /* --------- signals to LSU --------------------*/
    output wire                             ex_reg_wen_o,
    output wire [`RegAddrBus_WIDTH-1:0]     ex_reg_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        ex_aluresult_o, //reg_wdata or mem_addr
    output wire                             ex_mem_wen_o, 
    output wire                             ex_mem_ren_o,
    output wire [2:0]                       ex_mem_mask_o,
    output wire [`DataBus_WIDTH-1:0]        ex_rs2_o,
    output wire [`DataBus_WIDTH-1:0]        ex_pc_o,
    output wire                             ex_csr_wen_o,
    output wire [`CsrAddrBus_WIDTH-1:0]     ex_csr_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        ex_csr_wdata_o,
    /* --------- signals to LSU --------------------*/
    output wire                             ex_except_ecall_o,
    output wire                             ex_except_mret_o,
    /* --------- signals to IFU --------------------*/
    output wire                             ex_branch_flag_o,
    output wire [`DataBus_WIDTH-1:0]        ex_branch_dnpc_o,
    //仿真调试需要
    input wire [`InstBus_WIDTH-1:0]         ex_inst_i,
    output wire [`InstBus_WIDTH-1:0]        ex_inst_o
);

    assign ex_inst_o      = ex_inst_i;

    assign ex_reg_wen_o   = ex_reg_wen_i;
    assign ex_reg_waddr_o = ex_reg_waddr_i;
    assign ex_mem_wen_o   = ex_mem_wen_i;
    assign ex_mem_ren_o   = ex_mem_ren_i;
    assign ex_mem_mask_o  = ex_mem_mask_i;
    assign ex_rs2_o       = ex_rs2_i;
    assign ex_pc_o        = ex_pc_i;  //仿真需要
    assign ex_csr_wen_o   = ex_csr_wen_i;
    assign ex_csr_waddr_o = ex_csr_waddr_i;

    assign ex_except_ecall_o = ex_except_ecall_i;
    assign ex_except_mret_o  = ex_except_mret_i;

/* --------------------- Branch judge --------------------*/
    branch_ctr branch_ctr_inst (
        .bc_aluop_i       (ex_aluop_i),
        .bc_rs1_i         (ex_rs1_i),
        .bc_rs2_i         (ex_rs2_i),
        .bc_pc_i          (ex_pc_i),
        .bc_imm_i         (ex_imm_i),
        .bc_branch_flag_o (ex_branch_flag_o),
        .bc_branch_dnpc_o (ex_branch_dnpc_o)
    );
/* --------------------- ALU ------------------------------*/
    alu alu_inst (
        .alu_alusel_i     (ex_alusel_i),
        .alu_aluop_i      (ex_aluop_i),
        .alu_rs1_i        (ex_rs1_i),
        .alu_rs2_i        (ex_rs2_i),
        .alu_pc_i         (ex_pc_i),
        .alu_imm_i        (ex_imm_i),
        .alu_csr_rdata_i  (ex_csr_rdata_i),
        .alu_csrzimm_i    (ex_csrzimm_i),
        .alu_result_o     (ex_aluresult_o),
        .alu_csr_wdata_o  (ex_csr_wdata_o)
    );

/*
    import "DPI-C" function void wdram_test(
        input longint waddr, input longint rs1, input longint imm);

    always @ (*) begin
        if (ex_aluop_i == `ALU_OP_SD)
            wdram_test (ex_pc_i, ex_rs1_i, ex_imm_i);
    end
*/

endmodule
