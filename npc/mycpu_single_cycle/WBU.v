/*-------------------------------------------------------------------------
// Module:  WBU
// File:    WBU.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)结果写入通用寄存器
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module WBU (
    /* --------signals from LSU --------------------*/
    input wire                              wb_reg_wen_i,
    input wire [`RegAddrBus_WIDTH-1:0]      wb_reg_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         wb_reg_wdata_i,
    input wire                              wb_csr_wen_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      wb_csr_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         wb_csr_wdata_i,
    /* --------signals to IDU --------------------*/
    output wire                             wb_reg_wen_o,
    output wire [`RegAddrBus_WIDTH-1:0]     wb_reg_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        wb_reg_wdata_o,
    output wire                             wb_csr_wen_o,
    output wire [`CsrAddrBus_WIDTH-1:0]     wb_csr_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        wb_csr_wdata_o,
    //仿真测试需要
    input wire [`DataBus_WIDTH-1:0]         wb_pc_i,
    output wire [`DataBus_WIDTH-1:0]        wb_pc_o,
    input wire [`InstBus_WIDTH-1:0]         wb_inst_i,
    output wire [`InstBus_WIDTH-1:0]        wb_inst_o
);

    //仿真测试需要
    assign wb_pc_o        = wb_pc_i;
    assign wb_inst_o      = wb_inst_i;
    //------------
    
    assign wb_reg_wen_o   = wb_reg_wen_i;
    assign wb_reg_waddr_o = wb_reg_waddr_i;
    assign wb_reg_wdata_o = wb_reg_wdata_i;
    assign wb_csr_wen_o   = wb_csr_wen_i;
    assign wb_csr_waddr_o = wb_csr_waddr_i;
    assign wb_csr_wdata_o = wb_csr_wdata_i;

/*##DPI-C 识别到ebreak指令后自动结束##*/

    import "DPI-C" function void ebreak();
    always @ (*) begin
        if (wb_inst_o == `INST_EBREAK)
            ebreak();
    end

endmodule
