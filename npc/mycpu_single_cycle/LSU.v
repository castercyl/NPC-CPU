/*-------------------------------------------------------------------------
// Module:  LSU
// File:    LSU.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 1)取回访存结果; 2)向内存写入结果; 3)准备好写入reg的值; 4)检测生成定时器中断标志 timer_intr
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module LSU (
    /* --------signals from IDU --------------------*/
    input wire                              ls_mstatus_mie_i,
    input wire                              ls_mie_mtie_i,
    /* --------signals from Clint --------------------*/
    input wire                              ls_timestop_i, //mtime >= mtimecmp
    /* --------signals from EXU --------------------*/
    input wire                              ls_reg_wen_i,
    input wire [`RegAddrBus_WIDTH-1:0]      ls_reg_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         ls_aluresult_i, //reg_wdata or mem_addr
    input wire                              ls_mem_wen_i, 
    input wire                              ls_mem_ren_i,
    input wire [2:0]                        ls_mem_mask_i,
    input wire [`DataBus_WIDTH-1:0]         ls_rs2_i,
    input wire [`DataBus_WIDTH-1:0]         ls_pc_i,
    //input wire                              ls_except_ecall_i,
    //input wire                              ls_except_mret_i,
    input wire                              ls_csr_wen_i,
    input wire [`CsrAddrBus_WIDTH-1:0]      ls_csr_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         ls_csr_wdata_i,
    /* --------signals from Mem_crossbar --------------------*/
    input wire [`DataBus_WIDTH-1:0]         ls_mmio_busrdata_i,
    /* --------signals to Mem_crossbar --------------------*/
    output wire                             ls_mmio_wen_o,
    output wire                             ls_mmio_ren_o,
    output wire [`DataBus_WIDTH-1:0]        ls_mmio_buswdata_o,
    output wire [`DataBus_WIDTH-1:0]        ls_mmio_rwaddr_o, //read or write
    output reg [7:0]                        ls_mem_wmask_o,  //总线写位置标志(掩码)
    /* --------signals to WBU --------------------*/
    output wire                             ls_reg_wen_o,
    output wire [`RegAddrBus_WIDTH-1:0]     ls_reg_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        ls_reg_wdata_o,
    output wire                             ls_csr_wen_o,
    output wire [`CsrAddrBus_WIDTH-1:0]     ls_csr_waddr_o,
    output wire [`DataBus_WIDTH-1:0]        ls_csr_wdata_o,
    /* --------signals to CTRL --------------------*/
    output wire                             ls_except_timerintr_o,
    output wire [`DataBus_WIDTH-1:0]        ls_exceptpc_o,
    //仿真调试需要
    //input wire [`DataBus_WIDTH-1:0]         ls_pc_i,
    output wire [`DataBus_WIDTH-1:0]        ls_pc_o,
    input wire [`InstBus_WIDTH-1:0]         ls_inst_i,
    output wire [`InstBus_WIDTH-1:0]        ls_inst_o,
    output wire [`DataBus_WIDTH-1:0]        ls_mempc_o

);

    //仿真调试需要
    assign ls_pc_o        = ls_pc_i;
    assign ls_inst_o      = ls_inst_i;
    assign ls_mempc_o     = ls_pc_i;
    //-----------
/* --------------------- Generate Time_intr ------------------------*/
    wire timer_intr = ls_timestop_i && ls_mstatus_mie_i && ls_mie_mtie_i; //如果有效，清空所有写信号，此次指令无效
    assign ls_except_timerintr_o = timer_intr;
/* -----------------------------------------------------------------*/
    assign ls_reg_wen_o   = (timer_intr) ? `WriteDisable : ls_reg_wen_i;
    assign ls_reg_waddr_o = ls_reg_waddr_i;
    assign ls_csr_wen_o   = (timer_intr) ? `WriteDisable : ls_csr_wen_i;
    assign ls_csr_waddr_o = ls_csr_waddr_i;
    assign ls_csr_wdata_o = ls_csr_wdata_i;
    assign ls_exceptpc_o  = ls_pc_i;

    assign ls_mmio_rwaddr_o  = ls_aluresult_i;

/* --------------------- Read from Dram ------------------------*/
    wire mem_data_extend;
    reg [`DataBus_WIDTH-1:0] lb_rdata, lh_rdata, lw_rdata;
    wire [`DataBus_WIDTH-1:0] ld_rdata;
    reg [`DataBus_WIDTH-1:0] mem_rdata;
    assign ls_mmio_ren_o     = ls_mem_ren_i;
    assign mem_data_extend  = ~ls_mem_mask_i[2];
    /* --------------------- lb ------------------------*/
    always @ (*) begin
        case (ls_mmio_rwaddr_o[2:0])
            3'd0: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[7] && mem_data_extend}}, ls_mmio_busrdata_i[7:0]};
            end
            3'd1: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[15] && mem_data_extend}}, ls_mmio_busrdata_i[15:8]};
            end
            3'd2: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[23] && mem_data_extend}}, ls_mmio_busrdata_i[23:16]};
            end
            3'd3: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[31] && mem_data_extend}}, ls_mmio_busrdata_i[31:24]};
            end
            3'd4: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[39] && mem_data_extend}}, ls_mmio_busrdata_i[39:32]};
            end
            3'd5: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[47] && mem_data_extend}}, ls_mmio_busrdata_i[47:40]};
            end
            3'd6: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[55] && mem_data_extend}}, ls_mmio_busrdata_i[55:48]};
            end
            3'd7: begin
                lb_rdata = {{56{ls_mmio_busrdata_i[63] && mem_data_extend}}, ls_mmio_busrdata_i[63:56]};
            end
        endcase
    end
    /* --------------------- lh ------------------------*/
    always @ (*) begin
        case (ls_mmio_rwaddr_o[2:0])
            3'd0: begin
                lh_rdata = {{48{ls_mmio_busrdata_i[15] && mem_data_extend}}, ls_mmio_busrdata_i[15:0]};
            end
            3'd2: begin
                lh_rdata = {{48{ls_mmio_busrdata_i[31] && mem_data_extend}}, ls_mmio_busrdata_i[31:16]};
            end
            3'd4: begin
                lh_rdata = {{48{ls_mmio_busrdata_i[47] && mem_data_extend}}, ls_mmio_busrdata_i[47:32]};
            end
            3'd6: begin
                lh_rdata = {{48{ls_mmio_busrdata_i[63] && mem_data_extend}}, ls_mmio_busrdata_i[63:48]};
            end
            default: begin
                lh_rdata = 64'hFFFF_FFFF_FFFF_FFFF;
            end
        endcase
    end
    /* --------------------- lw ------------------------*/
    always @ (*) begin
        case (ls_mmio_rwaddr_o[2:0])
            3'd0: begin
                lw_rdata = {{32{ls_mmio_busrdata_i[31] && mem_data_extend}}, ls_mmio_busrdata_i[31:0]};
            end
            3'd4: begin
                lw_rdata = {{32{ls_mmio_busrdata_i[63] && mem_data_extend}}, ls_mmio_busrdata_i[63:32]};
            end
            default: begin
                lw_rdata = 64'hFFFF_FFFF_FFFF_FFFF;
            end
        endcase
    end
    /* --------------------- ld ------------------------*/
    assign ld_rdata = ls_mmio_busrdata_i;
    /* --------------------- select mem_rdata ------------------------*/
    always @ (*) begin
        case (ls_mem_mask_i[1:0])
            2'd0: begin               //lb or lbu
                mem_rdata = lb_rdata;
            end
            2'd1: begin               //lh or lhu
                mem_rdata = lh_rdata;
            end
            2'd2: begin               //lw or lwu
                mem_rdata = lw_rdata;
            end
            2'd3: begin               //ld
                mem_rdata = ld_rdata;
            end
        endcase
    end
/* --------------------- Write to Dram -------------------------*/
    assign ls_mmio_wen_o      =  (timer_intr) ? `WriteDisable : ls_mem_wen_i;
    assign ls_mmio_buswdata_o = ls_rs2_i;

    always @ (*) begin
        case (ls_mem_mask_i)
            3'b000: begin       //sb
                ls_mem_wmask_o = 8'b0000_0001 << ls_mmio_rwaddr_o[2:0];
            end
            3'b001: begin      //sh
                ls_mem_wmask_o = 8'b0000_0011 << ls_mmio_rwaddr_o[2:0];
            end
            3'b010: begin      //sw
                ls_mem_wmask_o = 8'b0000_1111 << ls_mmio_rwaddr_o[2:0];
            end
            3'b011: begin      //sd
                ls_mem_wmask_o = 8'b1111_1111;
            end
            default: begin
                ls_mem_wmask_o = 8'b0000_0000;
            end
        endcase
    end
/* --------------------- Generate reg_wdata --------------------*/
    assign ls_reg_wdata_o = (ls_mem_ren_i) ? mem_rdata : ls_aluresult_i;
/*
    import "DPI-C" function void wdram_test(
        input longint waddr, input longint rs1, input longint imm);

    always @ (*) begin
        if (ls_mem_wen_i == 1'b1)
            wdram_test (ls_pc_i, ls_mmio_rwaddr_o, ls_aluresult_i);
    end
*/

endmodule
