/*-------------------------------------------------------------------------
// Module:  clint
// File:    clint.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)mtime恒定频率自增；2）生成timestop
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module clint (
    input wire                              clint_clk_i,
    input wire                              clint_rst_n_i,
    /* --------signals from mem_crossbar --------------------*/
    input wire                              clint_ren_i,
    input wire [`DataBus_WIDTH-1:0]         clint_rwaddr_i,
    input wire                              clint_wen_i,
    input wire [`DataBus_WIDTH-1:0]         clint_wdata_i,
    /* --------signals to mem_crossbar --------------------*/
    output wire [`DataBus_WIDTH-1:0]        clint_rdata_o,
    /* --------signals to LSU --------------------*/
    output wire                             clint_timestop_o  //mtime>=mtimecmp时的条件标
);

    reg [`DataBus_WIDTH-1:0] mtime, mtimecmp;
/* -------------------- Generate timestop --------------------*/
    assign clint_timestop_o = (mtime >= mtimecmp) ? 1'b1 : 1'b0;
/* --------------------  READ --------------------*/
    assign clint_rdata_o = (clint_ren_i == `ReadDisable)      ?      'd0 :
                           (clint_rwaddr_i == `MMIO_MTIME)  ? mtime    :
                           (clint_rwaddr_i == `MMIO_MTIMECMP) ? mtimecmp :
                           'd0;
/* --------------------WRITE --------------------*/
    /* ----------- Mtime --------------------*/
    always @ (posedge clint_clk_i) begin
        if (clint_rst_n_i == `RestEnable) begin
            mtime <= `DW_ZERO;
        end
        else if ((clint_wen_i == `WriteEnable) && (clint_rwaddr_i == `MMIO_MTIME)) begin
            mtime <= clint_wdata_i;
        end
        else begin
            mtime <= mtime + `DataBus_WIDTH'd1;
        end
    end
    /* ----------- Mtimecmp --------------------*/
    always @ (posedge clint_clk_i) begin
        if (clint_rst_n_i == `RestEnable) begin
            mtimecmp <= `DW_ZERO;
        end
        else if ((clint_wen_i == `WriteEnable) && (clint_rwaddr_i == `MMIO_MTIMECMP)) begin
            mtimecmp <= clint_wdata_i;
        end
    end
//------------DPIC-----------------
    import "DPI-C" function void generate_skip_flag();
    always @ (*) begin
        if (clint_ren_i == `ReadEnable)
            generate_skip_flag();
    end

    import "DPI-C" function void generate_skip();
    always @ (posedge clint_clk_i) begin
        if (clint_wen_i == `WriteEnable)
            generate_skip();
    end

endmodule
