`ifndef LAB1_IMUL_INT_MUL_ALT_V
`define LAB1_IMUL_INT_MUL_ALT_V

`include "vc/trace.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"
`include "CalcShamt.v"


module lab1_imul_IntMulAltDpath
(
  input  logic        clk,
  input  logic        reset,

  // Data signals

  input  logic [31:0] istream_msg_a,
  input  logic [31:0] istream_msg_b,
  output logic [31:0] ostream_msg,

  // Control signals (ctrl -> dpath)

  input  logic        a_mux_sel,
  input  logic        b_mux_sel,
  input  logic        result_mux_sel,
  input  logic        result_reg_en,
  input  logic        add_mux_sel,

  // Status signals (dpath -> ctrl)

  output logic        b_lsb,
  output logic        is_b_zero
);

  // B mux

  logic [31:0] rshifter_out;
  logic [31:0] b_mux_out;

  vc_Mux2#(32) b_mux
  (
   .sel (b_mux_sel),
   .in0 (rshifter_out),
   .in1 (istream_msg_b),
   .out (b_mux_out)
  );

  // B register

  logic [31:0] b_reg_out;

  vc_Reg#(32) b_reg
  (
   .clk (clk),
   .d   (b_mux_out),
   .q   (b_reg_out)
  );

  // B zero comparator

  vc_ZeroComparator#(32) b_zero_cmp
  (
   .in  (b_reg_out),
   .out (is_b_zero)
  );

  // Calculate shift amount

  logic [3:0] calc_shamt_out;

  lab1_imul_CalcShamt calc_shamt
  (
   .in (b_reg_out[7:0]),
   .out (calc_shamt_out)
  );

  // Right shifter

  vc_RightLogicalShifter#(32,4) rshifter
  (
   .in    (b_reg_out),
   .shamt (calc_shamt_out),
   .out   (rshifter_out)
  );

  // A mux

  logic [31:0] lshifter_out;
  logic [31:0] a_mux_out;

  vc_Mux2#(32) a_mux
  (
   .sel (a_mux_sel),
   .in0 (lshifter_out),
   .in1 (istream_msg_a),
   .out (a_mux_out)
  );

  // A register

  logic [31:0] a_reg_out;

  vc_Reg#(32) a_reg
  (
   .clk (clk),
   .d   (a_mux_out),
   .q   (a_reg_out)
  );

  // Left shifter

  vc_LeftLogicalShifter#(32,4) lshifter
  (
   .in    (a_reg_out),
   .shamt (calc_shamt_out),
   .out   (lshifter_out)
  );

  // Result mux

  logic [31:0] add_mux_out;
  logic [31:0] result_mux_out;

  vc_Mux2#(32) result_mux
  (
   .sel (result_mux_sel),
   .in0 (add_mux_out),
   .in1 (32'b0),
   .out (result_mux_out)
  );

  // Result register

  logic [31:0] result_reg_out;

  vc_EnReg#(32) result_reg
  (
   .clk   (clk),
   .reset (reset),
   .en    (result_reg_en),
   .d     (result_mux_out),
   .q     (result_reg_out)
  );

  // Adder

  logic [31:0] add_out;

  vc_SimpleAdder#(32) add
  (
   .in0 (a_reg_out),
   .in1 (result_reg_out),
   .out (add_out)
  );

  // Add mux

  vc_Mux2#(32) add_mux
  (
   .sel (add_mux_sel),
   .in0 (add_out),
   .in1 (result_reg_out),
   .out (add_mux_out)
  );

  // Status signals

  assign b_lsb = b_reg_out[0];

  // Connect to output port

  assign ostream_msg = result_reg_out;

endmodule



module lab1_imul_IntMulAltCtrl
(
  input  logic clk,
  input  logic reset,

  // Dataflow signals

  input  logic istream_val,
  output logic istream_rdy,

  output logic ostream_val,
  input  logic ostream_rdy,

  // Control signals (ctrl -> dpath)

  output logic a_mux_sel,
  output logic b_mux_sel,
  output logic result_mux_sel,
  output logic result_reg_en,
  output logic add_mux_sel,

  // Status signals (dpath -> ctrl)

  input  logic b_lsb,
  input  logic is_b_zero
);

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

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

  //----------------------------------------------------------------------
  // State Transitions
  //----------------------------------------------------------------------

  logic istream_go, ostream_go, is_calc_done;

  assign istream_go      = istream_val && istream_rdy;
  assign ostream_go      = ostream_val && ostream_rdy;
  assign is_calc_done = is_b_zero;

  always @(*) begin

    state_next = state_reg;

    case ( state_reg )

      STATE_IDLE: if ( istream_go      ) state_next = STATE_CALC;
      STATE_CALC: if ( is_calc_done ) state_next = STATE_DONE;
      STATE_DONE: if ( ostream_go      ) state_next = STATE_IDLE;
      default:                        state_next = 'x;

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
    a_mux_sel      = cs_a_mux_sel;
    b_mux_sel      = cs_b_mux_sel;
    result_mux_sel = cs_result_mux_sel;
    result_reg_en  = cs_result_reg_en;
    add_mux_sel    = cs_add_mux_sel;
  end
  endtask

  // Labels for Mealy transistions

  logic do_sh_add, do_sh;

  assign do_sh_add = (b_lsb == 1); // do shift and add
  assign do_sh     = (b_lsb == 0); // do shift but no add

  // Set outputs using a control signal "table"

  always @(*) begin

    case ( state_reg )

//                               istream ostream a mux  b mux  res mux  res    add mux
//                               rdy val  sel    sel    sel      en     sel
STATE_IDLE:                  cs( 1,  0,   a_ld,  b_ld,  res_0,   1,     add_x    );
STATE_CALC: if ( do_sh_add ) cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_add  );
       else if ( do_sh )     cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_res  );
STATE_DONE:                  cs( 0,  1,   a_x,   b_x,   res_x,   0,     add_x    );
default:                     cs('x, 'x,   a_x,   b_x,   res_x,  'x,     add_x    );

    endcase

  end

endmodule


module lab1_imul_IntMulAlt
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

  lab1_imul_IntMulAltDpath dpath
  (
    .istream_msg_a (istream_msg[63:32]),
    .istream_msg_b (istream_msg[31: 0]),
    .ostream_msg   (product),
    .*
  );

  // Instantiate and connect control unit

  lab1_imul_IntMulAltCtrl ctrl
  (
    .*
  );

  assign ostream_msg = product & {32{ostream_val}};

endmodule

`endif
