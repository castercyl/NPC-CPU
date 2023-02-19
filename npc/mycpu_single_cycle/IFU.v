/*-------------------------------------------------------------------------
// Module:  IFU
// File:    IFU.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)取回指令；
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module IFU (
    input wire                              if_clk_i,
    input wire                              if_rst_n_i,
    /* --------signals from IRAM --------------------*/
    input wire [`DataBus_WIDTH-1:0]         if_memrdata_i, //通过总线每次取64位
    /* --------signals from EXU --------------------*/
    input wire                              if_branch_flag_i,
    input wire [`DataBus_WIDTH-1:0]         if_branch_dnpc_i,
    /* --------signals from CTRL --------------------*/
    input wire                              if_trap_flag_i,
    input wire [`DataBus_WIDTH-1:0]         if_trap_dnpc_i,
    /* --------signals to EXU --------------------*/
    output wire [`DataBus_WIDTH-1:0]        if_pc_o,  //also to IRAM
    output wire [`InstBus_WIDTH-1:0]        if_inst_o
);

    wire [`DataBus_WIDTH-1:0] next_pc;   //dnpc 
    reg [`DataBus_WIDTH-1:0] current_pc; //当前指令对应的PC

    assign if_inst_o = if_pc_o[2] ? if_memrdata_i[63:32] : if_memrdata_i[31:0];
    assign if_pc_o   = current_pc;

    assign next_pc   = (if_trap_flag_i)   ? if_trap_dnpc_i   : //异常优先级最高
                       (if_branch_flag_i) ? if_branch_dnpc_i : 
                       current_pc + `DataBus_WIDTH'd4;
    
    always @ (posedge if_clk_i) begin
      if (if_rst_n_i == `RestEnable) begin
          current_pc <= `REBOOT_PC;
      end
      else begin
          current_pc <= next_pc;
      end
    end

endmodule
