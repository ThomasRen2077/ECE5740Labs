// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab4_branch_BranchGshare.h"

VL_ATTR_COLD void Vtop_lab4_branch_BranchGshare___stl_sequent__TOP__top__DUT__0(Vtop_lab4_branch_BranchGshare* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGshare___stl_sequent__TOP__top__DUT__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 0U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 1U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 1U)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 2U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 2U)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 3U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 3U)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 4U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 4U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 5U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 5U)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 6U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 6U)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 7U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 7U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 8U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 8U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 9U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 9U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0xaU) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__GHR), 0xaU)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__GHR, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__GHR), 0xaU)));
    }
    if (((IData)(vlSelf->__PVT__update_en) ^ (IData)(vlSelf->__Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_en = vlSelf->__PVT__update_en;
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__update_val) ^ (IData)(vlSelf->__Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_val = vlSelf->__PVT__update_val;
    }
    vlSelf->__PVT__GHR_update_value = vlSelf->__PVT__update_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    vlSelf->__PVT__PC_factor = (0x7ffU & VL_SEL_IIII(32, vlSelf->__PVT__PC, 2U, 0xbU));
    if (((IData)(vlSelf->__PVT__GHR_update_value) ^ (IData)(vlSelf->__Vtogcov__GHR_update_value))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__GHR_update_value = vlSelf->__PVT__GHR_update_value;
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 0U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 0U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 1U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 1U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 2U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 2U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 3U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 3U)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 4U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 4U)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 5U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 5U)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 6U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 6U)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 7U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 7U)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 8U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 8U)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 9U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 9U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 0xaU) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PC_factor), 0xaU)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC_factor, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PC_factor), 0xaU)));
    }
    vlSelf->__PVT__PHT_index = ((IData)(vlSelf->__PVT__GHR) 
                                ^ (IData)(vlSelf->__PVT__PC_factor));
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 0U)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 1U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 1U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 2U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 2U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 3U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 3U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 4U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 4U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 5U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 5U)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 6U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 6U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 7U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 7U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 8U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 8U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 9U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 9U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0xaU) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 0xaU)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0xaU)));
    }
    vlSelf->__PVT__current_PHT = (3U & VL_SEL_IWII(4096, vlSelf->__PVT__PHT, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  ((0x1fU 
                                                                    >= 1U)
                                                                    ? 
                                                                   (VL_EXTEND_II(32,11, (IData)(vlSelf->__PVT__PHT_index)) 
                                                                    << 1U)
                                                                    : 0U), 0U, 0xcU)), 2U));
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__current_PHT), 0U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__current_PHT), 1U)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U)));
    }
    if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U))) {
        vlSelf->__PVT__prediction = 1U;
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__prediction = 0U;
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchGshare___stl_sequent__TOP__top__DUT__1(Vtop_lab4_branch_BranchGshare* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGshare___stl_sequent__TOP__top__DUT__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchGshare___configure_coverage(Vtop_lab4_branch_BranchGshare* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchGshare___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "BranchGShare.v", 18, 24, "", "v_toggle/lab4_branch_BranchGshare", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "BranchGShare.v", 19, 24, "", "v_toggle/lab4_branch_BranchGshare", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "BranchGShare.v", 20, 15, "", "v_toggle/lab4_branch_BranchGshare", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "BranchGShare.v", 21, 15, "", "v_toggle/lab4_branch_BranchGshare", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "BranchGShare.v", 22, 22, "", "v_toggle/lab4_branch_BranchGshare", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "BranchGShare.v", 23, 16, "", "v_toggle/lab4_branch_BranchGshare", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "BranchGShare.v", 30, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "BranchGShare.v", 31, 29, "", "v_toggle/lab4_branch_BranchGshare", "PC_factor[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "BranchGShare.v", 32, 29, "", "v_toggle/lab4_branch_BranchGshare", "current_PHT[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "BranchGShare.v", 32, 29, "", "v_toggle/lab4_branch_BranchGshare", "current_PHT[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "BranchGShare.v", 33, 29, "", "v_toggle/lab4_branch_BranchGshare", "GHR_update_value", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "BranchGShare.v", 34, 29, "", "v_toggle/lab4_branch_BranchGshare", "PHT_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "BranchGShare.v", 44, 3, "", "v_branch/lab4_branch_BranchGshare", "if", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "BranchGShare.v", 44, 4, "", "v_branch/lab4_branch_BranchGshare", "else", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "BranchGShare.v", 43, 1, "", "v_line/lab4_branch_BranchGshare", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "BranchGShare.v", 61, 9, "", "v_branch/lab4_branch_BranchGshare", "if", "61-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "BranchGShare.v", 61, 10, "", "v_branch/lab4_branch_BranchGshare", "else", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "BranchGShare.v", 69, 9, "", "v_branch/lab4_branch_BranchGshare", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "BranchGShare.v", 69, 10, "", "v_branch/lab4_branch_BranchGshare", "else", "72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "BranchGShare.v", 60, 7, "", "v_branch/lab4_branch_BranchGshare", "if", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "BranchGShare.v", 60, 8, "", "v_branch/lab4_branch_BranchGshare", "else", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "BranchGShare.v", 58, 5, "", "v_branch/lab4_branch_BranchGshare", "if", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "BranchGShare.v", 58, 6, "", "v_branch/lab4_branch_BranchGshare", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "BranchGShare.v", 50, 3, "", "v_branch/lab4_branch_BranchGshare", "if", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "BranchGShare.v", 50, 4, "", "v_branch/lab4_branch_BranchGshare", "else", "54-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "BranchGShare.v", 49, 1, "", "v_line/lab4_branch_BranchGshare", "block", "49");
}
