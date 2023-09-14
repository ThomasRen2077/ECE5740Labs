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
VM_PARALLEL_BUILDS = 0
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
	Vtop_lab1_imul_IntMulAlt__DepSet_hbe2ca4b0__0 \
	Vtop_vc_TestRandDelaySource__pi1__DepSet_h566f7225__0 \
	Vtop_vc_TestRandDelaySink__P20_PB1c__DepSet_hd24f7eab__0 \
	Vtop_vc_Trace__DepSet_h6a05a281__0 \
	Vtop_vc_TestSource__P40_PB1c__DepSet_h9c78568d__0 \
	Vtop_vc_TestSource__P40_PB1c__DepSet_hd4b62c70__0 \
	Vtop_vc_TestRandDelay__P40__DepSet_h8346b87f__0 \
	Vtop_vc_TestRandDelay__P40__DepSet_he7cc0aa2__0 \
	Vtop_vc_SimpleAdder__P20__DepSet_h53ce860b__0 \
	Vtop_vc_TestRandDelay__P20__DepSet_h623b21f3__0 \
	Vtop_vc_TestRandDelay__P20__DepSet_hc677811e__0 \
	Vtop_vc_TestSink__P20_PB1c__DepSet_h6cfc874e__0 \
	Vtop_vc_TestSink__P20_PB1c__DepSet_hc431dbb1__0 \
	Vtop_vc_EnResetReg__P5_PBz1__DepSet_h8c46f7da__0 \
	Vtop_vc_EnResetReg__P20__DepSet_hdfb29509__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_top__Slow \
	Vtop_top__DepSet_h0f993197__0__Slow \
	Vtop_top__DepSet_h6315917a__0__Slow \
	Vtop___024unit__Slow \
	Vtop___024unit__DepSet_hff17caec__0__Slow \
	Vtop_lab1_imul_IntMulAlt__Slow \
	Vtop_lab1_imul_IntMulAlt__DepSet_hbe2ca4b0__0__Slow \
	Vtop_lab1_imul_IntMulAlt__DepSet_hf261fe5b__0__Slow \
	Vtop_vc_TestRandDelaySource__pi1__Slow \
	Vtop_vc_TestRandDelaySource__pi1__DepSet_h566f7225__0__Slow \
	Vtop_vc_TestRandDelaySource__pi1__DepSet_h9aa350c8__0__Slow \
	Vtop_vc_TestRandDelaySink__P20_PB1c__Slow \
	Vtop_vc_TestRandDelaySink__P20_PB1c__DepSet_hd24f7eab__0__Slow \
	Vtop_vc_TestRandDelaySink__P20_PB1c__DepSet_h16c34456__0__Slow \
	Vtop_vc_Trace__Slow \
	Vtop_vc_Trace__DepSet_h6a05a281__0__Slow \
	Vtop_vc_Trace__DepSet_hbe89006c__0__Slow \
	Vtop_vc_TestSource__P40_PB1c__Slow \
	Vtop_vc_TestSource__P40_PB1c__DepSet_h9c78568d__0__Slow \
	Vtop_vc_TestSource__P40_PB1c__DepSet_hd4b62c70__0__Slow \
	Vtop_vc_TestRandDelay__P40__Slow \
	Vtop_vc_TestRandDelay__P40__DepSet_h8346b87f__0__Slow \
	Vtop_vc_TestRandDelay__P40__DepSet_he7cc0aa2__0__Slow \
	Vtop_vc_SimpleAdder__P20__Slow \
	Vtop_vc_SimpleAdder__P20__DepSet_h53ce860b__0__Slow \
	Vtop_vc_TestRandDelay__P20__Slow \
	Vtop_vc_TestRandDelay__P20__DepSet_h623b21f3__0__Slow \
	Vtop_vc_TestRandDelay__P20__DepSet_hc677811e__0__Slow \
	Vtop_vc_TestSink__P20_PB1c__Slow \
	Vtop_vc_TestSink__P20_PB1c__DepSet_h6cfc874e__0__Slow \
	Vtop_vc_TestSink__P20_PB1c__DepSet_hc431dbb1__0__Slow \
	Vtop_vc_EnResetReg__P5_PBz1__Slow \
	Vtop_vc_EnResetReg__P5_PBz1__DepSet_h8c46f7da__0__Slow \
	Vtop_vc_EnResetReg__P5_PBz1__DepSet_he4cbcb45__0__Slow \
	Vtop_vc_EnResetReg__P20__Slow \
	Vtop_vc_EnResetReg__P20__DepSet_hdfb29509__0__Slow \
	Vtop_vc_EnResetReg__P20__DepSet_h12ffedf4__0__Slow \

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
