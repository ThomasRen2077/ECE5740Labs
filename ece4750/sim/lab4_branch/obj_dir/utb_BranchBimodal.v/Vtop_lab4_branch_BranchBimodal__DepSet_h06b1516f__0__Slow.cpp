// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab4_branch_BranchBimodal.h"

VL_ATTR_COLD void Vtop_lab4_branch_BranchBimodal___stl_sequent__TOP__top__DUT__0(Vtop_lab4_branch_BranchBimodal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchBimodal___stl_sequent__TOP__top__DUT__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0U)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 1U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 1U)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 2U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 2U)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 3U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 3U)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 4U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 4U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 5U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 5U)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 6U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 6U)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 7U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 7U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 8U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 8U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 9U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 9U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xaU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xaU)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xbU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xbU)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xcU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xcU)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xdU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xdU)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xeU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xeU)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xfU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0xfU)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x10U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x10U)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x11U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x11U)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x12U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x12U)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x13U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x13U)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x14U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x14U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x15U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x15U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x16U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x16U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x17U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x17U)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x18U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x18U)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x19U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x19U)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1aU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1aU)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1bU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1bU)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1cU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1cU)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1dU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1dU)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1eU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1eU)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1fU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x1fU)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x20U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x20U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x21U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x21U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x22U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x22U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x23U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x23U)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x24U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x24U)))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x25U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x25U)))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x26U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x26U)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x27U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x27U)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x28U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x28U)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x29U) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x29U)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x2aU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x2aU)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x2bU) 
               ^ VL_BITSEL_IQII(44, vlSelf->__Vtogcov__BH, 0x2bU)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__BH, 
                        (1U & VL_BITSEL_IQII(44, vlSelf->__PVT__BH, 0x2bU)));
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
    vlSelf->__PVT__PHT_index_update_value = vlSelf->__PVT__update_val;
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
    vlSelf->__PVT__BH_index = (3U & VL_SEL_IIII(32, vlSelf->__PVT__PC, 2U, 2U));
    if (((IData)(vlSelf->__PVT__PHT_index_update_value) 
         ^ (IData)(vlSelf->__Vtogcov__PHT_index_update_value))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__PHT_index_update_value = vlSelf->__PVT__PHT_index_update_value;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__BH_index), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__BH_index), 0U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__BH_index, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__BH_index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__BH_index), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__BH_index), 1U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__BH_index, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__BH_index), 1U)));
    }
    vlSelf->__PVT__PHT_index = (0x7ffU & ((0x2bU >= 
                                           (0x3fU & 
                                            VL_SEL_IIII(32, 
                                                        ((IData)(0xbU) 
                                                         * 
                                                         VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__BH_index))), 0U, 6U)))
                                           ? VL_SEL_IQII(44, vlSelf->__PVT__BH, 
                                                         (0x3fU 
                                                          & VL_SEL_IIII(32, 
                                                                        ((IData)(0xbU) 
                                                                         * 
                                                                         VL_EXTEND_II(32,2, (IData)(vlSelf->__PVT__BH_index))), 0U, 6U)), 0xbU)
                                           : 0U));
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 0U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 1U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 1U)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 2U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 2U)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 3U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 3U)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 4U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 4U)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 5U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 5U)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 6U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 6U)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 7U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 7U)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 8U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 8U)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 9U) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 9U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PHT_index, 
                        (1U & VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(11, (IData)(vlSelf->__PVT__PHT_index), 0xaU) 
               ^ VL_BITSEL_IIII(11, (IData)(vlSelf->__Vtogcov__PHT_index), 0xaU)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__current_PHT), 1U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__current_PHT, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U)));
    }
    if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__current_PHT), 1U))) {
        vlSelf->__PVT__prediction = 1U;
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__prediction = 0U;
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchBimodal___stl_sequent__TOP__top__DUT__1(Vtop_lab4_branch_BranchBimodal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchBimodal___stl_sequent__TOP__top__DUT__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_lab4_branch_BranchBimodal___configure_coverage(Vtop_lab4_branch_BranchBimodal* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchBimodal___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "BranchBimodal.v", 18, 24, "", "v_toggle/lab4_branch_BranchBimodal", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "BranchBimodal.v", 19, 24, "", "v_toggle/lab4_branch_BranchBimodal", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "BranchBimodal.v", 20, 15, "", "v_toggle/lab4_branch_BranchBimodal", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "BranchBimodal.v", 21, 15, "", "v_toggle/lab4_branch_BranchBimodal", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "BranchBimodal.v", 22, 21, "", "v_toggle/lab4_branch_BranchBimodal", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "BranchBimodal.v", 23, 16, "", "v_toggle/lab4_branch_BranchBimodal", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "BranchBimodal.v", 33, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "BranchBimodal.v", 34, 29, "", "v_toggle/lab4_branch_BranchBimodal", "current_PHT[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "BranchBimodal.v", 34, 29, "", "v_toggle/lab4_branch_BranchBimodal", "current_PHT[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "BranchBimodal.v", 35, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index_update_value", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "BranchBimodal.v", 36, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "BranchBimodal.v", 36, 29, "", "v_toggle/lab4_branch_BranchBimodal", "BH_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "BranchBimodal.v", 37, 29, "", "v_toggle/lab4_branch_BranchBimodal", "PHT_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "BranchBimodal.v", 48, 3, "", "v_branch/lab4_branch_BranchBimodal", "if", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "BranchBimodal.v", 48, 4, "", "v_branch/lab4_branch_BranchBimodal", "else", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "BranchBimodal.v", 47, 1, "", "v_line/lab4_branch_BranchBimodal", "block", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "BranchBimodal.v", 70, 9, "", "v_branch/lab4_branch_BranchBimodal", "if", "70-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "BranchBimodal.v", 70, 10, "", "v_branch/lab4_branch_BranchBimodal", "else", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "BranchBimodal.v", 78, 9, "", "v_branch/lab4_branch_BranchBimodal", "if", "78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "BranchBimodal.v", 78, 10, "", "v_branch/lab4_branch_BranchBimodal", "else", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "BranchBimodal.v", 69, 7, "", "v_branch/lab4_branch_BranchBimodal", "if", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "BranchBimodal.v", 69, 8, "", "v_branch/lab4_branch_BranchBimodal", "else", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "BranchBimodal.v", 67, 5, "", "v_branch/lab4_branch_BranchBimodal", "if", "67-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "BranchBimodal.v", 67, 6, "", "v_branch/lab4_branch_BranchBimodal", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "BranchBimodal.v", 59, 3, "", "v_branch/lab4_branch_BranchBimodal", "if", "59-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "BranchBimodal.v", 59, 4, "", "v_branch/lab4_branch_BranchBimodal", "else", "63-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "BranchBimodal.v", 58, 1, "", "v_line/lab4_branch_BranchBimodal", "block", "58");
}
