
`define ADDR_MTIME          64'h200_BFF8
`define ADDR_MTIMECMP       64'h200_4000

module Clint (
    input wire                          clk,
    input wire                          rst_n,

    //from MEM
    input wire [63:0]                   i_Clint_wr_data,
    input wire [63:0]                   i_Clint_addr,
    input wire                          i_Clint_wen,
    //to Csr
    output wire                         o_Clint_stop
);
    reg [63:0] mtime, mtimecmp;
    wire [63:0] mtime_newvalue, mtimecmp_newvalue;

    assign mtime_newvalue    = (i_Clint_wen && (i_Clint_addr == `ADDR_MTIME))    ? i_Clint_wr_data : mtime;
    assign mtimecmp_newvalue = (i_Clint_wen && (i_Clint_addr == `ADDR_MTIMECMP)) ? i_Clint_wr_data : mtimecmp;

    assign o_Clint_stop      = (mtime >= mtimecmp) ? 1'b1 : 1'b0;

    always @ (posedge clk) begin
        if(~rst_n) begin
            mtime    <= 64'd0;
        end
        else if (i_Clint_wen) begin
            mtime    <= mtime_newvalue;
        end
        else begin
            mtime    <= mtime + 64'd1;
        end
    end

    always @ (posedge clk) begin
        if(~rst_n) begin
            mtimecmp    <= 64'd0;
        end
        else if (i_Clint_wen) begin
            mtimecmp <= mtimecmp_newvalue;
        end
    end


endmodule
