/*-------------------------------------------------------------------------
// Module:  gpr
// File:    registerfile.v
// Author:  CYL
// E-mail:  2321573062@qq.com
// Description: 32位通用寄存器堆（读+写）
--------------------------------------------------------------------------*/
`include "../mycpu_single_cycle/defines.v"

module registerfile (
    input wire                              reg_clk_i,
    input wire                              reg_rst_n_i,
    /*---------------------- write port---------------*/
    input wire                              reg_wen_i,
    input wire [`RegAddrBus_WIDTH-1:0]      reg_waddr_i,
    input wire [`DataBus_WIDTH-1:0]         reg_wdata_i,
    /*---------------------- read port1 ---------------*/
    input wire                              reg1_ren_i,
    input wire [`RegAddrBus_WIDTH-1:0]      reg1_raddr_i,
    output reg [`DataBus_WIDTH-1:0]         reg1_rdata_o,
    /*---------------------- read port2 ---------------*/
    input wire                              reg2_ren_i,
    input wire [`RegAddrBus_WIDTH-1:0]      reg2_raddr_i,
    output reg [`DataBus_WIDTH-1:0]         reg2_rdata_o
);

    reg [`DataBus_WIDTH-1:0] gpr [31:0];
/*---------------------- write gpr ---------------*/
    always @ (posedge reg_clk_i) begin
        if (reg_rst_n_i == `RestDisable) begin
            if ((reg_wen_i == `WriteEnable) && (reg_waddr_i != `GPR0)) begin
                gpr[reg_waddr_i] <= reg_wdata_i;
            end
        end
    end
/*---------------------- read gpr ---------------*/
    always @ (*) begin
        if ((reg1_ren_i == `ReadEnable) && (reg1_raddr_i != `GPR0)) begin
            reg1_rdata_o = gpr[reg1_raddr_i];
        end
        else if ((reg1_ren_i == `ReadEnable) && (reg1_raddr_i == `GPR0)) begin
            reg1_rdata_o = `DW_ZERO;
        end
        else begin
            reg1_rdata_o = `DW_ZERO;
        end
    end

    always @ (*) begin
        if ((reg2_ren_i == `ReadEnable) && (reg2_raddr_i != `GPR0)) begin
            reg2_rdata_o = gpr[reg2_raddr_i];
        end
        else if ((reg2_ren_i == `ReadEnable) && (reg2_raddr_i == `GPR0)) begin
            reg2_rdata_o = `DW_ZERO;
        end
        else begin
            reg2_rdata_o = `DW_ZERO;
        end
    end

//----------------DPIC---------------------------------------
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    always @ (*) begin
        set_gpr_ptr(gpr);  // gpr为通用寄存器的二维数组变量
    end

endmodule
