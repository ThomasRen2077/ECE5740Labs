// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab4_branch_BranchGlobal.h"

VL_ATTR_COLD void Vtop_lab4_branch_BranchGlobal___stl_sequent__TOP__top__DUT__0(Vtop_lab4_branch_BranchGlobal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGlobal___stl_sequent__TOP__top__DUT__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 0U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 1U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 1U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 2U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 2U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 3U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 3U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 4U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 4U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 5U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 5U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 6U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 6U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 7U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 7U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 8U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 8U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 9U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 9U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0xaU) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 0xaU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0xaU)));
    }
    vlSelf->__PVT__current_PHT = (3U & VL_SEL_IWII(4096, vlSelf->__PVT__PHT, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  ((0x1fU 
                                                                    >= 1U)
                                                                    ? 
                                                                   (VL_EXTEND_II(32,11, (IData)(vlSelf->__PVT__GHR)) 
                                                                    << 1U)
                                                                    : 0U), 0U, 0xcU)), 2U));
    if (((IData)(vlSelf->__PVT__update_en) ^ (IData)(vlSelf->__Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_en = vlSelf->__PVT__update_en;
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__update_val) ^ (IData)(vlSelf->__Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_val = vlSelf->__PVT__update_val;
    }
    vlSelf->__PVT__GHR_update_value = vlSelf->__PVT__update_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__current_PHT), 0U)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__current_PHT), 1U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U)));
    }
    if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U))) {
        vlSelf->__PVT__prediction = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__prediction = 0U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__GHR_update_value) ^ (IData)(vlSelf->__Vtogcov__GHR_update_value))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__GHR_update_value = vlSelf->__PVT__GHR_update_value;
    }
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchGlobal___stl_sequent__TOP__top__DUT__1(Vtop_lab4_branch_BranchGlobal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGlobal___stl_sequent__TOP__top__DUT__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchGlobal___configure_coverage(Vtop_lab4_branch_BranchGlobal* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGlobal___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "BranchGlobal.v", 19, 23, "", "v_toggle/lab4_branch_BranchGlobal", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "BranchGlobal.v", 20, 23, "", "v_toggle/lab4_branch_BranchGlobal", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "BranchGlobal.v", 21, 23, "", "v_toggle/lab4_branch_BranchGlobal", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "BranchGlobal.v", 22, 23, "", "v_toggle/lab4_branch_BranchGlobal", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "BranchGlobal.v", 23, 23, "", "v_toggle/lab4_branch_BranchGlobal", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "BranchGlobal.v", 24, 23, "", "v_toggle/lab4_branch_BranchGlobal", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "BranchGlobal.v", 31, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "BranchGlobal.v", 32, 29, "", "v_toggle/lab4_branch_BranchGlobal", "current_PHT[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "BranchGlobal.v", 32, 29, "", "v_toggle/lab4_branch_BranchGlobal", "current_PHT[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "BranchGlobal.v", 33, 29, "", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "BranchGlobal.v", 40, 3, "", "v_branch/lab4_branch_BranchGlobal", "if", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "BranchGlobal.v", 40, 4, "", "v_branch/lab4_branch_BranchGlobal", "else", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "BranchGlobal.v", 39, 1, "", "v_line/lab4_branch_BranchGlobal", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "BranchGlobal.v", 57, 9, "", "v_branch/lab4_branch_BranchGlobal", "if", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "BranchGlobal.v", 57, 10, "", "v_branch/lab4_branch_BranchGlobal", "else", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "BranchGlobal.v", 65, 9, "", "v_branch/lab4_branch_BranchGlobal", "if", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "BranchGlobal.v", 65, 10, "", "v_branch/lab4_branch_BranchGlobal", "else", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "BranchGlobal.v", 56, 7, "", "v_branch/lab4_branch_BranchGlobal", "if", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "BranchGlobal.v", 56, 8, "", "v_branch/lab4_branch_BranchGlobal", "else", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "BranchGlobal.v", 54, 5, "", "v_branch/lab4_branch_BranchGlobal", "if", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "BranchGlobal.v", 54, 6, "", "v_branch/lab4_branch_BranchGlobal", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "BranchGlobal.v", 46, 3, "", "v_branch/lab4_branch_BranchGlobal", "if", "46-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "BranchGlobal.v", 46, 4, "", "v_branch/lab4_branch_BranchGlobal", "else", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "BranchGlobal.v", 45, 1, "", "v_line/lab4_branch_BranchGlobal", "block", "45");
}
