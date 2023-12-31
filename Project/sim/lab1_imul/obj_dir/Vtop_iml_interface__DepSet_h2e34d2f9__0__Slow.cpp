// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_iml_interface.h"

VL_ATTR_COLD void Vtop_iml_interface___configure_coverage(Vtop_iml_interface* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_iml_interface___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../lab1_imul/tb_IntMul.v", 13, 16, "", "v_toggle/iml_interface", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../lab1_imul/tb_IntMul.v", 14, 16, "", "v_toggle/iml_interface", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../lab1_imul/tb_IntMul.v", 16, 16, "", "v_toggle/iml_interface", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../lab1_imul/tb_IntMul.v", 17, 16, "", "v_toggle/iml_interface", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../lab1_imul/tb_IntMul.v", 18, 16, "", "v_toggle/iml_interface", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../lab1_imul/tb_IntMul.v", 20, 16, "", "v_toggle/iml_interface", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../lab1_imul/tb_IntMul.v", 21, 16, "", "v_toggle/iml_interface", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../lab1_imul/tb_IntMul.v", 22, 16, "", "v_toggle/iml_interface", "ostream_msg[31]", "");
}
