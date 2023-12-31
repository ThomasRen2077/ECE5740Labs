`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/arithmetic.v"



module lab1_imul_IntMulBaseCtrl
(
  input  logic clk,
  input  logic reset,

  // Dataflow signals
  input  logic istream_val,
  output logic istream_rdy,
  output logic ostream_val,
  input  logic ostream_rdy,

  // Control signals
  output logic a_mux_sel,
  output logic b_mux_sel,
  output logic result_mux_sel,
  output logic result_reg_en,
  output logic add_mux_sel,

  // Status signals
  input  logic b_lsb,
  input  logic is_b_zero
);

  // State
    localparam STATE_IDLE = 2'd0;
    localparam STATE_CALC = 2'd1;
    localparam STATE_DONE = 2'd2;

    logic [1:0] state_reg;
    logic [1:0] state_next;

    always @( posedge clk ) begin
      if ( reset )
        state_reg <= STATE_IDLE;
      else
        state_reg <= state_next;
    end


  // State Transitions
    logic istream_go, ostream_go, is_calc_done;
    assign istream_go       = istream_val && istream_rdy;
    assign ostream_go       = ostream_val && ostream_rdy;
    assign is_calc_done     = is_b_zero;


    always @(*) begin
      state_next = state_reg;
      case ( state_reg )
        STATE_IDLE: if ( istream_go      )  state_next = STATE_CALC;
        STATE_CALC: if ( is_calc_done )     state_next = STATE_DONE;
        STATE_DONE: if ( ostream_go      )  state_next = STATE_IDLE;
        default:    begin                   state_next = 'x; $stop; 
        end
      endcase
    end

  //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------

  localparam a_x     = 1'dx;
  localparam a_lsh   = 1'd0;
  localparam a_ld    = 1'd1;

  localparam b_x     = 1'dx;
  localparam b_rsh   = 1'd0;
  localparam b_ld    = 1'd1;

  localparam res_x   = 1'dx;
  localparam res_add = 1'd0;
  localparam res_0   = 1'd1;

  localparam add_x   = 1'dx;
  localparam add_add = 1'd0;
  localparam add_res = 1'd1;

  task cs
  (
    input cs_istream_rdy,
    input cs_ostream_val,
    input cs_a_mux_sel,
    input cs_b_mux_sel,
    input cs_result_mux_sel,
    input cs_result_reg_en,
    input cs_add_mux_sel
  );
  begin
    istream_rdy       = cs_istream_rdy;
    ostream_val       = cs_ostream_val;
    a_mux_sel         = cs_a_mux_sel;
    b_mux_sel         = cs_b_mux_sel;
    result_mux_sel    = cs_result_mux_sel;
    result_reg_en     = cs_result_reg_en;
    add_mux_sel       = cs_add_mux_sel;
  end
  endtask

  // Labels for Mealy transistions
    logic do_sh_add, do_sh;

    assign do_sh_add = (b_lsb == 1); // do shift and add
    assign do_sh     = (b_lsb == 0); // do shift but no add

  // Control Signal Table
    always @(*) begin
      case ( state_reg )
        //                               istream ostream a mux  b mux  res mux  res    add mux
        //                               rdy val  sel    sel    sel      en     sel
        STATE_IDLE:                  cs( 1,  0,   a_ld,  b_ld,  res_0,   1,     add_x    );
        STATE_CALC: if ( do_sh_add ) cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_add  );
              else if ( do_sh )      cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_res  );
        STATE_DONE:                  cs( 0,  1,   a_x,   b_x,   res_x,   0,     add_x    );
        default:                     cs('x, 'x,   a_x,   b_x,   res_x,  'x,     add_x    ); 
      endcase
    end

endmodule

module lab1_imul_IntMulBase
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg
);
  // Control signals

  logic a_mux_sel;
  logic b_mux_sel;
  logic result_mux_sel;
  logic result_reg_en;
  logic add_mux_sel;

  // Status signals

  logic b_lsb;
  logic is_b_zero;

  logic [31:0] product;

  // Instantiate and connect datapath

  lab1_imul_IntMulBaseDpath dpath
  (
    .istream_msg_a (istream_msg[63:32]),
    .istream_msg_b (istream_msg[31: 0]),
    .ostream_msg   (product),
    .*
  );

  // Instantiate and connect control unit

  lab1_imul_IntMulBaseCtrl ctrl
  (
    .*
  );

  assign ostream_msg = product & {32{ostream_val}};

endmodule

`endif
