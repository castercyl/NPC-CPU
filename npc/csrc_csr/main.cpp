#include "Vysyx_22040386_TOP.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include "verilated_dpi.h" //实现DPI-C功能的头文件，用于SV和C之间数据类型的转换
#include <stdio.h>
#include <stdlib.h>
#include <verilated_vcd_c.h> //生成波形.vcd所需要的文件
#include <cassert>        //装有aseert()的库
#include <dlfcn.h>        //包含动态链接库的相关函数
#include <time.h>         //获取系统时间的库

#define CONFIG_MBASE 0x80000000  //测试程序的起始虚拟地址
#define CONFIG_MSIZE 0x28000000   //指令存储空间开辟的大小
//#define CONFIG_MSIZE 0x80000000   //指令存储空间开辟的大小
#define IO_SPACE_MAX (2 * 1024 * 1024)
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_RTC_MMIO    0xa0000048

enum {DIFFTEST_TO_DUT, DIFFTEST_TO_REF, NPC_STOP, NPC_RUNNING, NPC_END, NPC_ABORT};

const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

uint32_t current_inst = 0;        //用于显示当前的32位指令

//##函数指针，用于调用spike库中的API##//
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

int npc_state = NPC_STOP;              //npc运行的状态

static uint8_t *pimem = NULL;    //指令存储空间的物理起始地址
static uint8_t *io_space = NULL; //外设存储空间的物理起始地址
static uint8_t *serial_base = NULL;

static int port = 1234;           //REF DIFTest初始化的参数
static uint64_t boot_time = 0; //开机时间基准数

typedef struct
{
    word_t gpr[32];
    vaddr_t pc;
} CPU_state;                 //模拟nemu写一个cpu状态,用于DIffTest
CPU_state cpu = {};          //开辟一个空间用于存放模拟的cpu状态

uint32_t ebreak_flag = 0;    //程序结束标志，为1时结束仿真
uint32_t unkown_code_flag = 0;    //未译码指令标志，为1时结束仿真
//##DPI-C函数，检测到ebreak指令后，结束仿真##//
extern "C" void ebreak() {
		ebreak_flag = 1;
}

//##DPI-C函数，检测到未译码指令后，结束仿真##//

extern "C" void unkown_inst() {
		unkown_code_flag = 1;
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
//word_t pmem_read(paddr_t addr, int len);
int is_exit_status_bad();
void init_difftest(long img_size, int port);
void difftest_step(vaddr_t pc);
static void checkregs(CPU_state *ref, vaddr_t pc);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
static inline void host_write(void *addr, int len, word_t data);
//开辟外设空间
/*
void init_device();
void init_map();
void init_serial();
*/

//##DPI-C函数，从内存读##//
extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if (raddr >= CONFIG_MBASE){
	    //unit_64 real_raddr = raddr & ~0x7ull       //等价为 & 0xFFFF_FFFF_FFFF_FFF8,总线这样要求的
		if (raddr == CONFIG_RTC_MMIO){
			time_t now_s;
			time(&now_s);   //读出的是多少 秒
			if (boot_time == 0){
				boot_time = now_s;
			}
			*rdata = ((uint64_t)now_s - boot_time) * 1000000; //传入的是 us
		}
		else {
			*rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
		}
		//*rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
		//printf("rdata = 0x%llx\n",*rdata);
	}
	else{
		*rdata = 0;
		printf("Warning : Invalid Instruction !\n");
	}
}

//##DPI-C函数，往内存写##// //自然对齐方式，对内存的读写地址总是64的倍数
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  
  //assert(CONFIG_MBASE <= waddr <= (CONFIG_MBASE + CONFIG_MSIZE));

  long long addr = waddr & ~0x7ull;
  int len = 0;
  switch(wmask){      //char型(有符号数)的范围为-128～127
	  //8位/bit
	  case 0x1: len = 1; break;
	  case 0x2: len = 1; addr = addr + 1; break;
	  case 0x4: len = 1; addr = addr + 2; break;
	  case 0x8: len = 1; addr = addr + 3; break;
	  case 0x10: len = 1; addr = addr + 4; break;
	  case 0x20: len = 1; addr = addr + 5; break;
	  case 0x40: len = 1; addr = addr + 6; break;
	  case -128: len = 1; addr = addr + 7; break;
	  //16位/half word
	  case 0x3:  len = 2; break;
	  case 0xc: len = 2; addr = addr + 2; break;
	  case 0x30: len = 2; addr = addr + 4; break;
	  case -64: len = 2; addr = addr + 6; break;
	  //32位/word
	  case 0xF: len = 4; break;
	  case -16: len = 4; addr = addr + 4; break;
	  //64位/double word
	  case -1: len = 8; break;
	  default: printf("False: Wmask is %x false !\n",wmask);
  }

  //printf("waddr = %llx\n",waddr);
  //printf("addr = %llx\n",addr);

  
  if (waddr == CONFIG_SERIAL_MMIO){
	  printf("%c", wdata);
  }
  else {
	  host_write(guest_to_host(addr), len, wdata);
  }
  
  

  //host_write(guest_to_host(addr), len, wdata);
}



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
	tfp->open("/obj_dir/Vysyx_22040386_TOP.vcd");
    //tfp->open("./obj_dir/Vysyx_22040386_TOP.vcd");

	npc_state = NPC_RUNNING;
	
	//##仿真运行##//
	while (!contextp->gotFinish()) {
		if(ebreak_flag){
			printf("ebreak: program is finished !\n");
			npc_state = NPC_END;
			break;
		}
		
		//printf("main_time = %ld\n",main_time);

		if (main_time < 4){     //电路初始化
            top->i_TOP_rst_n = 0;
			init_difftest(img_size, port);
        }
		else{
			top->i_TOP_rst_n = 1;
		}


		if(main_time % 2 == 0){
			top->i_TOP_clk = 0;
			top->eval();
		}
		if(main_time % 2 == 1){
			//printf("main_time = %ld\n",main_time);
			top->i_TOP_clk = 1;
			top->eval();          //时钟上升沿后必须更新一次状态，不然根据pc取的指令值有延迟！
			//DIFTEST开关点
			/*
			if(main_time >= 3){
				difftest_step(top->o_TOP_pc);
			}
			*/

			//printf("PC: 0x%0lx; Inst: 0x%x; Branch: 0x%x; ecall: 0x%x; mret: 0x%x\n", top->o_TOP_pc, top->o_TOP_inst, top->o_TOP_Branch, top->o_TOP_ecall, top->o_TOP_mret);
			//printf("\n");
			
			if (unkown_code_flag || top->o_TOP_unkown_code){
				printf("Warining: An unkown Inst! pc: %lx; Inst: %x\n", top->o_TOP_pc, top->o_TOP_inst);
				npc_state = NPC_ABORT;
				break;
			}
			
			//printf("a0 : 0x%lx\n",cpu_gpr[10]);
			//difftest_step(top->pc);
		}

		if(npc_state == NPC_ABORT){    //如果DIFTest失败，立刻结束程序
			printf("False:ABORT!The false PC is 0x%0lx\n",cpu.pc);
			break;
		}

		//csr tset
		/*
		if (top->o_TOP_mret){
			printf("Mret ! csr_dnpc = 0x%0lx\n", top->o_TOP_csr_dnpc);
			break;
		}*/
		//top->I = pmem_read(top->pc, 4);

		cpu.pc = top->o_TOP_pc;
		current_inst = top->o_TOP_inst;

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

	//serialmem = (uint8_t *)malloc(8);
	
}

/*##程序中的虚拟地址转换为计算机的实际物理地址##*/
uint8_t *guest_to_host(paddr_t paddr) {
	//assert(CONFIG_MBASE <= paddr <= (CONFIG_MBASE + CONFIG_MSIZE));
	uint8_t *tmp1 = pimem + paddr - CONFIG_MBASE;
	//printf("guest to host is successful ! addr = %lx\n",tmp1);
	//assert(paddr < (CONFIG_MBASE + CONFIG_MSIZE));
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

/*##从内存中读数据##*/
inline word_t host_read(void *addr, int len) {
	switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
	case 8: return *(uint64_t *)addr;
    default: {printf("hoost_read is error !\n"); assert(0); return 4096;}
  }
}
/*##往内存中写数据##*/  //自然对齐方式，对内存的读写地址总是64的倍数
static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
	case 8: *(uint64_t *)addr = data; return;
	default: {printf("hoost_wirte is error !\n"); assert(0);}
  }
}
/*
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
*/
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
void init_difftest(long img_size, int port) {
  char const *ref_so_file = "/home/cyl/ysyx-workbench/nemu/tools/spike-diff/build/riscv64-spike-so";
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY); //将动态库加载到内存中
  assert(handle);

  //用函数指针指向动态库中的对应函数，以便调用
  ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy"); //
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy"); //
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");     //
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) =  (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  //初始化REF的DIFFTest功能，没太弄懂？
  ref_difftest_init(port);
  //将要执行文件的二进制指令代码放入REF中的指令内存中
  cpu.pc = CONFIG_MBASE;
  ref_difftest_memcpy(CONFIG_MBASE, guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
  //把用作测试的PC值和寄存器值写入REF的PC和寄存器值中
  for(int i = 0; i < 32; i++){
	  //cpu.gpr[i] = cpu_gpr[i];
	  cpu.gpr[i] = 0;
  }
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

/*##DIffTest在CPU中比较功能的实现##*/
void difftest_step(vaddr_t dnpc) {
	CPU_state ref_r;                  //构建一个临时的中间结构体同于存放REF的值，与DUT进行比较

	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);  //检查，复制，最后执行
	checkregs(&ref_r, dnpc);                        //实际比较的PC是dnpc！

	ref_difftest_exec(1);
}

static void checkregs(CPU_state *ref, vaddr_t dnpc) {
  if (!isa_difftest_checkregs(ref, dnpc)) {
	  npc_state = NPC_ABORT;
    //nemu_state.state = NEMU_ABORT;
    //nemu_state.halt_pc = pc;
    //isa_reg_display();
  }
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t dnpc) {   // I DO
  int i = 0;
  int j = 0;
  bool DIF_result = true;
  
  if (ref_r->pc != dnpc){
	  for (j=0; j<32; j++){
		  printf("ref_%s=0x%08lx; npc_%s=0x%08lx\n", regs[j],ref_r->gpr[j], regs[j], cpu_gpr[j]);
	  }
	  printf("\n");
	  printf("False: PC is false! ref_dnpc is 0x%0lx; npc_dnpc is 0x%0lx\n",ref_r->pc, dnpc);
	  DIF_result = false;
  }
   
  for (i = 0; i < 32; i++){
    if (ref_r->gpr[i] != cpu_gpr[i]){
		printf("False: Reg is false! ref_%s=0x%08lx; npc_%x=0x%08lx\n",
		regs[i], ref_r->gpr[i], regs[i], cpu_gpr[i]);
		DIF_result = false;
    }
  }
  return DIF_result;
}

/*
void init_map() {
	init_map();
	init_serial(); //开辟串口外设
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

void init_serial() {
	serial_base = new_space(8);
}
*/
