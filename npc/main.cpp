#include "verilated_vcd_c.h"
#include "Vexample.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

vluint64_t main_time = 0; // 仿真初始时间为0 


int main(int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	Vexample* top = new Vexample{contextp};
	top->trace(tfp, 99);
	tfp->open("wave.vcd");
	while (!contextp->gotFinish()) {
		contextp->timeInc(1);
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		tfp->dump(main_time);   // 波形文件写入步进
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == a ^ b);
		main_time++;
	}
	delete top;
	delete contextp;
	return 0;
}
