// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

Vtop___024unit__03a__03agenerator::Vtop___024unit__03a__03agenerator(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__mbx = mbx;
    this->__PVT__trans = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
    vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
}
