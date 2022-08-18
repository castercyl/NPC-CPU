module axi_arbiter (
    input                               clock,
    input                               reset,

    input                               IF_vaild,
    input                               IF_done,
    input                               MEM_vaild,
    input                               MEM_done,
    input                               MEM_read,
    input                               MEM_write,

    output                              rw_valid,
    output                              rw_reqtype,
    output                              rw_stage
);
    parameter STAGE_IF = 1'b0, STAGE_MEM = 1'b1;
    reg axi_cs, axi_ns;

    always @ (posedge clock) begin
        if (~reset)
            axi_cs <= STAGE_IF;
        else
            axi_cs <= axi_ns;
    end

    always @ (*) begin
        case(axi_cs)
            STAGE_IF:  ns = (IF_done)  ? STAGE_MEM : STAGE_IF;
            STAGE_MEM: ns = (MEM_done) ? STAGE_IF  : STAGE_MEM;
            default:   ns = STAGE_IF;
        endcase
    end

    assign rw_reqtype = (axi_cs == STAGE_IF) ? 1'b0 :
                        (MEM_write)          ? 1'b1 : 1'b0;
    
    assign rw_valid = IF_vaild || MEM_vaild;
    assign rw_stage = axi_cs;

endmodule
