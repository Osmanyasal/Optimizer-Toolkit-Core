#include <cstdint>

namespace optkit::intel{
	enum class knl : uint64_t {
		UNHALTED_CORE_CYCLES = 0x3c, // Unhalted core cycles
		UNHALTED_REFERENCE_CYCLES = 0x0300, // Unhalted reference cycle
		INSTRUCTION_RETIRED = 0xc0, // Instructions retired (any thread modifier supported in fixed counter)
		INSTRUCTIONS_RETIRED = 0xc0, // This is an alias for INSTRUCTION_RETIRED (any thread modifier supported in fixed counter)
		LLC_REFERENCES = 0x4f2e, // Last level of cache references
		LAST_LEVEL_CACHE_REFERENCES = 0x4f2e, // This is an alias for LLC_REFERENCES
		LLC_MISSES = 0x412e, // Last level of cache misses
		LAST_LEVEL_CACHE_MISSES = 0x412e, // This is an alias for LLC_MISSES
		BRANCH_INSTRUCTIONS_RETIRED = 0xc4, // Branch instructions retired
		MISPREDICTED_BRANCH_RETIRED = 0xc5, // Mispredicted branch instruction retired
		ICACHE = 0x80, // Instruction fetches
		ICACHE_MASK_HIT = 0x100, // Counts all instruction fetches that hit the instruction cache.
		ICACHE_MASK_MISSES = 0x200, // Counts all instruction fetches that miss the instruction cache or produce memory requests. An instruction fetch miss is counted only once and not once for every cycle it is outstanding.
		ICACHE_MASK_ACCESSES = 0x300, // Counts all instruction fetches
		UOPS_RETIRED = 0xc2, // Micro-ops retired
		UOPS_RETIRED_MASK_ALL = 0x1000, // Counts the number of micro-ops retired.
		UOPS_RETIRED_MASK_MS = 0x0100, // Counts the number of micro-ops retired that are from the complex flows issued by the micro-sequencer (MS).
		UOPS_RETIRED_MASK_SCALAR_SIMD = 0x2000, // Counts the number of scalar SSE
		UOPS_RETIRED_MASK_PACKED_SIMD = 0x4000, // Counts the number of vector SSE
		INST_RETIRED = 0xc0, // Instructions retired
		INST_RETIRED_MASK_ANY_P = 0x0, // Instructions retired using generic counter (precise event)
		INST_RETIRED_MASK_ANY = 0x0, // Instructions retired using generic counter (precise event)
		CYCLES_DIV_BUSY = 0xcd, // Counts the number of core cycles when divider is busy.
		CYCLES_DIV_BUSY_MASK_ALL = 0x0100, // Counts the number of core cycles when divider is busy.  Does not imply a stall waiting for the divider.
		RS_FULL_STALL = 0xcb, // Counts the number of core cycles when allocation pipeline is stalled.
		RS_FULL_STALL_MASK_MEC = 0x0100, // Counts the number of core cycles when allocation pipeline is stalled and is waiting for a free MEC reservation station entry.
		RS_FULL_STALL_MASK_ANY = 0x1f00, // Counts the total number of core cycles the Alloc pipeline is stalled when any one of the reservation stations is full.
		L2_REQUESTS = 0x2e, // L2 cache requests
		L2_REQUESTS_MASK_MISS = 0x4100, // Counts the number of L2 cache misses
		L2_REQUESTS_MASK_REFERENCE = 0x4f00, // Counts the total number of L2 cache references.
		MACHINE_CLEARS = 0xc3, // Counts the number of times that the machine clears.
		MACHINE_CLEARS_MASK_SMC = 0x0100, // Counts the number of times that the machine clears due to program modifying data within 1K of a recently fetched code page.
		MACHINE_CLEARS_MASK_MEMORY_ORDERING = 0x0200, // Counts the number of times the machine clears due to memory ordering hazards
		MACHINE_CLEARS_MASK_FP_ASSIST = 0x0400, // Counts the number of floating operations retired that required microcode assists
		MACHINE_CLEARS_MASK_ALL = 0x0800, // Counts all nukes
		MACHINE_CLEARS_MASK_ANY = 0x0800, // Counts all nukes
		BR_INST_RETIRED = 0xc4, // Retired branch instructions
		BR_INST_RETIRED_MASK_ANY = 0x0, // Counts the number of branch instructions retired (Precise Event)
		BR_INST_RETIRED_MASK_ALL_BRANCHES = 0x0, // Counts the number of branch instructions retired
		BR_INST_RETIRED_MASK_JCC = 0x7e00, // Counts the number of branch instructions retired that were conditional jumps.
		BR_INST_RETIRED_MASK_TAKEN_JCC = 0xfe00, // Counts the number of branch instructions retired that were conditional jumps and predicted taken.
		BR_INST_RETIRED_MASK_CALL = 0xf900, // Counts the number of near CALL branch instructions retired.
		BR_INST_RETIRED_MASK_REL_CALL = 0xfd00, // Counts the number of near relative CALL branch instructions retired.
		BR_INST_RETIRED_MASK_IND_CALL = 0xfb00, // Counts the number of near indirect CALL branch instructions retired. (Precise Event)
		BR_INST_RETIRED_MASK_RETURN = 0xf700, // Counts the number of near RET branch instructions retired. (Precise Event)
		BR_INST_RETIRED_MASK_NON_RETURN_IND = 0xeb00, // Counts the number of branch instructions retired that were near indirect CALL or near indirect JMP. (Precise Event)
		BR_INST_RETIRED_MASK_FAR_BRANCH = 0xbf00, // Counts the number of far branch instructions retired. (Precise Event)
		BR_INST_RETIRED_MASK_FAR = 0xbf00, // Counts the number of far branch instructions retired. (Precise Event)
		BR_MISP_RETIRED = 0xc5, // Counts the number of mispredicted branch instructions retired.
		BR_MISP_RETIRED_MASK_ALL_BRANCHES = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_RETIRED_MASK_ANY = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_RETIRED_MASK_JCC = 0x7e00, // Number of mispredicted conditional branch instructions retired (Precise Event)
		BR_MISP_RETIRED_MASK_NON_RETURN_IND = 0xeb00, // Number of mispredicted non-return branch instructions retired (Precise Event)
		BR_MISP_RETIRED_MASK_RETURN = 0xf700, // Number of mispredicted return branch instructions retired (Precise Event)
		BR_MISP_RETIRED_MASK_IND_CALL = 0xfb00, // Number of mispredicted indirect call branch instructions retired (Precise Event)
		BR_MISP_RETIRED_MASK_TAKEN_JCC = 0xfe00, // Number of mispredicted taken conditional branch instructions retired (Precise Event)
		BR_MISP_RETIRED_MASK_CALL = 0xf900, // Counts the number of mispredicted near CALL branch instructions retired.
		BR_MISP_RETIRED_MASK_REL_CALL = 0xfd00, // Counts the number of mispredicted near relative CALL branch instructions retired.
		BR_MISP_RETIRED_MASK_FAR_BRANCH = 0xbf00, // Counts the number of mispredicted far branch instructions retired.
		MS_DECODED = 0xe7, // Number of times the MSROM starts a flow of uops.
		MS_DECODED_MASK_ENTRY = 0x0100, // Counts the number of times the MSROM starts a flow of uops.
		FETCH_STALL = 0x86, // Counts the number of core cycles the fetch stalls.
		FETCH_STALL_MASK_ICACHE_FILL_PENDING_CYCLES = 0x0400, // Counts the number of core cycles the fetch stalls because of an icache miss. This is a cumulative count of core cycles the fetch stalled for all icache misses
		BACLEARS = 0xe6, // Branch address calculator
		BACLEARS_MASK_ALL = 0x100, // Counts the number of times the front end resteers for any branch as a result of another branch handling mechanism in the front end.
		BACLEARS_MASK_ANY = 0x100, // Counts the number of times the front end resteers for any branch as a result of another branch handling mechanism in the front end.
		BACLEARS_MASK_RETURN = 0x800, // Counts the number of times the front end resteers for RET branches as a result of another branch handling mechanism in the front end.
		BACLEARS_MASK_COND = 0x1000, // Counts the number of times the front end resteers for conditional branches as a result of another branch handling mechanism in the front end.
		NO_ALLOC_CYCLES = 0xca, // Front-end allocation
		NO_ALLOC_CYCLES_MASK_ROB_FULL = 0x0100, // Counts the number of core cycles when no micro-ops are allocated and the ROB is full
		NO_ALLOC_CYCLES_MASK_MISPREDICTS = 0x0400, // Counts the number of core cycles when no micro-ops are allocated and the alloc pipe is stalled waiting for a mispredicted branch to retire.
		NO_ALLOC_CYCLES_MASK_RAT_STALL = 0x2000, // Counts the number of core cycles when no micro-ops are allocated and a RATstall (caused by reservation station full) is asserted.
		NO_ALLOC_CYCLES_MASK_NOT_DELIVERED = 0x9000, // Counts the number of core cycles when no micro-ops are allocated
		NO_ALLOC_CYCLES_MASK_ALL = 0x7f00, // Counts the total number of core cycles when no micro-ops are allocated for any reason.
		NO_ALLOC_CYCLES_MASK_ANY = 0x7f00, // Counts the total number of core cycles when no micro-ops are allocated for any reason.
		CPU_CLK_UNHALTED = 0x3c, // Core cycles when core is not halted
		CPU_CLK_UNHALTED_MASK_THREAD_P = 0x0, // thread cycles when core is not halted
		CPU_CLK_UNHALTED_MASK_BUS = 0x100, // Bus cycles when core is not halted. This event can give a measurement of the elapsed time. This events has a constant ratio with CPU_CLK_UNHALTED:REF event
		CPU_CLK_UNHALTED_MASK_REF_P = 0x200, // Number of reference cycles that the cpu is not in a halted state. The core enters the halted state when it is running the HLT instruction. In mobile systems
		MEM_UOPS_RETIRED = 0x4, // Counts the number of load micro-ops retired.
		MEM_UOPS_RETIRED_MASK_L1_MISS_LOADS = 0x100, // Counts the number of load micro-ops retired that miss in L1 D cache.
		MEM_UOPS_RETIRED_MASK_LD_DCU_MISS = 0x100, // Counts the number of load micro-ops retired that miss in L1 D cache.
		MEM_UOPS_RETIRED_MASK_L2_HIT_LOADS = 0x200, // Counts the number of load micro-ops retired that hit in the L2.
		MEM_UOPS_RETIRED_MASK_L2_MISS_LOADS = 0x400, // Counts the number of load micro-ops retired that miss in the L2.
		MEM_UOPS_RETIRED_MASK_LD_L2_MISS = 0x400, // Counts the number of load micro-ops retired that miss in the L2.
		MEM_UOPS_RETIRED_MASK_DTLB_MISS_LOADS = 0x800, // Counts the number of load micro-ops retired that cause a DTLB miss.
		MEM_UOPS_RETIRED_MASK_UTLB_MISS_LOADS = 0x1000, // Counts the number of load micro-ops retired that caused micro TLB miss.
		MEM_UOPS_RETIRED_MASK_LD_UTLB_MISS = 0x1000, // Counts the number of load micro-ops retired that caused micro TLB miss.
		MEM_UOPS_RETIRED_MASK_HITM = 0x2000, // Counts the loads retired that get the data from the other core in the same tile in M state.
		MEM_UOPS_RETIRED_MASK_ALL_LOADS = 0x4000, // Counts all the load micro-ops retired.
		MEM_UOPS_RETIRED_MASK_ANY_LD = 0x4000, // Counts all the load micro-ops retired.
		MEM_UOPS_RETIRED_MASK_ALL_STORES = 0x8000, // Counts all the store micro-ops retired.
		MEM_UOPS_RETIRED_MASK_ANY_ST = 0x8000, // Counts all the store micro-ops retired.
		PAGE_WALKS = 0x5, // Number of page-walks executed
		PAGE_WALKS_MASK_D_SIDE_CYCLES = 0x100, // Counts the total D-side page walks that are completed or started. The page walks started in the speculative path will also be counted.
		PAGE_WALKS_MASK_D_SIDE_WALKS = 0x100 | INTEL_X86_MOD_EDGE | (1ULL << INTEL_X86_CMASK_BIT), // Counts the total number of core cycles for all the D-side page walks. The cycles for page walks started in speculative path will also be included.
		PAGE_WALKS_MASK_I_SIDE_CYCLES = 0x200, // Counts the total I-side page walks that are completed.
		PAGE_WALKS_MASK_I_SIDE_WALKS = 0x200 | INTEL_X86_MOD_EDGE | (1ULL << INTEL_X86_CMASK_BIT), // Counts the total number of core cycles for all the I-side page walks. The cycles for page walks started in speculative path will also be included.
		PAGE_WALKS_MASK_CYCLES = 0x300, // Counts the total page walks completed (I-side and D-side)
		PAGE_WALKS_MASK_WALKS = 0x300 | INTEL_X86_MOD_EDGE | (1ULL << INTEL_X86_CMASK_BIT), // Counts the total number of core cycles for all the page walks. The cycles for page walks started in speculative path will also be included.
		L2_REQUESTS_REJECT = 0x30, // Counts the number of MEC requests from the L2Q that reference a cache line were rejected.
		L2_REQUESTS_REJECT_MASK_ALL = 0x000, // Counts the number of MEC requests from the L2Q that reference a cache line excluding SW prefetches filling only to L2 cache and L1 evictions (automatically exlcudes L2HWP
		CORE_REJECT_L2Q = 0x31, // Number of requests not accepted into the L2Q because of any L2 queue reject condition.
		CORE_REJECT_L2Q_MASK_ALL = 0x000, // Counts the number of MEC requests that were not accepted into the L2Q because of any L2  queue reject condition. There is no concept of at-ret here. It might include requests due to instructions in the speculative path
		RECYCLEQ = 0x03, // Counts the number of occurrences a retired load gets blocked.
		RECYCLEQ_MASK_LD_BLOCK_ST_FORWARD = 0x0100, // Counts the number of occurrences a retired load gets blocked because its address partially overlaps with a store (Precise Event).
		RECYCLEQ_MASK_LD_BLOCK_STD_NOTREADY = 0x0200, // Counts the number of occurrences a retired load gets blocked because its address overlaps with a store whose data is not ready.
		RECYCLEQ_MASK_ST_SPLITS = 0x0400, // Counts the number of occurrences a retired store that is a cache line split. Each split should be counted only once.
		RECYCLEQ_MASK_LD_SPLITS = 0x0800, // Counts the number of occurrences a retired load that is a cache line split. Each split should be counted only once (Precise Event).
		RECYCLEQ_MASK_LOCK = 0x1000, // Counts all the retired locked loads. It does not include stores because we would double count if we count stores.
		RECYCLEQ_MASK_STA_FULL = 0x2000, // Counts the store micro-ops retired that were pushed in the rehad queue because the store address buffer is full.
		RECYCLEQ_MASK_ANY_LD = 0x4000, // Counts any retired load that was pushed into the recycle queue for any reason.
		RECYCLEQ_MASK_ANY_ST = 0x8000, // Counts any retired store that was pushed into the recycle queue for any reason.
		OFFCORE_RESPONSE_0 = 0x01b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_0_MASK_DMND_DATA_RD = 1ULL << (0 + 8), // Counts demand cacheable data and L1 prefetch data reads
		OFFCORE_RESPONSE_0_MASK_DMND_RFO = 1ULL << (1 + 8), // Counts Demand cacheable data writes
		OFFCORE_RESPONSE_0_MASK_DMND_CODE_RD = 1ULL << (2 + 8), // Counts demand code reads and prefetch code reads
		OFFCORE_RESPONSE_0_MASK_PF_L2_RFO = 1ULL << (5 + 8), // Counts L2 data RFO prefetches (includes PREFETCHW instruction)
		OFFCORE_RESPONSE_0_MASK_PF_L2_CODE_RD = 1ULL << (6 + 8), // Request: number of code reads generated by L2 prefetchers
		OFFCORE_RESPONSE_0_MASK_PARTIAL_READS = 1ULL << (7 + 8), // Counts Partial reads (UC or WC and is valid only for Outstanding response type).
		OFFCORE_RESPONSE_0_MASK_PARTIAL_WRITES = 1ULL << (8 + 8), // Counts Partial writes (UC or WT or WP and should be programmed on PMC1)
		OFFCORE_RESPONSE_0_MASK_UC_CODE_READS = 1ULL << (9 + 8), // Counts UC code reads (valid only for Outstanding response type)
		OFFCORE_RESPONSE_0_MASK_BUS_LOCKS = 1ULL << (10 + 8), // Counts Bus locks and split lock requests
		OFFCORE_RESPONSE_0_MASK_FULL_STREAMING_STORES = 1ULL << (11 + 8), // Counts Full streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_0_MASK_PF_SOFTWARE = 1ULL << (12 + 8), // Counts Software prefetches
		OFFCORE_RESPONSE_0_MASK_PF_L1_DATA_RD = 1ULL << (13 + 8), // Counts L1 data HW prefetches
		OFFCORE_RESPONSE_0_MASK_PARTIAL_STREAMING_STORES = 1ULL << (14 + 8), // Counts Partial streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_0_MASK_STREAMING_STORES = (1ULL << 14 | 1ULL << 11) << 8, // Counts all streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_0_MASK_ANY_REQUEST = 1ULL << (15 + 8), // Counts any request
		OFFCORE_RESPONSE_0_MASK_ANY_DATA_RD = (1ULL << 0 | 1ULL << 7 | 1ULL << 12 | 1ULL << 13) << 8, // Counts Demand cacheable data and L1 prefetch data read requests
		OFFCORE_RESPONSE_0_MASK_ANY_RFO = (1ULL << 1 | 1ULL << 5) << 8, // Counts Demand cacheable data write requests
		OFFCORE_RESPONSE_0_MASK_ANY_CODE_RD = (1ULL << 2 | 1ULL << 6) << 8, // Counts Demand code reads and prefetch code read requests
		OFFCORE_RESPONSE_0_MASK_ANY_READ = (1ULL << 0 | 1ULL << 1 | 1ULL << 2 | 1ULL << 5 | 1ULL << 6 | 1ULL << 7 | 1ULL << 9 | 1ULL << 12 | 1ULL << 13 ) << 8, // Counts any Read request
		OFFCORE_RESPONSE_0_MASK_ANY_PF_L2 = (1ULL << 5 | 1ULL << 6) << 8, // Counts any Prefetch requests
		OFFCORE_RESPONSE_0_MASK_ANY_RESPONSE = (1ULL << 16) << 8, // Accounts for any response
		OFFCORE_RESPONSE_0_MASK_DDR_NEAR = (1ULL << 31 | 1ULL << 23 ) << 8, // Accounts for data responses from DRAM Local.
		OFFCORE_RESPONSE_0_MASK_DDR_FAR = (1ULL << 31 | 1ULL << 24 ) << 8, // Accounts for data responses from DRAM Far.
		OFFCORE_RESPONSE_0_MASK_MCDRAM_NEAR = (1ULL << 31 | 1ULL << 21 ) << 8, // Accounts for data responses from MCDRAM Local.
		OFFCORE_RESPONSE_0_MASK_MCDRAM_FAR = (1ULL << 32 | 1ULL << 22 ) << 8, // Accounts for data responses from MCDRAM Far or Other tile L2 hit far.
		OFFCORE_RESPONSE_0_MASK_L2_HIT_NEAR_TILE_E_F = (1ULL << 35 | 1ULL << 19 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Near-other tile's L2 in E/F state.
		OFFCORE_RESPONSE_0_MASK_L2_HIT_NEAR_TILE_M = (1ULL << 36 | 1ULL << 19 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Near-other tile's L2 in M state.
		OFFCORE_RESPONSE_0_MASK_L2_HIT_FAR_TILE_E_F = (1ULL << 35 | 1ULL << 22 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Far(not in the same quadrant as the request)-other tile's L2 in E/F state. Valid only for SNC4 cluster mode.
		OFFCORE_RESPONSE_0_MASK_L2_HIT_FAR_TILE_M = (1ULL << 36 | 1ULL << 22 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Far(not in the same quadrant as the request)-other tile's L2 in M state.
		OFFCORE_RESPONSE_0_MASK_NON_DRAM = (1ULL << 37 | 1ULL << 17 ) << 8, // accounts for responses from any NON_DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_0_MASK_MCDRAM = (1ULL << 32 | 1ULL << 31 | 1ULL << 22 | 1ULL << 21 ) << 8, // accounts for responses from MCDRAM (local and far)
		OFFCORE_RESPONSE_0_MASK_DDR = (1ULL << 32 | 1ULL << 31 | 1ULL << 24 | 1ULL << 23 ) << 8, // accounts for responses from DDR (local and far)
		OFFCORE_RESPONSE_0_MASK_L2_HIT_NEAR_TILE = (1ULL << 36 | 1ULL << 35 | 1ULL << 20 | 1ULL << 19 ) << 8, // accounts for responses from snoop request hit with data forwarded from its Near-other tile L2 in E/F/M state
		OFFCORE_RESPONSE_0_MASK_L2_HIT_FAR_TILE = (1ULL << 36 | 1ULL << 35 | 1ULL << 22 ) << 8, // accounts for responses from snoop request hit with data forwarded from it Far(not in the same quadrant as the request)-other tile L2 in E/F/M state. Valid only in SNC4 Cluster mode.
		OFFCORE_RESPONSE_0_MASK_OUTSTANDING = (1ULL << 38) << 8, // outstanding
		OFFCORE_RESPONSE_1 = 0x02b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_1_MASK_DMND_DATA_RD = 1ULL << (0 + 8), // Counts demand cacheable data and L1 prefetch data reads
		OFFCORE_RESPONSE_1_MASK_DMND_RFO = 1ULL << (1 + 8), // Counts Demand cacheable data writes
		OFFCORE_RESPONSE_1_MASK_DMND_CODE_RD = 1ULL << (2 + 8), // Counts demand code reads and prefetch code reads
		OFFCORE_RESPONSE_1_MASK_PF_L2_RFO = 1ULL << (5 + 8), // Counts L2 data RFO prefetches (includes PREFETCHW instruction)
		OFFCORE_RESPONSE_1_MASK_PF_L2_CODE_RD = 1ULL << (6 + 8), // Request: number of code reads generated by L2 prefetchers
		OFFCORE_RESPONSE_1_MASK_PARTIAL_READS = 1ULL << (7 + 8), // Counts Partial reads (UC or WC and is valid only for Outstanding response type).
		OFFCORE_RESPONSE_1_MASK_PARTIAL_WRITES = 1ULL << (8 + 8), // Counts Partial writes (UC or WT or WP and should be programmed on PMC1)
		OFFCORE_RESPONSE_1_MASK_UC_CODE_READS = 1ULL << (9 + 8), // Counts UC code reads (valid only for Outstanding response type)
		OFFCORE_RESPONSE_1_MASK_BUS_LOCKS = 1ULL << (10 + 8), // Counts Bus locks and split lock requests
		OFFCORE_RESPONSE_1_MASK_FULL_STREAMING_STORES = 1ULL << (11 + 8), // Counts Full streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_1_MASK_PF_SOFTWARE = 1ULL << (12 + 8), // Counts Software prefetches
		OFFCORE_RESPONSE_1_MASK_PF_L1_DATA_RD = 1ULL << (13 + 8), // Counts L1 data HW prefetches
		OFFCORE_RESPONSE_1_MASK_PARTIAL_STREAMING_STORES = 1ULL << (14 + 8), // Counts Partial streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_1_MASK_STREAMING_STORES = (1ULL << 14 | 1ULL << 11) << 8, // Counts all streaming stores (WC and should be programmed on PMC1)
		OFFCORE_RESPONSE_1_MASK_ANY_REQUEST = 1ULL << (15 + 8), // Counts any request
		OFFCORE_RESPONSE_1_MASK_ANY_DATA_RD = (1ULL << 0 | 1ULL << 7 | 1ULL << 12 | 1ULL << 13) << 8, // Counts Demand cacheable data and L1 prefetch data read requests
		OFFCORE_RESPONSE_1_MASK_ANY_RFO = (1ULL << 1 | 1ULL << 5) << 8, // Counts Demand cacheable data write requests
		OFFCORE_RESPONSE_1_MASK_ANY_CODE_RD = (1ULL << 2 | 1ULL << 6) << 8, // Counts Demand code reads and prefetch code read requests
		OFFCORE_RESPONSE_1_MASK_ANY_READ = (1ULL << 0 | 1ULL << 1 | 1ULL << 2 | 1ULL << 5 | 1ULL << 6 | 1ULL << 7 | 1ULL << 9 | 1ULL << 12 | 1ULL << 13 ) << 8, // Counts any Read request
		OFFCORE_RESPONSE_1_MASK_ANY_PF_L2 = (1ULL << 5 | 1ULL << 6) << 8, // Counts any Prefetch requests
		OFFCORE_RESPONSE_1_MASK_ANY_RESPONSE = (1ULL << 16) << 8, // Accounts for any response
		OFFCORE_RESPONSE_1_MASK_DDR_NEAR = (1ULL << 31 | 1ULL << 23 ) << 8, // Accounts for data responses from DRAM Local.
		OFFCORE_RESPONSE_1_MASK_DDR_FAR = (1ULL << 31 | 1ULL << 24 ) << 8, // Accounts for data responses from DRAM Far.
		OFFCORE_RESPONSE_1_MASK_MCDRAM_NEAR = (1ULL << 31 | 1ULL << 21 ) << 8, // Accounts for data responses from MCDRAM Local.
		OFFCORE_RESPONSE_1_MASK_MCDRAM_FAR = (1ULL << 32 | 1ULL << 22 ) << 8, // Accounts for data responses from MCDRAM Far or Other tile L2 hit far.
		OFFCORE_RESPONSE_1_MASK_L2_HIT_NEAR_TILE_E_F = (1ULL << 35 | 1ULL << 19 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Near-other tile's L2 in E/F state.
		OFFCORE_RESPONSE_1_MASK_L2_HIT_NEAR_TILE_M = (1ULL << 36 | 1ULL << 19 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Near-other tile's L2 in M state.
		OFFCORE_RESPONSE_1_MASK_L2_HIT_FAR_TILE_E_F = (1ULL << 35 | 1ULL << 22 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Far(not in the same quadrant as the request)-other tile's L2 in E/F state. Valid only for SNC4 cluster mode.
		OFFCORE_RESPONSE_1_MASK_L2_HIT_FAR_TILE_M = (1ULL << 36 | 1ULL << 22 ) << 8, // Accounts for responses from a snoop request hit with data forwarded from its Far(not in the same quadrant as the request)-other tile's L2 in M state.
		OFFCORE_RESPONSE_1_MASK_NON_DRAM = (1ULL << 37 | 1ULL << 17 ) << 8, // accounts for responses from any NON_DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_1_MASK_MCDRAM = (1ULL << 32 | 1ULL << 31 | 1ULL << 22 | 1ULL << 21 ) << 8, // accounts for responses from MCDRAM (local and far)
		OFFCORE_RESPONSE_1_MASK_DDR = (1ULL << 32 | 1ULL << 31 | 1ULL << 24 | 1ULL << 23 ) << 8, // accounts for responses from DDR (local and far)
		OFFCORE_RESPONSE_1_MASK_L2_HIT_NEAR_TILE = (1ULL << 36 | 1ULL << 35 | 1ULL << 20 | 1ULL << 19 ) << 8, // accounts for responses from snoop request hit with data forwarded from its Near-other tile L2 in E/F/M state
		OFFCORE_RESPONSE_1_MASK_L2_HIT_FAR_TILE = (1ULL << 36 | 1ULL << 35 | 1ULL << 22 ) << 8, // accounts for responses from snoop request hit with data forwarded from it Far(not in the same quadrant as the request)-other tile L2 in E/F/M state. Valid only in SNC4 Cluster mode.
		
	};
};