#include "verilated_vcd_c.h"     //生成波形.vcd所需要的文件
#include "Vwaterlight.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

Vwaterlight* top = new Vwaterlight;  //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名

void single_cycle();

void reset(int n);

int main(int argc, char** argv, char** env) {

	Verilated::mkdir("logs");       //创建一个目录来存放波形文件

	VerilatedContext* contextp = new VerilatedContext;  //构建contextp用来保存仿真时间
	Verilated::traceEverOn(true);                      //打开波形追踪
	contextp->commandArgs(argc, argv);        //？传递参数，让verilator代码看到
	//VerilatedVcdC* tfp = new VerilatedVcdC;
	//VerilatedVcdC* tfp = new VerilatedVcdC; 
	//top->trace(tfp, 99);
	//tfp->open("waterlight-wave.vcd");

	Vwaterlight* top = new Vwaterlight;  //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名，需要在创建任何模块之前使用！ 

	reset(10);                     //复位10个周期

	while (!contextp->gotFinish()) {
	//到结束标志之前会一直进行此循环
		contextp->timeInc(1);      //经过1个时间精度周期				
		single_cycle();

		top->eval();
		//tfp->dump(main_time);
		printf("time = %x clk = %x rst = %x led = %x\n",contextp->time(),top->clk,top->rst,top->led);
		//main_time++;
	}

	top->final();          // ?

	//delete top;           //运行结束，删除中间模型
	//delete contextp;
#if VM_COVERAGE
	    Verilated::mkdir("logs");
		contextp->coveragep()->write("logs/coverage.dat");
#endif
	return 0;
}

void single_cycle() {
	  top->clk = 0; top->eval();
	  top->clk = 1; top->eval();
}

void reset(int n) {
	  top->rst = 1;              //将module中的rst置1
	  while (n -- > 0) single_cycle(); //经过n个时钟周期后
	  top->rst = 0;
}
