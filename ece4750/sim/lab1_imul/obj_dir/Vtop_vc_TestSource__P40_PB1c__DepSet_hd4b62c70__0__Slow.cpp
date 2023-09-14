// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"

VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___ctor_var_reset(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__msg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->__PVT__m[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__index_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__index_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__done_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__go = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__done = VL_RAND_RESET_I(1);
}
