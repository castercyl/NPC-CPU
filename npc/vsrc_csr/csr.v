
`define CSR_MCYCLE          12'hb00
`define CSR_MSTATUS         12'h300
`define CSR_MTVEC           12'h305
`define CSR_MEPC            12'h341
`define CSR_MCAUSE          12'h342
`define CSR_MIE             12'h304
`define CSR_MIP             12'h344
`define CSR_MSCRATCH        12'h340
`define CSR_STATE_IDLE      3'b000
`define CSR_STATE_CSRRS     3'b001
`define CSR_STATE_CSRRW     3'b010
`define CSR_STATE_ECALL     3'b011
`define CSR_STATE_MRET      3'b100


module csr (
    input wire                          clk,
    input wire                          rst_n,

    //from ID
    //input wire [2:0]                    csr_state_i,

    input wire                          i_csr_timer_intr,
    input wire [63:0]                   i_csr_trap_pc,

    input wire                          i_csr_ecall,
    input wire                          i_csr_mret,
    input wire                          i_csr_ren,
    input wire [11:0]                   i_csr_raddr,
    input wire                          i_csr_wen,
    input wire [11:0]                   i_csr_waddr,
    input wire [63:0]                   i_csr_wdata,
    /*
    input wire [11:0]                   csr_w_addr_i,
    input wire                          csr_wen_i,
    input wire [63:0]                   csr_w_data_i,
    input wire [11:0]                   csr_r_addr_i,
    input wire                          csr_ren_i,
    input wire [63:0]                   csr_pc_i,
    */
    //from Clint
    //input wire                          i_Csr_clint_stop,

    //to ID
    output wire [63:0]                  o_csr_rdata, 
    //to Ctrl
    output wire                         o_csr_mstatus_mie,
    output wire                         o_csr_mie_mtie,
    output wire [63:0]                  o_csr_mtvec

    //output wire                         csr_reg_write_o,
    //output wire [63:0]                  csr_r_data_o,
    //output wire [63:0]                  csr_dnpc_o,
    //output wire                         o_Csr_timer_interreupt
);

    reg [63:0] mstatus, mepc, mcause, mtvec;

    assign o_csr_mstatus_mie = mstatus[3];
    assign o_csr_mie_mtie    = mie[7];
    //wire [63:0] tmpvalue_t;
//---------计时器中断相关---------
    reg [63:0] mie, mip;
    //wire timer_interreupt_flag;
    wire [63:0] mip_newvalue;

    assign mip_newvalue = (i_csr_timer_intr) ? 64'h80 : 64'h0;
    assign o_csr_mtvec  = mtvec;

    //assign timer_interreupt_flag = ((mstatus[3] == 1'b1) && (mie[7] == 1'b1) && (i_Csr_clint_stop)) ? 1'b1 : 1'b0;
    //assign mip_newvalue          = ((mstatus[3] == 1'b1) && (mie[7] == 1'b1) && (i_Csr_clint_stop)) ? 64'h80 : 64'h0;
    //assign o_Csr_timer_interreupt    = timer_interreupt_flag;

    //---------------mip--------------------------外部无法写？
    always @ (posedge clk) begin
        if (~rst_n) begin
            mip <= 64'd0;
        end
        else if (i_csr_timer_intr) begin
            mip <= mip_newvalue;
        end
        else if ((i_csr_waddr == `CSR_MIP) && i_csr_wen) begin
            mip <= i_csr_wdata;
        end
        else begin
            mip <= mip_newvalue;
        end
    end

    //----------------mie------------------------
    always @ (posedge clk) begin
        if (~rst_n) begin
            mie <= 64'd0;
        end
        else if ((i_csr_waddr == `CSR_MIE) && i_csr_wen) begin
            mie <= i_csr_wdata;
        end
    end

//-----------------------WRITE--------------------------
    //-------mstatus---------------
    always @ (posedge clk) begin
        if (~rst_n) begin
            mstatus <= 64'ha00001800;   //为了通过DIFTEST
        end
        else if (i_csr_timer_intr) begin
            mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
        end
        else if (i_csr_ecall) begin
            mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
        end
        else if (i_csr_mret) begin
            mstatus <= {mstatus[63:8], 1'b1, mstatus[6:4], mstatus[7], mstatus[2:0]};
        end
        else if ((i_csr_waddr == `CSR_MSTATUS) && i_csr_wen) begin
            mstatus <= i_csr_wdata;
        end
    end
    //-------mepc---------------
    always @ (posedge clk) begin
        if (~rst_n) begin
            mepc <= 64'd0;
        end
        else if (i_csr_timer_intr) begin
            mepc <= i_csr_trap_pc;
        end
        else if ((i_csr_waddr == `CSR_MEPC) && i_csr_wen) begin
            mepc <= i_csr_wdata;
        end
    end
    //-------mcause---------------
    always @ (posedge clk) begin
        if (~rst_n) begin
            mcause <= 64'd0;
        end
        else if (i_csr_timer_intr) begin
            mcause <= 64'h8000_0000_0000_0007;
        end
        else if (i_csr_ecall) begin
            mcause <= 64'hb;
        end
        else if ((i_csr_waddr == `CSR_MCAUSE) && i_csr_wen) begin
            mcause <= i_csr_wdata;
        end
    end
    //-------mtvec---------------
    always @ (posedge clk) begin
        if (~rst_n) begin
            mtvec <= 64'd0;
        end
        else if ((i_csr_waddr == `CSR_MTVEC) && i_csr_wen) begin
            mtvec <= i_csr_wdata;
        end
    end

//-----------------------READ-------------------------------------------
    assign o_csr_rdata  = (~i_csr_ren)                  ? 64'd0   :       
                          (i_csr_raddr == `CSR_MSTATUS) ? mstatus :
                          (i_csr_raddr == `CSR_MEPC   ) ? mepc    :
                          (i_csr_raddr == `CSR_MCAUSE ) ? mcause  :
                          (i_csr_raddr == `CSR_MTVEC  ) ? mtvec   :
                          (i_csr_raddr == `CSR_MIE    ) ? mie     :
                          (i_csr_raddr == `CSR_MIP    ) ? mip     :
                          64'd0;
    /*
    assign csr_dnpc_o = ((csr_state_i == `CSR_STATE_ECALL) || timer_interreupt_flag) ? mtevc :
                        (csr_state_i == `CSR_STATE_MRET)  ? mepc  :
                        64'd0;
    */

/*
    //CSRRS, CSRRW
    always @ (posedge clk) begin
      if (~rst_n) begin
          mstatus <= 64'ha00001800;   //为了通过DIFTEST
          mepc    <= 64'd0;
          mcause  <= 64'd0;
          mtevc   <= 64'd0;
          mie     <= 64'd0;
          mip     <= 64'd0;
      end
      else if (csr_wen_i && (csr_state_i == `CSR_STATE_CSRRS)) begin
          case(csr_w_addr_i)
            `CSR_MSTATUS: mstatus <= csr_w_data_i | csr_w_data_i;
            `CSR_MEPC   : mepc    <= csr_w_data_i | csr_w_data_i;
            `CSR_MCAUSE : mcause  <= csr_w_data_i | csr_w_data_i;
            `CSR_MTVEC  : mtevc   <= csr_w_data_i | csr_w_data_i;
            `CSR_MIE    : mie     <= csr_w_data_i | csr_w_data_i;
            `CSR_MIP    : mip     <= csr_w_data_i | csr_w_data_i;
            default     : ;
          endcase
      end
      else if (csr_wen_i && (csr_state_i == `CSR_STATE_CSRRW)) begin
          case(csr_w_addr_i)
            `CSR_MSTATUS: mstatus <= csr_w_data_i;
            `CSR_MEPC   : mepc    <= csr_w_data_i;
            `CSR_MCAUSE : mcause  <= csr_w_data_i;
            `CSR_MTVEC  : mtevc   <= csr_w_data_i;
            `CSR_MIE    : mie     <= csr_w_data_i;
            `CSR_MIP    : mip     <= csr_w_data_i;
            default     : ;
          endcase
      end
      else if (csr_state_i == `CSR_STATE_ECALL) begin
          mepc    <= csr_pc_i;
          mcause  <= 64'hb;
          mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
      end
      else if (csr_state_i == `CSR_STATE_MRET) begin
          mstatus <= {mstatus[63:8], 1'b1, mstatus[6:4], mstatus[7], mstatus[2:0]};
          mip     <= 64'd0;
      end
      else if (timer_interreupt_flag) begin
          mepc    <= csr_pc_i;
          mcause  <= 64'h8000_0000_0000_0007;
          mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
          mip     <= mip_newvalue;
      end
      
      else begin
          mstatus <= mstatus;
          mepc    <= mepc;
          mcause  <= mcause;
          mtevc   <= mtevc;
      end
      
    end
*/

    //----to fix verilator------
    /*
    wire _unused_ok = &{1'b0,
                        mip,
                        mie[63:8],
                        mie[6:0],
                        1'b0};
    */

endmodule
