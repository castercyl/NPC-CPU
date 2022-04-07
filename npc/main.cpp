#include "verilated_vcd_c.h"     //生成波形.vcd所需要的文件
#include "VIFU.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include <memory>
#include <stdio.h>
#include <stdlib.h>

vluint64_t main_time = 0;           // 仿真时间,并且以verilog中的时间单位为精度
const vluint64_t sim_time = 5010;   // 最大仿真时间戳

void single_cycle();
void reset(int n);

VIFU* top = new VIFU;  //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名
VerilatedVcdC* tfp = new VerilatedVcdC; //记录的波形文件 
//Verilated::traceEverOn(true);
//top->trace(tfp, 99); // Trace 99 levels of hierarchy
//tfp->open("IFU-wave.vcd");  //波形文件.vcd存放地址
//VerilatedContext* contextp = new VerilatedContext; // 记录仿真时间的结构

int main(int argc, char** argv, char** env) {

	Verilated::traceEverOn(true);
	top->trace(tfp, 99); // Trace 99 levels of hierarchy
	tfp->open("IFU-wave.vcd");  //波形文件.vcd存放地址

	top->rst = 1;      //初始化
	top->clk = 1;
	top->eval();
	tfp->dump(main_time);
	main_time = main_time + 1;
	
	reset(4);

	while (main_time < sim_time) {
		single_cycle();

	}

	tfp->close();
	delete top;           //运行结束，删除中间模型
	return 0;
}

void single_cycle() {
	  top->clk = 0; 
	  //contextp->timeInc(1);
	  top->eval(); tfp->dump(main_time); main_time = main_time + 1;
	  top->clk = 1; 
	  top->eval(); tfp->dump(main_time); main_time = main_time + 1;
}

void reset(int n) {

	  while (n -- > 0) {
		  single_cycle(); //经过n个时钟周期后
 	  }   

	  top->rst = 0;
	  top->clk = 0;
	  top->eval();
	  tfp->dump(main_time);
	  main_time = main_time + 1;
}
