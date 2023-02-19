/*-------------------------------------------------------------------------
// Module:  define
// File:    defines.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: the constant definition
--------------------------------------------------------------------------*/

`timescale 1ns/1ps

`define RegAddrBus_WIDTH              5
`define DataBus_WIDTH                 64
`define InstBus_WIDTH                 32
`define Alusel_WIDTH                  4
`define Aluop_WIDTH                   16
`define CsrAddrBus_WIDTH              12
`define ExceptType_WIDTH              4

`define RestEnable                    1'b0
`define RestDisable                   1'b1

`define WriteEnable                   1'b1
`define WriteDisable                  1'b0
`define ReadEnable                    1'b1
`define ReadDisable                   1'b0
`define ControlEnable                 1'b1
`define ControlDisable                1'b0

`define REBOOT_PC                     64'h0000_0000_8000_0000
`define DW_ZERO                       64'd0

`define INST_EBREAK                   32'b0000_0000_0001_0000_0000_0000_0111_0011

`define GPR0                          5'b0_0000 

`define ALU_TYPE_LOGIC                4'd1
`define ALU_TYPE_SHIFT                4'd2
`define ALU_TYPE_ARITHMETIC           4'd3
`define ALU_TYPE_BRANCH               4'd4
`define ALU_TYPE_MUL                  4'd5
`define ALU_TYPE_DIV                  4'd6
`define ALU_TYPE_REM                  4'd7
`define ALU_TYPE_CSR                  4'd8

/* --------------------- ALUop ----------------------*/
`define ALU_OP_ADD                    16'd1
`define ALU_OP_SUB                    16'd2
`define ALU_OP_XOR                    16'd3
`define ALU_OP_OR                     16'd4
`define ALU_OP_AND                    16'd5
`define ALU_OP_SLL                    16'd6
`define ALU_OP_SRL                    16'd7
`define ALU_OP_SRA                    16'd8
`define ALU_OP_SLT                    16'd9
`define ALU_OP_SLTU                   16'd10
`define ALU_OP_ADDI                   16'd11
`define ALU_OP_XORI                   16'd12
`define ALU_OP_ORI                    16'd13
`define ALU_OP_ANDI                   16'd14
`define ALU_OP_SLLI                   16'd15
`define ALU_OP_SRLI                   16'd16
`define ALU_OP_SRAI                   16'd17
`define ALU_OP_SLTI                   16'd18
`define ALU_OP_SLTIU                  16'd19
`define ALU_OP_LB                     16'd20
`define ALU_OP_LH                     16'd21
`define ALU_OP_LW                     16'd22
`define ALU_OP_LD                     16'd23
`define ALU_OP_LBU                    16'd24
`define ALU_OP_LHU                    16'd25
`define ALU_OP_LWU                    16'd26
`define ALU_OP_SB                     16'd27
`define ALU_OP_SH                     16'd28
`define ALU_OP_SW                     16'd29
`define ALU_OP_SD                     16'd30
`define ALU_OP_BEQ                    16'd31
`define ALU_OP_BNE                    16'd32
`define ALU_OP_BLT                    16'd33
`define ALU_OP_BGE                    16'd34
`define ALU_OP_BLTU                   16'd35
`define ALU_OP_BGEU                   16'd36
`define ALU_OP_JAL                    16'd37
`define ALU_OP_JALR                   16'd38
`define ALU_OP_LUI                    16'd39
`define ALU_OP_AUIPC                  16'd40
`define ALU_OP_SLLIW                  16'd41
`define ALU_OP_SRAIW                  16'd42
`define ALU_OP_SRLIW                  16'd43
`define ALU_OP_ADDIW                  16'd44
`define ALU_OP_DIV                    16'd45
`define ALU_OP_DIVW                   16'd46
`define ALU_OP_MUL                    16'd47
`define ALU_OP_MULW                   16'd48
`define ALU_OP_REMW                   16'd49
`define ALU_OP_SRAW                   16'd50
`define ALU_OP_SRLW                   16'd51
`define ALU_OP_SUBW                   16'd52
`define ALU_OP_SLLW                   16'd53
`define ALU_OP_DIVU                   16'd54
`define ALU_OP_DIVUW                  16'd55
`define ALU_OP_REMUW                  16'd56
`define ALU_OP_REM                    16'd57
`define ALU_OP_REMU                   16'd58
`define ALU_OP_ADDW                   16'd59
`define ALU_OP_CSRRS                  16'd60
`define ALU_OP_CSRRSI                 16'd61
`define ALU_OP_CSRRW                  16'd62
`define ALU_OP_CSRRWI                 16'd63
/* --------------------- CSR ----------------------*/
//`define CSR_MCYCLE                    12'hb00
`define CSR_MSTATUS                   12'h300
`define CSR_MTVEC                     12'h305
`define CSR_MEPC                      12'h341
`define CSR_MCAUSE                    12'h342
`define CSR_MIE                       12'h304
`define CSR_MIP                       12'h344
//`define CSR_MSCRATCH                  12'h340

`define ExceptType_Ecall              4'b0001
`define ExceptType_Mret               4'b0010
`define ExceptType_TimerIntr          4'b0100
/* --------------------- MMIO ----------------------*/
`define MMIO_MTIME                    64'h200_BFF8
`define MMIO_MTIMECMP                 64'h200_4000

