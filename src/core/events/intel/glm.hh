#include <cstdint>

namespace optkit_intel{
	enum class glm : uint64_t {
		ICACHE = 0x80, // References per ICache line that are available in the ICache (hit). This event counts differently than Intel processors based on Silvermont microarchitecture
		ICACHE_MASK_HIT = 0x0100, // References per ICache line that are available in the ICache (hit). This event counts differently than Intel processors based on Silvermont microarchitecture
		ICACHE_MASK_MISSES = 0x0200, // References per ICache line that are not available in the ICache (miss). This event counts differently than Intel processors based on Silvermont microarchitecture
		ICACHE_MASK_ACCESSES = 0x0300, // References per ICache line. This event counts differently than Intel processors based on Silvermont microarchitecture
		L2_REJECT_XQ = 0x30, // Requests rejected by the XQ
		L2_REJECT_XQ_MASK_ALL = 0x0000, // Requests rejected by the XQ
		HW_INTERRUPTS = 0xcb, // Hardware interrupts received
		HW_INTERRUPTS_MASK_RECEIVED = 0x0100, // Hardware interrupts received
		HW_INTERRUPTS_MASK_PENDING_AND_MASKED = 0x0400, // Cycles pending interrupts are masked
		BR_MISP_RETIRED = 0xc5, // Retired mispredicted branch instructions (Precise Event)
		BR_MISP_RETIRED_MASK_ALL_BRANCHES = 0x0000, // Retired mispredicted branch instructions (Precise Event)
		BR_MISP_RETIRED_MASK_JCC = 0x7e00, // Retired mispredicted conditional branch instructions (Precise Event)
		BR_MISP_RETIRED_MASK_TAKEN_JCC = 0xfe00, // Retired mispredicted conditional branch instructions that were taken (Precise Event)
		BR_MISP_RETIRED_MASK_IND_CALL = 0xfb00, // Retired mispredicted near indirect call instructions (Precise Event)
		BR_MISP_RETIRED_MASK_RETURN = 0xf700, // Retired mispredicted near return instructions (Precise Event)
		BR_MISP_RETIRED_MASK_NON_RETURN_IND = 0xeb00, // Retired mispredicted instructions of near indirect Jmp or near indirect call (Precise Event)
		DECODE_RESTRICTION = 0xe9, // Decode restrictions due to predicting wrong instruction length
		DECODE_RESTRICTION_MASK_PREDECODE_WRONG = 0x0100, // Decode restrictions due to predicting wrong instruction length
		MISALIGN_MEM_REF = 0x13, // Load uops that split a page (Precise Event)
		MISALIGN_MEM_REF_MASK_LOAD_PAGE_SPLIT = 0x0200, // Load uops that split a page (Precise Event)
		MISALIGN_MEM_REF_MASK_STORE_PAGE_SPLIT = 0x0400, // Store uops that split a page (Precise Event)
		INST_RETIRED = 0xc0, // Instructions retired (Precise Event)
		INST_RETIRED_MASK_ANY_P = 0x0000, // Counts the number of instructions that retire execution. For instructions that consist of multiple uops
		INSTRUCTION_RETIRED = 0xc0, // Number of instructions retired
		ISSUE_SLOTS_NOT_CONSUMED = 0xca, // Unfilled issue slots per cycle because of a full resource in the backend
		ISSUE_SLOTS_NOT_CONSUMED_MASK_RESOURCE_FULL = 0x0100, // Unfilled issue slots per cycle because of a full resource in the backend
		ISSUE_SLOTS_NOT_CONSUMED_MASK_RECOVERY = 0x0200, // Unfilled issue slots per cycle to recover
		ISSUE_SLOTS_NOT_CONSUMED_MASK_ANY = 0x0000, // Unfilled issue slots per cycle
		ITLB = 0x81, // ITLB misses
		ITLB_MASK_MISS = 0x0400, // ITLB misses
		LONGEST_LAT_CACHE = 0x2e, // L2 cache requests
		LONGEST_LAT_CACHE_MASK_REFERENCE = 0x4f00, // L2 cache requests
		LONGEST_LAT_CACHE_MASK_MISS = 0x4100, // L2 cache request misses
		MEM_LOAD_UOPS_RETIRED = 0xd1, // Load uops retired that hit L1 data cache (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_L1_HIT = 0x0100, // Load uops retired that hit L1 data cache (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_L1_MISS = 0x0800, // Load uops retired that missed L1 data cache (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_L2_HIT = 0x0200, // Load uops retired that hit L2 (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_L2_MISS = 0x1000, // Load uops retired that missed L2 (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_HITM = 0x2000, // Memory uop retired where cross core or cross module HITM occurred (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_WCB_HIT = 0x4000, // Loads retired that hit WCB (Precise Event)
		MEM_LOAD_UOPS_RETIRED_MASK_DRAM_HIT = 0x8000, // Loads retired that came from DRAM (Precise Event)
		LD_BLOCKS = 0x03, // Loads blocked (Precise Event)
		LD_BLOCKS_MASK_ALL_BLOCK = 0x1000, // Loads blocked (Precise Event)
		LD_BLOCKS_MASK_UTLB_MISS = 0x0800, // Loads blocked because address in not in the UTLB (Precise Event)
		LD_BLOCKS_MASK_STORE_FORWARD = 0x0200, // Loads blocked due to store forward restriction (Precise Event)
		LD_BLOCKS_MASK_DATA_UNKNOWN = 0x0100, // Loads blocked due to store data not ready (Precise Event)
		LD_BLOCKS_MASK_4K_ALIAS = 0x0400, // Loads blocked because address has 4k partial address false dependence (Precise Event)
		DL1 = 0x51, // L1 Cache evictions for dirty data
		DL1_MASK_DIRTY_EVICTION = 0x0100, // L1 Cache evictions for dirty data
		CYCLES_DIV_BUSY = 0xcd, // Cycles a divider is busy
		CYCLES_DIV_BUSY_MASK_ALL = 0x0000, // Cycles a divider is busy
		CYCLES_DIV_BUSY_MASK_IDIV = 0x0100, // Cycles the integer divide unit is busy
		CYCLES_DIV_BUSY_MASK_FPDIV = 0x0200, // Cycles the FP divide unit is busy
		MS_DECODED = 0xe7, // MS decode starts
		MS_DECODED_MASK_MS_ENTRY = 0x0100, // MS decode starts
		UOPS_RETIRED = 0xc2, // Uops retired (Precise Event)
		UOPS_RETIRED_MASK_ANY = 0x0000, // Uops retired (Precise Event)
		UOPS_RETIRED_MASK_MS = 0x0100, // MS uops retired (Precise Event)
		OFFCORE_RESPONSE_1 = 0x2b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_1_MASK_DMND_DATA_RD = 1ULL << (0 + 8), // Request: number of demand and DCU prefetch data reads of full and partial cachelines as well as demand data page table entry cacheline reads. Does not count L2 data read prefetches or instruction fetches
		OFFCORE_RESPONSE_1_MASK_DMND_RFO = 1ULL << (1 + 8), // Request: number of demand and DCU prefetch reads for ownership (RFO) requests generated by a write to data cacheline. Does not count L2 RFO prefetches
		OFFCORE_RESPONSE_1_MASK_DMND_CODE_RD = 1ULL << (2 + 8), // Request: number of demand and DCU prefetch instruction cacheline reads. Does not count L2 code read prefetches
		OFFCORE_RESPONSE_1_MASK_WB = 1ULL << (3 + 8), // Request: number of writebacks (modified to exclusive) transactions
		OFFCORE_RESPONSE_1_MASK_PF_DATA_RD = 1ULL << (4 + 8), // Request: number of data cacheline reads generated by L2 prefetcher
		OFFCORE_RESPONSE_1_MASK_PF_RFO = 1ULL << (5 + 8), // Request: number of RFO requests generated by L2 prefetcher
		OFFCORE_RESPONSE_1_MASK_PARTIAL_READS = 1ULL << (7 + 8), // Request: number of partil reads
		OFFCORE_RESPONSE_1_MASK_PARTIAL_WRITES = 1ULL << (8 + 8), // Request: number of partial writes
		OFFCORE_RESPONSE_1_MASK_UC_CODE_READS = 1ULL << (9 + 8), // Request: number of uncached code reads
		OFFCORE_RESPONSE_1_MASK_BUS_LOCKS = 1ULL << (10 + 8), // Request: number of bus lock and split lock requests
		OFFCORE_RESPONSE_1_MASK_FULL_STRM_ST = 1ULL << (11 + 8), // Request: number of streaming store requests for full cacheline
		OFFCORE_RESPONSE_1_MASK_SW_PF = 1ULL << (12 + 8), // Request: number of cacheline requests due to software prefetch
		OFFCORE_RESPONSE_1_MASK_PF_L1_DATA_RD = 1ULL << (13 + 8), // Request: number of data cacheline reads generated by L1 data prefetcher
		OFFCORE_RESPONSE_1_MASK_PARTIAL_STRM_ST = 1ULL << (14 + 8), // Request: number of streaming store requests for partial cacheline
		OFFCORE_RESPONSE_1_MASK_STRM_ST = (1ULL << (14 + 8)) | (1ULL << (11+8)), // Request: number of streaming store requests for partial or full cacheline
		OFFCORE_RESPONSE_1_MASK_ANY_REQUEST = 1ULL << (15 + 8), // Request: combination of all request umasks
		OFFCORE_RESPONSE_1_MASK_ANY_PF_DATA_RD = (1ULL << (4+8)) | (1ULL << (12+8)) | (1ULL << (13+8)), // Request: number of prefetch data reads
		OFFCORE_RESPONSE_1_MASK_ANY_RFO = (1ULL << (1+8)) | (1ULL << (5+8)), // Request: number of RFO
		OFFCORE_RESPONSE_1_MASK_ANY_RESPONSE = 1ULL << (16 + 8), // Response: any response type
		OFFCORE_RESPONSE_1_MASK_L2_HIT = 1ULL << (18 + 8), // Supplier: counts L2 hits
		OFFCORE_RESPONSE_1_MASK_L2_MISS_SNP_MISS_OR_NO_SNOOP_NEEDED = 1ULL << (33 + 8), // Snoop: counts number true misses to this processor module for which a snoop request missed the other processor module or no snoop was needed
		OFFCORE_RESPONSE_1_MASK_L2_MISS_HIT_OTHER_CORE_NO_FWD = 1ULL << (34 + 8), // Snoop: counts number of times a snoop request hits the other processor module but no data forwarding is needed
		OFFCORE_RESPONSE_1_MASK_L2_MISS_HITM_OTHER_CORE = 1ULL << (36 + 8), // Snoop: counts number of times a snoop request hits in the other processor module or other core's L1 where a modified copy (M-state) is found
		OFFCORE_RESPONSE_1_MASK_L2_MISS_SNP_NON_DRAM = 1ULL << (37 + 8), // Snoop:  counts number of times target was a non-DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_1_MASK_L2_MISS_SNP_ANY = 0xfULL << (33 + 8), // Snoop: any snoop reason
		MACHINE_CLEARS = 0xc3, // Self-Modifying Code detected
		MACHINE_CLEARS_MASK_SMC = 0x0100, // Self-Modifying Code detected
		MACHINE_CLEARS_MASK_MEMORY_ORDERING = 0x0200, // Machine cleas due to memory ordering issue
		MACHINE_CLEARS_MASK_FP_ASSIST = 0x0400, // Machine clears due to FP assists
		MACHINE_CLEARS_MASK_DISAMBIGUATION = 0x0800, // Machine clears due to memory disambiguation
		MACHINE_CLEARS_MASK_ALL = 0x0000, // All machine clears
		BR_INST_RETIRED = 0xc4, // Retired branch instructions (Precise Event)
		BR_INST_RETIRED_MASK_ALL_BRANCHES = 0x0000, // Retired branch instructions (Precise Event)
		BR_INST_RETIRED_MASK_ALL_TAKEN_BRANCHES = 0x8000, // Retired branch instructions (Precise Event)
		BR_INST_RETIRED_MASK_JCC = 0x7e00, // Retired conditional branch instructions (Precise Event)
		BR_INST_RETIRED_MASK_TAKEN_JCC = 0xfe00, // Retired conditional branch instructions that were taken (Precise Event)
		BR_INST_RETIRED_MASK_CALL = 0xf900, // Retired near call instructions (Precise Event)
		BR_INST_RETIRED_MASK_REL_CALL = 0xfd00, // Retired near relative call instructions (Precise Event)
		BR_INST_RETIRED_MASK_IND_CALL = 0xfb00, // Retired near indirect call instructions (Precise Event)
		BR_INST_RETIRED_MASK_RETURN = 0xf700, // Retired near return instructions (Precise Event)
		BR_INST_RETIRED_MASK_NON_RETURN_IND = 0xeb00, // Retired instructions of near indirect Jmp or call (Precise Event)
		BR_INST_RETIRED_MASK_FAR_BRANCH = 0xbf00, // Retired far branch instructions (Precise Event)
		FETCH_STALL = 0x86, // Cycles where code-fetch is stalled and an ICache miss is outstanding.  This is not the same as an ICache Miss
		FETCH_STALL_MASK_ICACHE_FILL_PENDING_CYCLES = 0x0200, // Cycles where code-fetch is stalled and an ICache miss is outstanding.  This is not the same as an ICache Miss
		UOPS_NOT_DELIVERED = 0x9c, // Uops requested but not-delivered to the back-end per cycle
		UOPS_NOT_DELIVERED_MASK_ANY = 0x0000, // Uops requested but not-delivered to the back-end per cycle
		MISPREDICTED_BRANCH_RETIRED = 0xc5, // Number of mispredicted branch instructions retired
		INSTRUCTIONS_RETIRED = 0xc0, // Number of instructions retired
		MEM_UOPS_RETIRED = 0xd0, // Load uops retired (Precise Event)
		MEM_UOPS_RETIRED_MASK_ALL_LOADS = 0x8100, // Load uops retired (Precise Event)
		MEM_UOPS_RETIRED_MASK_ALL_STORES = 0x8200, // Store uops retired (Precise Event)
		MEM_UOPS_RETIRED_MASK_ALL = 0x8300, // Memory uops retired (Precise Event)
		MEM_UOPS_RETIRED_MASK_DTLB_MISS_LOADS = 0x1100, // Load uops retired that missed the DTLB (Precise Event)
		MEM_UOPS_RETIRED_MASK_DTLB_MISS_STORES = 0x1200, // Store uops retired that missed the DTLB (Precise Event)
		MEM_UOPS_RETIRED_MASK_DTLB_MISS = 0x1300, // Memory uops retired that missed the DTLB (Precise Event)
		MEM_UOPS_RETIRED_MASK_LOCK_LOADS = 0x2100, // Locked load uops retired (Precise Event)
		MEM_UOPS_RETIRED_MASK_SPLIT_LOADS = 0x4100, // Load uops retired that split a cache-line (Precise Event)
		MEM_UOPS_RETIRED_MASK_SPLIT_STORES = 0x4200, // Stores uops retired that split a cache-line (Precise Event)
		MEM_UOPS_RETIRED_MASK_SPLIT = 0x4300, // Memory uops retired that split a cache-line (Precise Event)
		UOPS_ISSUED = 0x0e, // Uops issued to the back end per cycle
		UOPS_ISSUED_MASK_ANY = 0x0000, // Uops issued to the back end per cycle
		OFFCORE_RESPONSE_0 = 0x1b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_0_MASK_DMND_DATA_RD = 1ULL << (0 + 8), // Request: number of demand and DCU prefetch data reads of full and partial cachelines as well as demand data page table entry cacheline reads. Does not count L2 data read prefetches or instruction fetches
		OFFCORE_RESPONSE_0_MASK_DMND_RFO = 1ULL << (1 + 8), // Request: number of demand and DCU prefetch reads for ownership (RFO) requests generated by a write to data cacheline. Does not count L2 RFO prefetches
		OFFCORE_RESPONSE_0_MASK_DMND_CODE_RD = 1ULL << (2 + 8), // Request: number of demand and DCU prefetch instruction cacheline reads. Does not count L2 code read prefetches
		OFFCORE_RESPONSE_0_MASK_WB = 1ULL << (3 + 8), // Request: number of writebacks (modified to exclusive) transactions
		OFFCORE_RESPONSE_0_MASK_PF_DATA_RD = 1ULL << (4 + 8), // Request: number of data cacheline reads generated by L2 prefetcher
		OFFCORE_RESPONSE_0_MASK_PF_RFO = 1ULL << (5 + 8), // Request: number of RFO requests generated by L2 prefetcher
		OFFCORE_RESPONSE_0_MASK_PARTIAL_READS = 1ULL << (7 + 8), // Request: number of partil reads
		OFFCORE_RESPONSE_0_MASK_PARTIAL_WRITES = 1ULL << (8 + 8), // Request: number of partial writes
		OFFCORE_RESPONSE_0_MASK_UC_CODE_READS = 1ULL << (9 + 8), // Request: number of uncached code reads
		OFFCORE_RESPONSE_0_MASK_BUS_LOCKS = 1ULL << (10 + 8), // Request: number of bus lock and split lock requests
		OFFCORE_RESPONSE_0_MASK_FULL_STRM_ST = 1ULL << (11 + 8), // Request: number of streaming store requests for full cacheline
		OFFCORE_RESPONSE_0_MASK_SW_PF = 1ULL << (12 + 8), // Request: number of cacheline requests due to software prefetch
		OFFCORE_RESPONSE_0_MASK_PF_L1_DATA_RD = 1ULL << (13 + 8), // Request: number of data cacheline reads generated by L1 data prefetcher
		OFFCORE_RESPONSE_0_MASK_PARTIAL_STRM_ST = 1ULL << (14 + 8), // Request: number of streaming store requests for partial cacheline
		OFFCORE_RESPONSE_0_MASK_STRM_ST = (1ULL << (14 + 8)) | (1ULL << (11+8)), // Request: number of streaming store requests for partial or full cacheline
		OFFCORE_RESPONSE_0_MASK_ANY_REQUEST = 1ULL << (15 + 8), // Request: combination of all request umasks
		OFFCORE_RESPONSE_0_MASK_ANY_PF_DATA_RD = (1ULL << (4+8)) | (1ULL << (12+8)) | (1ULL << (13+8)), // Request: number of prefetch data reads
		OFFCORE_RESPONSE_0_MASK_ANY_RFO = (1ULL << (1+8)) | (1ULL << (5+8)), // Request: number of RFO
		OFFCORE_RESPONSE_0_MASK_ANY_RESPONSE = 1ULL << (16 + 8), // Response: any response type
		OFFCORE_RESPONSE_0_MASK_L2_HIT = 1ULL << (18 + 8), // Supplier: counts L2 hits
		OFFCORE_RESPONSE_0_MASK_L2_MISS_SNP_MISS_OR_NO_SNOOP_NEEDED = 1ULL << (33 + 8), // Snoop: counts number true misses to this processor module for which a snoop request missed the other processor module or no snoop was needed
		OFFCORE_RESPONSE_0_MASK_L2_MISS_HIT_OTHER_CORE_NO_FWD = 1ULL << (34 + 8), // Snoop: counts number of times a snoop request hits the other processor module but no data forwarding is needed
		OFFCORE_RESPONSE_0_MASK_L2_MISS_HITM_OTHER_CORE = 1ULL << (36 + 8), // Snoop: counts number of times a snoop request hits in the other processor module or other core's L1 where a modified copy (M-state) is found
		OFFCORE_RESPONSE_0_MASK_L2_MISS_SNP_NON_DRAM = 1ULL << (37 + 8), // Snoop:  counts number of times target was a non-DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_0_MASK_L2_MISS_SNP_ANY = 0x1bULL << (33 + 8), // Snoop: any snoop reason
		OFFCORE_RESPONSE_0_MASK_OUTSTANDING = 1ULL << (38 + 8), // Outstanding request:  counts weighted cycles of outstanding offcore requests of the request type specified in the bits 15:0 of offcore_response from the time the XQ receives the request and any response received. Bits 37:16 must be set to 0. This is only available for offcore_response_0
		UNHALTED_REFERENCE_CYCLES = 0x0300, // Unhalted reference cycles. Ticks at constant reference frequency
		BRANCH_INSTRUCTIONS_RETIRED = 0xc4, // Number of branch instructions retired
		CORE_REJECT_L2Q = 0x31, // Requests rejected by the L2Q
		CORE_REJECT_L2Q_MASK_ALL = 0x0000, // Requests rejected by the L2Q
		PAGE_WALKS = 0x05, // Duration of D-side page-walks in cycles
		PAGE_WALKS_MASK_D_SIDE_CYCLES = 0x0100, // Duration of D-side page-walks in cycles
		PAGE_WALKS_MASK_I_SIDE_CYCLES = 0x0200, // Duration of I-side pagewalks in cycles
		PAGE_WALKS_MASK_CYCLES = 0x0300, // Duration of page-walks in cycles
		BACLEARS = 0xe6, // BACLEARs asserted for any branch type
		BACLEARS_MASK_ALL = 0x0100, // BACLEARs asserted for any branch type
		BACLEARS_MASK_RETURN = 0x0800, // BACLEARs asserted for return branch
		BACLEARS_MASK_COND = 0x1000, // BACLEARs asserted for conditional branch
		CPU_CLK_UNHALTED = 0x00, // Core cycles when core is not halted  (Fixed event)
		CPU_CLK_UNHALTED_MASK_CORE = 0x0200, // Core cycles when core is not halted  (Fixed event)
		CPU_CLK_UNHALTED_MASK_REF_TSC = 0x0300, // Reference cycles when core is not halted  (Fixed event)
		CPU_CLK_UNHALTED_MASK_CORE_P = 0x0000, // Core cycles when core is not halted
		CPU_CLK_UNHALTED_MASK_REF = 0x0100, // Reference cycles when core is not halted
		UNHALTED_CORE_CYCLES = 0x3c, // Core clock cycles whenever the clock signal on the specific core is running (not halted)
		};};