module ysyx_22040386_MEMU (
    input wire i_MEM_clk,
    input wire i_MEM_Jal,
    input wire i_MEM_Jalr,
    input wire i_MEM_zero,
    input wire i_MEM_MemRead,
    input wire i_MEM_MemWrite,
    input wire [2:0] i_MEM_Branch_type,
    input wire [2:0] i_MEM_mem_mask,
    input wire [63:0] i_MEM_mem_wr_data,
    input wire [63:0] i_MEM_pc_add_imm,
    input wire [63:0] i_MEM_ALUresult,
    input wire [63:0] i_MEM_reg_wr_data,
    input wire [63:0] i_MEM_snpc,
    input wire [63:0] i_MEM_pc,
    
    input wire i_mem_EX_MEM_RegWrite_o,
    input wire i_mem_MEM_WB_RegWrite_o,
    input wire [4:0] i_mem_IF_ID_reg_rd_addr1_o,
    input wire [4:0] i_mem_IF_ID_reg_rd_addr2_o,
    input wire [4:0] i_mem_ID_EX_reg_rd_addr1_o,
    input wire [4:0] i_mem_ID_EX_reg_rd_addr2_o,
    input wire [4:0] i_mem_EX_MEM_reg_rd_addr2_o,
    input wire [4:0] i_mem_EX_MEM_reg_wr_addr_o,
    input wire [4:0] i_mem_MEM_WB_reg_wr_addr_o,
    input wire [63:0] i_mem_MEM_WB_reg_wr_data_o,

    input wire i_MEM_RegWrite,
    input wire [4:0] i_MEM_reg_wr_addr,

    output wire [63:0] o_MEM_dnpc,
    output wire o_MEM_Branch,

    output wire [63:0] o_MEM_reg_wr_data,

    output wire o_MEM_RegWrite,
    output wire [4:0] o_MEM_reg_wr_addr,

    output wire o_jump_flag,
    output wire o_fw_ID_reg_rd1fw,
    output wire o_fw_ID_reg_rd2fw,
    output wire [1:0] o_fw_EX_src1fw,
    output wire [1:0] o_fw_EX_src2fw,

    output wire [63:0] o_MEM_pc,
    input wire i_MEM_unkown_code,
    input wire [31:0] i_MEM_inst,
    output wire o_MEM_unkown_code,
    output wire [31:0] o_MEM_inst
);

wire fw_MEM_disrcfw;
wire [63:0] MEM_real_mem_wr_data;
assign MEM_real_mem_wr_data = (fw_MEM_disrcfw) ? i_mem_MEM_WB_reg_wr_data_o : i_MEM_mem_wr_data;

wire zero_extend;
assign zero_extend = ~ i_MEM_mem_mask[2];

wire [63:0] MEM_mem_rd_data;
reg [63:0] reg_rd_mem_data, rmdata1;
assign MEM_mem_rd_data = rmdata1;

assign o_MEM_reg_wr_data = (i_MEM_MemRead) ? MEM_mem_rd_data : i_MEM_reg_wr_data;

assign o_MEM_dnpc = (i_MEM_Jalr) ? i_MEM_ALUresult : i_MEM_pc_add_imm;

ysyx_22040386_FWcontrol ysyx_22040386_FWcontrol_inst (
.i_fw_EX_MEM_RegWrite(i_mem_EX_MEM_RegWrite_o),
.i_fw_EX_MEM_MemWrite(i_MEM_MemWrite),
.i_fw_MEM_WB_RegWrite(i_mem_MEM_WB_RegWrite_o),
.i_fw_EX_MEM_reg_wr_addr(i_mem_EX_MEM_reg_wr_addr_o),
.i_fw_MEM_WB_reg_wr_addr(i_mem_MEM_WB_reg_wr_addr_o),
.i_fw_EX_MEM_reg_rd_addr2(i_mem_EX_MEM_reg_rd_addr2_o),
.i_fw_ID_EX_reg_rd_addr1(i_mem_ID_EX_reg_rd_addr1_o),
.i_fw_ID_EX_reg_rd_addr2(i_mem_ID_EX_reg_rd_addr2_o),
.i_fw_IF_ID_reg_rd_addr1(i_mem_IF_ID_reg_rd_addr1_o),
.i_fw_IF_ID_reg_rd_addr2(i_mem_IF_ID_reg_rd_addr2_o),
.o_fw_MEM_disrcfw(fw_MEM_disrcfw),
.o_fw_ID_reg_rd1fw(o_fw_ID_reg_rd1fw),
.o_fw_ID_reg_rd2fw(o_fw_ID_reg_rd2fw),
.o_fw_EX_src1fw(o_fw_EX_src1fw),
.o_fw_EX_src2fw(o_fw_EX_src2fw)
);

ysyx_22040386_jump_control ysyx_22040386_jump_control_inst (
.i_mem_Branch(o_MEM_Branch),
.i_mem_snpc(i_MEM_snpc),
.i_mem_dnpc(o_MEM_dnpc),
.o_jump_flag(o_jump_flag)
);

ysyx_22040386_Branchjuge ysyx_22040386_Branchjuge_inst (
.zero(i_MEM_zero),
.Jal(i_MEM_Jal),
.Jalr(i_MEM_Jalr),
.result0(i_MEM_ALUresult[0]),
.Branch_type(i_MEM_Branch_type),
.Branch(o_MEM_Branch)
);

//中间数据流
assign o_MEM_RegWrite = i_MEM_RegWrite;
assign o_MEM_reg_wr_addr = i_MEM_reg_wr_addr;
assign o_MEM_pc = i_MEM_pc;

assign o_MEM_unkown_code = i_MEM_unkown_code;
assign o_MEM_inst = i_MEM_inst;
//write to Mem
wire [7:0] Wmask;
reg [7:0] reg_Wmask;
assign Wmask = reg_Wmask;
always @ (*) begin
    case(i_MEM_mem_mask)
    3'b000: reg_Wmask = 8'b0000_0001 << i_MEM_ALUresult[2:0];     //sb
    3'b001: reg_Wmask = 8'b0000_0011 << i_MEM_ALUresult[2:0];     //sh
    3'b010: reg_Wmask = 8'b0000_1111 << i_MEM_ALUresult[2:0];     //sw
    3'b011: reg_Wmask = 8'b1111_1111;                    //sd
    default: reg_Wmask = 8'b1111_1111;
    endcase
end

//read from Mem
always @ (*) begin
  rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
  case (i_MEM_mem_mask[1:0])
    //bit
    2'b00:begin
      if (i_MEM_ALUresult[2:0] == 3'd0)
        rmdata1 = {{56{reg_rd_mem_data[7] & zero_extend}}, reg_rd_mem_data[7:0]};
      else if(i_MEM_ALUresult[2:0] == 3'd1)
        rmdata1 = {{56{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:8]};
      else if(i_MEM_ALUresult[2:0] == 3'd2)
        rmdata1 = {{56{reg_rd_mem_data[23] & zero_extend}}, reg_rd_mem_data[23:16]};
      else if(i_MEM_ALUresult[2:0] == 3'd3)
        rmdata1 = {{56{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:24]};
      else if(i_MEM_ALUresult[2:0] == 3'd4)
        rmdata1 = {{56{reg_rd_mem_data[39] & zero_extend}}, reg_rd_mem_data[39:32]};
      else if(i_MEM_ALUresult[2:0] == 3'd5)
        rmdata1 = {{56{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:40]};
      else if(i_MEM_ALUresult[2:0] == 3'd6)
        rmdata1 = {{56{reg_rd_mem_data[55] & zero_extend}}, reg_rd_mem_data[55:48]};
      else if(i_MEM_ALUresult[2:0] == 3'd7)
        rmdata1 = {{56{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:56]};
    end
    //half word
    2'b01:begin
      if (i_MEM_ALUresult[2:0] == 3'd0)
        rmdata1 = {{48{reg_rd_mem_data[15] & zero_extend}}, reg_rd_mem_data[15:0]};
      else if(i_MEM_ALUresult[2:0] == 3'd2)
        rmdata1 = {{48{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:16]};
      else if(i_MEM_ALUresult[2:0] == 3'd4)
        rmdata1 = {{48{reg_rd_mem_data[47] & zero_extend}}, reg_rd_mem_data[47:32]};
      else if(i_MEM_ALUresult[2:0] == 3'd6)
        rmdata1 = {{48{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:48]};
      else
        rmdata1 = 64'hFFFF_FFFF_FFFF_FFFF;
    end
    //word
    2'b10:begin
      if (i_MEM_ALUresult[2])
        rmdata1 = {{32{reg_rd_mem_data[63] & zero_extend}}, reg_rd_mem_data[63:32]};
      else
        rmdata1 = {{32{reg_rd_mem_data[31] & zero_extend}}, reg_rd_mem_data[31:0]};
    end
    2'b11: rmdata1 = reg_rd_mem_data;
  endcase
end

//##DPI-C访存(写+读）##*/
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

always @(*) begin
  if (i_MEM_MemRead)
    pmem_read(i_MEM_ALUresult, reg_rd_mem_data);
  else
    reg_rd_mem_data = 64'd0;
end

always @ (posedge i_MEM_clk) begin
    if (i_MEM_MemWrite)
        pmem_write(i_MEM_ALUresult, MEM_real_mem_wr_data, Wmask);
end

endmodule
