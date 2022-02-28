#include "verilated_vcd_c.h"
#include "Vwaterlight.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

vluint64_t main_time = 0; // 仿真初始时间为0 

VerilatedContext* contextp = new VerilatedContext;
Vwaterlight* top = new Vwaterlight{contextp};

void single_cycle();

void reset(int n);

int main(int argc, char** argv, char** env) {
	contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true); //打开波形追踪
	//VerilatedVcdC* tfp = new VerilatedVcdC;
	VerilatedVcdC* tfp = new VerilatedVcdC; 
	top->trace(tfp, 99);
	tfp->open("waterlight-wave.vcd");

	reset(10);                     //复位10个周期
contextp->timeInc(1);

	while (!contextp->gotFinish()) {
				
		single_cycle();

		top->eval();
		tfp->dump(main_time);   // 波形文件写入步进
		printf("led = %d\n", top->led);
		main_time++;
	}
	delete top;
	delete contextp;
	return 0;
}

void single_cycle() {
	  top->clk = 0; top->eval();
	    top->clk = 1; top->eval();
}

void reset(int n) {
	  top->rst = 1;
	    while (n -- > 0) single_cycle();
		  top->rst = 0;
}
