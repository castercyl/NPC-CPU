module core_control (
//------------from ID_csr------------
    input wire i_Ctrl_mstatus_mie,
    input wire i_Ctrl_mie_mtie,
    input wire [63:0] i_Ctrl_mtevc,
//------------from MEM_Clint-------------
    input wire i_Ctrl_Clint_stop,
    //input wire [63:0] i_Ctrl_MEM_pc
//-------------to IF/MEM-------------
    output wire o_Ctrl_timer_intr,
//-------------to IF----------------
    output wire [63:0] o_Ctrl_trap_dnpc  //定时器中断处理的入口地址  
//-------------to WB------------------
    //output wire [63:0] o_Ctrl_trap_pc     //发生定时器中断的当前PC
);
//-----------捕获定时器中断--------------------
    assign o_Ctrl_timer_intr = i_Ctrl_mstatus_mie && i_Ctrl_mie_mtie && i_Ctrl_Clint_stop; 
    assign o_Ctrl_trap_dnpc  = i_Ctrl_mtevc;

    //assign o_Ctrl_trap_pc    = i_Ctrl_MEM_pc;

//--------------告诉仿真环境触发了一次计时器中断----------------------
import "DPI-C" function void timer_intr();
always @ (*) begin
  if (o_Ctrl_timer_intr == 1'b1)
    timer_intr();
end

endmodule
