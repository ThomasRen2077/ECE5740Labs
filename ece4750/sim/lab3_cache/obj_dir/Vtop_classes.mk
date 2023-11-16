# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_top__DepSet_h0f993197__0 \
	Vtop___024unit__DepSet_hab9af801__0 \
	Vtop_lab3_cache_CacheAltDpath__DepSet_h3b8b3710__0 \
	Vtop_lab3_cache_CacheAltDpath__DepSet_h3b8b3710__1 \
	Vtop_vc_Mux2__DepSet_he18cade2__0 \
	Vtop_vc_EnResetReg__P20__DepSet_hdfb29509__0 \
	Vtop_vc_Mux2__P20__DepSet_h42d00b19__0 \
	Vtop_vc_Mux2__P5__DepSet_hda44f92a__0 \
	Vtop_vc_Mux2__P15__DepSet_h8c3a4948__0 \
	Vtop_vc_Mux2__P200__DepSet_h7f4ee6ca__0 \
	Vtop_vc_Mux2__P10__DepSet_h82688ee8__0 \
	Vtop_lab3_cache_Mux16__P20__DepSet_h2a674dd0__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_top__Slow \
	Vtop_top__DepSet_h0f993197__0__Slow \
	Vtop_top__DepSet_h6315917a__0__Slow \
	Vtop___024unit__Slow \
	Vtop___024unit__DepSet_hff17caec__0__Slow \
	Vtop_lab3_cache_CacheAltDpath__Slow \
	Vtop_lab3_cache_CacheAltDpath__DepSet_h3b8b3710__0__Slow \
	Vtop_lab3_cache_CacheAltDpath__DepSet_h6f078bfb__0__Slow \
	Vtop_vc_Mux2__Slow \
	Vtop_vc_Mux2__DepSet_he18cade2__0__Slow \
	Vtop_vc_Mux2__DepSet_h4901f50d__0__Slow \
	Vtop_vc_EnResetReg__P20__Slow \
	Vtop_vc_EnResetReg__P20__DepSet_hdfb29509__0__Slow \
	Vtop_vc_EnResetReg__P20__DepSet_h12ffedf4__0__Slow \
	Vtop_vc_Mux2__P20__Slow \
	Vtop_vc_Mux2__P20__DepSet_h42d00b19__0__Slow \
	Vtop_vc_Mux2__P20__DepSet_ha65e5804__0__Slow \
	Vtop_vc_Mux2__P5__Slow \
	Vtop_vc_Mux2__P5__DepSet_hda44f92a__0__Slow \
	Vtop_vc_Mux2__P5__DepSet_h0ec9c9d5__0__Slow \
	Vtop_vc_Mux2__P15__Slow \
	Vtop_vc_Mux2__P15__DepSet_h8c3a4948__0__Slow \
	Vtop_vc_Mux2__P15__DepSet_he47819b3__0__Slow \
	Vtop_vc_Mux2__P200__Slow \
	Vtop_vc_Mux2__P200__DepSet_h7f4ee6ca__0__Slow \
	Vtop_vc_Mux2__P200__DepSet_hb3c3bc35__0__Slow \
	Vtop_vc_Mux2__P10__Slow \
	Vtop_vc_Mux2__P10__DepSet_h82688ee8__0__Slow \
	Vtop_vc_Mux2__P10__DepSet_he6a5d413__0__Slow \
	Vtop_lab3_cache_Mux16__P20__Slow \
	Vtop_lab3_cache_Mux16__P20__DepSet_h2a674dd0__0__Slow \
	Vtop_lab3_cache_Mux16__P20__DepSet_h7eab153b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_cov \
	verilated_fst_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
