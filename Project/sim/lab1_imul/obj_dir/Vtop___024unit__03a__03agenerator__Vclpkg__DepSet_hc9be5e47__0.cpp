// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03agenerator::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    VlClassRef<Vtop___024unit__03a__03atransaction> __Vtask_copy__3__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, a)) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ (IData)((0U != ([&]() {
                                            VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 68)
                                                   ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                        }(), __Vtask_randomize__1__Vfuncout))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("Randomization Failed!\n");
                }
            }
        }
        VL_WRITEF("[GEN] : DATA SENT TO DRIVER, time : %0#\n",
                  64,VL_TIME_UNITED_Q(1));
        co_await VL_NULL_CHECK(this->__PVT__mbx, "../lab1_imul/tb_IntMul.v", 70)->__VnoInFunc_put(vlSymsp, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 70)
                                                                                ->__VnoInFunc_copy(vlSymsp, __Vtask_copy__3__Vfuncout);
                }(), __Vtask_copy__3__Vfuncout));
        VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 71)->__VnoInFunc_display(vlSymsp);
        co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                                nullptr, 
                                                "../lab1_imul/tb_IntMul.v", 
                                                72);
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop___024unit__03a__03agenerator::__VnoInFunc_cal(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::__VnoInFunc_cal\n"); );
    // Init
    VL_KEEP_THIS;
    VlClassRef<Vtop___024unit__03a__03atransaction> __Vtask_copy__6__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 81)->__PVT__istream_msg_a 
        = a;
    VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 82)->__PVT__istream_msg_b 
        = b;
    VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 83)->__PVT__ostream_msg 
        = VL_MULS_III(32, a, b);
    VL_WRITEF("[GEN] : DATA SENT TO DRIVER, time : %0#\n",
              64,VL_TIME_UNITED_Q(1));
    co_await VL_NULL_CHECK(this->__PVT__mbx, "../lab1_imul/tb_IntMul.v", 85)->__VnoInFunc_put(vlSymsp, 
                                                                                ([&]() {
                VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 85)
                                                                                ->__VnoInFunc_copy(vlSymsp, __Vtask_copy__6__Vfuncout);
            }(), __Vtask_copy__6__Vfuncout));
    VL_NULL_CHECK(this->__PVT__trans, "../lab1_imul/tb_IntMul.v", 86)->__VnoInFunc_display(vlSymsp);
    co_await vlSymsp->TOP.__VdlySched.delay(0x14ULL, 
                                            nullptr, 
                                            "../lab1_imul/tb_IntMul.v", 
                                            87);
    vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
}
