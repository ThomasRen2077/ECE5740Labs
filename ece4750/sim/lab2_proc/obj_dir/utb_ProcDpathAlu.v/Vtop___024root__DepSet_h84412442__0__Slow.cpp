// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__fn))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__fn))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__fn))) {
            if ((2U & (IData)(vlSelf->top__DOT__fn))) {
                vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__out = 0U;
            } else {
                vlSelf->top__DOT__out = ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? 0U : vlSelf->top__DOT__in1);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__fn) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__fn))) {
                    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__fn)))) {
                    vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
                }
            }
        } else {
            vlSelf->top__DOT__out = ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? vlSelf->top__DOT__in0
                                          : (0xfffffffeU 
                                             & (vlSelf->top__DOT__in0 
                                                + vlSelf->top__DOT__in1)))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? (vlSelf->top__DOT__in0 
                                                 << vlSelf->top__DOT__in1)
                                              : 0U)
                                          : ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? (vlSelf->top__DOT__in0 
                                                 >> vlSelf->top__DOT__in1)
                                              : 0U)));
        }
    } else {
        vlSelf->top__DOT__out = ((4U & (IData)(vlSelf->top__DOT__fn))
                                  ? ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? ((0x1fU 
                                              >= vlSelf->top__DOT__in1)
                                              ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1)
                                              : (- 
                                                 (vlSelf->top__DOT__in0 
                                                  >> 0x1fU)))
                                          : ((vlSelf->top__DOT__in0 
                                              < vlSelf->top__DOT__in1)
                                              ? 1U : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (VL_LTS_III(32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1)
                                              ? 1U : 0U)
                                          : (vlSelf->top__DOT__in0 
                                             ^ vlSelf->top__DOT__in1)))
                                  : ((2U & (IData)(vlSelf->top__DOT__fn))
                                      ? ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (vlSelf->top__DOT__in0 
                                             | vlSelf->top__DOT__in1)
                                          : (vlSelf->top__DOT__in0 
                                             & vlSelf->top__DOT__in1))
                                      : ((1U & (IData)(vlSelf->top__DOT__fn))
                                          ? (vlSelf->top__DOT__in0 
                                             - vlSelf->top__DOT__in1)
                                          : (vlSelf->top__DOT__in0 
                                             + vlSelf->top__DOT__in1))));
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xeU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (1U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xdU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (2U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((0xbU & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (4U & (IData)(vlSelf->top__DOT__fn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__fn) ^ (IData)(vlSelf->top__DOT____Vtogcov__fn)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fn = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__fn)) 
                                           | (8U & (IData)(vlSelf->top__DOT__fn)));
    }
    vlSelf->top__DOT__ops_eq = (vlSelf->top__DOT__in0 
                                == vlSelf->top__DOT__in1);
    vlSelf->top__DOT__ops_lt = VL_LTS_III(32, vlSelf->top__DOT__in0, vlSelf->top__DOT__in1);
    vlSelf->top__DOT__ops_ltu = (vlSelf->top__DOT__in0 
                                 < vlSelf->top__DOT__in1);
    if ((1U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (1U & vlSelf->top__DOT__in0));
    }
    if ((2U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (2U & vlSelf->top__DOT__in0));
    }
    if ((4U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (4U & vlSelf->top__DOT__in0));
    }
    if ((8U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (8U & vlSelf->top__DOT__in0));
    }
    if ((0x10U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x80U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x100U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x200U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x400U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x800U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x1000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x2000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x4000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x8000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x10000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x80000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x100000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x200000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x400000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x800000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if (((vlSelf->top__DOT__in0 ^ vlSelf->top__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in0 = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in0) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__in0));
    }
    if ((1U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (1U & vlSelf->top__DOT__in1));
    }
    if ((2U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (2U & vlSelf->top__DOT__in1));
    }
    if ((4U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (4U & vlSelf->top__DOT__in1));
    }
    if ((8U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (8U & vlSelf->top__DOT__in1));
    }
    if ((0x10U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x80U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x100U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x200U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x400U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x800U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x1000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x2000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x4000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x8000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x10000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x80000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x100000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x200000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x400000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x800000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if (((vlSelf->top__DOT__in1 ^ vlSelf->top__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__in1 = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__in1) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__in1));
    }
    if (((IData)(vlSelf->top__DOT__ops_eq) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_eq))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_eq = vlSelf->top__DOT__ops_eq;
    }
    if (((IData)(vlSelf->top__DOT__ops_lt) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_lt))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_lt = vlSelf->top__DOT__ops_lt;
    }
    if (((IData)(vlSelf->top__DOT__ops_ltu) ^ (IData)(vlSelf->top__DOT____Vtogcov__ops_ltu))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ops_ltu = vlSelf->top__DOT__ops_ltu;
    }
    if ((1U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (1U & vlSelf->top__DOT__out));
    }
    if ((2U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (2U & vlSelf->top__DOT__out));
    }
    if ((4U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (4U & vlSelf->top__DOT__out));
    }
    if ((8U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (8U & vlSelf->top__DOT__out));
    }
    if ((0x10U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x80U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x100U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x200U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x400U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x800U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x1000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x2000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x4000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x8000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x10000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x80000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x100000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x200000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x400000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x800000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__out));
    }
    if (((vlSelf->top__DOT__out ^ vlSelf->top__DOT____Vtogcov__out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__out = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__out));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_ProcDpathAlu.v", 11, 27, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_ProcDpathAlu.v", 11, 44, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_ProcDpathAlu.v", 13, 17, ".top", "v_toggle/top", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_ProcDpathAlu.v", 14, 17, ".top", "v_toggle/top", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_ProcDpathAlu.v", 15, 17, ".top", "v_toggle/top", "fn[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_ProcDpathAlu.v", 15, 17, ".top", "v_toggle/top", "fn[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_ProcDpathAlu.v", 15, 17, ".top", "v_toggle/top", "fn[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_ProcDpathAlu.v", 15, 17, ".top", "v_toggle/top", "fn[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "utb_ProcDpathAlu.v", 16, 17, ".top", "v_toggle/top", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "utb_ProcDpathAlu.v", 17, 10, ".top", "v_toggle/top", "ops_eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "utb_ProcDpathAlu.v", 18, 10, ".top", "v_toggle/top", "ops_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "utb_ProcDpathAlu.v", 19, 10, ".top", "v_toggle/top", "ops_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "utb_ProcDpathAlu.v", 32, 3, ".top", "v_line/top", "block", "32,34-37,40-43,46-49,53-56,59-62,66-69,72-75,79-82,85-88,92-95,98-101,105-108,111-114,118-121,124-127,131-134,137-140,144-147,150-153,157-160,163-166,170-173,176-179,183-186,189-192,197-200,203-206,210-213,217-220,226,231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "ProcDpathAlu.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcDpathAlu.v", 9, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcDpathAlu.v", 10, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "fn[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcDpathAlu.v", 10, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "fn[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcDpathAlu.v", 10, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "fn[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "ProcDpathAlu.v", 10, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "fn[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "ProcDpathAlu.v", 11, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "ProcDpathAlu.v", 12, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "ops_eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "ProcDpathAlu.v", 13, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "ops_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "ProcDpathAlu.v", 14, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathAlu", "ops_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "ProcDpathAlu.v", 20, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "ProcDpathAlu.v", 21, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "ProcDpathAlu.v", 22, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "ProcDpathAlu.v", 25, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "ProcDpathAlu.v", 26, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "ProcDpathAlu.v", 27, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "ProcDpathAlu.v", 28, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "ProcDpathAlu.v", 29, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "ProcDpathAlu.v", 30, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "ProcDpathAlu.v", 31, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "ProcDpathAlu.v", 32, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "ProcDpathAlu.v", 33, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "ProcDpathAlu.v", 34, 15, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "ProcDpathAlu.v", 35, 7, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "ProcDpathAlu.v", 17, 3, ".top.DUT", "v_line/lab2_proc_ProcDpathAlu", "block", "17,19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../vc/arithmetic.v", 136, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../vc/arithmetic.v", 137, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/arithmetic.v", 138, 30, ".top.DUT.cond_eq_comp", "v_toggle/vc_EqComparator__P20", "out", "");
}
