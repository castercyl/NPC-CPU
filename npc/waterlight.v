module waterlight(
	input reset,
	input clk,
	output reg [15:0] led
);
	
	reg [31:0] count;

	always@(posedge clk) begin
		if(reset == 1) begin
			led <= 16'd1;
			count <= 32'd0; end
		else begin
			if (count == 32'd0)
				led <= {led[14:0], led[15]};
			count <= (count >= 5000 ? 32'd0 : count + 1);
			end
	end
endmodule
