#include "Vysyx_22040386_TOP.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include "verilated_dpi.h" //实现DPI-C功能的头文件，用于SV和C之间数据类型的转换
#include <stdio.h>
#include <stdlib.h>
#include <verilated_vcd_c.h> //生成波形.vcd所需要的文件
#include <cassert>        //装有aseert()的库
#include <dlfcn.h>        //包含动态链接库的相关函数

#define CONFIG_MBASE 0x80000000  //测试程序的起始虚拟地址
#define CONFIG_MSIZE 0x2800000   //指令存储空间开辟的大小

enum {NPC_STOP, NPC_RUNNING, NPC_END, NPC_ABORT, DIFFTEST_TO_DUT, DIFFTEST_TO_REF};

//##函数指针，用于调用spike库中的API##//
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

int npc_state = NPC_STOP;              //npc运行的状态

static uint8_t *pimem = NULL;    //指令存储空间的物理起始地址

typedef struct
{
    word_t gpr[32];
    vaddr_t pc;
} CPU_state;                 //模拟nemu写一个cpu状态,用于DIffTest
CPU_state cpu = {};          //开辟一个空间用于存放模拟的cpu状态

uint32_t ebreak_flag = 0;    //程序结束标志，为1时结束仿真
//##DPI-C函数，检测到ebreak指令后，结束仿真##//
extern "C" void ebreak() {
		ebreak_flag = 1;
}

//##DPI-C函数，将电路中寄存器的值导出##//
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void init_imem();
uint8_t *guest_to_host(paddr_t paddr);
static long load_img(char *img_file);
word_t host_read(void *addr, int len);
word_t pmem_read(paddr_t addr, int len);
int is_exit_status_bad();

vluint64_t main_time = 0;           // 仿真时间,并且以verilog中的时间单位为精度
const vluint64_t max_sim_time = 2000;   // 最大仿真时间戳

//##Verilator模型初始化##//
VerilatedContext *contextp = new VerilatedContext;
Vysyx_22040386_TOP *top = new Vysyx_22040386_TOP;   //通过指针的方式从目标的.v文件构建Verilator模型，之后top将指代.v文件中的module名
VerilatedVcdC *tfp = new VerilatedVcdC;  //记录的波形文件

int main(int argc, char** argv, char** env) {
	//##初始化指令存储器，装入指令##//
	char* img_file = *(argv + 1);
	init_imem();
	long img_size = load_img(img_file);

	//##Verilator模型选项设置的初始化##//
	contextp->commandArgs(argc, argv);
    Verilated ::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("./obj_dir/Vysyx_22040386_TOP.vcd");

	npc_state = NPC_RUNNING;
	
	//##仿真运行##//
	while (!contextp->gotFinish() && main_time < max_sim_time) {
		if(ebreak_flag){
			printf("ebreak: program is finished !\n");
			npc_state = NPC_END;
			break;
		}
		
		//printf("main_time = %d\n",main_time);

		if (main_time < 4){     //电路初始化
            top->rst_n = 0;
        }
		else{
			top->rst_n = 1;
		}

		if(main_time % 2 == 0){
			top->clk = 0;
		}
		if(main_time % 2 == 1){
			top->clk = 1;
			top->eval();          //时钟上升沿后必须更新一次状态，不然根据pc取的指令值有延迟！
		}

		top->I = pmem_read(top->pc, 4);

		top->eval();
        tfp->dump(main_time);
        main_time++;
 	}

	tfp->close();
	delete tfp;
    delete top;
    delete contextp;

	return is_exit_status_bad();
}

/*##从计算机中开辟一块空间存储地址，pmem为指令存储器的起始地址##*/
void init_imem(){
	pimem = (uint8_t *)malloc(CONFIG_MSIZE);
	//printf("pimem = %llx\n",pimem);
	assert(pimem);
}

/*##程序中的虚拟地址转换为计算机的实际物理地址##*/
uint8_t *guest_to_host(paddr_t paddr) {
	uint8_t *tmp1 = pimem + paddr - CONFIG_MBASE;
	//printf("guest to host is successful ! addr = %lx\n",tmp1);
	return tmp1;
    //return pimem + paddr - CONFIG_MBASE;
}

/*##将指令放入开辟的指令存储空间中，并返回指令的总数量##*/
static long load_img(char *img_file) {
	if (img_file == NULL){
		printf("Error: No image is given !\n");
		assert(0);  //没有指令的读入，终止仿真
		return 4096;  //没实际意义，只是为了编译通过
	}

	FILE *fp = fopen(img_file, "rb"); //以二进制的格式将.bin文件读入到file结构体中
	assert(fp);    //判断是否成功读入

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);        // 获取.bin文件的总长度
	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0, SEEK_SET);

	//uint8_t *imgtste[size];
    //*imgtste = guest_to_host(CONFIG_MBASE);

	int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp); //将.bin文件中的指令放入开辟的指令存储空间中
	assert(ret == 1);

	fclose(fp);

	return size;
}

/*##从指令存储器中读取32位指令的函数##*/
inline word_t host_read(void *addr, int len) {
	switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: {printf("hoost_read is error !\n"); assert(0); return 4096;}
  }
}
word_t pmem_read(paddr_t addr, int len) {
	//printf("PC is %x\n",addr);
	
	if (addr >= CONFIG_MBASE){
		word_t ret = host_read(guest_to_host(addr), len);
		return ret;
	}
	else{
		return 0;
	}
}

/*##判断程序是否出错##*/
int is_exit_status_bad() {
  int good = (npc_state == NPC_END && cpu_gpr[10] == 0);
  if(good){
	  printf("\033[1;32m HIT GOOD TRAP! \033[0m \n");
  }
  else{
	  printf("\033[1;31m HIT BAD TRAP! \033[0m\n");
  }
  return !good;
}

/*##DIffTest初始化##*/
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY | MUXNDEF(CONFIG_CC_ASAN, RTLD_DEEPBIND, 0));
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}