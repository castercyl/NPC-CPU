/*-------------------------------------------------------------------------
// Module:  idram
// File:    idram.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 用于仿真，使用DPIC模拟IRAM，DRAM与CPU的数据交互
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module idram (
    input wire                              ram_clk_i,
    //input wire                              ram_rst_n_i,
    /* --------signals from mycpu --------------------*/
    input wire [`DataBus_WIDTH-1:0]         ram_ifpc_i,
    input wire                              ram_mem_wen_i,
    input wire                              ram_mem_ren_i,
    input wire [`DataBus_WIDTH-1:0]         ram_mem_buswdata_i,
    input wire [`DataBus_WIDTH-1:0]         ram_mem_rwaddr_i, //read or write
    input wire [7:0]                        ram_mem_wmask_i,
    input wire [`DataBus_WIDTH-1:0] mem_pc_i,
    /* --------signals to mycpu --------------------*/
    output reg [`DataBus_WIDTH-1:0]         ram_ifmemrdata_o,
    output reg [`DataBus_WIDTH-1:0]         ram_mem_busrdata_o
);

/* -------- IRAM --------------------*/
    import "DPI-C" function void iram_read(
        input longint raddr, output longint rdata);

    always @(*) begin
        iram_read(ram_ifpc_i, ram_ifmemrdata_o);
    end
/* -------- DRAM --------------------*/
    import "DPI-C" function void dram_read(
        input longint pc, input longint raddr, output longint rdata);

    always @(*) begin
        if (ram_mem_ren_i)
            dram_read(mem_pc_i,ram_mem_rwaddr_i, ram_mem_busrdata_o);
        else
            ram_mem_busrdata_o = 64'hFFFF_FFFF_FFFF_FFFF;
    end

    import "DPI-C" function void dram_write(
        input longint pc, input longint waddr, input longint wdata, input byte wmask);

    always @ (posedge ram_clk_i) begin
        if (ram_mem_wen_i)
            dram_write(mem_pc_i, ram_mem_rwaddr_i, ram_mem_buswdata_i, ram_mem_wmask_i);
    end

endmodule
