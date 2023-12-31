// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

void Vtop___024unit__03a__03atransaction::__VnoInFunc_display(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF("a : %0#, b : %0#\n",32,this->__PVT__istream_msg_a,
              32,this->__PVT__istream_msg_b);
    vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit__03a__03atransaction::__VnoInFunc_copy(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::__VnoInFunc_copy\n"); );
    // Body
    copy__Vfuncrtn = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
    VL_NULL_CHECK(copy__Vfuncrtn, "../lab1_imul/tb_IntMul.v", 49)->__PVT__istream_msg_a 
        = this->__PVT__istream_msg_a;
    VL_NULL_CHECK(copy__Vfuncrtn, "../lab1_imul/tb_IntMul.v", 50)->__PVT__istream_msg_b 
        = this->__PVT__istream_msg_b;
    VL_NULL_CHECK(copy__Vfuncrtn, "../lab1_imul/tb_IntMul.v", 51)->__PVT__ostream_msg 
        = this->__PVT__ostream_msg;
    vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
}

Vtop___024unit__03a__03atransaction::Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit__03a__03atransaction::__VnoInFunc_randomize(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
    randomize__Vfuncrtn = 1U;
    this->__PVT__istream_msg_a = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__istream_msg_b = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vtop___024unit__03a__03atransaction::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__istream_msg_a = 0;
    __PVT__istream_msg_b = 0;
    __PVT__ostream_msg = 0;
}
