/*-------------------------------------------------------------------------
// Module:  ysyx_22040386_TOP
// File:    ysyx_22040386_TOP.v
// Author:  CYL
// E-mail:  2321573062@qq.com着呢
// Description: CPU的整个仿真结构
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module ysyx_22040386_TOP (
    input wire                              top_clk_i,
    input wire                              top_rst_n_i,

    output wire [`InstBus_WIDTH-1:0]        top_wbinst_o,
    output wire [`DataBus_WIDTH-1:0]        top_wbpc_o
);

    wire mem_wen, mem_ren;
    wire [`DataBus_WIDTH-1:0] ifpc, ifmemrdata;
    wire [`DataBus_WIDTH-1:0] mem_busrdata, mem_buswdata, mem_rwaddr;
    wire [7:0] mem_wmask;
    wire [`DataBus_WIDTH-1:0] mempc;

    //仿真测试需要
    //wire [`DataBus_WIDTH-1:0] mem_pc;

    mycpu mycpu_inst (
        .core_clk_i       (top_clk_i),
        .core_rst_n_i     (top_rst_n_i),
        .core_ifmemrdata_i (ifmemrdata),
        .core_mem_busrdata_i (mem_busrdata),
        .core_ifpc_o      (ifpc),
        .core_mem_wen_o   (mem_wen),
        .core_mem_ren_o   (mem_ren),
        .core_mem_buswdata_o (mem_buswdata),
        .core_mem_rwaddr_o (mem_rwaddr),
        .core_mem_wmask_o (mem_wmask),
        .core_wbpc_o      (top_wbpc_o),
        .core_wbinst_o    (top_wbinst_o),
        .core_mempc_o     (mempc)
    );

    idram idram_inst (
        .ram_clk_i        (top_clk_i),
        .ram_ifpc_i       (ifpc),
        .ram_mem_wen_i    (mem_wen),
        .ram_mem_ren_i    (mem_ren),
        .ram_mem_buswdata_i (mem_buswdata),
        .ram_mem_rwaddr_i (mem_rwaddr),
        .ram_mem_wmask_i  (mem_wmask),
        .ram_ifmemrdata_o (ifmemrdata),
        .ram_mem_busrdata_o (mem_busrdata),

        .mem_pc_i(mempc)
    );

endmodule
