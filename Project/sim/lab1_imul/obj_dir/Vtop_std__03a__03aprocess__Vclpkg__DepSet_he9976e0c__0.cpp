// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03aprocess__Vclpkg.h"

void Vtop_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Vtop_std__03a__03aprocess> p;
    p = VL_NEW(Vtop_std__03a__03aprocess, vlSymsp);
    // $c statement at /home/thomasyyyy2077/verilator/include/verilated_std.sv:132:10
    VL_NULL_CHECK(p, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 132)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
    vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_set_status(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body
    // $c statement at /home/thomasyyyy2077/verilator/include/verilated_std.sv:139:10
    this->__PVT__m_process->state(s);
    vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_status(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
    // $c function at /home/thomasyyyy2077/verilator/include/verilated_std.sv:145:24
    this->__PVT__m_process->state()
    ;
    vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_kill(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_suspend(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF("[%0t] %%Error: verilated_std.sv:156: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/home/thomasyyyy2077/verilator/include/verilated_std.sv", 156, "");
}

void Vtop_std__03a__03aprocess::__VnoInFunc_resume(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
    vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
}

VlCoroutine Vtop_std__03a__03aprocess::__VnoInFunc_await(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vfunc_status__2__Vfuncout;
    __Vfunc_status__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_status__3__Vfuncout;
    __Vfunc_status__3__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(((0U == ([&]() {
                                    this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                                }(), __Vfunc_status__2__Vfuncout)) 
                          | (4U == ([&]() {
                                    this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                                }(), __Vfunc_status__3__Vfuncout))))))) {
        CData/*0:0*/ __VdynTrigger_hc510cc46__0;
        __VdynTrigger_hc510cc46__0 = 0;
        __VdynTrigger_hc510cc46__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hbeeef8de__0;
        __Vtrigcurrexpr_hbeeef8de__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_hc510cc46__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                         "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                         165);
            __Vtrigcurrexpr_hbeeef8de__0 = ((0U == 
                                             ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                        }(), __Vfunc_status__2__Vfuncout)) 
                                            | (4U == 
                                               ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                        }(), __Vfunc_status__3__Vfuncout)));
            __VdynTrigger_hc510cc46__0 = __Vtrigcurrexpr_hbeeef8de__0;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                     "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 
                                                     165);
    }
    vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_get_randstate(Vtop__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_SFORMATF_NX("%0d",32,VL_RANDOM_I()) ;
    this->__VnoInFunc_set_randstate(vlSymsp, s);
    get_randstate__Vfuncrtn = s;
    vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::__VnoInFunc_set_randstate(Vtop__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body
    (void)VL_URANDOM_SEEDED_II(VL_ATOI_N(s, 10));
    vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
}

Vtop_std__03a__03aprocess::Vtop_std__03a__03aprocess(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
}

void Vtop_std__03a__03aprocess::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    }
