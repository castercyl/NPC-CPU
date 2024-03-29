#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	int i;
	for(i = 0; i < 32; i++) {
		printf("%-6s        0x%lx\n",regs[i], cpu.gpr[i]);
	}
}

word_t isa_reg_str2val(const char *s, bool *success) {
	//输入寄存器名，返回寄存器的值
	int i;
	//word_t tmp;
	*success = false;
	printf("The reg name is: %s\n", s);

	for (i = 0; i < 32; i++) {
		if (strcmp(s, *(regs + i)) == 0) {
			*success = true;
			printf("reg = %ld\n",cpu.gpr[i]);
			return cpu.gpr[i];
		}
	}
	printf("Sorry, the name of reg is not exist!\n");
	assert(0);
  return 0;
}
