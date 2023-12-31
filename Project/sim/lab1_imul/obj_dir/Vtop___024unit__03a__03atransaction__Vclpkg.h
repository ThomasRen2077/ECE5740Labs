// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03atransaction;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03atransaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03atransaction__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03atransaction__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


class Vtop__Syms;

class Vtop___024unit__03a__03atransaction : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__istream_msg_a;
    IData/*31:0*/ __PVT__istream_msg_b;
    IData/*31:0*/ __PVT__ostream_msg;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_copy(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &copy__Vfuncrtn);
    void __VnoInFunc_display(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03atransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03atransaction>& obj);

#endif  // guard
