/*-------------------------------------------------------------------------
// Module:  IDU
// File:    IDU.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)解析指令；2）生成控制信号；3）读取通用寄存器堆生成源操作数
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module IDU (
    input wire                              id_clk_i,
    input wire                              id_rst_n_i,
    /* --------signals from IFU --------------------*/
    input wire [`DataBus_WIDTH-1:0]         id_pc_i,
    input wire [`InstBus_WIDTH-1:0]         id_inst_i,
    /* --------signals from WBU --------------------*/
    input wire                              id_reg_wen_i,
    input wire [`RegAddrBus_WIDTH-1:0]      id_reg_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         id_reg_wdata_i,
    input wire                              id_csr_wen_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      id_csr_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         id_csr_wdata_i,
    /* --------signals from CTRL --------------------*/
    input wire [`ExceptType_WIDTH-1:0]      id_excepttype_i,
    input wire [`DataBus_WIDTH-1:0]         id_exceptpc_i,
    /* --------signals to EXU --------------------*/
    output wire                             id_reg_wen_o, //通用寄存器写使能
    output wire [`RegAddrBus_WIDTH-1:0]     id_reg_waddr_o, //写通用寄存器地址
    output wire                             id_mem_wen_o, //内存写使能
    output wire                             id_mem_ren_o, //内存读使能
    output wire [2:0]                       id_mem_mask_o, //内存读写位置的指示物
    output wire [`Alusel_WIDTH-1:0]         id_alusel_o,
    output wire [`Aluop_WIDTH-1:0]          id_aluop_o,
    output wire [`DataBus_WIDTH-1:0]        id_rs1_o, //read from reg
    output wire [`DataBus_WIDTH-1:0]        id_rs2_o, //read from reg
    output wire [`DataBus_WIDTH-1:0]        id_pc_o,
    output wire [`InstBus_WIDTH-1:0]        id_inst_o, //仿真调试需要
    output wire [`DataBus_WIDTH-1:0]        id_imm_o,
    output wire                             id_except_ecall_o, //异常ecall的信息采集
    output wire                             id_except_mret_o,  //异常mret的信息采集
    output wire [`DataBus_WIDTH-1:0]        id_csr_rdata_o,
    output wire                             id_csr_wen_o,
    output wire [`CsrAddrBus_WIDTH-1:0]     id_csr_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        id_csrzimm_o,
    /* --------signals to CTRL --------------------*/
    output wire [`DataBus_WIDTH-1:0]        id_mtvecdata_o,
    output wire [`DataBus_WIDTH-1:0]        id_mepcdata_o,
    /* --------signals to LSU --------------------*/
    output wire                             id_mstatus_mie_o,
    output wire                             id_mie_mtie_o
);

    assign id_inst_o = id_inst_i; //仿真调试需要
/* --------------------- Decode the inst --------------------*/
    //decode the opcode, funct3, funct7, rs1_raddr, rs2_raddr, rd_addr
    wire [6:0] opcode   = id_inst_i[6:0];
    wire [2:0] funct3   = id_inst_i[14:12];
    wire [6:0] funct7   = id_inst_i[31:25];
    wire [4:0] rd_addr  = id_inst_i[11:7];
    wire [4:0] rs1_addr = id_inst_i[19:15];
    wire [4:0] rs2_addr = id_inst_i[24:20];
    /* -------- R-Type --------------------*/
    wire inst_add   = (opcode == 7'b011_0011) && (funct3 == 3'h0) && (funct7 == 7'h00);
    wire inst_sub   = (opcode == 7'b011_0011) && (funct3 == 3'h0) && (funct7 == 7'h20);
    wire inst_xor   = (opcode == 7'b011_0011) && (funct3 == 3'h4) && (funct7 == 7'h00);
    wire inst_or    = (opcode == 7'b011_0011) && (funct3 == 3'h6) && (funct7 == 7'h00);
    wire inst_and   = (opcode == 7'b011_0011) && (funct3 == 3'h7) && (funct7 == 7'h00);
    wire inst_sll   = (opcode == 7'b011_0011) && (funct3 == 3'h1) && (funct7 == 7'h00);
    wire inst_srl   = (opcode == 7'b011_0011) && (funct3 == 3'h5) && (funct7 == 7'h00);
    wire inst_sra   = (opcode == 7'b011_0011) && (funct3 == 3'h5) && (funct7 == 7'h20);
    wire inst_slt   = (opcode == 7'b011_0011) && (funct3 == 3'h2) && (funct7 == 7'h00);
    wire inst_sltu  = (opcode == 7'b011_0011) && (funct3 == 3'h3) && (funct7 == 7'h00);
    wire inst_sraw  = (opcode == 7'b011_1011) && (funct3 == 3'h5) && (funct7 == 7'h20);
    wire inst_srlw  = (opcode == 7'b011_1011) && (funct3 == 3'h5) && (funct7 == 7'h00);
    wire inst_subw  = (opcode == 7'b011_1011) && (funct3 == 3'h0) && (funct7 == 7'h20);
    wire inst_sllw  = (opcode == 7'b011_1011) && (funct3 == 3'h1) && (funct7 == 7'h00);
    wire inst_addw  = (opcode == 7'b011_1011) && (funct3 == 3'h0) && (funct7 == 7'h00); 

    wire inst_div   = (opcode == 7'b011_0011) && (funct3 == 3'h4) && (funct7 == 7'h01);
    wire inst_divw  = (opcode == 7'b011_1011) && (funct3 == 3'h4) && (funct7 == 7'h01);
    wire inst_mul   = (opcode == 7'b011_0011) && (funct3 == 3'h0) && (funct7 == 7'h01);
    wire inst_mulw  = (opcode == 7'b011_1011) && (funct3 == 3'h0) && (funct7 == 7'h01);
    wire inst_rem   = (opcode == 7'b011_0011) && (funct3 == 3'h6) && (funct7 == 7'h01);
    wire inst_remw  = (opcode == 7'b011_1011) && (funct3 == 3'h6) && (funct7 == 7'h01);
    wire inst_divu  = (opcode == 7'b011_0011) && (funct3 == 3'h5) && (funct7 == 7'h01);
    wire inst_divuw = (opcode == 7'b011_1011) && (funct3 == 3'h5) && (funct7 == 7'h01);
    wire inst_remu  = (opcode == 7'b011_0011) && (funct3 == 3'h7) && (funct7 == 7'h01);
    wire inst_remuw = (opcode == 7'b011_1011) && (funct3 == 3'h7) && (funct7 == 7'h01);
    /* -------- I-Type --------------------*/
    wire inst_addi = (opcode == 7'b001_0011) && (funct3 == 3'h0);
    wire inst_xori = (opcode == 7'b001_0011) && (funct3 == 3'h4);
    wire inst_ori  = (opcode == 7'b001_0011) && (funct3 == 3'h6);
    wire inst_andi = (opcode == 7'b001_0011) && (funct3 == 3'h7);
    wire inst_slli = (opcode == 7'b001_0011) && (funct3 == 3'h1) && (funct7[6:1] == 6'h00); //中文手册有错，64位是6个0，32位才是7个0
    wire inst_srli = (opcode == 7'b001_0011) && (funct3 == 3'h5) && (funct7[6:1] == 6'h00);
    wire inst_srai = (opcode == 7'b001_0011) && (funct3 == 3'h5) && (funct7[6:1] == 6'h10);
    wire inst_slti = (opcode == 7'b001_0011) && (funct3 == 3'h2);
    wire inst_sltiu = (opcode == 7'b001_0011) && (funct3 == 3'h3);
    wire inst_slliw = (opcode == 7'b001_1011) && (funct3 == 3'h1) && (funct7 == 7'h00); //中文手册有错，shamt[5]==0才有效
    wire inst_sraiw = (opcode == 7'b001_1011) && (funct3 == 3'h5) && (funct7 == 7'h20);
    wire inst_srliw = (opcode == 7'b001_1011) && (funct3 == 3'h5) && (funct7 == 7'h00);
    wire inst_addiw = (opcode == 7'b001_1011) && (funct3 == 3'h0);

    wire inst_jalr = (opcode == 7'b110_0111) && (funct3 == 3'h0);
    wire inst_ebreak = (id_inst_i == `INST_EBREAK);

    wire inst_ecall = (opcode == 7'b111_0011) && (id_inst_i[31:7] == 'd0);
    wire inst_mret  = (opcode == 7'b111_0011) && (id_inst_i[19:7] == 'd0) 
                      && (id_inst_i[24:20] == 5'b0_0010) && (funct7 == 7'b001_1000);
    wire inst_csrrs  = (opcode == 7'b111_0011) && (funct3 == 3'h2);
    wire inst_csrrw  = (opcode == 7'b111_0011) && (funct3 == 3'h1);
    wire inst_csrrsi = (opcode == 7'b111_0011) && (funct3 == 3'h6);
    wire inst_csrrwi = (opcode == 7'b111_0011) && (funct3 == 3'h5);
    //Load
    wire inst_lb  = (opcode == 7'b000_0011) && (funct3 == 3'h0);
    wire inst_lh  = (opcode == 7'b000_0011) && (funct3 == 3'h1);
    wire inst_lw  = (opcode == 7'b000_0011) && (funct3 == 3'h2);
    wire inst_ld  = (opcode == 7'b000_0011) && (funct3 == 3'h3);
    wire inst_lbu = (opcode == 7'b000_0011) && (funct3 == 3'h4);
    wire inst_lhu = (opcode == 7'b000_0011) && (funct3 == 3'h5);
    wire inst_lwu = (opcode == 7'b000_0011) && (funct3 == 3'h6);
    /* -------- S-Type --------------------*/
    wire inst_sb = (opcode == 7'b010_0011) && (funct3 == 3'h0);
    wire inst_sh = (opcode == 7'b010_0011) && (funct3 == 3'h1);
    wire inst_sw = (opcode == 7'b010_0011) && (funct3 == 3'h2);
    wire inst_sd = (opcode == 7'b010_0011) && (funct3 == 3'h3);
    /* -------- B-Type --------------------*/
    wire inst_beq = (opcode == 7'b110_0011) && (funct3 == 3'h0);
    wire inst_bne = (opcode == 7'b110_0011) && (funct3 == 3'h1);
    wire inst_blt = (opcode == 7'b110_0011) && (funct3 == 3'h4);
    wire inst_bge = (opcode == 7'b110_0011) && (funct3 == 3'h5);
    wire inst_bltu = (opcode == 7'b110_0011) && (funct3 == 3'h6);
    wire inst_bgeu = (opcode == 7'b110_0011) && (funct3 == 3'h7);
    /* -------- J-Type --------------------*/
    wire inst_jal = (opcode == 7'b110_1111);
    /* -------- U-Type --------------------*/
    wire inst_lui   = (opcode == 7'b011_0111);
    wire inst_auipc = (opcode == 7'b001_0111);


//------------DPIC（检测未知指令）---------------------------
    wire inst_valid = inst_add | inst_sub | inst_xor | inst_or | inst_and
                     |inst_sll | inst_srl | inst_sra | inst_slt | inst_sltu
                     |inst_addi | inst_xori | inst_ori | inst_andi | inst_slli
                     |inst_srli | inst_srai | inst_slti | inst_sltiu | inst_lb
                     |inst_lh | inst_lw | inst_ld | inst_lbu | inst_lhu
                     |inst_lwu | inst_sb | inst_sh | inst_sw | inst_sd
                     |inst_beq | inst_bne | inst_blt | inst_bge | inst_bltu
                     |inst_bgeu | inst_jal | inst_jalr | inst_lui | inst_auipc
                     |inst_slliw | inst_sraiw | inst_srliw | inst_addiw | inst_div
                     |inst_divw | inst_mul | inst_mulw | inst_remw | inst_sraw
                     |inst_srlw | inst_subw | inst_sllw | inst_divu | inst_divuw
                     |inst_remuw | inst_rem | inst_remu | inst_addw
                     |inst_csrrs | inst_csrrw | inst_csrrsi | inst_csrrwi
                     |inst_ecall | inst_mret
                     |inst_ebreak;
/* --------------------- Generate imm ----------------------*/
    wire [`DataBus_WIDTH-1:0] immI = {{52{id_inst_i[31]}}, id_inst_i[31:20]};
    wire [`DataBus_WIDTH-1:0] immS = {{52{id_inst_i[31]}}, id_inst_i[31:25], id_inst_i[11:7]};
    wire [`DataBus_WIDTH-1:0] immB = {{51{id_inst_i[31]}}, id_inst_i[31], id_inst_i[7], id_inst_i[30:25], id_inst_i[11:8], 1'b0};
    wire [`DataBus_WIDTH-1:0] immJ = {{43{id_inst_i[31]}}, id_inst_i[31], id_inst_i[19:12], id_inst_i[20], id_inst_i[30:21], 1'b0};
    wire [`DataBus_WIDTH-1:0] immU = {{32{id_inst_i[31]}}, id_inst_i[31:12], 12'h0};

    wire type_I = inst_addi | inst_xori | inst_ori | inst_andi | inst_slli
                 |inst_srli | inst_srai | inst_slti | inst_sltiu | inst_lb
                 |inst_lh | inst_lw | inst_ld | inst_lbu | inst_lhu
                 |inst_lwu | inst_jalr | inst_slliw | inst_sraiw | inst_srliw
                 |inst_addiw;

    wire type_S = inst_sb | inst_sh | inst_sw | inst_sd;

    wire type_B = inst_beq | inst_bne | inst_blt | inst_bge | inst_bltu
                 |inst_bgeu;
    
    wire type_J = inst_jal;

    wire type_U = inst_lui | inst_auipc;
    
    wire [`DataBus_WIDTH-1:0] imm = ({`DataBus_WIDTH{type_I}} & immI)
                                   |({`DataBus_WIDTH{type_S}} & immS)
                                   |({`DataBus_WIDTH{type_B}} & immB)
                                   |({`DataBus_WIDTH{type_J}} & immJ)
                                   |({`DataBus_WIDTH{type_U}} & immU);

    assign id_imm_o = imm;
/* --------------------- Generate reg_ren 读寄存器使能 ----------------------*/
    wire reg1_ren =  inst_add | inst_sub | inst_xor | inst_or | inst_and
                    |inst_sll | inst_srl | inst_sra | inst_slt | inst_sltu
                    |inst_addi | inst_xori | inst_ori | inst_andi | inst_slli
                    |inst_srli | inst_srai | inst_slti | inst_sltiu | inst_lb
                    |inst_lh | inst_lw | inst_ld | inst_lbu | inst_lhu
                    |inst_lwu | inst_sb | inst_sh | inst_sw | inst_sd
                    |inst_beq | inst_bne | inst_blt | inst_bge | inst_bltu
                    |inst_bgeu | inst_jalr | inst_slliw | inst_sraiw | inst_srliw
                    |inst_addiw
                    |inst_div
                    |inst_divw | inst_mul | inst_mulw | inst_remw | inst_sraw
                    |inst_srlw | inst_subw | inst_sllw | inst_divu | inst_divuw
                    |inst_remuw | inst_rem | inst_remu | inst_addw
                    |inst_csrrs | inst_csrrw;

    
    wire reg2_ren =  inst_add | inst_sub | inst_xor | inst_or | inst_and
                    |inst_sll | inst_srl | inst_sra | inst_slt | inst_sltu
                    |inst_sb | inst_sh | inst_sw | inst_sd
                    |inst_beq | inst_bne | inst_blt | inst_bge | inst_bltu
                    |inst_bgeu
                    |inst_div
                    |inst_divw | inst_mul | inst_mulw | inst_remw | inst_sraw
                    |inst_srlw | inst_subw | inst_sllw | inst_divu | inst_divuw
                    |inst_remuw | inst_rem | inst_remu | inst_addw;

/* --------------------- rs1, rs2, pc ----------------------*/
    wire [`DataBus_WIDTH-1:0] reg1_rdata, reg2_rdata; //寄存器读出的数据

    assign id_rs1_o = reg1_rdata;
    assign id_rs2_o = reg2_rdata;
    
    assign id_pc_o  = id_pc_i;
/* --------------------- Generate alusel(逻辑，算术，移位，乘法，除法，取余，分支(包含跳转)) ----------------------*/
    wire alusel_logic      = inst_xor | inst_or | inst_and | inst_xori | inst_ori 
                            |inst_andi; 

    wire alusel_shift      = inst_sll | inst_srl | inst_sra | inst_slli | inst_srli
                            |inst_srai| inst_slliw | inst_sraiw | inst_srliw | inst_sraw
                            |inst_srlw | inst_sllw;

    wire alusel_arithmetic = inst_add | inst_sub | inst_slt | inst_sltu | inst_slti 
                            |inst_sltiu | inst_addi | inst_lb | inst_lh |inst_lw
                            |inst_ld | inst_lbu | inst_lhu | inst_lwu | inst_sb
                            |inst_sh | inst_sw | inst_sd | inst_lui |inst_auipc
                            |inst_addiw | inst_subw | inst_addw;
    
    wire alusel_branch     = inst_beq | inst_bne | inst_blt | inst_bge | inst_bltu
                            |inst_bgeu | inst_jal | inst_jalr;
    
    wire alusel_div        = inst_div | inst_divw | inst_divu | inst_divuw;

    wire alusel_mul        = inst_mul | inst_mulw;

    wire alusel_rem        = inst_rem | inst_remw | inst_remu | inst_remuw;

    wire alusel_csr        = inst_csrrs | inst_csrrsi | inst_csrrw | inst_csrrwi;

    assign id_alusel_o = ({`Alusel_WIDTH{alusel_logic}} & `ALU_TYPE_LOGIC)
                        |({`Alusel_WIDTH{alusel_shift}} & `ALU_TYPE_SHIFT)
                        |({`Alusel_WIDTH{alusel_arithmetic}} & `ALU_TYPE_ARITHMETIC)
                        |({`Alusel_WIDTH{alusel_branch}} & `ALU_TYPE_BRANCH)
                        |({`Alusel_WIDTH{alusel_div}} & `ALU_TYPE_DIV)
                        |({`Alusel_WIDTH{alusel_mul}} & `ALU_TYPE_MUL)
                        |({`Alusel_WIDTH{alusel_rem}} & `ALU_TYPE_REM)
                        |({`Alusel_WIDTH{alusel_csr}} & `ALU_TYPE_CSR);
/* --------------------- Generate aluop --------------------*/
    assign id_aluop_o =  ({`Aluop_WIDTH{inst_add}} & `ALU_OP_ADD)
                        |({`Aluop_WIDTH{inst_sub}} & `ALU_OP_SUB)
                        |({`Aluop_WIDTH{inst_xor}} & `ALU_OP_XOR)
                        |({`Aluop_WIDTH{inst_or}}  & `ALU_OP_OR)
                        |({`Aluop_WIDTH{inst_and}} & `ALU_OP_AND)
                        |({`Aluop_WIDTH{inst_sll}} & `ALU_OP_SLL)
                        |({`Aluop_WIDTH{inst_srl}} & `ALU_OP_SRL)
                        |({`Aluop_WIDTH{inst_sra}} & `ALU_OP_SRA)
                        |({`Aluop_WIDTH{inst_slt}} & `ALU_OP_SLT)
                        |({`Aluop_WIDTH{inst_sltu}} & `ALU_OP_SLTU)
                        |({`Aluop_WIDTH{inst_addi}} & `ALU_OP_ADDI)
                        |({`Aluop_WIDTH{inst_xori}} & `ALU_OP_XORI)
                        |({`Aluop_WIDTH{inst_ori}} & `ALU_OP_ORI)
                        |({`Aluop_WIDTH{inst_andi}} & `ALU_OP_ANDI)
                        |({`Aluop_WIDTH{inst_slli}} & `ALU_OP_SLLI)
                        |({`Aluop_WIDTH{inst_srli}} & `ALU_OP_SRLI)
                        |({`Aluop_WIDTH{inst_srai}} & `ALU_OP_SRAI)
                        |({`Aluop_WIDTH{inst_slti}} & `ALU_OP_SLTI)
                        |({`Aluop_WIDTH{inst_sltiu}} & `ALU_OP_SLTIU)
                        |({`Aluop_WIDTH{inst_lb}} & `ALU_OP_LB)
                        |({`Aluop_WIDTH{inst_lh}} & `ALU_OP_LH)
                        |({`Aluop_WIDTH{inst_lw}} & `ALU_OP_LW)
                        |({`Aluop_WIDTH{inst_ld}} & `ALU_OP_LD)
                        |({`Aluop_WIDTH{inst_lbu}} & `ALU_OP_LBU)
                        |({`Aluop_WIDTH{inst_lhu}} & `ALU_OP_LHU)
                        |({`Aluop_WIDTH{inst_lwu}} & `ALU_OP_LWU)
                        |({`Aluop_WIDTH{inst_sb}} & `ALU_OP_SB)
                        |({`Aluop_WIDTH{inst_sh}} & `ALU_OP_SH)
                        |({`Aluop_WIDTH{inst_sw}} & `ALU_OP_SW)
                        |({`Aluop_WIDTH{inst_sd}} & `ALU_OP_SD)
                        |({`Aluop_WIDTH{inst_beq}} & `ALU_OP_BEQ)
                        |({`Aluop_WIDTH{inst_bne}} & `ALU_OP_BNE)
                        |({`Aluop_WIDTH{inst_blt}} & `ALU_OP_BLT)
                        |({`Aluop_WIDTH{inst_bge}} & `ALU_OP_BGE)
                        |({`Aluop_WIDTH{inst_bltu}} & `ALU_OP_BLTU)
                        |({`Aluop_WIDTH{inst_bgeu}} & `ALU_OP_BGEU)
                        |({`Aluop_WIDTH{inst_jal}} & `ALU_OP_JAL)
                        |({`Aluop_WIDTH{inst_jalr}} & `ALU_OP_JALR)
                        |({`Aluop_WIDTH{inst_lui}} & `ALU_OP_LUI)
                        |({`Aluop_WIDTH{inst_auipc}} & `ALU_OP_AUIPC)
                        |({`Aluop_WIDTH{inst_slliw}} & `ALU_OP_SLLIW)
                        |({`Aluop_WIDTH{inst_sraiw}} & `ALU_OP_SRAIW)
                        |({`Aluop_WIDTH{inst_srliw}} & `ALU_OP_SRLIW)
                        |({`Aluop_WIDTH{inst_addiw}} & `ALU_OP_ADDIW)
                        |({`Aluop_WIDTH{inst_sraw}} & `ALU_OP_SRAW)
                        |({`Aluop_WIDTH{inst_srlw}} & `ALU_OP_SRLW)
                        |({`Aluop_WIDTH{inst_subw}} & `ALU_OP_SUBW)
                        |({`Aluop_WIDTH{inst_sllw}} & `ALU_OP_SLLW)
                        |({`Aluop_WIDTH{inst_addw}} & `ALU_OP_ADDW)
                        |({`Aluop_WIDTH{inst_div}} & `ALU_OP_DIV)
                        |({`Aluop_WIDTH{inst_divw}} & `ALU_OP_DIVW)
                        |({`Aluop_WIDTH{inst_mul}} & `ALU_OP_MUL)
                        |({`Aluop_WIDTH{inst_mulw}} & `ALU_OP_MULW)
                        |({`Aluop_WIDTH{inst_rem}} & `ALU_OP_REM)
                        |({`Aluop_WIDTH{inst_remw}} & `ALU_OP_REMW)
                        |({`Aluop_WIDTH{inst_divu}} & `ALU_OP_DIVU)
                        |({`Aluop_WIDTH{inst_divuw}} & `ALU_OP_DIVUW)
                        |({`Aluop_WIDTH{inst_remu}} & `ALU_OP_REMU)
                        |({`Aluop_WIDTH{inst_remuw}} & `ALU_OP_REMUW)
                        |({`Aluop_WIDTH{inst_csrrs}} & `ALU_OP_CSRRS)
                        |({`Aluop_WIDTH{inst_csrrsi}} & `ALU_OP_CSRRSI)
                        |({`Aluop_WIDTH{inst_csrrw}} & `ALU_OP_CSRRW)
                        |({`Aluop_WIDTH{inst_csrrwi}} & `ALU_OP_CSRRWI);

/* --------------------- Generate wreg --------------------*/
    assign id_reg_wen_o =  inst_add | inst_sub | inst_xor | inst_or | inst_and
                          |inst_sll | inst_srl | inst_sra | inst_slt | inst_sltu
                          |inst_addi | inst_xori | inst_ori | inst_andi | inst_slli
                          |inst_srli | inst_srai | inst_slti | inst_sltiu | inst_lb
                          |inst_lh | inst_lw | inst_ld | inst_lbu | inst_lhu
                          |inst_lwu | inst_jal | inst_jalr | inst_lui | inst_auipc
                          |inst_slliw | inst_sraiw | inst_srliw | inst_addiw
                          |inst_div
                          |inst_divw | inst_mul | inst_mulw | inst_remw | inst_sraw
                          |inst_srlw | inst_subw | inst_sllw | inst_divu | inst_divuw
                          |inst_remuw | inst_rem | inst_remu | inst_addw
                          |inst_csrrs | inst_csrrsi | inst_csrrw | inst_csrrwi;
                          
/* --------------------- Generate reg_waddr --------------------*/
    assign id_reg_waddr_o = rd_addr;
/* --------------------- Generate mem_ren --------------------*/
    assign id_mem_ren_o = inst_lb | inst_lh | inst_lw | inst_ld | inst_lbu
                         |inst_lhu | inst_lwu;
/* --------------------- Generate mem_wen --------------------*/
    assign id_mem_wen_o = inst_sb | inst_sh | inst_sw | inst_sd;
/* --------------------- Generate mem_mask --------------------*/
    assign id_mem_mask_o = funct3;
/* --------------------- Generate csrzimm ----------------------*/
    assign id_csrzimm_o = {59'd0, id_inst_i[19:15]};
/* --------------------- Generate csr_ren ----------------------*/
    wire csr_ren = inst_csrrs | inst_csrrsi | inst_csrrw | inst_csrrwi;
/* --------------------- Generate csr_raddr ----------------------*/
    wire [`CsrAddrBus_WIDTH-1:0] csr_raddr = id_inst_i[31:20];
/* --------------------- Generate csr_wen ----------------------*/
    assign id_csr_wen_o = inst_csrrs | inst_csrrsi | inst_csrrw | inst_csrrwi;
/* --------------------- Generate csr_waddr ----------------------*/
    assign id_csr_waddr_o = id_inst_i[31:20];
/* --------------------- Generate except_ecall ----------------------*/
    assign id_except_ecall_o = inst_ecall;
/* --------------------- Generate except_mret ----------------------*/
    assign id_except_mret_o  = inst_mret;
/* --------------------------- GPR --------------------------*/
    registerfile registerfile_inst (
        .reg_clk_i (id_clk_i),
        .reg_rst_n_i (id_rst_n_i),
        .reg_wen_i (id_reg_wen_i),
        .reg_waddr_i (id_reg_waddr_i),
        .reg_wdata_i (id_reg_wdata_i),
        .reg1_ren_i (reg1_ren),
        .reg1_raddr_i (rs1_addr),
        .reg1_rdata_o (reg1_rdata),
        .reg2_ren_i (reg2_ren),
        .reg2_raddr_i (rs2_addr),
        .reg2_rdata_o (reg2_rdata)
    );
/* --------------------------- CSR --------------------------*/
    csr csr_inst (
        .csr_clk_i         (id_clk_i),
        .csr_rst_n_i       (id_rst_n_i),
        .csr_ren_i         (csr_ren),
        .csr_raddr_i       (csr_raddr),
        .csr_wen_i         (id_csr_wen_i),
        .csr_waddr_i       (id_csr_waddr_i),
        .csr_wdata_i       (id_csr_wdata_i),
        .csr_execpttype_i  (id_excepttype_i),
        .csr_exceptpc_i    (id_exceptpc_i),
        .csr_rdata_o       (id_csr_rdata_o),
        .csr_mtvecdata_o   (id_mtvecdata_o),
        .csr_mepcdata_o    (id_mepcdata_o),
        .csr_mstatus_mie_o (id_mstatus_mie_o),
        .csr_mie_mtie_o    (id_mie_mtie_o)
    );

//---------DPIC 仿真时检测未知指令-----------
    import "DPI-C" function void unkown_inst();
    always @ (*) begin
        if (~inst_valid && (id_rst_n_i == `RestDisable)) begin
            unkown_inst();
        end
    end

/*
//消除Verilator 的 Warning
wire _unused_ok = &{1'b0,
                    inst_valid,
                    1'b0};
*/
endmodule
