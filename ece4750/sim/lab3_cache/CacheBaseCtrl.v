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
  output logic        darray_wen,
  output logic        write_en_sel,
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
  input  logic        flush
);



//--------------------------------------------------------------------
// Y stage
//--------------------------------------------------------------------

  // Possible Stall Signal
  logic input_go;
  assign input_go = memreq_val && memreq_rdy;

  logic ostall_Y;
  assign ostall_Y = !input_go;

  logic stall_Y;
  assign stall_Y = ostall_Y || ostall_M0;

//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------
  assign reg_en_M0 = !stall_Y; 

  logic val_M0;

  always_ff @( posedge clk ) begin
    if ( reset ) begin
      val_M0 <= 1'b0;
    end
    else begin
      if ( reg_en_M0 )
        val_M0 <= 1'b1;
      else if (!stall_M0)
        val_M0 <= 1'b0;
      else 
        val_M0 <= val_M0;
    end
  end


  logic mem_req_type_M0;
  always_ff@(posedge clk) begin
    if(reset) begin
      mem_req_type_M0 <= 0;
    end
    else begin
      if(reg_en_M0) begin
        mem_req_type_M0 <= memreq_type;
      end
      else begin
        mem_req_type_M0 <= mem_req_type_M0;
      end
    end
  end
  

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
            case ( state_reg )
                STATE_PIPE:     if ((val_M0 && (tarray_match == 1'b0) && current_dirty) || flush)   state_next = STATE_SPILL;     // If Miss and the Victim is Dirty Or Flush
                                else if(val_M0 && (tarray_match == 1'b0) && !current_dirty)         state_next = STATE_REFILL;    // If Miss and the Victim is Clean.
                                else                                                                state_next = state_reg;       // State Remain Itself.
                STATE_SPILL:    if (val_M0 && spill_done)                                           state_next = STATE_REFILL;    // Normal Operation. SPILL State Ends and Turns to REFILL State.
                                else if(flush && spill_done)                                        state_next = STATE_PIPE;      // Flush Operation. SPILL State Ends and Returns to PIPE State.
                                else                                                                state_next = state_reg;       // State Remain Itself.
                STATE_REFILL:   if (val_M0 && refill_resp_done)                                     state_next = STATE_PIPE;      // REFILL State Ends.
                                else                                                                state_next = state_reg;       // State Remain Itself.

                default:        begin                                                               $stop;                        // This Line Will Never Get Run. 
                                                                                                    state_next = 2'bx;            // Unknown State.
                end
            endcase
        end
 

    //----------------------------------------------------------------------
    // State Outputs
    //----------------------------------------------------------------------
        always_comb begin
            if( state_reg == STATE_PIPE) begin
                if(val_M0) begin
                  tarray_en = 1'b1;
                end
                else begin
                  tarray_en = 1'b0;
                end            
                tarray_wen = 1'b0;
                z6b_sel = 1'b0;
                darray_write_mux_sel = 1'b0;

                cache_req_val = 1'b0;
                cache_req_type = 1'bx;

                refill_one_word_req_sent = 1'b0;
                refill_one_word_resp_received = 1'b0;

                Spill_or_Refill_sel = 1'bx;
                spill_one_word_done = 1'b0;
                

                if (val_M0 && mem_req_type_M0 == 1'b1) begin                                                      // WRITE HIT
                    if(tarray_match) begin
                      write_en_sel = 1'b1; 
                      darray_wen = 1'b1;
                    end
                    else begin
                      write_en_sel = 1'b0; 
                      darray_wen = 1'b0;
                    end
                    memresp_type = 1'b1;
                end
                else begin                                                                                       // READ HIT
                    write_en_sel = 1'bx;
                    darray_wen = 1'b0;
                    memresp_type = 1'b0;
                end

                if(val_M0 && tarray_match) begin
                  memresp_val = 1'b1;
                end
                else begin
                  memresp_val = 1'b0;
                end

                cache_resp_rdy = 1'b0;

            end
            else if (state_reg == STATE_SPILL) begin

                tarray_en = 1'b0;
                tarray_wen = 1'b0;
                z6b_sel = 1'b0;
                darray_write_mux_sel = 1'bx;

                if(!spill_done) begin
                  cache_req_val = 1'b1;
                end
                else begin
                  cache_req_val = 1'b0;
                end

                cache_req_type = 1'b1;
                Spill_or_Refill_sel = 1'b0;

                refill_one_word_req_sent = 1'b0;
                refill_one_word_resp_received = 1'b0;

                if(cache_req_val && cache_req_rdy)  
                  spill_one_word_done = 1'b1;
                else                                
                  spill_one_word_done = 1'b0;

                write_en_sel = 1'b0; 
                darray_wen = 1'b0;
                memresp_type =  1'b0;
                memresp_val = 1'b0;
                cache_resp_rdy = 1'b0;

            end

            else begin

                tarray_en = 1'b0;

                if(refill_resp_done) begin
                  tarray_wen = 1'b1;
                end
                else begin
                  tarray_wen = 1'b0;
                end

                z6b_sel = 1'b1;
                darray_write_mux_sel = 1'b1;

                if(!refill_req_done) begin
                  cache_req_val = 1'b1;
                end
                else begin
                  cache_req_val = 1'b0;
                end

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

                spill_one_word_done = 1'b0;

                write_en_sel = 1'b0; 

                if(refill_resp_done) begin
                  darray_wen = 1'b1;
                end
                else begin
                  darray_wen = 1'b0;
                end

                memresp_type =  1'b0;
                memresp_val = 1'b0;

                if(!refill_resp_done) begin
                  cache_resp_rdy = 1'b1;
                end
                else begin
                  cache_resp_rdy = 1'b0;
                end

            end
        end


  // Possible Stall Signal
    logic ostall_miss;
    logic ostall_notrdy;
    logic ostall_M0;
    logic stall_M0;

    always_comb begin
        if(!tarray_match) begin
        ostall_miss = 1'b1;
        end
        else begin
        ostall_miss = 1'b0;
        end
    end

    assign ostall_notrdy = !memresp_rdy;
    assign ostall_M0 = val_M0 && (ostall_miss || ostall_notrdy);

    assign stall_M0 = val_M0 && ostall_M0;

    assign memreq_rdy = !stall_M0;



endmodule




`endif 
