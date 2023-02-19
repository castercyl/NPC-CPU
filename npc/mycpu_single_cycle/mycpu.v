/*-------------------------------------------------------------------------
// Module:  mycpu
// File:    mycpu.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1）cpu核模块集成
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module mycpu (
    input wire                              core_clk_i,
    input wire                              core_rst_n_i,
    /* --------signals from RAM --------------------*/
    input wire [`DataBus_WIDTH-1:0]         core_ifmemrdata_i,
    input wire [`DataBus_WIDTH-1:0]         core_mem_busrdata_i,
    /* --------signals to RAM --------------------*/
    output wire [`DataBus_WIDTH-1:0]        core_ifpc_o,
    output wire                             core_mem_wen_o,
    output wire                             core_mem_ren_o,
    output wire [`DataBus_WIDTH-1:0]        core_mem_buswdata_o,
    output wire [`DataBus_WIDTH-1:0]        core_mem_rwaddr_o, //read or write
    output wire [7:0]                       core_mem_wmask_o,
    //仿真测试需要
    output wire [`DataBus_WIDTH-1:0]        core_wbpc_o,
    output wire [`InstBus_WIDTH-1:0]        core_wbinst_o,
    output wire [`DataBus_WIDTH-1:0]        core_mempc_o
);
    
    assign core_ifpc_o = if_id_pc;

/* --------IF/ID --------------------*/
    wire [`DataBus_WIDTH-1:0] if_id_pc;
    wire [`InstBus_WIDTH-1:0] if_id_inst;
/* --------EX/IF --------------------*/
    wire ex_if_branch_flag;
    wire [`DataBus_WIDTH-1:0] ex_if_branch_dnpc;
/* --------ID/EX --------------------*/
    wire id_ex_reg_wen, id_ex_mem_wen, id_ex_mem_ren;
    wire [2:0] id_ex_mem_mask;
    wire [`RegAddrBus_WIDTH-1:0] id_ex_reg_waddr;
    wire [`Alusel_WIDTH-1:0] id_ex_alusel;
    wire [`Aluop_WIDTH-1:0] id_ex_aluop;
    wire [`DataBus_WIDTH-1:0] id_ex_rs1, id_ex_rs2, id_ex_pc,id_ex_imm;
    wire [`InstBus_WIDTH-1:0] id_ex_inst;
    wire id_ex_except_ecall, id_ex_except_mret, id_ex_csr_wen;
    wire [`DataBus_WIDTH-1:0] id_ex_csr_rdata, id_ex_csrzimm;
    wire [`CsrAddrBus_WIDTH-1:0] id_ex_csr_waddr;
/* --------EX/LS --------------------*/
    wire ex_ls_reg_wen, ex_ls_mem_wen, ex_ls_mem_ren;
    wire [2:0] ex_ls_mem_mask;
    wire [`RegAddrBus_WIDTH-1:0] ex_ls_reg_waddr;
    wire [`DataBus_WIDTH-1:0] ex_ls_aluresult, ex_ls_rs2, ex_ls_pc;
    wire [`InstBus_WIDTH-1:0] ex_ls_inst;
    wire ex_ls_csr_wen;
    wire [`CsrAddrBus_WIDTH-1:0] ex_ls_csr_waddr;
    wire [`DataBus_WIDTH-1:0] ex_ls_csr_wdata;
    wire ex_ls_except_ecall, ex_ls_except_mret;
/* --------LS/WB --------------------*/
    wire ls_wb_reg_wen;
    wire [`RegAddrBus_WIDTH-1:0] ls_wb_reg_waddr;
    wire [`DataBus_WIDTH-1:0] ls_wb_reg_wdata, ls_wb_pc;
    wire [`InstBus_WIDTH-1:0] ls_wb_inst;
    wire ls_wb_csr_wen;
    wire [`CsrAddrBus_WIDTH-1:0] ls_wb_csr_waddr;
    wire [`DataBus_WIDTH-1:0] ls_wb_csr_wdata;
/* --------WB/ID --------------------*/
    wire wb_id_reg_wen;
    wire [`RegAddrBus_WIDTH-1:0] wb_id_reg_waddr;
    wire [`DataBus_WIDTH-1:0] wb_id_reg_wdata;
    wire wb_id_csr_wen;
    wire [`CsrAddrBus_WIDTH-1:0] wb_id_csr_waddr;
    wire [`DataBus_WIDTH-1:0] wb_id_csr_wdata;
/* --------Ctrl/IF --------------------*/
    wire ctrl_if_trap_flag;
    wire [`DataBus_WIDTH-1:0] ctrl_if_trap_dnpc;
/* --------Ctrl/ID --------------------*/
    wire [`ExceptType_WIDTH-1:0] ctrl_id_excepttype;
    wire [`DataBus_WIDTH-1:0] ctrl_id_exceptpc;
/* --------ID/Ctrl --------------------*/
    wire [`DataBus_WIDTH-1:0] id_ctrl_mtvecdata, id_ctrl_mepcdata;
/* --------ID/LS --------------------*/
    wire id_ls_mstatus_mie, id_ls_mie_mtie;
/* --------clint/LS --------------------*/
    wire clint_ls_timestop;
/* --------mem_crossbar/LS --------------------*/
    wire [`DataBus_WIDTH-1:0] crossbar_ls_mmio_busrdata;
/* --------LS/mem_crossbar --------------------*/
    wire ls_crossbar_mmio_wen, ls_crossbar_mmio_ren;
    wire [`DataBus_WIDTH-1:0] ls_crossbar_mmio_buswdata;
    wire [`DataBus_WIDTH-1:0] ls_crossbar_mmio_rwaddr;
    wire [7:0] ls_crossbar_mem_wmask;
/* --------LS/Ctrl --------------------*/
    wire ls_ctrl_except_timerintr;
    wire [`DataBus_WIDTH-1:0] ls_ctrl_exceptpc;
/* --------clint/mem_crossbar --------------------*/
    wire [`DataBus_WIDTH-1:0] clint_crossbar_clint_busrdata;
/* --------mem_crossbar/clint --------------------*/
    wire crossbar_clint_clint_wen, crossbar_clint_clint_ren;
    wire [`DataBus_WIDTH-1:0] crossbar_clint_clint_rwaddr, crossbar_clint_clint_buswdata;

    IFU IFU_inst (
        .if_clk_i         (core_clk_i),
        .if_rst_n_i       (core_rst_n_i),
        .if_memrdata_i    (core_ifmemrdata_i),
        .if_branch_flag_i (ex_if_branch_flag),
        .if_branch_dnpc_i (ex_if_branch_dnpc),
        .if_trap_flag_i   (ctrl_if_trap_flag),
        .if_trap_dnpc_i   (ctrl_if_trap_dnpc),

        .if_pc_o          (if_id_pc),
        .if_inst_o        (if_id_inst)
    );

    IDU IDU_inst (
        .id_clk_i          (core_clk_i),
        .id_rst_n_i        (core_rst_n_i),
        .id_pc_i           (if_id_pc),
        .id_inst_i         (if_id_inst),
        .id_reg_wen_i      (wb_id_reg_wen),
        .id_reg_waddr_i    (wb_id_reg_waddr),
        .id_reg_wdata_i    (wb_id_reg_wdata),
        .id_csr_wen_i      (wb_id_csr_wen),
        .id_csr_waddr_i    (wb_id_csr_waddr),
        .id_csr_wdata_i    (wb_id_csr_wdata),
        .id_excepttype_i   (ctrl_id_excepttype),
        .id_exceptpc_i     (ctrl_id_exceptpc),

        .id_reg_wen_o      (id_ex_reg_wen),
        .id_reg_waddr_o    (id_ex_reg_waddr),
        .id_mem_wen_o      (id_ex_mem_wen),
        .id_mem_ren_o      (id_ex_mem_ren),
        .id_mem_mask_o     (id_ex_mem_mask),
        .id_alusel_o       (id_ex_alusel),
        .id_aluop_o        (id_ex_aluop),
        .id_rs1_o          (id_ex_rs1),
        .id_rs2_o          (id_ex_rs2),
        .id_pc_o           (id_ex_pc),
        .id_inst_o         (id_ex_inst),
        .id_imm_o          (id_ex_imm),
        .id_except_ecall_o (id_ex_except_ecall),
        .id_except_mret_o  (id_ex_except_mret),
        .id_csr_rdata_o    (id_ex_csr_rdata),
        .id_csr_wen_o      (id_ex_csr_wen),
        .id_csr_waddr_o    (id_ex_csr_waddr),
        .id_csrzimm_o      (id_ex_csrzimm),
        .id_mtvecdata_o    (id_ctrl_mtvecdata),
        .id_mepcdata_o     (id_ctrl_mepcdata),
        .id_mstatus_mie_o  (id_ls_mstatus_mie),
        .id_mie_mtie_o     (id_ls_mie_mtie)
    );

    EXU EXU_inst (
        .ex_reg_wen_i      (id_ex_reg_wen),
        .ex_reg_waddr_i    (id_ex_reg_waddr),
        .ex_mem_wen_i      (id_ex_mem_wen),
        .ex_mem_ren_i      (id_ex_mem_ren),
        .ex_mem_mask_i     (id_ex_mem_mask),
        .ex_alusel_i       (id_ex_alusel),
        .ex_aluop_i        (id_ex_aluop),
        .ex_rs1_i          (id_ex_rs1),
        .ex_rs2_i          (id_ex_rs2),
        .ex_pc_i           (id_ex_pc),
        .ex_imm_i          (id_ex_imm),
        .ex_except_ecall_i (id_ex_except_ecall),
        .ex_except_mret_i  (id_ex_except_mret),
        .ex_csr_rdata_i    (id_ex_csr_rdata),
        .ex_csr_wen_i      (id_ex_csr_wen),
        .ex_csr_waddr_i    (id_ex_csr_waddr),
        .ex_csrzimm_i      (id_ex_csrzimm),

        .ex_reg_wen_o      (ex_ls_reg_wen),
        .ex_reg_waddr_o    (ex_ls_reg_waddr),
        .ex_aluresult_o    (ex_ls_aluresult),
        .ex_mem_wen_o      (ex_ls_mem_wen),
        .ex_mem_ren_o      (ex_ls_mem_ren),
        .ex_mem_mask_o     (ex_ls_mem_mask),
        .ex_rs2_o          (ex_ls_rs2),
        .ex_pc_o           (ex_ls_pc),
        .ex_csr_wen_o      (ex_ls_csr_wen),
        .ex_csr_waddr_o    (ex_ls_csr_waddr),
        .ex_csr_wdata_o    (ex_ls_csr_wdata),
        .ex_except_ecall_o (ex_ls_except_ecall),
        .ex_except_mret_o  (ex_ls_except_mret),
        .ex_branch_flag_o  (ex_if_branch_flag),
        .ex_branch_dnpc_o  (ex_if_branch_dnpc),

        .ex_inst_i        (id_ex_inst),
        .ex_inst_o        (ex_ls_inst)
    );

    LSU LSU_inst (
        .ls_mstatus_mie_i      (id_ls_mstatus_mie),
        .ls_mie_mtie_i         (id_ls_mie_mtie),
        .ls_timestop_i         (clint_ls_timestop),
        .ls_reg_wen_i          (ex_ls_reg_wen),
        .ls_reg_waddr_i        (ex_ls_reg_waddr),
        .ls_aluresult_i        (ex_ls_aluresult),
        .ls_mem_wen_i          (ex_ls_mem_wen),
        .ls_mem_ren_i          (ex_ls_mem_ren),
        .ls_mem_mask_i         (ex_ls_mem_mask),
        .ls_rs2_i              (ex_ls_rs2),
        .ls_pc_i               (ex_ls_pc),
        .ls_csr_wen_i          (ex_ls_csr_wen),
        .ls_csr_waddr_i        (ex_ls_csr_waddr),
        .ls_csr_wdata_i        (ex_ls_csr_wdata),
        .ls_mmio_busrdata_i    (crossbar_ls_mmio_busrdata),

        .ls_mmio_wen_o         (ls_crossbar_mmio_wen),
        .ls_mmio_ren_o         (ls_crossbar_mmio_ren),
        .ls_mmio_buswdata_o    (ls_crossbar_mmio_buswdata),
        .ls_mmio_rwaddr_o      (ls_crossbar_mmio_rwaddr),
        .ls_mem_wmask_o        (ls_crossbar_mem_wmask),

        .ls_reg_wen_o          (ls_wb_reg_wen),
        .ls_reg_waddr_o        (ls_wb_reg_waddr),
        .ls_reg_wdata_o        (ls_wb_reg_wdata),
        .ls_csr_wen_o          (ls_wb_csr_wen),
        .ls_csr_waddr_o        (ls_wb_csr_waddr),
        .ls_csr_wdata_o        (ls_wb_csr_wdata),
        .ls_except_timerintr_o (ls_ctrl_except_timerintr),
        .ls_exceptpc_o         (ls_ctrl_exceptpc),

        .ls_pc_o               (ls_wb_pc),
        .ls_inst_i             (ex_ls_inst),
        .ls_inst_o             (ls_wb_inst),
        .ls_mempc_o            (core_mempc_o)
    );

    WBU WBU_inst (
        .wb_reg_wen_i     (ls_wb_reg_wen),
        .wb_reg_waddr_i   (ls_wb_reg_waddr),
        .wb_reg_wdata_i   (ls_wb_reg_wdata),
        .wb_csr_wen_i     (ls_wb_csr_wen),
        .wb_csr_waddr_i   (ls_wb_csr_waddr),
        .wb_csr_wdata_i   (ls_wb_csr_wdata),

        .wb_reg_wen_o     (wb_id_reg_wen),
        .wb_reg_waddr_o   (wb_id_reg_waddr),
        .wb_reg_wdata_o   (wb_id_reg_wdata),
        .wb_csr_wen_o     (wb_id_csr_wen),
        .wb_csr_waddr_o   (wb_id_csr_waddr),
        .wb_csr_wdata_o   (wb_id_csr_wdata),

        .wb_pc_i          (ls_wb_pc),
        .wb_pc_o          (core_wbpc_o),
        .wb_inst_i        (ls_wb_inst),
        .wb_inst_o        (core_wbinst_o)
    );

    CTRL CTRL_inst (
        .ctrl_mtvecdata_i        (id_ctrl_mtvecdata),
        .ctrl_mepcdata_i         (id_ctrl_mepcdata),
        .ctrl_except_ecall_i     (ex_ls_except_ecall),
        .ctrl_except_mret_i      (ex_ls_except_mret),
        .ctrl_except_timerintr_i (ls_ctrl_except_timerintr),
        .ctrl_exceptpc_i         (ls_ctrl_exceptpc),

        .ctrl_excepttype_o       (ctrl_id_excepttype),
        .ctrl_exceptpc_o         (ctrl_id_exceptpc),
        .ctrl_trap_flag_o        (ctrl_if_trap_flag),
        .ctrl_trap_dnpc_o        (ctrl_if_trap_dnpc)
    );

    clint clint_inst (
        .clint_clk_i      (core_clk_i),
        .clint_rst_n_i    (core_rst_n_i),
        .clint_ren_i      (crossbar_clint_clint_ren),
        .clint_rwaddr_i   (crossbar_clint_clint_rwaddr),
        .clint_wen_i      (crossbar_clint_clint_wen),
        .clint_wdata_i    (crossbar_clint_clint_buswdata),

        .clint_rdata_o    (clint_crossbar_clint_busrdata),
        .clint_timestop_o (clint_ls_timestop)
    );

    mem_crossbar mem_crossbar_inst (
        .crossbar_mmio_wen_i       (ls_crossbar_mmio_wen),
        .crossbar_mmio_ren_i       (ls_crossbar_mmio_ren),
        .crossbar_mmio_buswdata_i  (ls_crossbar_mmio_buswdata),
        .crossbar_mmio_rwaddr_i    (ls_crossbar_mmio_rwaddr),
        .crossbar_mem_wmask_i      (ls_crossbar_mem_wmask),
        .crossbar_clint_busrdata_i (clint_crossbar_clint_busrdata),
        .crossbar_mem_busrdata_i   (core_mem_busrdata_i),

        .crossbar_mmio_busrdata_o  (crossbar_ls_mmio_busrdata),
        .crossbar_clint_wen_o      (crossbar_clint_clint_wen),
        .crossbar_clint_ren_o      (crossbar_clint_clint_ren),
        .crossbar_clint_rwaddr_o   (crossbar_clint_clint_rwaddr),
        .crossbar_clint_buswdata_o (crossbar_clint_clint_buswdata),
        .crossbar_mem_wen_o        (core_mem_wen_o),
        .crossbar_mem_ren_o        (core_mem_ren_o),
        .crossbar_mem_buswdata_o   (core_mem_buswdata_o),
        .crossbar_mem_rwaddr_o     (core_mem_rwaddr_o),
        .crossbar_mem_wmask_o      (core_mem_wmask_o)
    );

endmodule
