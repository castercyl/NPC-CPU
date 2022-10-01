module clint (
    input wire clk,
    input wire rst_n,

    input wire clint_wen_i,
    input wire clint_ren_i,
    input wire [63:0] clint_data_i,
    input wire [63:0] clint_addr_i,
    
    output wire clint_timer_interrupt_o,
    output wire [63:0] clint_data_o

);

reg [63:0] mtime;
reg [63:0] mtimecp;

wire [63:0] mtime_value, mtimecp_value;

assign mtime_value = ((clint_addr_i == 64'h200_bff8) && clint_wen_i) ? clint_data_i : mtime + 1'd1;
assign mtimecp     = ((clint_addr_i == 64'h200_4000) && clint_wen_i) ? clint_data_i : mtimecp;

assign clint_timer_interrupt_o = (mtime >= mtimecp) ? 1'b1 : 1'b0;
assign clint_data_o            = (~clint_ren_i) ? 64'd0 :
                                 (clint_addr_i == 64'h200_bff8) ? mtime :
                                 (clint_addr_i == 64'h200_4000) ? mtimecp : 64'd0;

always @ (posedge clk) begin
  if (~rst_n) begin
      mtime <= 64'd0;
      mtimecp <= 64'd0;
  end
  else begin
      mtime <= mtime_value;
      mtimecp <= mtimecp_value;
  end
end

endmodule
