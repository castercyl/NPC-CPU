#include "verilated_vcd_c.h"     //生成波形.vcd所需要的文件
#include "Vwaterlight.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include <memory>
#include <stdio.h>
#include <stdlib.h>

vluint64_t main_time = 0;           // 仿真时间戳
const vluint64_t sim_time = 5010;   // 最大仿真时间戳

void single_cycle();

void reset(int n);

Vwaterlight* top = new Vwaterlight;  //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名

int main(int argc, char** argv, char** env) {

	VerilatedContext* contextp = new VerilatedContext;  //构建contextp用来保存仿真时间
	//contextp->commandArgs(argc, argv);        //？传递参数，让verilator代码看到

	Verilated::traceEverOn(true);                      //打开波形追踪
	VerilatedVcdC* tfp = new VerilatedVcdC;
	top->trace(tfp, 99); // Trace 99 levels of hierarchy
	tfp->open("wave.vcd");

	//VerilatedVcdC* tfp = new VerilatedVcdC;
	//VerilatedVcdC* tfp = new VerilatedVcdC; 
	//top->trace(tfp, 99);
	//tfp->open("waterlight-wave.vcd");

	reset(10);                     //复位10个周期

	while ((!contextp->gotFinish())&& (main_time < sim_time)) {
	//到结束标志之前会一直进行此循环
		contextp->timeInc(1);      //经过1个时间精度周期
		//tfp->dump(contextp->time());
		single_cycle();

		top->eval();
		//tfp->dump(main_time);
		//printf("time = %d clk = %x rst = %x led = %x\n",contextp->time(),top->clk,top->rst,top->led);
		main_time++;
	}

	tfp->close();
	delete top;           //运行结束，删除中间模型
	delete contextp;
	return 0;
}

void single_cycle() {
	  top->clk = 0; top->eval(); tfp->dump(main_time);
	  top->clk = 1; top->eval(); tfp->dump(main_time);
}

void reset(int n) {
	  top->rst = 1;              //将module中的rst置1
	  while (n -- > 0) single_cycle(); //经过n个时钟周期后
	  top->rst = 0;
}
