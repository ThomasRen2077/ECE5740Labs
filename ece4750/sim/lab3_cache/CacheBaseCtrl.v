`ifndef LAB3_CACHE_CACHE_BASE_CTRL_V
`define LAB3_CACHE_CACHE_BASE_CTRL_V

`include "vc/mem-msgs.v"

module lab3_cache_CacheBaseCtrl
(
  input  logic         clk,
  input  logic         reset,

  // Processor to Cache 
  input  logic        memreq_val,                           // Request Message to Data Memory Valid Signal         
  output logic        memreq_rdy,                           // Data Memory Ready Signal
  input  logic        memreq_type,                          // Data Operation Type of Memory Request Message


  output logic        memresp_val,                          // Data Memory Response Message Valid Signal
  input  logic        memresp_rdy,                          // Processor Ready to Receive Data Signal
  output logic        memresp_type,                         // Data Operation Type of Memory Request Message

  // Cache to Memory
  output logic        cache_req_val,                         // Request Message to Data cache Valid Signal         
  input  logic        cache_req_rdy,                         // Cache Ready Signal
  output logic        cache_req_type,                        // Data Operation Type of Cache Request Message


  input  logic        cache_resp_val,                        // Cache Response Message Valid Signal
  output logic        cache_resp_rdy,                        // Processor Ready to Receive Cache Signal
  input  logic        cache_resp_type,                       // Data Operation Type of Cache Request Message

  // Control Signals
  output logic        reg_en_M0,
  output logic        tarray_en,
  output logic        tarray_wen,
  output logic        z6b_sel,
  output logic        darray_write_mux_sel,
  output logic        reg_en_M1,
  output logic        darray_wen,
  output logic        write_en_sel,
  output logic        parallel_read_sel,
  output logic        parallel_write_sel,
  output logic        spill_one_word_done,
  output logic        refill_one_word_req_sent,
  output logic        refill_one_word_resp_received,
  output logic        Spill_or_Refill_sel,


  // Status signals
  input  logic        tarray_match,
  input  logic        current_dirty,
  input  logic        spill_done,
  input  logic        refill_req_done,
  input  logic        refill_resp_done,


  // Extra Signal
  output logic        flush_done
);



//--------------------------------------------------------------------
// Y stage
//--------------------------------------------------------------------

  // Possible Stall Signal
  logic input_go;
  assign input_go = memreq_val && memreq_rdy;

  logic ostall_Y;
  ostall_Y = !input_go;

  logic stall_Y;
  stall_Y = ostall_Y || ostall_M0 || ostall_M1;

//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------

  assign reg_en_M0 = !stall_Y; 

  logic word_en_sel_M0;
  logic darray_wen_M0;
  

  //----------------------------------------------------------------------
  // Finite State Machine
  //----------------------------------------------------------------------

    localparam STATE_PIPE = 2'd0;
    localparam STATE_SPILL = 2'd1;
    localparam STATE_REFILL = 2'd2;

    logic [1:0] state_reg;
    logic [1:0] state_next;

    always @( posedge clk ) begin
        if ( reset )
        state_reg <= STATE_PIPE;
        else
        state_reg <= state_next;
    end


    // State Transition Logic
        always_comb begin
            state_next = state_reg;                                                             // State Remain Itself.
            case ( state_reg )
                STATE_PIPE:     if (tarray_match == 1'b0 && dirty_array[index_M1])                
                                    state_next = STATE_SPILL;                                   // If Miss and the Victim is Dirty.
                                else if(tarray_match == 1'b0 && !dirty_array[index_M1])           
                                    state_next = STATE_REFILL;                                  // If Miss and the Victim is Clean.
                STATE_SPILL:    if (spill_done)                                                   
                                    state_next = STATE_REFILL;                                  // SPILL State Ends.
                STATE_REFILL:   if (refill_resp_done)                                                  
                                    state_next = STATE_PIPE;                                    // REFILL State Ends.
                default:        state_next = 'x;                                                // Unknown State.
            endcase
        end
 

    //----------------------------------------------------------------------
    // State Outputs
    //----------------------------------------------------------------------
        always_comb begin
            if( state_reg == STATE_PIPE) begin

                tarray_en = 1'b1;            
                tarray_wen = 1'b0;
                z6b_sel = 1'b0;
                darray_write_mux_sel = 1'b0;

                cache_req_val = 1'b0;
                cache_req_type = 1'b0;
                Spill_or_Refill_sel = 1'bx;

                if (memreq_type == 1'b0) begin                                                      // READ HIT
                    word_en_sel_M0 = 1'b0; 
                    darray_wen_M0 = 1'b0;
                end
                else begin                                                                         // WRITE HIT

                    word_en_sel_M0 = 1'b1;
                    darray_wen_M0 = 1'b1;
                end

            end

            else if (state_reg == STATE_SPILL) begin

                tarray_en = 1'b0;
                tarray_wen = 1'b0;
                z6b_sel = 1'b1;
                cache_req_val = 1'b1;
                cache_req_type = 1'b1;
                Spill_or_Refill_sel = 1'b0;


                if(cache_req_val && cache_req_rdy)  
                  spill_one_word_done = 1'b1;
                else                                
                  spill_one_word_done = 1'b0;

            end

            else begin

                tarray_en = 1'b0;
                tarray_wen = 1'b1;
                z6b_sel = 1'b1;
                cache_req_val = 1'b1;
                cache_req_type = 1'b0;
                Spill_or_Refill_sel = 1'b1;

                if(cache_req_val && cache_req_rdy)  
                  refill_one_word_req_sent = 1'b1;
                else                                
                  refill_one_word_req_sent = 1'b0;


                if(cache_resp_val && cache_resp_rdy)
                  refill_one_word_resp_received = 1'b1;
                else
                  refill_one_word_resp_received = 1'b0;
                
            end
        end


  // Possible Stall Signal
    logic ostall_M0;

    always_comb begin
        if(state_reg == STATE_PIPE) begin
        ostall_M0 = 1'b0;
        end
        else begin
        ostall_M0 = 1'b1;
        end
    end

    logic stall_M0;
    stall_M0 = ostall_M0 || ostall_M1;

    assign memreq_rdy = !stall_M0;




//--------------------------------------------------------------------
// M1 stage
//--------------------------------------------------------------------
assign reg_en_M1 = !stall_M0; 

// Receive Signal Forwarded from M0 stage
always_ff @( posedge clk )
  if ( reset ) begin
    word_en_sel <= 0;
    darray_wen <= 0;
  end
  else if ( reg_en_M1 ) begin
    word_en_sel <= word_en_sel_M0;
    darray_wen <= darray_wen_M0;
  end


  always_comb begin
    if (tarray_match) begin
      parallel_read_sel = 1'b0;
      parallel_write_sel = 1'b0;
      memresp_val = 1'b1;
    end
    else begin
      // parallel_read_sel = 1'b1;
      // parallel_write_sel = 1'b1;
      // memresp_val = 1'b0;
    end
  end

  // Possible Stall Signal
  logic ostall_M1;
  assign ostall_M1 = !memresp_rdy;

  logic stall_M1;
  assign stall_M1 = ostall_M1;

endmodule




`endif 
