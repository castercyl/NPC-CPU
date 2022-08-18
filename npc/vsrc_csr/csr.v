
`define CSR_MCYCLE          12'hb00
`define CSR_MSTATUS         12'h300
`define CSR_MTVEC           12'h305
`define CSR_MEPC            12'h341
`define CSR_MCAUSE          12'h342
`define CSR_MIE             12'h304
`define CSR_MIP             12'h344
`define CSR_MSCRATCH        12'h340
`define CSR_STATE_IDLE      2'b00
`define CSR_STATE_RW        2'b01
`define CSR_STATE_ECALL     2'b10
`define CSR_STATE_MRET      2'b11


module csr (
    input wire                          clk,
    input wire                          rst_n,

    //from ID
    input wire [1:0]                    csr_state_i,
    input wire [11:0]                   csr_w_addr_i,
    input wire                          csr_wen_i,
    input wire [63:0]                   csr_w_data_i,
    input wire [11:0]                   csr_r_addr_i,
    input wire                          csr_ren_i,
    input wire [63:0]                   csr_pc_i,
    //to ex
    output wire                         csr_reg_write_o,
    output wire [63:0]                  csr_r_data_o,
    output wire [63:0]                  csr_dnpc_o
);

    reg [63:0] mstatus, mepc, mcause, mtevc;

    //assign mip = 64'd0;     //暂时没搞懂这个寄存器
    //assign mie = 64'd0;     //暂时没搞懂这个寄存器

    assign csr_reg_write_o = csr_ren_i;

    //CSRW
    always @ (posedge clk) begin
      if (~rst_n) begin
          mstatus <= 64'ha00001800;
          mepc    <= 64'd0;
          mcause  <= 64'd0;
          mtevc   <= 64'd0;
      end
      else if (csr_wen_i && (csr_state_i == `CSR_STATE_RW)) begin
          case(csr_w_addr_i)
            `CSR_MSTATUS: mstatus <= csr_w_data_i;
            `CSR_MEPC   : mepc    <= csr_w_data_i;
            `CSR_MCAUSE : mcause  <= csr_w_data_i;
            `CSR_MTVEC  : mtevc   <= csr_w_data_i;
            default    :begin 
                mstatus <= mstatus;
                mepc    <= mepc;
                mcause  <= mcause;
                mtevc   <= mtevc;
            end
          endcase
      end
      else if (csr_state_i == `CSR_STATE_ECALL) begin
          mepc    <= csr_pc_i;
          mcause  <= 64'hb;
          mstatus <= {mstatus[63:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]};
      end
      else if (csr_state_i == `CSR_STATE_MRET) begin
          mstatus <= {mstatus[63:4], mstatus[7], mstatus[2:0]};
      end
      else begin
          mstatus <= mstatus;
          mepc    <= mepc;
          mcause  <= mcause;
          mtevc   <= mtevc;
      end
    end

    //CSRR
    assign csr_r_data_o = (~csr_ren_i)                 ? 64'd0   :
                          (csr_r_addr_i == `CSR_MSTATUS) ? mstatus :
                          (csr_r_addr_i == `CSR_MEPC   ) ? mepc    :
                          (csr_r_addr_i == `CSR_MCAUSE ) ? mcause  :
                          (csr_r_addr_i == `CSR_MTVEC  ) ? mtevc   :
                          64'd0;

    assign csr_dnpc_o = (csr_state_i == `CSR_STATE_ECALL) ? mtevc :
                        (csr_state_i == `CSR_STATE_MRET)  ? mepc  :
                        64'd0;


endmodule
