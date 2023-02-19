/*-------------------------------------------------------------------------
// Module:  CTRL
// File:    CTRL.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)异常种类判断；2）流水线冲刷，暂停控制
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module CTRL (
    /* --------signals from IDU --------------------*/
    input wire [`DataBus_WIDTH-1:0]         ctrl_mtvecdata_i,
    input wire [`DataBus_WIDTH-1:0]         ctrl_mepcdata_i,                              
    /* --------signals from LSU --------------------*/
    input wire                              ctrl_except_ecall_i,     //异常ecall的信息采集
    input wire                              ctrl_except_mret_i,      //异常mret的信息采集
    input wire                              ctrl_except_timerintr_i, //异常timer_intr的信息采集
    input wire [`DataBus_WIDTH-1:0]         ctrl_exceptpc_i, //发生异常的指令的PC
    /* --------signals TO IDU --------------------*/
    output wire [`ExceptType_WIDTH-1:0]     ctrl_excepttype_o,
    output wire [`DataBus_WIDTH-1:0]        ctrl_exceptpc_o,    //发生异常阶段的PC
    /* --------signals TO IFU --------------------*/
    output wire                             ctrl_trap_flag_o,   //自陷转移标志
    output wire [`DataBus_WIDTH-1:0]        ctrl_trap_dnpc_o      //自陷地址（PC）
);

    assign ctrl_exceptpc_o = ctrl_exceptpc_i;
/* --------------------- Generate time_intr 定时器中断标志生成 --------------------*/
/* --------------------- Generate excepttype --------------------*/
    assign ctrl_excepttype_o = (ctrl_except_timerintr_i) ? `ExceptType_TimerIntr : //定时器中断优先级最高
                               (ctrl_except_ecall_i)     ? `ExceptType_Ecall     :
                               (ctrl_except_mret_i)      ? `ExceptType_Mret      :
                               'd0;

/* --------------------- Generate trap_flag --------------------*/
    assign ctrl_trap_flag_o = ctrl_except_timerintr_i || ctrl_except_ecall_i || ctrl_except_mret_i;
/* --------------------- Generate trap_pc --------------------*/
    assign ctrl_trap_dnpc_o = (ctrl_except_ecall_i || ctrl_except_timerintr_i) ? ctrl_mtvecdata_i :
                              (ctrl_except_mret_i)  ? ctrl_mepcdata_i                             :
                              'd0;

    import "DPI-C" function void timer_intr();
    always @ (*) begin
        if (ctrl_excepttype_o == `ExceptType_TimerIntr)
            timer_intr();
    end

endmodule
