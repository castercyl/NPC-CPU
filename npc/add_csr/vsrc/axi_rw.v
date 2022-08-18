// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


module axi_rw # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

    input                               rw_reqtype_i,          //I DO 用于分辨rw_valid_i是读还是写，1为写
	input                               rw_valid_i,         //IF&MEM输入信号
	output                              rw_ready_o,         //IF&MEM输入信号
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,        //IF&MEM输入信号
    input  [RW_DATA_WIDTH-1:0]          rw_w_data_i,        //IF&MEM输入信号
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,          //IF&MEM输入信号
    input  [7:0]                        rw_size_i,          //IF&MEM输入信号



    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,              
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,                 
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,                
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,                 
    input                               axi_r_valid_i,                
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
    
    //I DO  AXI通道间握手信号
    wire ar_handshake, r_handshake, r_finish;
    wire aw_handshake, w_handshake, bw_handshake;
    //AR
    assign ar_handshake = axi_ar_ready_i && axi_ar_valid_o;
    //R
    assign r_handshake  = axi_r_ready_o  && axi_r_valid_i;
    assign r_finish     = r_handshake && axi_r_last_i;       //一次读事务结束标志，要从机的发送的最后一个数据标志last，针对burst
    //AW
    assign aw_handshake = axi_aw_ready_i && axi_aw_valid_o;
    //W
    assign w_handshake  = axi_w_ready_i  && axi_w_valid_o;
    //B
    assign bw_handshake = axi_b_ready_o &&  axi_b_valid_i; 

    // ------------------State Machine------------------TODO
    //读需要四个状态：读空闲、读发送地址、读数据、读完成；
    parameter R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ = 2'b10, R_STATE_DONE = 2'b11;
    //读需要5个状态：写空闲、写发送地址、写数据、写回应、写完成；
    parameter W_STATE_IDLE = 3'b000, W_STATE_ADDR = 3'b001, W_STATE_WRITE = 3'b010, W_STATE_RESP = 3'b011, W_STATE_DONE = 3'b100;
    
    // 写通道状态切换  I DO
    wire w_valid, w_state_write, w_state_addr, w_state_resp;
    assign w_valid = rw_valid_i && rw_reqtype_i;
    //同读事务的状态机三段式
    reg [2:0] w_cs, w_ns;
    always @ (posedge clock) begin
        if (~reset)
            w_cs <= W_STATE_IDLE;
        else
            w_cs <= w_ns;
    end
    always @ (*) begin
        if (w_valid) begin
            case(w_cs)
                W_STATE_IDLE:  w_ns = W_STATE_ADDR;
                W_STATE_ADDR:  w_ns = (aw_handshake) ? W_STATE_WRITE : W_STATE_ADDR;
                W_STATE_WRITE: w_ns = (w_handshake)  ? W_STATE_RESP  : W_STATE_WRITE;
                W_STATE_RESP:  w_ns = (bw_handshake) ? W_STATE_DONE  : W_STATE_RESP;
                W_STATE_DONE:  w_ns = W_STATE_IDLE;
                default:       w_ns = W_STATE_IDLE;
            endcase
        end
        else
            w_ns = W_STATE_IDLE;
    end

    assign w_state_addr  = (cs == W_STATE_ADDR)  ? 1'b1 : 1'b0;
    assign w_state_write = (cs == W_STATE_WRITE) ? 1'b1 : 1'b0;
    assign w_state_resp  = (cs == W_STATE_RESP)  ? 1'b1 : 1'b0;
    

    // 读通道状态切换 I DO
    wire r_valid;
    wire r_state_addr, r_state_read;
    assign r_valid = rw_valid_i && ~rw_reqtype_i;
    
    reg [1:0] r_cs, r_ns;
    //三段式走起
    always @ (posedge clock) begin
      if (~reset)
        r_cs <= R_STATE_IDLE;
      else
        r_cs <= r_ns;
    end
    always @ (*) begin
        if (r_valid) begin
            case(r_cs)
                R_STATE_IDLE: r_ns = R_STATE_ADDR;
                R_STATE_ADDR: r_ns = (ar_handshake) ? R_STATE_READ : R_STATE_ADDR;
                R_STATE_READ: r_ns = (r_finish) ? R_STATE_DONE : R_STATE_READ;
                R_STATE_DONE: r_ns = R_STATE_IDLE;
                default:      r_ns = R_STATE_IDLE;
            endcase
        end
        else
            r_ns = R_STATE_IDLE;
    end
    assign r_state_addr = (r_cs == R_STATE_ADDR) ? 1'b1 : 1'b0;
    assign r_state_read = (r_cs == R_STATE_READ) ? 1'b1 : 1'b0;

    //---------rw_ready_o信号生成  I DO ----------
    reg rw_ready;
    always @ (posedge clock) begin
        if (~reset)
            rw_ready <= 1'd0;
        else
            rw_ready <= (r_finish || bw_handshake) ? 1'd1 : 1'd0;
    end
    assign rw_ready_o = rw_ready;
    

    // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      =  8'b0 ;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = rw_addr_i;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = axi_len;
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // 写数据通道
    assign axi_w_valid_o    = w_state_write;
    assign axi_w_data_o     = rw_w_data_i ;
    assign axi_w_strb_o     = rw_size_i;
    assign axi_w_last_o     = 1'b0;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = w_state_resp;

    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = rw_addr_i;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = axi_len;                                                                          
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    assign axi_r_ready_o    = r_state_read;
    //I DO
    always @ (posedge clock) begin     //读通道握手成功后读数据
        if (~reset)
            data_read_o <= 64'd0;
        else if (axi_r_ready_o && axi_r_valid_i)
            data_read_o <= axi_r_data_i;
    end

endmodule
