// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03atransaction;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03agenerator__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03agenerator__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03agenerator__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


class Vtop__Syms;

class Vtop___024unit__03a__03agenerator : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtop___024unit__03a__03atransaction> __PVT__trans;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx;
    VlCoroutine __VnoInFunc_cal(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b);
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ a);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03agenerator(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03agenerator();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03agenerator>& obj);

#endif  // guard
