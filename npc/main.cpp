#include "verilated_vcd_c.h"
#include "Vexample.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char** argv, char** env) {
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	topp->trace(tfp, 99);
	Vexample* top = new Vexample{contextp};
	while (!contextp->got Finish()) {
		contextp->timeInc(1);
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == a ^ b);
	}
	delete top;
	delete contextp;
	return 0;
}
