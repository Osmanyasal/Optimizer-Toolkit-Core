#include <cstdint>

namespace optkit::intel{
	enum class coreduo : uint64_t {
		UNHALTED_CORE_CYCLES = 0x3c, // Unhalted core cycles
		UNHALTED_REFERENCE_CYCLES = 0x13c, // Unhalted reference cycles. Measures bus cycles
		INSTRUCTION_RETIRED = 0xc0, // Instructions retired
		INSTRUCTIONS_RETIRED = 0xc0, // This is an alias for INSTRUCTION_RETIRED
		LLC_REFERENCES = 0x4f2e, // Last level of cache references
		LAST_LEVEL_CACHE_REFERENCES = 0x4f2e, // This is an alias for LLC_REFERENCES
		LLC_MISSES = 0x412e, // Last level of cache misses
		LAST_LEVEL_CACHE_MISSES = 0x412e, // This is an alias for LLC_MISSES
		BRANCH_INSTRUCTIONS_RETIRED = 0xc4, // Branch instructions retired
		MISPREDICTED_BRANCH_RETIRED = 0xc5, // Mispredicted branch instruction retired
		LD_BLOCKS = 0x3, // Load operations delayed due to store buffer blocks. The preceding store may be blocked due to unknown address
		SD_DRAINS = 0x4, // Cycles while draining store buffers
		MISALIGN_MEM_REF = 0x5, // Misaligned data memory references (MOB splits of loads and stores).
		SEG_REG_LOADS = 0x6, // Segment register loads
		SSE_PREFETCH = 0x7, // Streaming SIMD Extensions (SSE) Prefetch instructions executed
		SSE_PREFETCH_MASK_NTA = 0x0, // Streaming SIMD Extensions (SSE) Prefetch NTA instructions executed
		SSE_PREFETCH_MASK_T1 = 0x100, // SSE software prefetch instruction PREFE0xTCT1 retired
		SSE_PREFETCH_MASK_T2 = 0x200, // SSE software prefetch instruction PREFE0xTCT2 retired
		SSE_NTSTORES_RET = 0x307, // SSE streaming store instruction retired
		FP_COMPS_OP_EXE = 0x10, // FP computational Instruction executed. FADD
		FP_ASSIST = 0x11, // FP exceptions experienced microcode assists
		MUL = 0x12, // Multiply operations (a speculative count
		DIV = 0x13, // Divide operations (a speculative count
		CYCLES_DIV_BUSY = 0x14, // Cycles the divider is busy
		L2_ADS = 0x21, // L2 Address strobes
		L2_ADS_MASK_SELF = 0x4000, // This core
		L2_ADS_MASK_BOTH_CORES = 0xc000, // Both cores
		DBUS_BUSY = 0x22, // Core cycle during which data bus was busy (increments by 4)
		DBUS_BUSY_MASK_SELF = 0x4000, // This core
		DBUS_BUSY_MASK_BOTH_CORES = 0xc000, // Both cores
		DBUS_BUSY_RD = 0x23, // Cycles data bus is busy transferring data to a core (increments by 4)
		DBUS_BUSY_RD_MASK_SELF = 0x4000, // This core
		DBUS_BUSY_RD_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_LINES_IN = 0x24, // L2 cache lines allocated
		L2_LINES_IN_MASK_SELF = 0x4000, // This core
		L2_LINES_IN_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_LINES_IN_MASK_ANY = 0x3000, // All inclusive
		L2_LINES_IN_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		L2_M_LINES_IN = 0x25, // L2 Modified-state cache lines allocated
		L2_M_LINES_IN_MASK_SELF = 0x4000, // This core
		L2_M_LINES_IN_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_LINES_OUT = 0x26, // L2 cache lines evicted
		L2_LINES_OUT_MASK_SELF = 0x4000, // This core
		L2_LINES_OUT_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_LINES_OUT_MASK_ANY = 0x3000, // All inclusive
		L2_LINES_OUT_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		L2_M_LINES_OUT = 0x27, // L2 Modified-state cache lines evicted
		L2_M_LINES_OUT_MASK_SELF = 0x4000, // This core
		L2_M_LINES_OUT_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_M_LINES_OUT_MASK_ANY = 0x3000, // All inclusive
		L2_M_LINES_OUT_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		L2_IFETCH = 0x28, // L2 instruction fetches from instruction fetch unit (includes speculative fetches)
		L2_IFETCH_MASK_MESI = 0xf00, // Any cacheline access
		L2_IFETCH_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_IFETCH_MASK_S_STATE = 0x200, // Shared cacheline
		L2_IFETCH_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_IFETCH_MASK_M_STATE = 0x800, // Modified cacheline
		L2_IFETCH_MASK_SELF = 0x4000, // This core
		L2_IFETCH_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_LD = 0x29, // L2 cache reads (includes speculation)
		L2_LD_MASK_MESI = 0xf00, // Any cacheline access
		L2_LD_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_LD_MASK_S_STATE = 0x200, // Shared cacheline
		L2_LD_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_LD_MASK_M_STATE = 0x800, // Modified cacheline
		L2_LD_MASK_SELF = 0x4000, // This core
		L2_LD_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_ST = 0x2a, // L2 cache writes (includes speculation)
		L2_ST_MASK_MESI = 0xf00, // Any cacheline access
		L2_ST_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_ST_MASK_S_STATE = 0x200, // Shared cacheline
		L2_ST_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_ST_MASK_M_STATE = 0x800, // Modified cacheline
		L2_ST_MASK_SELF = 0x4000, // This core
		L2_ST_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_RQSTS = 0x2e, // L2 cache reference requests
		L2_RQSTS_MASK_MESI = 0xf00, // Any cacheline access
		L2_RQSTS_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_RQSTS_MASK_S_STATE = 0x200, // Shared cacheline
		L2_RQSTS_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_RQSTS_MASK_M_STATE = 0x800, // Modified cacheline
		L2_RQSTS_MASK_SELF = 0x4000, // This core
		L2_RQSTS_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_RQSTS_MASK_ANY = 0x3000, // All inclusive
		L2_RQSTS_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		L2_REJECT_CYCLES = 0x30, // Cycles L2 is busy and rejecting new requests.
		L2_REJECT_CYCLES_MASK_MESI = 0xf00, // Any cacheline access
		L2_REJECT_CYCLES_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_REJECT_CYCLES_MASK_S_STATE = 0x200, // Shared cacheline
		L2_REJECT_CYCLES_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_REJECT_CYCLES_MASK_M_STATE = 0x800, // Modified cacheline
		L2_REJECT_CYCLES_MASK_SELF = 0x4000, // This core
		L2_REJECT_CYCLES_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_REJECT_CYCLES_MASK_ANY = 0x3000, // All inclusive
		L2_REJECT_CYCLES_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		L2_NO_REQUEST_CYCLES = 0x32, // Cycles there is no request to access L2.
		L2_NO_REQUEST_CYCLES_MASK_MESI = 0xf00, // Any cacheline access
		L2_NO_REQUEST_CYCLES_MASK_I_STATE = 0x100, // Invalid cacheline
		L2_NO_REQUEST_CYCLES_MASK_S_STATE = 0x200, // Shared cacheline
		L2_NO_REQUEST_CYCLES_MASK_E_STATE = 0x400, // Exclusive cacheline
		L2_NO_REQUEST_CYCLES_MASK_M_STATE = 0x800, // Modified cacheline
		L2_NO_REQUEST_CYCLES_MASK_SELF = 0x4000, // This core
		L2_NO_REQUEST_CYCLES_MASK_BOTH_CORES = 0xc000, // Both cores
		L2_NO_REQUEST_CYCLES_MASK_ANY = 0x3000, // All inclusive
		L2_NO_REQUEST_CYCLES_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		EST_TRANS = 0x3a, // Intel Enhanced SpeedStep(R) Technology transitions
		EST_TRANS_MASK_ANY = 0x0, // Any Intel Enhanced SpeedStep(R) Technology transitions
		EST_TRANS_MASK_FREQ = 0x1000, // Intel Enhanced SpeedStep Technology frequency transitions
		THERMAL_TRIP = 0x3b, // Duration in a thermal trip based on the current core clock
		THERMAL_TRIP_MASK_CYCLES = 0xc000, // Duration in a thermal trip based on the current core clock
		THERMAL_TRIP_MASK_TRIPS = 0xc000 | INTEL_X86_MOD_EDGE, // Number of thermal trips
		CPU_CLK_UNHALTED = 0x3c, // Core cycles when core is not halted
		CPU_CLK_UNHALTED_MASK_CORE_P = 0x0, // Unhalted core cycles
		CPU_CLK_UNHALTED_MASK_NONHLT_REF_CYCLES = 0x100, // Non-halted bus cycles
		CPU_CLK_UNHALTED_MASK_SERIAL_EXECUTION_CYCLES = 0x200, // Non-halted bus cycles of this core executing code while the other core is halted
		DCACHE_CACHE_LD = 0x40, // L1 cacheable data read operations
		DCACHE_CACHE_LD_MASK_MESI = 0xf00, // Any cacheline access
		DCACHE_CACHE_LD_MASK_I_STATE = 0x100, // Invalid cacheline
		DCACHE_CACHE_LD_MASK_S_STATE = 0x200, // Shared cacheline
		DCACHE_CACHE_LD_MASK_E_STATE = 0x400, // Exclusive cacheline
		DCACHE_CACHE_LD_MASK_M_STATE = 0x800, // Modified cacheline
		DCACHE_CACHE_ST = 0x41, // L1 cacheable data write operations
		DCACHE_CACHE_ST_MASK_MESI = 0xf00, // Any cacheline access
		DCACHE_CACHE_ST_MASK_I_STATE = 0x100, // Invalid cacheline
		DCACHE_CACHE_ST_MASK_S_STATE = 0x200, // Shared cacheline
		DCACHE_CACHE_ST_MASK_E_STATE = 0x400, // Exclusive cacheline
		DCACHE_CACHE_ST_MASK_M_STATE = 0x800, // Modified cacheline
		DCACHE_CACHE_LOCK = 0x42, // L1 cacheable lock read operations to invalid state
		DCACHE_CACHE_LOCK_MASK_MESI = 0xf00, // Any cacheline access
		DCACHE_CACHE_LOCK_MASK_I_STATE = 0x100, // Invalid cacheline
		DCACHE_CACHE_LOCK_MASK_S_STATE = 0x200, // Shared cacheline
		DCACHE_CACHE_LOCK_MASK_E_STATE = 0x400, // Exclusive cacheline
		DCACHE_CACHE_LOCK_MASK_M_STATE = 0x800, // Modified cacheline
		DATA_MEM_REF = 0x143, // L1 data read and writes of cacheable and non-cacheable types
		DATA_MEM_CACHE_REF = 0x244, // L1 data cacheable read and write operations.
		DCACHE_REPL = 0xf45, // L1 data cache line replacements
		DCACHE_M_REPL = 0x46, // L1 data M-state cache line  allocated
		DCACHE_M_EVICT = 0x47, // L1 data M-state cache line evicted
		DCACHE_PEND_MISS = 0x48, // Weighted cycles of L1 miss outstanding
		DTLB_MISS = 0x49, // Data references that missed TLB
		SSE_PRE_MISS = 0x4b, // Streaming SIMD Extensions (SSE) instructions missing all cache levels
		SSE_PRE_MISS_MASK_NTA_MISS = 0x0, // PREFETCHNTA missed all caches
		SSE_PRE_MISS_MASK_T1_MISS = 0x100, // PREFETCHT1 missed all caches
		SSE_PRE_MISS_MASK_T2_MISS = 0x200, // PREFETCHT2 missed all caches
		SSE_PRE_MISS_MASK_STORES_MISS = 0x300, // SSE streaming store instruction missed all caches
		L1_PREF_REQ = 0x4f, // L1 prefetch requests due to DCU cache misses
		BUS_REQ_OUTSTANDING = 0x60, // Weighted cycles of cacheable bus data read requests. This event counts full-line read request from DCU or HW prefetcher
		BUS_REQ_OUTSTANDING_MASK_SELF = 0x4000, // This core
		BUS_REQ_OUTSTANDING_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_REQ_OUTSTANDING_MASK_ANY = 0x3000, // All inclusive
		BUS_REQ_OUTSTANDING_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_BNR_CLOCKS = 0x61, // External bus cycles while BNR asserted
		BUS_DRDY_CLOCKS = 0x62, // External bus cycles while DRDY asserted
		BUS_DRDY_CLOCKS_MASK_THIS_AGENT = 0x0, // This agent
		BUS_DRDY_CLOCKS_MASK_ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_LOCKS_CLOCKS = 0x63, // External bus cycles while bus lock signal asserted
		BUS_LOCKS_CLOCKS_MASK_SELF = 0x4000, // This core
		BUS_LOCKS_CLOCKS_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_DATA_RCV = 0x4064, // External bus cycles while bus lock signal asserted
		BUS_TRANS_BRD = 0x65, // Burst read bus transactions (data or code)
		BUS_TRANS_BRD_MASK_SELF = 0x4000, // This core
		BUS_TRANS_BRD_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_RFO = 0x66, // Completed read for ownership
		BUS_TRANS_RFO_MASK_SELF = 0x4000, // This core
		BUS_TRANS_RFO_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_RFO_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_RFO_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_IFETCH = 0x68, // Completed instruction fetch transactions
		BUS_TRANS_IFETCH_MASK_SELF = 0x4000, // This core
		BUS_TRANS_IFETCH_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_IFETCH_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_IFETCH_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_INVAL = 0x69, // Completed invalidate transactions
		BUS_TRANS_INVAL_MASK_SELF = 0x4000, // This core
		BUS_TRANS_INVAL_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_INVAL_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_INVAL_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_PWR = 0x6a, // Completed partial write transactions
		BUS_TRANS_PWR_MASK_SELF = 0x4000, // This core
		BUS_TRANS_PWR_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_PWR_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_PWR_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_P = 0x6b, // Completed partial transactions (include partial read + partial write + line write)
		BUS_TRANS_P_MASK_SELF = 0x4000, // This core
		BUS_TRANS_P_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_P_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_P_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_IO = 0x6c, // Completed I/O transactions (read and write)
		BUS_TRANS_IO_MASK_SELF = 0x4000, // This core
		BUS_TRANS_IO_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_IO_MASK_ANY = 0x3000, // All inclusive
		BUS_TRANS_IO_MASK_PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_DEF = 0x206d, // Completed defer transactions
		BUS_TRANS_DEF_MASK_SELF = 0x4000, // This core
		BUS_TRANS_DEF_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_WB = 0xc067, // Completed writeback transactions from DCU (does not include L2 writebacks)
		BUS_TRANS_WB_MASK_THIS_AGENT = 0x0, // This agent
		BUS_TRANS_WB_MASK_ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_BURST = 0xc06e, // Completed burst transactions (full line transactions include reads
		BUS_TRANS_BURST_MASK_THIS_AGENT = 0x0, // This agent
		BUS_TRANS_BURST_MASK_ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_MEM = 0xc06f, // Completed memory transactions. This includes Bus_Trans_Burst + Bus_Trans_P + Bus_Trans_Inval.
		BUS_TRANS_MEM_MASK_THIS_AGENT = 0x0, // This agent
		BUS_TRANS_MEM_MASK_ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_ANY = 0xc070, // Any completed bus transactions
		BUS_TRANS_ANY_MASK_THIS_AGENT = 0x0, // This agent
		BUS_TRANS_ANY_MASK_ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_SNOOPS = 0x77, // External bus cycles while bus lock signal asserted
		BUS_SNOOPS_MASK_MESI = 0xf00, // Any cacheline access
		BUS_SNOOPS_MASK_I_STATE = 0x100, // Invalid cacheline
		BUS_SNOOPS_MASK_S_STATE = 0x200, // Shared cacheline
		BUS_SNOOPS_MASK_E_STATE = 0x400, // Exclusive cacheline
		BUS_SNOOPS_MASK_M_STATE = 0x800, // Modified cacheline
		BUS_SNOOPS_MASK_SELF = 0x4000, // This core
		BUS_SNOOPS_MASK_BOTH_CORES = 0xc000, // Both cores
		DCU_SNOOP_TO_SHARE = 0x178, // DCU snoops to share-state L1 cache line due to L1 misses
		DCU_SNOOP_TO_SHARE_MASK_SELF = 0x4000, // This core
		DCU_SNOOP_TO_SHARE_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_NOT_IN_USE = 0x7d, // Number of cycles there is no transaction from the core
		BUS_NOT_IN_USE_MASK_SELF = 0x4000, // This core
		BUS_NOT_IN_USE_MASK_BOTH_CORES = 0xc000, // Both cores
		BUS_SNOOP_STALL = 0x7e, // Number of bus cycles while bus snoop is stalled
		ICACHE_READS = 0x80, // Number of instruction fetches from ICache
		ICACHE_MISSES = 0x81, // Number of instruction fetch misses from ICache
		ITLB_MISSES = 0x85, // Number of iITLB misses
		IFU_MEM_STALL = 0x86, // Cycles IFU is stalled while waiting for data from memory
		ILD_STALL = 0x87, // Number of instruction length decoder stalls (Counts number of LCP stalls)
		BR_INST_EXEC = 0x88, // Branch instruction executed (includes speculation).
		BR_MISSP_EXEC = 0x89, // Branch instructions executed and mispredicted at execution  (includes branches that do not have prediction or mispredicted)
		BR_BAC_MISSP_EXEC = 0x8a, // Branch instructions executed that were mispredicted at front end
		BR_CND_EXEC = 0x8b, // Conditional branch instructions executed
		BR_CND_MISSP_EXEC = 0x8c, // Conditional branch instructions executed that were mispredicted
		BR_IND_EXEC = 0x8d, // Indirect branch instructions executed
		BR_IND_MISSP_EXEC = 0x8e, // Indirect branch instructions executed that were mispredicted
		BR_RET_EXEC = 0x8f, // Return branch instructions executed
		BR_RET_MISSP_EXEC = 0x90, // Return branch instructions executed that were mispredicted
		BR_RET_BAC_MISSP_EXEC = 0x91, // Return branch instructions executed that were mispredicted at the front end
		BR_CALL_EXEC = 0x92, // Return call instructions executed
		BR_CALL_MISSP_EXEC = 0x93, // Return call instructions executed that were mispredicted
		BR_IND_CALL_EXEC = 0x94, // Indirect call branch instructions executed
		RESOURCE_STALL = 0xa2, // Cycles while there is a resource related stall (renaming
		MMX_INSTR_EXEC = 0xb0, // Number of MMX instructions executed (does not include MOVQ and MOVD stores)
		SIMD_INT_SAT_EXEC = 0xb1, // Number of SIMD Integer saturating instructions executed
		SIMD_INT_INSTRUCTIONS = 0xb3, // Number of SIMD Integer instructions executed
		SIMD_INT_INSTRUCTIONS_MASK_MUL = 0x100, // Number of SIMD Integer packed multiply instructions executed
		SIMD_INT_INSTRUCTIONS_MASK_SHIFT = 0x200, // Number of SIMD Integer packed shift instructions executed
		SIMD_INT_INSTRUCTIONS_MASK_PACK = 0x400, // Number of SIMD Integer pack operations instruction executed
		SIMD_INT_INSTRUCTIONS_MASK_UNPACK = 0x800, // Number of SIMD Integer unpack instructions executed
		SIMD_INT_INSTRUCTIONS_MASK_LOGICAL = 0x1000, // Number of SIMD Integer packed logical instructions executed
		SIMD_INT_INSTRUCTIONS_MASK_ARITHMETIC = 0x2000, // Number of SIMD Integer packed arithmetic instructions executed
		INSTR_RET = 0xc0, // Number of instruction retired (Macro fused instruction count as 2)
		FP_COMP_INSTR_RET = 0xc1, // Number of FP compute instructions retired (X87 instruction or instruction that contain X87 operations)
		UOPS_RET = 0xc2, // Number of micro-ops retired (include fused uops)
		SMC_DETECTED = 0xc3, // Number of times self-modifying code condition detected
		BR_INSTR_RET = 0xc4, // Number of branch instructions retired
		BR_MISPRED_RET = 0xc5, // Number of mispredicted branch instructions retired
		CYCLES_INT_MASKED = 0xc6, // Cycles while interrupt is disabled
		CYCLES_INT_PEDNING_MASKED = 0xc7, // Cycles while interrupt is disabled and interrupts are pending
		HW_INT_RX = 0xc8, // Number of hardware interrupts received
		BR_TAKEN_RET = 0xc9, // Number of taken branch instruction retired
		BR_MISPRED_TAKEN_RET = 0xca, // Number of taken and mispredicted branch instructions retired
		MMX_FP_TRANS = 0xcc, // Transitions from MMX (TM) Instructions to Floating Point Instructions
		MMX_FP_TRANS_MASK_TO_FP = 0x0, // Number of transitions from MMX to X87
		MMX_FP_TRANS_MASK_TO_MMX = 0x100, // Number of transitions from X87 to MMX
		MMX_ASSIST = 0xcd, // Number of EMMS executed
		MMX_INSTR_RET = 0xce, // Number of MMX instruction retired
		INSTR_DECODED = 0xd0, // Number of instruction decoded
		ESP_UOPS = 0xd7, // Number of ESP folding instruction decoded
		SSE_INSTRUCTIONS_RETIRED = 0xd8, // Number of SSE/SSE2 instructions retired (packed and scalar)
		SSE_INSTRUCTIONS_RETIRED_MASK_SINGLE = 0x0, // Number of SSE/SSE2 single precision instructions retired (packed and scalar)
		SSE_INSTRUCTIONS_RETIRED_MASK_SCALAR_SINGLE = 0x100, // Number of SSE/SSE2 scalar single precision instructions retired
		SSE_INSTRUCTIONS_RETIRED_MASK_PACKED_DOUBLE = 0x200, // Number of SSE/SSE2 packed double precision instructions retired
		SSE_INSTRUCTIONS_RETIRED_MASK_DOUBLE = 0x300, // Number of SSE/SSE2 scalar double precision instructions retired
		SSE_INSTRUCTIONS_RETIRED_MASK_INT_128 = 0x400, // Number of SSE2 128 bit integer  instructions retired
		SSE_COMP_INSTRUCTIONS_RETIRED = 0xd9, // Number of computational SSE/SSE2 instructions retired (does not include AND
		SSE_COMP_INSTRUCTIONS_RETIRED_MASK_PACKED_SINGLE = 0x0, // Number of SSE/SSE2 packed single precision compute instructions retired (does not include AND
		SSE_COMP_INSTRUCTIONS_RETIRED_MASK_SCALAR_SINGLE = 0x100, // Number of SSE/SSE2 scalar single precision compute instructions retired (does not include AND
		SSE_COMP_INSTRUCTIONS_RETIRED_MASK_PACKED_DOUBLE = 0x200, // Number of SSE/SSE2 packed double precision compute instructions retired (does not include AND
		SSE_COMP_INSTRUCTIONS_RETIRED_MASK_SCALAR_DOUBLE = 0x300, // Number of SSE/SSE2 scalar double precision compute instructions retired (does not include AND
		FUSED_UOPS = 0xda, // Fused uops retired
		FUSED_UOPS_MASK_ALL = 0x0, // All fused uops retired
		FUSED_UOPS_MASK_LOADS = 0x100, // Fused load uops retired
		FUSED_UOPS_MASK_STORES = 0x200, // Fused load uops retired
		UNFUSION = 0xdb, // Number of unfusion events in the ROB (due to exception)
		BR_INSTR_DECODED = 0xe0, // Branch instructions decoded
		BTB_MISSES = 0xe2, // Number of branches the BTB did not produce a prediction
		BR_BOGUS = 0xe4, // Number of bogus branches
		BACLEARS = 0xe6, // Number of BAClears asserted
		PREF_RQSTS_UP = 0xf0, // Number of hardware prefetch requests issued in forward streams
		PREF_RQSTS_DN = 0xf8, // Number of hardware prefetch requests issued in backward streams
		
	};
};