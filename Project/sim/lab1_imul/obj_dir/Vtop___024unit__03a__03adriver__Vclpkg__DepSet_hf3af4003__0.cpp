// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"

Vtop___024unit__03a__03adriver::Vtop___024unit__03a__03adriver(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__mbx = mbx;
    vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit__03a__03adriver::__VnoInFunc_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::__VnoInFunc_reset\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 121)->reset = 1U;
    VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 122)->istream_msg = 0ULL;
    VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 123)->istream_val = 0U;
    VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 124)->ostream_rdy = 0U;
    vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit__03a__03adriver::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__iml_if = nullptr;
    }
