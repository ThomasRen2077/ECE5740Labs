_start:
# Initialize values using csrr
lui x1, 0x10  # Load 65536 into x1
lui x2, 0x20  # Load 131072 into x2

# RAW Hazard Test: The value of x3 depends on x1 and x2.
add x3, x1, x2  # x3 should be 196608 (65536 + 131072)

# Test if RAW hazard is handled, if not fail immediately
lui x6, 0x30
beq x3, x6, skip_raw_failure
csrw proc2mngr, x0 > 1  # Fail, should not reach here
skip_raw_failure:

# WAR Hazard Test: The value of x4 first depends on x3.
add x4, x3, x1  # x4 should be 262144 (196608 + 65536)

# Now x3 is updated, potentially causing a WAR hazard.
add x3, x1, x1  # x3 should be 131072 (65536 + 65536)

# Test if WAR hazard is handled, if not fail immediately
lui x6, 0x40
beq x4, x6, skip_war_failure
csrw proc2mngr, x0 > 1 # Fail, should not reach here
skip_war_failure:

# WAW Hazard Test: The value of x5 is updated twice
add x5, x4, x3  # x5 should be 393216 (262144 + 131072)
add x5, x3, x1  # x5 should finally equal to x3+x1

# Test if WAW hazard is handled, if not fail immediately
lui x6, 0x30
beq x5, x6, skip_waw_failure
csrw proc2mngr, x0 > 1 # Fail, should not reach here
skip_waw_failure:

# If we have reached this point, the processor has passed all hazard tests
addi x30, x0, 1
csrw proc2mngr, x30 > 1 # Pass, should reach here with x30 = 1
