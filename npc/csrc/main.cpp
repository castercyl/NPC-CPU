#include <stdio.h>
#include "verilated_vcd_c.h"     //生成波形.vcd所需要的文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include <memory>
#include <stdlib.h>
#include "VTOP.h"         //目标verilog文件

//#include "svdpi.h"        //实现DPI-C功能的头文件，用于SV和C之间数据类型的转换
//#include "VTOP__Dpi.h"

vluint64_t main_time = 0;           // 仿真时间,并且以verilog中的时间单位为精度
const vluint64_t sim_time = 200;   // 最大仿真时间戳

void single_cycle();
void reset (int n);
void update();
int i_read(uint64_t addr);

uint32_t i[256];

VTOP* top = new VTOP;  //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名

//svSetScope(svGetScopeFromName("FTOP.top"));

VerilatedVcdC* tfp = new VerilatedVcdC; //记录的波形文件


int main(int argc, char** argv, char** env) {
	int n;     //装载指令
 	for (n = 0; n < 256; n++) {
		i[n] = (((rand() << 17)|(rand() << 3)|rand()) | 0x0000007F) & 0xFFFF8F93;
	}

	i[12] = 0x00100073;


	Verilated::traceEverOn(true); //打开波形记录开关
	top->trace(tfp, 99); // Trace 99 levels of hierarchy
	tfp->open("TOP.vcd");  //波形文件.vcd存放地址

	top->rst = 1;      //初始化
	top->clk = 0;
	update();

	reset(2);
	
	while (main_time < sim_time) {
		top->i = i[i_read(top->pc)];
		single_cycle();
		//svSetScope(svGetScopeFromName("TOP"));
		export_ebreak();
 	}

	tfp->close();
	delete top;
	return 0;
}

void single_cycle() {
	top->clk = 1; update();
	top->clk = 0; update();
}

void reset (int n) {
 	while (n-- > 0) {
		single_cycle();
	}
	top->rst = 0;
}

void update() {
	top->eval();
	tfp->dump(main_time);
	main_time = main_time + 1;
}

int i_read(uint64_t addr) {
	return ((addr - 0x80000000) / 4);
}
