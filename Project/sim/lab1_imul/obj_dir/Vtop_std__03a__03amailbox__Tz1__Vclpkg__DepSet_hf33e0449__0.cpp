// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

Vtop_std__03a__03amailbox__Tz1::Vtop_std__03a__03amailbox__Tz1(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_bound = bound;
    vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
    vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if ((0U != this->__PVT__m_bound)) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h42a340d8__0;
            __VdynTrigger_h42a340d8__0 = 0;
            __VdynTrigger_h42a340d8__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_h445d6748__0;
            __Vtrigcurrexpr_h445d6748__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_h42a340d8__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                             44);
                __Vtrigcurrexpr_h445d6748__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h42a340d8__0 = __Vtrigcurrexpr_h445d6748__0;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                         44);
        }
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
    }
    this->__PVT__m_queue.push_back(message);
    vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__0__Vfuncout;
    __Vfunc_num__0__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__0__Vfuncout);
                    }(), __Vfunc_num__0__Vfuncout), this->__PVT__m_bound)) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel1;
        } else {
            vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel1: ;
    }
    vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h0982b4a7__0;
        __VdynTrigger_h0982b4a7__0 = 0;
        __VdynTrigger_h0982b4a7__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hfb7ddbb7__0;
        __Vtrigcurrexpr_hfb7ddbb7__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h0982b4a7__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                         59);
            __Vtrigcurrexpr_hfb7ddbb7__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h0982b4a7__0 = __Vtrigcurrexpr_hfb7ddbb7__0;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                     59);
    }
    message = this->__PVT__m_queue.pop_front();
    vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__1__Vfuncout;
    __Vfunc_num__1__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__1__Vfuncout);
                    }(), __Vfunc_num__1__Vfuncout))) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel2;
        } else {
            vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel2: ;
    }
    vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h0982b4a7__1;
        __VdynTrigger_h0982b4a7__1 = 0;
        __VdynTrigger_h0982b4a7__1 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hfb7ddbb7__1;
        __Vtrigcurrexpr_hfb7ddbb7__1 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h0982b4a7__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                         74);
            __Vtrigcurrexpr_hfb7ddbb7__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h0982b4a7__1 = __Vtrigcurrexpr_hfb7ddbb7__1;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                     74);
    }
    message = this->__PVT__m_queue.at(0U);
    vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__2__Vfuncout;
    __Vfunc_num__2__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__2__Vfuncout);
                    }(), __Vfunc_num__2__Vfuncout))) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel3;
        } else {
            vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel3: ;
    }
    vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03amailbox__Tz1::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_bound = 0;
    }
