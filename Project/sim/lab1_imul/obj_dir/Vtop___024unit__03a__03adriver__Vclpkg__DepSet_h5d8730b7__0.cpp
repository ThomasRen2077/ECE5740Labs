// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    VlClassRef<Vtop___024unit__03a__03atransaction> __Vtask_get__0__message;
    // Body
    while (1U) {
        co_await VL_NULL_CHECK(this->__PVT__mbx, "../lab1_imul/tb_IntMul.v", 104)->__VnoInFunc_get(vlSymsp, __Vtask_get__0__message);
        this->__PVT__data = __Vtask_get__0__message;
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 105)->reset = 0U;
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 106)->istream_msg 
            = ((0xffffffffULL & VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 106)
                ->istream_msg) | ((QData)((IData)(VL_NULL_CHECK(this->__PVT__data, "../lab1_imul/tb_IntMul.v", 106)
                                                  ->__PVT__istream_msg_a)) 
                                  << 0x20U));
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 107)->istream_msg 
            = ((0xffffffff00000000ULL & VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 107)
                ->istream_msg) | (IData)((IData)(VL_NULL_CHECK(this->__PVT__data, "../lab1_imul/tb_IntMul.v", 107)
                                                 ->__PVT__istream_msg_b)));
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 108)->istream_val = 1U;
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 109)->ostream_rdy = 1U;
        VL_WRITEF("[DRV] : Interface Trigger, time : %0#\n",
                  64,VL_TIME_UNITED_Q(1));
        VL_NULL_CHECK(this->__PVT__data, "../lab1_imul/tb_IntMul.v", 111)->__VnoInFunc_display(vlSymsp);
        while ((1U & (~ (IData)(VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 112)
                                ->istream_rdy)))) {
            vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        }
        VL_NULL_CHECK(this->__PVT__iml_if, "../lab1_imul/tb_IntMul.v", 113)->istream_val = 0U;
        co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                                nullptr, 
                                                "../lab1_imul/tb_IntMul.v", 
                                                114);
        VL_WRITEF("Finished one execuation%20#\n",64,
                  VL_TIME_UNITED_Q(1));
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
}
