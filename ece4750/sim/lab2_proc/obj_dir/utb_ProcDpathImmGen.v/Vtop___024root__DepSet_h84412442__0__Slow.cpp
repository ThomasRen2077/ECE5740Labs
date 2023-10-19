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
    vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__imm_type))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__imm_type))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imm_type) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__imm_type)))) {
                vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__imm_type))) {
                vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__imm_type))) {
            vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imm = 0U;
        } else {
            vlSelf->top__DOT__imm = ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (0x1fU & (vlSelf->top__DOT__inst 
                                                  >> 0x14U))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->top__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 9U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 0x14U)))))));
        }
    } else {
        vlSelf->top__DOT__imm = ((2U & (IData)(vlSelf->top__DOT__imm_type))
                                  ? ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (0xfffff000U 
                                         & vlSelf->top__DOT__inst)
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->top__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 7U))))))
                                  : ((1U & (IData)(vlSelf->top__DOT__imm_type))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | ((0x7e0U 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__inst 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | (0x7ffU 
                                            & (vlSelf->top__DOT__inst 
                                               >> 0x14U)))));
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((6U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((5U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm_type) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_type)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm_type = ((3U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__imm_type)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->top__DOT__imm_type)));
    }
    if ((1U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (1U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((2U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (2U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((4U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (4U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((8U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (8U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x80U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x100U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x200U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x400U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x800U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x1000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x2000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x4000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x8000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x80000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x100000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x200000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x400000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x800000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x1000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x2000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x4000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x8000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x10000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x20000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((0x40000000U & (vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if (((vlSelf->top__DOT__inst ^ vlSelf->top__DOT____Vtogcov__inst) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__inst = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000000U 
                                                & vlSelf->top__DOT__inst));
    }
    if ((1U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (1U & vlSelf->top__DOT__imm));
    }
    if ((2U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (2U & vlSelf->top__DOT__imm));
    }
    if ((4U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (4U & vlSelf->top__DOT__imm));
    }
    if ((8U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (8U & vlSelf->top__DOT__imm));
    }
    if ((0x10U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x80U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x100U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x200U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x400U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x800U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x1000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x2000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x4000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x8000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x10000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x80000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x100000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x200000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x400000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x800000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__imm));
    }
    if (((vlSelf->top__DOT__imm ^ vlSelf->top__DOT____Vtogcov__imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__imm));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_ProcDpathImmGen.v", 8, 24, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_ProcDpathImmGen.v", 8, 41, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_ProcDpathImmGen.v", 10, 17, ".top", "v_toggle/top", "imm_type[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_ProcDpathImmGen.v", 10, 17, ".top", "v_toggle/top", "imm_type[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_ProcDpathImmGen.v", 10, 17, ".top", "v_toggle/top", "imm_type[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_ProcDpathImmGen.v", 11, 17, ".top", "v_toggle/top", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_ProcDpathImmGen.v", 12, 17, ".top", "v_toggle/top", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_ProcDpathImmGen.v", 29, 5, ".top", "v_line/top", "block", "29,31-33,36-42,46-52,56-62,66-72,76-82,86-92,96-102,106,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "ProcDpathImmGen.v", 6, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm_type[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "ProcDpathImmGen.v", 6, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm_type[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "ProcDpathImmGen.v", 6, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm_type[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "ProcDpathImmGen.v", 7, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "ProcDpathImmGen.v", 8, 23, ".top.DUT", "v_toggle/lab2_proc_ProcDpathImmGen", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "ProcDpathImmGen.v", 13, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "13-14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "ProcDpathImmGen.v", 16, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "ProcDpathImmGen.v", 19, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "ProcDpathImmGen.v", 22, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "22-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "ProcDpathImmGen.v", 25, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "25-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "ProcDpathImmGen.v", 28, 11, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "ProcDpathImmGen.v", 32, 7, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "case", "32-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "ProcDpathImmGen.v", 11, 3, ".top.DUT", "v_line/lab2_proc_ProcDpathImmGen", "block", "11-12");
}
