/*-------------------------------------------------------------------------
// Module:  mem_crossbar
// File:    mem_crossbar.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)区分MMIO地址（目前主要是CLINT）
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module mem_crossbar (
    /* --------signals from LSU --------------------*/
    input wire                              crossbar_mmio_wen_i,
    input wire                              crossbar_mmio_ren_i,
    input wire [`DataBus_WIDTH-1:0]         crossbar_mmio_buswdata_i,
    input wire [`DataBus_WIDTH-1:0]         crossbar_mmio_rwaddr_i, //read or write
    input wire [7:0]                        crossbar_mem_wmask_i,
    /* --------signals from clint --------------------*/
    input wire [`DataBus_WIDTH-1:0]         crossbar_clint_busrdata_i,
    /* --------signals from DRAM --------------------*/
    input wire [`DataBus_WIDTH-1:0]         crossbar_mem_busrdata_i,
    /* --------signals to LSU --------------------*/
    output wire [`DataBus_WIDTH-1:0]        crossbar_mmio_busrdata_o,
    /* --------signals to clint --------------------*/
    output wire                             crossbar_clint_wen_o,
    output wire                             crossbar_clint_ren_o,
    output wire [`DataBus_WIDTH-1:0]        crossbar_clint_rwaddr_o,
    output wire [`DataBus_WIDTH-1:0]        crossbar_clint_buswdata_o,
    /* --------signals to DRAM --------------------*/
    output wire                             crossbar_mem_wen_o,
    output wire                             crossbar_mem_ren_o,
    output wire [`DataBus_WIDTH-1:0]        crossbar_mem_buswdata_o,
    output wire [`DataBus_WIDTH-1:0]        crossbar_mem_rwaddr_o,
    output reg [7:0]                        crossbar_mem_wmask_o
);

/* -------- Generate mimo_busrdata --------------------*/
    assign crossbar_mmio_busrdata_o = ((crossbar_mmio_rwaddr_i == `MMIO_MTIME) || (crossbar_mmio_rwaddr_i == `MMIO_MTIMECMP)) ? crossbar_clint_busrdata_i : crossbar_mem_busrdata_i;
/* -------- Generate clint_signals --------------------*/
    assign crossbar_clint_wen_o = ((crossbar_mmio_rwaddr_i == `MMIO_MTIME) || (crossbar_mmio_rwaddr_i == `MMIO_MTIMECMP)) ? crossbar_mmio_wen_i : `WriteDisable;
    assign crossbar_clint_ren_o = ((crossbar_mmio_rwaddr_i == `MMIO_MTIME) || (crossbar_mmio_rwaddr_i == `MMIO_MTIMECMP)) ? crossbar_mmio_ren_i : `ReadDisable;
    assign crossbar_clint_rwaddr_o   = crossbar_mmio_rwaddr_i;
    assign crossbar_clint_buswdata_o = crossbar_mmio_buswdata_i;
 
/* -------- Generate mem_signals --------------------*/
    assign crossbar_mem_wen_o = ((crossbar_mmio_rwaddr_i != `MMIO_MTIME) && (crossbar_mmio_rwaddr_i != `MMIO_MTIMECMP)) ? crossbar_mmio_wen_i : `WriteDisable;
    assign crossbar_mem_ren_o = ((crossbar_mmio_rwaddr_i != `MMIO_MTIME) && (crossbar_mmio_rwaddr_i != `MMIO_MTIMECMP)) ? crossbar_mmio_ren_i : `ReadDisable;
    assign crossbar_mem_rwaddr_o   = crossbar_mmio_rwaddr_i;
    assign crossbar_mem_buswdata_o = crossbar_mmio_buswdata_i;
    assign crossbar_mem_wmask_o    = crossbar_mem_wmask_i;

endmodule
