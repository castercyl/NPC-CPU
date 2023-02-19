#include "Vysyx_22040386_TOP.h"         //目标verilog文件
#include "verilated.h"           //Verilator所包含的基本规则的文件
#include "verilated_dpi.h" //实现DPI-C功能的头文件，用于SV和C之间数据类型的转换
#include <stdio.h>
#include <stdlib.h>
#include <verilated_vcd_c.h> //生成波形.vcd所需要的文件
#include <cassert>        //装有aseert()的库
#include <dlfcn.h>        //包含动态链接库的相关函数
#include <time.h>         //获取系统时间的库
#include <sys/time.h>
#include <SDL2/SDL.h>     //用于外设状态的更新
//#include "SDL.h"

//---------------控制参数-宏定义----------
#define NPC_DIFTEST    //DIFTEST开关
//#define DRAM_PRINTF  //打印每次访问DRAM的数据地址值
#define NPC_DEVICE

//-----------------外设参数的定义----------------------
#define CONFIG_MBASE 0x80000000  //测试程序的起始虚拟地址
//#define CONFIG_MSIZE 0x28000000   //指令存储空间开辟的大小
#define CONFIG_MSIZE 0x8000000   //指令存储空间开辟的大小
//#define CONFIG_MSIZE 0x80000000   //指令存储空间开辟的大小
#define IO_SPACE_MAX (2 * 1024 * 1024)

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0xa0000000
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_RTC_MMIO    0xa0000048
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)

#define SCREEN_W 400
#define SCREEN_H 300

static uint8_t *p_space = NULL;         //device开辟的起始地址
static uint32_t *rtc_port_base = NULL;  //时钟外设的地址

enum {DIFFTEST_TO_DUT, DIFFTEST_TO_REF, NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT};

const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

uint32_t current_inst = 0;        //用于显示当前的32位指令
vaddr_t  current_pc   = 0;        //用于显示当前的64位PC值

vaddr_t ring_pc[10] = {};        //定义环形PC记录器，记录10条PC
int ring_pc_number = 9; //环形PC计数器的计数值，0-9

//##函数指针，用于调用spike库中的API##//
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

int npc_state = NPC_STOP;              //npc运行的状态

static bool is_skip_ref_flag = false; //is_skip_ref_flag去触发is_skip_ref,使得is_skip_ref延迟1cycle
static bool is_skip_ref      = false;    //外设访存时DIFTEST跳过当前指令的标志

static bool is_raise_intr         = false; //告诉DIFTEST此条指令进行中断
static bool is_raise_intr_flag    = false;

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
CPU_state DUT_cpu = {};          //开辟一个空间用于存放模拟的cpu状态

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
//##DPI-C函数，告诉仿真环境此时触发了计时器中断##//
extern "C" void timer_intr() {
		//is_skip_ref_flag = true;
		is_raise_intr_flag = true;
		printf("Timer interreupt !\n");
}
//##DPI-C函数，访问clint##//
extern "C" void generate_skip() {
		is_skip_ref = true;
		printf("Clint write !\n");
}
extern "C" void generate_skip_flag() {
		is_skip_ref_flag = true;
		printf("Clint read !\n");
}
/*
//Dram测试
int rs1, imm;
extern "C" void wdram_test (long long pc, long long rs1, long long imm)
{
	printf("wdram_test:pc=0x%lx,rs1=0x%lx,imm=0x%lx\n",pc,rs1,imm);
}
*/
void init_imem();
uint8_t *guest_to_host(paddr_t paddr);
uint8_t *guest_to_host_FB(paddr_t paddr);
uint8_t *guest_to_host_VGACTR(paddr_t paddr);
static long load_img(char *img_file);
word_t host_read(void *addr, int len);
//word_t pmem_read(paddr_t addr, int len);
int is_exit_status_bad();
void init_difftest(long img_size, int port);
void difftest_step(vaddr_t pc);
static void checkregs(CPU_state *ref, vaddr_t pc);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
static inline void host_write(void *addr, int len, word_t data);

void init_map();
uint8_t* new_space(int size);

//--------------------1 键盘----------------
#define KEYDOWN_MASK 0x8000

#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)

#define _KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define _KEY_NAME(k) _KEY_##k,

#define MAP(c, f) c(f)

enum {
  _KEY_NONE = 0,
  MAP(_KEYS, _KEY_NAME)
};

#define SDL_KEYMAP(k) keymap[concat(SDL_SCANCODE_, k)] = concat(_KEY_, k);
static uint32_t keymap[256] = {};

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;
static uint32_t *i8042_data_port_base = NULL;

static void init_keymap();
void init_i8042();
static void key_enqueue(uint32_t am_scancode);
static uint32_t key_dequeue();
void send_key(uint8_t scancode, bool is_keydown);
//-------------------------2 VGA -------------------------------
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
static uint32_t *vgactl_port_base = NULL;
static void *vmem = NULL; //video memory (frame buffer),帧缓冲空间，存储一个屏幕的像素信息

static void init_screen();
static uint32_t screen_width();
static uint32_t screen_height();
static uint32_t screen_size();
void init_vga();
static inline void update_screen();
void vga_update_screen();
//----------------------3 RTC-----------------------------------
void init_timer();
static uint64_t get_time_internal();
uint64_t get_time();

void device_update();
void init_device();
//============================================================================
extern "C" void iram_read(long long raddr, long long *rdata)
{	
	if ((raddr >= CONFIG_MBASE) && (raddr < (CONFIG_MBASE + CONFIG_MSIZE)))
	{
		*rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
	}
	else
	{
		printf("Error IRAM read! pc=0x%lx!\n", raddr);
	}

}

//##DPI-C函数，从内存读##//
//extern "C" void pmem_read(long long pc, long long raddr, long long *rdata) {
extern "C" void dram_read(long long pc,long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  if ((CONFIG_RTC_MMIO <= raddr) && (raddr < CONFIG_RTC_MMIO + 0x8))
  {	
	if(raddr == (CONFIG_RTC_MMIO + 0x4)) //访问高地址才更新
	{
		uint64_t us = get_time();
		rtc_port_base[0] = (uint32_t)us;
		rtc_port_base[1] = us >> 32;
	}
	*rdata = *((uint64_t *)rtc_port_base); //传入的是 us
	is_skip_ref_flag = true;
  }
  else if (raddr == KBD_ADDR) //MMIO - KEYBOARD
  {
	is_skip_ref_flag = true;
	i8042_data_port_base[0] = key_dequeue();
	*rdata = *((uint64_t *)i8042_data_port_base);
  }
  else if ((raddr >= VGACTL_ADDR) && (raddr < VGACTL_ADDR + 0x8)) //MMIO - VGA
  {
	*rdata = *(uint64_t *)vgactl_port_base;
	is_skip_ref_flag = true;
	printf("Read VGACTL_ADDR!\n");
  }
  else if((raddr >= FB_ADDR) && (FB_ADDR + 0x80000))
  {
	*rdata = host_read(guest_to_host_FB(raddr & ~0x7ull), 8);
	is_skip_ref_flag = true;
  }
  else if ((raddr >= CONFIG_MBASE) && (raddr < (CONFIG_MBASE + CONFIG_MSIZE))) 
  {
	*rdata = host_read(guest_to_host(raddr & ~0x7ull), 8);
	#ifdef DRAM_PRINTF
	printf("Rdram: PC=0x%lx,raddr=0x%lx,rdata=0x%lx\n",DUT_cpu.pc,raddr,*rdata);
	#endif
  }
  else if ((raddr == 0x200BFF8) || (raddr == 0x2004000)) //CLINT
  {
	is_skip_ref_flag = true;
	//printf("read CLINT!\n");
  }
  else
  {
	  //*rdata = host_read(guest_to_host(0x80000000), 8);
	*rdata = 0;
	//printf("Error DRAM read!raddr=0x%lx, pc is : 0x%lx !\n", raddr,DUT_cpu.pc);
	printf("Error DRAM read!raddr=0x%lx, pc is : 0x%lx !\n", raddr, pc);
  }
}

//##DPI-C函数，往内存写##// //自然对齐方式，对内存的读写地址总是64的倍数
extern "C" void dram_write(long long pc, long long waddr, long long wdata, char wmask) {
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

  if ((waddr >= CONFIG_SERIAL_MMIO) && (waddr < CONFIG_SERIAL_MMIO + 0x8))
  {
	  
	  printf("%c", wdata);

	  is_skip_ref = true;
	 // printf("putch pc = 0x%lx, is_skip_ref_flag = %d\n",current_pc, is_skip_ref_flag);
  }
#ifdef NPC_DEVICE
  else if((waddr >= VGACTL_ADDR) && (waddr < VGACTL_ADDR + 0x8))
  {
	  //printf("VGA_CTR, waddr = 0x%lx, len = %d\n",waddr,len);
	  host_write(guest_to_host_VGACTR(addr), len, wdata);
	  is_skip_ref = true;
  }
  else if((waddr >= FB_ADDR) && (waddr < FB_ADDR + 0x80000))
  {
	  //printf("write to FB! waddr = 0x%lx\n", waddr);
	  host_write(guest_to_host_FB(addr), len, wdata);
	  is_skip_ref = true;
  }
#endif
  else if ((waddr == 0x200BFF8) || (waddr == 0x2004000))
  {
	  is_skip_ref = true;
	  //printf("wirte CLINT!\n");
  }
  else if ((waddr >= CONFIG_MBASE) && (waddr < (CONFIG_MBASE + CONFIG_MSIZE))) 
  {
	  host_write(guest_to_host(addr), len, wdata);
	#ifdef DRAM_PRINTF
	  printf("Wdram: PC=0x%lx,waddr=0x%lx,wdata=0x%lx\n",DUT_cpu.pc,waddr,wdata);
	#endif
  }
  else
  {
	  printf("Error Dram write!waddr=0x%lx, pc=0x%lx!\n",waddr, pc);
  }
 
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
	init_imem(); //开辟存放指令的内存空间
	printf("Init imem successfully!\n");
#ifdef NPC_DEVICE
	init_device();
	printf("Init device successfully!\n");
#endif
	long img_size = load_img(img_file); //喂入要运行程序的二进制文件(指令)
	printf("Load img successfully!\n");
	//##Verilator模型选项设置的初始化##//
	contextp->commandArgs(argc, argv);
    Verilated ::traceEverOn(true);
    top->trace(tfp, 99);
	tfp->open("/obj_dir/Vysyx_22040386_TOP.vcd");
    //tfp->open("./obj_dir/Vysyx_22040386_TOP.vcd");

	npc_state = NPC_RUNNING;

	//int ring_pc_number = 0; //环形PC计数器的计数值，0-9
	//##仿真运行##//
	while (!contextp->gotFinish()) 
	{
		if(ebreak_flag){
			printf("ebreak: program is finished !\n");
			npc_state = NPC_END;
			break;
		}
		
		//printf("main_time = %ld\n",main_time);

		if (main_time < 4){     //电路初始化
            top->top_rst_n_i = 0;
		#ifdef NPC_DIFTEST
			init_difftest(img_size, port);
		#endif
        }
		else{
			top->top_rst_n_i = 1;
		}


		if(main_time % 2 == 0)
		{
			top->top_clk_i = 0;
			top->eval();
			if(is_skip_ref_flag)
			{
				is_skip_ref      = true;
				is_skip_ref_flag = false;
			}
			if(is_raise_intr_flag)
			{
				is_raise_intr      = true;
				is_raise_intr_flag = false;
			}
		}
		if(main_time % 2 == 1){
			//printf("main_time = %ld\n",main_time);
			current_pc   = DUT_cpu.pc;
		    current_inst = top->top_wbinst_o;

			top->top_clk_i = 1;
			top->eval();          //时钟上升沿后必须更新一次状态，不然根据pc取的指令值有延迟！
			//同步verilog中的状态到DUT_cpu中,DUT_cpu存储的是dnpc和当前指令执行写入寄存器的值
			DUT_cpu.pc = top->top_wbpc_o; //dnpc

			for(int m = 0; m < 32; m++)
			{
				DUT_cpu.gpr[m] = cpu_gpr[m];
			}

		#ifdef NPC_DIFTEST
			if(main_time >= 5){
				//printf("main_time = %d\n", main_time);
				//difftest_step(top->o_TOP_pc);
				difftest_step(DUT_cpu.pc);
			}
		#endif
		
			if (unkown_code_flag){
				printf("Warining: An unkown Inst! pc: %lx; Inst: %x\n", top->top_wbpc_o, top->top_wbinst_o);
				unkown_code_flag = 0;
				npc_state = NPC_ABORT;
				break;
			}

		}
		if(main_time % 2 == 1)
		{
			if (ring_pc_number == 9)
			{
				ring_pc_number = 0;
				ring_pc[ring_pc_number] = current_pc;
			}
			else
			{
				ring_pc_number++;
				ring_pc[ring_pc_number] = current_pc;
			}
		}

		if(npc_state == NPC_ABORT){    //如果DIFTest失败，立刻结束程序
			printf("False:ABORT!The false PC is 0x%0lx\n",current_pc);
			
			printf("RING-PC start:\n");
			if(ring_pc_number == 9)
			{	
				for(int a = 0; a <= ring_pc_number; a++)
				{
					printf("pc = 0x%0lx\n", ring_pc[a]);
				}
			}
			else
			{	
				for(int b = ring_pc_number + 1; b <= 9; b++)
				{
					printf("pc = 0x%0lx\n", ring_pc[b]);
				}
				for(int a = 0; a <= ring_pc_number; a++)
				{
					printf("pc = 0x%0lx\n", ring_pc[a]);
				}
			}
			printf("RING-PC end!\n");

			break;
		}
		if(npc_state == NPC_QUIT)
		{
			break;
		}

		//csr tset
		/*
		if (top->o_TOP_mret){
			printf("Mret ! csr_dnpc = 0x%0lx\n", top->o_TOP_csr_dnpc);
			break;
		}*/
		//top->I = pmem_read(top->pc, 4);
		/*
		current_pc   = DUT_cpu.pc;
		current_inst = top->top_wbinst_o;
		*/
		/*
		if(main_time % 2 == 1)
		{
			if (ring_pc_number == 9)
			{
				ring_pc_number = 0;
				ring_pc[ring_pc_number] = current_pc;
			}
			else
			{
				ring_pc_number++;
				ring_pc[ring_pc_number] = current_pc;
			}
		}
		*/
	#ifdef NPC_DEVICE
		device_update();
	#endif

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
	//assert(CONFIG_MBASE <= paddr <= (CONFIG_MBASE + CONFIG_MSIZE));
	uint8_t *tmp1 = pimem + paddr - CONFIG_MBASE;
	//printf("guest to host is successful ! addr = %lx\n",tmp1);
	//assert(paddr < (CONFIG_MBASE + CONFIG_MSIZE));
	return tmp1;
    //return pimem + paddr - CONFIG_MBASE;
}
uint8_t *guest_to_host_FB(paddr_t paddr) {
	uint8_t *tmp2 = (uint8_t *)vmem + (paddr - FB_ADDR);
	return tmp2;
}
uint8_t *guest_to_host_VGACTR(paddr_t paddr) {
	uint8_t *tmp3 = (uint8_t *)vgactl_port_base + (paddr - VGACTL_ADDR);
	return tmp3;
}

/*##将指令放入开辟的指令存储空间中，并返回指令的总数量##*/
static long load_img(char *img_file) {
	if (img_file == NULL){
		printf("Error: No image is given !\n");
		assert(0);  //没有指令的读入，终止仿真
		return 4096;  //没实际意义，只是为了编译通过
	}

	FILE *fp = fopen(img_file, "rb"); //以二进制的格式将.bin文件读入到file结构体中
	//FILE *fp = fopen("/home/cyl/ysyx-workbench/nanos-lite/build/nanos-lite-riscv64-nemu.bin", "rb"); //以二进制的格式将.bin文件读入到file结构体中
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
/*##判断程序是否出错##*/
int is_exit_status_bad() {
  int good = (npc_state == NPC_END && cpu_gpr[10] == 0) || (npc_state == NPC_QUIT);
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
  is_skip_ref = false;

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
  DUT_cpu.pc = CONFIG_MBASE;
  ref_difftest_memcpy(CONFIG_MBASE, guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
  //把用作测试的PC值和寄存器值写入REF的PC和寄存器值中
  for(int i = 0; i < 32; i++){
	  //cpu.gpr[i] = cpu_gpr[i];
	  DUT_cpu.gpr[i] = 0;
  }
  ref_difftest_regcpy(&DUT_cpu, DIFFTEST_TO_REF);
}

/*##DIffTest在CPU中比较功能的实现##*/
void difftest_step(vaddr_t dnpc) {
	if(is_raise_intr)
	{	int NO_timer = 0x8000000000000007;
		ref_difftest_raise_intr(NO_timer);
	}
	else if(is_skip_ref)
	{
		ref_difftest_regcpy(&DUT_cpu, DIFFTEST_TO_REF);  //跳过当前指令的比较
		is_skip_ref = false;
		//printf("SKIP pc = 0x%0lx\n", current_pc);
	}

	else
	{
		CPU_state ref_r;                  //构建一个临时的中间结构体同于存放REF的值，与DUT进行比较

		ref_difftest_exec(1);

		ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);  //检查，复制，最后执行
		checkregs(&ref_r, dnpc);                        //实际比较的PC是dnpc！

	}
/*
	CPU_state ref_r;                  //构建一个临时的中间结构体同于存放REF的值，与DUT进行比较

	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);  //检查，复制，最后执行
	checkregs(&ref_r, dnpc);                        //实际比较的PC是dnpc！

	ref_difftest_exec(1);
*/
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
   
  for (i = 0; i < 32; i++)
  {
    //if (ref_r->gpr[i] != cpu_gpr[i])
	if (ref_r->gpr[i] != DUT_cpu.gpr[i])
	{
		printf("main_time = %ld\n",main_time);
		/*
		printf("False,pc = 0x%0lx : Reg is false! ref_%s=0x%08lx; npc_%s=0x%08lx\n",
		current_pc, regs[i], ref_r->gpr[i], regs[i], cpu_gpr[i]);
		*/

		for (j=0; j<32; j++)
		{
		  printf("ref_%s=0x%08lx; npc_%s=0x%08lx\n", regs[j],ref_r->gpr[j], regs[j], cpu_gpr[j]);
		  //printf("ref_%s=0x%llx; npc_%s=0x%llx\n", regs[j],ref_r->gpr[j], regs[j], cpu_gpr[j]);
	  	}
	  	printf("\n");

		printf("False,pc = 0x%0lx : Reg is false! ref_%s=0x%08lx; npc_%s=0x%08lx\n",
		current_pc, regs[i], ref_r->gpr[i], regs[i], DUT_cpu.gpr[i]);
		DIF_result = false;
    }
  }

  if (ref_r->pc != dnpc)
  {

	  /*
	  for (j=0; j<32; j++){
		  printf("ref_%s=0x%08lx; npc_%s=0x%08lx\n", regs[j],ref_r->gpr[j], regs[j], cpu_gpr[j]);
	  }
	  printf("\n");
	  */
	  for (j=0; j<32; j++)
		{
		  printf("ref_%s=0x%08lx; npc_%s=0x%08lx\n", regs[j],ref_r->gpr[j], regs[j], cpu_gpr[j]);
	  	}
	  printf("\n");
	  printf("main_time = %ld\n",main_time);
	  printf("False: PC is false, pc = 0x%0lx ! ref_dnpc is 0x%0lx; npc_dnpc is 0x%0lx\n",current_pc, ref_r->pc, dnpc);
	  DIF_result = false;
  }

  return DIF_result;
}

//------------------- DEVICE(外设): 键盘、VGA、RTC ------------------------------------------//
void init_map() {
  io_space = (uint8_t *)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}
//------------- 1、键盘-------------------

static void init_keymap() {
  MAP(_KEYS, SDL_KEYMAP)
}

void init_i8042()
{
	i8042_data_port_base = (uint32_t *)new_space(8);//仿真环境读都是64读，实际只用4（32）
  	i8042_data_port_base[0] = _KEY_NONE;
	init_keymap();
}

static void key_enqueue(uint32_t am_scancode) {
  key_queue[key_r] = am_scancode;
  key_r = (key_r + 1) % KEY_QUEUE_LEN;
  //assert(key_r != key_f, "key queue overflow!");
}

static uint32_t key_dequeue() {   //出列，用于给MMIO一个键码
  uint32_t key = _KEY_NONE;
  if (key_f != key_r) {
    key = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  return key;
}

void send_key(uint8_t scancode, bool is_keydown) {
  //printf("send_key, scandcode = %d\n",scancode);
  if (npc_state == NPC_RUNNING && keymap[scancode] != _KEY_NONE) {
    uint32_t am_scancode = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
	//printf("am_scancode = %d\n",am_scancode);
    key_enqueue(am_scancode);
  }
}
//------------- 2、VGA-------------------
static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}
static uint32_t screen_width()
{
	return SCREEN_W;
}
static uint32_t screen_height()
{
	return SCREEN_H;
}
static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

void init_vga()
{
	vgactl_port_base = (uint32_t *)new_space(8);
	vgactl_port_base[0] = ((screen_width() << 16) | screen_height());
	vmem = new_space(screen_size());
	init_screen();
	memset(vmem, 0, screen_size());
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
void vga_update_screen() {
  if (vgactl_port_base[1]){
	//printf("Now, update screen!\n");
    update_screen();
    //*(vgactl_port_base) = 0;
	vgactl_port_base[1] = 0;
  }
}
//------------- 3、RTC -------------------
void init_timer()
{
	rtc_port_base = (uint32_t *)new_space(8);
	printf("rtc_port_base = 0x%lx\n",rtc_port_base);
}
//=============================================================
static uint64_t get_time_internal() //返回当前距离开机时间过了多少us
{
	struct timeval now;
  	gettimeofday(&now, NULL);
  	uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
	return us;
}
uint64_t get_time() //返回目前已经经过了多少us
{
	if (boot_time == 0)
	{
		boot_time = get_time_internal();
	}
	uint64_t now = get_time_internal();
	return (now - boot_time);
}
void device_update()
{
	static uint64_t last = 0;     //保持变量内容永久
	uint64_t now = get_time();
	if ((now - last) < (1000000 / 60)) //外设数据更新频率，1S内更新60次
	{
		return;
	}
	last = now;
	//printf("Update!\n");

	vga_update_screen();

	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
			{
				npc_state  = NPC_QUIT; //关掉VGA屏幕就会自动结束仿真
				printf("SDL is Quit !\n");
				break;
			}
			//If a key was pressed
			case SDL_KEYDOWN:
			case SDL_KEYUP:
			{
				//printf("SDL_KEYDOWN/UP\n");
				uint8_t k = event.key.keysym.scancode;
				//printf("scancode = %d\n",k);
				bool is_keydown = (event.key.type == SDL_KEYDOWN);
				send_key(k, is_keydown);
				break;
			}
			default : break;
		}
	}

}

void init_device()
{	
	init_map();
	init_timer();
	init_vga();
	init_i8042();
}
