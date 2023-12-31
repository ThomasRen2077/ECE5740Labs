// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03asemaphore__Vclpkg.h"

Vtop_std__03a__03asemaphore::Vtop_std__03a__03asemaphore(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03asemaphore::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_keyCount = keyCount;
    vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03asemaphore::__VnoInFunc_put(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03asemaphore::__VnoInFunc_put\n"); );
    // Body
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               + keyCount);
    vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop_std__03a__03asemaphore::__VnoInFunc_get(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
        CData/*0:0*/ __VdynTrigger_h7af60770__0;
        __VdynTrigger_h7af60770__0 = 0;
        __VdynTrigger_h7af60770__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h890a31f0__0;
        __Vtrigcurrexpr_h890a31f0__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h7af60770__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                         "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                         101);
            __Vtrigcurrexpr_h890a31f0__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
            __VdynTrigger_h7af60770__0 = __Vtrigcurrexpr_h890a31f0__0;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                     "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                     101);
    }
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               - keyCount);
    vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03asemaphore::__VnoInFunc_try_get(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03asemaphore::__VnoInFunc_try_get\n"); );
    // Body
    {
        if (VL_GTES_III(32, this->__PVT__m_keyCount, keyCount)) {
            this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                       - keyCount);
            try_get__Vfuncrtn = 1U;
            goto __Vlabel1;
        } else {
            vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel1: ;
    }
    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03asemaphore::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_keyCount = 0;
}
