/*-------------------------------------------------------------------------
// Module:  csr
// File:    csr.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)CSR寄存器;2)配合系统调用以及中断异常
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module csr (
    input wire                              csr_clk_i,
    input wire                              csr_rst_n_i,
    /* --------signals from IDU --------------------*/
    input wire                              csr_ren_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      csr_raddr_i,
    input wire                              csr_wen_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      csr_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         csr_wdata_i,
    input wire [`ExceptType_WIDTH-1:0]      csr_execpttype_i, //异常种类(ecall、mret、timer_intr)
    input wire [`DataBus_WIDTH-1:0]         csr_exceptpc_i,  //触发异常的当前指令的PC
    /* --------signals to IDU --------------------*/
    output wire [`DataBus_WIDTH-1:0]        csr_rdata_o,
    output wire [`DataBus_WIDTH-1:0]        csr_mtvecdata_o,
    output wire [`DataBus_WIDTH-1:0]        csr_mepcdata_o,
    output wire                             csr_mstatus_mie_o, //全局启用中断位
    output wire                             csr_mie_mtie_o     //M模式计时器中断启用位
);

    reg [`DataBus_WIDTH-1:0] mstatus, mepc, mcause, mtvec;
    reg [`DataBus_WIDTH-1:0] mie, mip; //计时器中断相关寄存器

    assign csr_mtvecdata_o   = mtvec;
    assign csr_mepcdata_o    = mepc;
    assign csr_mstatus_mie_o = mstatus[3];
    assign csr_mie_mtie_o    = mie[7];

/* ----------------------- READ ------------------------------*/
    assign csr_rdata_o = (csr_ren_i == `ReadDisable)   ? `DW_ZERO :
                         (csr_raddr_i == `CSR_MSTATUS) ? mstatus  :
                         (csr_raddr_i == `CSR_MEPC)    ? mepc     :
                         (csr_raddr_i == `CSR_MCAUSE)  ? mcause   :
                         (csr_raddr_i == `CSR_MTVEC)   ? mtvec    :
                         (csr_raddr_i == `CSR_MIE)     ? mie      :
                         (csr_raddr_i == `CSR_MIP)     ? mip      :
                         `DW_ZERO;

/* --------------------- WRITE ------------------------------*/
    /* --------------------- Mstatus --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mstatus <= 64'ha00001800;   //为了通过DIFTEST,这里恒定MPP位为2'b11，特权模式恒为M！
        end
        else if (csr_execpttype_i == `ExceptType_TimerIntr) begin
            mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
        end
        else if (csr_execpttype_i == `ExceptType_Ecall) begin
            mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
        end
        else if (csr_execpttype_i == `ExceptType_Mret) begin
            mstatus <= {mstatus[63:8], 1'b1, mstatus[6:4], mstatus[7], mstatus[2:0]};
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MSTATUS)) begin
            mstatus <= csr_wdata_i;
        end 
    end
    /* --------------------- Mepc --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mepc <= `DW_ZERO;
        end
        else if (csr_execpttype_i == `ExceptType_TimerIntr) begin
            mepc <= csr_exceptpc_i;
        end
        else if (csr_execpttype_i == `ExceptType_Ecall) begin
            mepc <= csr_exceptpc_i;
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MEPC)) begin
            mepc <= csr_wdata_i;
        end 
    end
    /* --------------------- Mcause --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mcause <= `DW_ZERO;
        end
        else if (csr_execpttype_i == `ExceptType_TimerIntr) begin
            mcause <= 64'h8000_0000_0000_0007;
        end
        else if (csr_execpttype_i == `ExceptType_Ecall) begin
            mcause <= 64'hb;
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MCAUSE)) begin
            mcause <= csr_wdata_i;
        end
    end
    /* --------------------- Mtvec --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mtvec <= `DW_ZERO;
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MTVEC)) begin
            mtvec <= csr_wdata_i;
        end
    end
    /* --------------------- Mie --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mie <= `DW_ZERO;
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MIE)) begin
            mie <= csr_wdata_i;
        end
    end
    /* --------------------- Mip --------------------*/
    always @ (posedge csr_clk_i) begin
        if (csr_rst_n_i == `RestEnable) begin
            mip <= `DW_ZERO;
        end
        else if (csr_execpttype_i == `ExceptType_TimerIntr) begin
            mip <= 64'h80;
        end
        else if (csr_execpttype_i == `ExceptType_Mret) begin //每次mret代表异常结束
            mip <= `DW_ZERO;
        end
        else if ((csr_wen_i == `WriteEnable) && (csr_waddr_i == `CSR_MIP)) begin
            mip <= csr_wdata_i;
        end
    end

endmodule
