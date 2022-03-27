#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B,// none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }

static word_t immJ(uint32_t i) { return SEXT(((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1)), 21); }       // I DO
static word_t immB(uint32_t i) { return SEXT(((BITS(i,31,31) << 12) | (BITS(i,30,25) << 5) | (BITS(i,11,8) << 1) | (BITS(i,7,7) << 11)), 13);} //I DO

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;

	case TYPE_J: src1I(immJ(i)); break;    //I DO
	case TYPE_R: src1R(rs1);     src2R(rs2); break; //I DO
	case TYPE_B: src1R(rs1);     src2R(rs2); destI(immB(i)); break; // I DO 
  }  
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  //R(0) = 0; // I OD
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = x[rs1] & sext(immediate), 位与立即数
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1+src2,2), 16), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext(M[x[rs1] + sext(offset)][15:0]), 半字加载
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = SEXT(Mr(src1+src2,2)&65535, 17), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = M[x[rs1] + sext(offset)][15:0], 无符号半字加载
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (src1 << src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = x[rs1] ≪ shamt 立即数逻辑左移
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(BITS(src1<<src2,31,0), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext((x[rs1] ≪ shamt)[31: 0]), 立即数逻辑左移字
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT(BITS(src1,31,0),32) >> src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext(x[rs1][31: 0] >>s shamt),立即数算术右移字
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (src1 >> src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = (x[rs1] ≫𝑢 shamt) 立即数逻辑右移
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = x[rs1] ^ sext(immediate), 立即数异或

  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO M[x[rs1] + sext(offset) = x[rs2][15: 0], 存半字
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO M[x[rs1] + sext(offset) = x[rs2][31: 0] 存字
  //INSTPAT("??????? ????? ????? ??? ????? 00100 11", li     , I, R(dest) = src2);            //I DO.(伪指令)(可扩展为addi)li:立即加载指令，X[rd] = imm,将立即数0装入寄存器 
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));  //I DO addi:加立即数,addi rd,rs1,imm; X[rd] = X[rs1] + imm
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4, s->dnpc = s->pc + src1, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO jal：跳转指令, X[rd] = pc +4 ; pc + = sext(offset) ?
  //INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));      //I DO sd: M[x[rs1] + sext(offset)}]= x[rs2][63: 0]
  INSTPAT("0000000 00000 00001 000 00000 11001 11", ret    , I, s->dnpc = src1, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));//I DO pc = X[1]
  
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(SEXT(BITS(src1,31,0), 32) / SEXT(BITS(src2,31,0), 32), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext(x[rs1][31:0] ÷s x[rs2][31:0]), 字除法
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS(src1*src2, 31, 0), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO x[rd] = sext((x[rs1] × x[rs2])[31: 0]), 乘字
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT(SEXT(BITS(src1,31,0), 32) %  SEXT(BITS(src2,31,0), 32), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext(x[rs1][31: 0] %𝑠 x[rs2][31: 0]), 求余数字
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));//I DO x[rd] = x[rs1] − x[rs2]
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(src1 - src2, 31, 0), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext((x[rs1] − x[rs2])[31: 0], 减去字
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(src1 << SEXT(BITS(src2, 4, 0) & 31, 6), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext((x[rs1] ≪ u x[rs2][4: 0])[31: 0]), 逻辑左移字
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = (SEXT(src1,64) < SEXT(src2,64)), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = (x[rs1] <𝑠 x[rs2]), 小于则置位
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO x[rd] = x[rs1] & x[rs2]
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = (x[rs1] <𝑢 x[rs2] , 无符号小于则置位)
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = x[rs1] | 𝑥[𝑟𝑠2] 取或

  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc), printf("src1= 0x%lx, src2 = 0x%lx, R(dest) = 0x%lx\n",src1,src2,R(dest))); //I DO 无符号小于立即数则置位 x[rd] = (x[rs1] < u_sext(immediate))
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2)? s->pc+dest : s->dnpc, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO    if(rs1 == rs2) pc += sext(offset)
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = (SEXT(src1,64) < SEXT(src2,64))? s->pc+dest : s->dnpc, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO if (rs1 <s rs2) pc += sext(offset), 小于时分支
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2)? s->pc+dest : s->dnpc, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO   if (rs1 != rs2) pc += sext(offset)
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = (SEXT(src1,64) >= SEXT(src2,64))? s->pc+dest : s->dnpc, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO if (rs1 ≥s rs2) pc += sext(offset), 大于等于时分支
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2, isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = x[rs1] + x[rs2]
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT((src1 + src2), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext((x[rs1] + sext(immediate))[31:0])
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO x[rd] = sext(M[x[rs1] + sext(offset)][31:0]) 字加载，对于 RV64I，结果要进行符号位扩展
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0) , 32), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = sext((x[rs1] + x[rs2])[31:0]) 加字
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest , 1, BITS(src2, 7, 0)), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO M[x[rs1] + sext(offset) = x[rs2][7: 0], 存字节
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (SEXT(src1, 64) >> SEXT(BITS(src2, 5, 0), 6)), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); //I DO x[rd] = (x[rs1] >>s shamt) 立即数算术右移
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = SEXT((Mr(src1 + src2,1) & 255), 9), isa_reg_display(), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // I DO x[rd] = M[x[rs1] + sext(offset)][7:0] 无符号字节加载




  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10)), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc)); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc), printf("pc = 0x%lx dnpc = 0x%lx\n",s->pc,s->dnpc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
