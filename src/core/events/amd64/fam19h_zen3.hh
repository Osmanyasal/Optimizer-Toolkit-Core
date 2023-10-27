#include <cstdint>

namespace optkit_amd64{
	enum class fam19h_zen3 : uint64_t {
		RETIRED_SSE_AVX_FLOPS = 0x3, // This is a retire-based event. The number of retired SSE/AVX FLOPS. The number of events logged per cycle can vary from 0 to 64. This event can count above 15 and therefore requires the MergeEvent
		RETIRED_SSE_AVX_FLOPS_MASK_ADD_SUB_FLOPS = 0x1, // Addition/subtraction FLOPS
		RETIRED_SSE_AVX_FLOPS_MASK_MULT_FLOPS = 0x2, // Multiplication FLOPS
		RETIRED_SSE_AVX_FLOPS_MASK_DIV_FLOPS = 0x4, // Division/Square-root FLOPS
		RETIRED_SSE_AVX_FLOPS_MASK_MAC_FLOPS = 0x8, // Multiply-Accumulate flops. Each MAC operation is counted as 2 FLOPS
		RETIRED_SSE_AVX_FLOPS_MASK_ANY = 0xf, // Double precision add/subtract flops
		RETIRED_SERIALIZING_OPS = 0x5, // The number of serializing Ops retired
		RETIRED_SERIALIZING_OPS_MASK_X87_CTRL_RET = 0x1, // x87 control word mispredict traps due to mispredction in RC or PC
		RETIRED_SERIALIZING_OPS_MASK_X87_BOT_RET = 0x2, // x87 bottom-executing ops retired
		RETIRED_SERIALIZING_OPS_MASK_SSE_CTRL_RET = 0x4, // SSE/AVX control word mispredict traps
		RETIRED_SERIALIZING_OPS_MASK_SSE_BOT_RET = 0x8, // SSE/AVX bottom-executing ops retired
		FP_DISPATCH_FAULTS = 0xe, // Floating-point dispatch faults
		FP_DISPATCH_FAULTS_MASK_X87_FILL_FAULT = 0x1, // x87 fill faults
		FP_DISPATCH_FAULTS_MASK_XMM_FILL_FAULT = 0x2, // XMM fill faults
		FP_DISPATCH_FAULTS_MASK_YMM_FILL_FAULT = 0x4, // YMM fill faults
		FP_DISPATCH_FAULTS_MASK_YMM_SPILL_FAULT = 0x8, // YMM spill faults
		FP_DISPATCH_FAULTS_MASK_ANY = 0xf, // Any FP dispatch faults
		BAD_STATUS_2 = 0x24, // TBD
		BAD_STATUS_2_MASK_STLI_OTHER = 0x2, // Store-to-load conflicts. A load was unable to complete due to a non-forwardable conflict with an older store
		RETIRED_LOCK_INSTRUCTIONS = 0x25, // Counts the number of retired locked instructions
		RETIRED_LOCK_INSTRUCTIONS_MASK_BUS_LOCK = 0x1, // Number of bus locks
		RETIRED_CLFLUSH_INSTRUCTIONS = 0x26, // Counts the number of retired non-speculative clflush instructions
		RETIRED_CPUID_INSTRUCTIONS = 0x27, // Counts the number of retired cpuid instructions
		LS_DISPATCH = 0x29, // Counts the number of operations dispatched to the LS unit. Unit Masks ADDed
		LS_DISPATCH_MASK_LD_ST_DISPATCH = 0x4, // Dispatched op that performs a load from and store to the same memory address
		LS_DISPATCH_MASK_STORE_DISPATCH = 0x2, // Store ops dispatched
		LS_DISPATCH_MASK_LD_DISPATCH = 0x1, // Load ops dispatched
		SMI_RECEIVED = 0x2b, // Counts the number system management interrupts (SMI) received
		INTERRUPT_TAKEN = 0x2c, // Counts the number of interrupts taken
		STORE_TO_LOAD_FORWARD = 0x35, // Number of STore to Load Forward hits
		STORE_COMMIT_CANCELS_2 = 0x37, // TBD
		STORE_COMMIT_CANCELS_2_MASK_WCB_FULL = 0x1, // Non cacheable store and the non-cacheable commit buffer is full
		MAB_ALLOCATION_BY_TYPE = 0x41, // Counts when a LS pipe allocates a MAB entry
		MAB_ALLOCATION_BY_TYPE_MASK_LS = 0x3f, // Load store allocations
		MAB_ALLOCATION_BY_TYPE_MASK_HW_PF = 0x40, // Hardware prefetcher allocations
		MAB_ALLOCATION_BY_TYPE_MASK_ALL = 0x7f, // All allocations
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM = 0x43, // Demand Data Cache fills by data source
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_LCL_L2 = 0x1, // Fill from local L2 to the core
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_INT_CACHE = 0x2, // Fill from L3 or different L2 in same CCX
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_EXT_CACHE_LCL = 0x4, // Fill from cache of different CCX in same node
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_MEM_IO_LCL = 0x8, // Fill from DRAM or IO connected in same node
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_EXT_CACHE_RMT = 0x10, // Fill from CCX cache in different node
		DEMAND_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_MEM_IO_RMT = 0x40, // Fill from DRAM or IO connected in different node
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM = 0x44, // Any Data Cache fills by data source
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_LCL_L2 = 0x1, // Fill from local L2 to the core
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_INT_CACHE = 0x2, // Fill from L3 or different L2 in same CCX
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_EXT_CACHE_LCL = 0x4, // Fill from cache of different CCX in same node
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_MEM_IO_LCL = 0x8, // Fill from DRAM or IO connected in same node
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_EXT_CACHE_RMT = 0x10, // Fill from CCX cache in different node
		ANY_DATA_CACHE_FILLS_FROM_SYSTEM_MASK_MEM_IO_RMT = 0x40, // Fill from DRAM or IO connected in different node
		L1_DTLB_MISS = 0x45, // L1 Data TLB misses
		L1_DTLB_MISS_MASK_TLB_RELOAD_1G_L2_MISS = 0x80, // Data TLB reload to a 1GB page that missed in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_2M_L2_MISS = 0x40, // Data TLB reload to a 2MB page that missed in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_COALESCED_PAGE_MISS = 0x20, // Data TLB reload to a coalesced page that also missed in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_4K_L2_MISS = 0x10, // Data TLB reload to a 4KB page that missed in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_1G_L2_HIT = 0x8, // Data TLB reload to a 1GB page that hit in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_2M_L2_HIT = 0x4, // Data TLB reload to a 2MB page that hit in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_COALESCED_PAGE_HIT = 0x2, // Data TLB reload to a coalesced page that hit in the L2 TLB
		L1_DTLB_MISS_MASK_TLB_RELOAD_4K_L2_HIT = 0x1, // Data TLB reload to a 4KB page that hit in the L2 TLB
		MISALIGNED_LOADS = 0x47, // Misaligned loads retired
		MISALIGNED_LOADS_MASK_MA4K = 0x2, // The number of 4KB misaligned (page crossing) loads
		MISALIGNED_LOADS_MASK_MA64 = 0x1, // The number of 64B misaligned (cacheline crossing) loads
		PREFETCH_INSTRUCTIONS_DISPATCHED = 0x4b, // Software Prefetch Instructions Dispatched. This is a speculative event
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_PREFETCH_T0_T1_T2 = 0x1, // Number of prefetcht0
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_PREFETCHW = 0x2, // Number of prefetchtw instructions dispatched
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_PREFETCHNTA = 0x4, // Number of prefetchtnta instructions dispatched
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_ANY = 0x7, // Any prefetch
		INEFFECTIVE_SOFTWARE_PREFETCH = 0x52, // Number of software prefetches that did not fetch data outside of the processor core
		INEFFECTIVE_SOFTWARE_PREFETCH_MASK_MAB_MCH_CNT = 0x2, // Software prefetch instructions saw a match on an already allocated miss request buffer
		INEFFECTIVE_SOFTWARE_PREFETCH_MASK_DATA_PIPE_SW_PF_DC_HIT = 0x1, // Software Prefetch instruction saw a DC hit
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS = 0x59, // Number of software prefetches fills by data source
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_LCL_L2 = 0x1, // Fill from local L2 to the core
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_INT_CACHE = 0x2, // Fill from L3 or different L2 in same CCX
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_EXT_CACHE_LCL = 0x4, // Fill from cache of different CCX in same node
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_MEM_IO_LCL = 0x8, // Fill from DRAM or IO connected in same node
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_EXT_CACHE_RMT = 0x10, // Fill from CCX cache in different node
		SOFTWARE_PREFETCH_DATA_CACHE_FILLS_MASK_MEM_IO_RMT = 0x40, // Fill from DRAM or IO connected in different node
		HARDWARE_PREFETCH_DATA_CACHE_FILLS = 0x5a, // Number of hardware prefetches fills by data source
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_LCL_L2 = 0x1, // Fill from local L2 to the core
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_INT_CACHE = 0x2, // Fill from L3 or different L2 in same CCX
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_EXT_CACHE_LCL = 0x4, // Fill from cache of different CCX in same node
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_MEM_IO_LCL = 0x8, // Fill from DRAM or IO connected in same node
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_EXT_CACHE_RMT = 0x10, // Fill from CCX cache in different node
		HARDWARE_PREFETCH_DATA_CACHE_FILLS_MASK_MEM_IO_RMT = 0x40, // Fill from DRAM or IO connected in different node
		ALLOC_MAB_COUNT = 0x5f, // Counts the in-flight L1 data cache misses (allocated Miss Address Buffers) divided by 4 and rounded down each cycle unless used with the MergeEvent functionality. If the MergeEvent is used
		CYCLES_NOT_IN_HALT = 0x76, // Number of core cycles not in halted state
		TLB_FLUSHES = 0x78, // Number of TLB flushes
		TLB_FLUSHES_MASK_ALL = 0xff, // Any TLB flush
		INSTRUCTION_CACHE_REFILLS_FROM_L2 = 0x82, // Number of 64-byte instruction cachelines that was fulfilled by the L2 cache
		INSTRUCTION_CACHE_REFILLS_FROM_SYSTEM = 0x83, // Number of 64-byte instruction cachelines fulfilled from system memory or another cache
		L1_ITLB_MISS_L2_ITLB_HIT = 0x84, // Number of instruction fetches that miss in the L1 ITLB but hit in the L2 ITLB
		L1_ITLB_MISS_L2_ITLB_MISS = 0x85, // The number of valid fills into the ITLB originating from the LS Page-Table Walker. Tablewalk requests are issued for L1-ITLB and L2-ITLB misses
		L1_ITLB_MISS_L2_ITLB_MISS_MASK_COALESCED4K = 0x8, // Number of instruction fetches to a >4K coalesced page
		L1_ITLB_MISS_L2_ITLB_MISS_MASK_IF1G = 0x4, // Number of instruction fetches to a 1GB page
		L1_ITLB_MISS_L2_ITLB_MISS_MASK_IF2M = 0x2, // Number of instruction fetches to a 2MB page
		L1_ITLB_MISS_L2_ITLB_MISS_MASK_IF4K = 0x1, // Number of instruction fetches to a 4KB page
		L2_BTB_CORRECTION = 0x8b, // Number of L2 branch prediction overrides of existing prediction. This is a speculative event
		DYNAMIC_INDIRECT_PREDICTIONS = 0x8e, // Number of times a branch used the indirect predictor to make a prediction
		DECODER_OVERRIDE_BRANCH_PRED = 0x91, // Number of decoder overrides of existing branch prediction
		L1_ITLB_FETCH_HIT = 0x94, // Instruction fetches that hit in the L1 ITLB
		L1_ITLB_FETCH_HIT_MASK_IF1G = 0x4, // L1 instruction fetch TLB hit a 1GB page size
		L1_ITLB_FETCH_HIT_MASK_IF2M = 0x2, // L1 instruction fetch TLB hit a 2MB page size
		L1_ITLB_FETCH_HIT_MASK_IF4K = 0x1, // L1 instruction fetch TLB hit a 4KB or 16KB page size
		IC_TAG_HIT_MISS = 0x18e, // Counts various IC tag related hit and miss events
		IC_TAG_HIT_MISS_MASK_IC_HIT = 0x7, // Instruction cache hit
		IC_TAG_HIT_MISS_MASK_IC_MISS = 0x18, // Instruction cache miss
		IC_TAG_HIT_MISS_MASK_ALL_IC_ACCESS = 0x1f, // All instruction cache accesses
		OP_CACHE_HIT_MISS = 0x28f, // Counts op cache micro-tag hit/miss events
		OP_CACHE_HIT_MISS_MASK_OC_HIT = 0x3, // Op cache hit
		OP_CACHE_HIT_MISS_MASK_OC_MISS = 0x4, // Op cache miss
		OP_CACHE_HIT_MISS_MASK_ALL_OC_ACCESS = 0x7, // All op cache accesses
		OPS_SOURCE_DISPATCHED_FROM_DECODER = 0xaa, // Number of ops dispatched from the decoder classified by op source
		OPS_SOURCE_DISPATCHED_FROM_DECODER_MASK_X86DECODER_DISPATCHED = 0x1, // Number of ops fetched from Instruction Cache and dispatched
		OPS_SOURCE_DISPATCHED_FROM_DECODER_MASK_OPCACHE_DISPATCHED = 0x2, // Number of ops fetched from Op Cache and dispatched
		OPS_TYPE_DISPATCHED_FROM_DECODER = 0xab, // Number of ops dispatched from the decoder classified by op type
		OPS_TYPE_DISPATCHED_FROM_DECODER_MASK_FP_DISP_IBS_MODE = 0x04, // Any FP dispatch. Count aligns with IBS count
		OPS_TYPE_DISPATCHED_FROM_DECODER_MASK_INT_DISP_IBS_MODE = 0x08, // Any Integer dispatch. Count aligns with IBS count
		OPS_TYPE_DISPATCHED_FROM_DECODER_MASK_FP_DISP_RETIRE_MODE = 0x84, // Any FP dispatch. Count aligns with RETIRED_OPS count
		OPS_TYPE_DISPATCHED_FROM_DECODER_MASK_INT_DISP_RETIRE_MODE = 0x88, // Any Integer dispatch. Count aligns with RETIRED_OPS count
		DISPATCH_RESOURCE_STALL_CYCLES_1 = 0xae, // Number of cycles where a dispatch group is valid but does not get dispatched due to a Token Stall
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_INT_PHY_REG_FILE_RSRC_STALL = 0x1, // Number of cycles stalled due to integer physical register file resource stalls. Applies to all ops that have integer destination register
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_LOAD_QUEUE_RSRC_STALL = 0x2, // Number of cycles stalled due to load queue resource stalls. Applies to all ops with load semantics
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_STORE_QUEUE_RSRC_STALL = 0x4, // Number of cycles stalled due to store queue resource stalls. Applies to all ops with store semantics
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_TAKEN_BRANCH_BUFFER_RSRC_STALL = 0x10, // Number of cycles stalled due to taken branch buffer resource stalls
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_FP_REG_FILE_RSRC_STALL = 0x20, // Number of cycles stalled due to floating-point register file resource stalls. Applies to all FP ops that have a destination register
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_FP_SCHEDULER_RSRC_STALL = 0x40, // Number of cycles stalled due to floating-point scheduler resource stalls. Applies to ops that use the FP scheduler
		DISPATCH_RESOURCE_STALL_CYCLES_1_MASK_FP_FLUSH_RECOVERY_STALL = 0x80, // Number of cycles stalled due to floating-point flush recovery
		DISPATCH_RESOURCE_STALL_CYCLES_2 = 0xaf, // Number of cycles where a dispatch group is valid but does not get dispatched due to a Token Stall
		DISPATCH_RESOURCE_STALL_CYCLES_2_MASK_INT_SCHEDULER_0_TOKEN_STALL = 0x1, // Number of cycles stalled due to no tokens available for Integer Scheduler Queue 0
		DISPATCH_RESOURCE_STALL_CYCLES_2_MASK_INT_SCHEDULER_1_TOKEN_STALL = 0x2, // Number of cycles stalled due to no tokens available for Integer Scheduler Queue 1
		DISPATCH_RESOURCE_STALL_CYCLES_2_MASK_INT_SCHEDULER_2_TOKEN_STALL = 0x4, // Number of cycles stalled due to no tokens available for Integer Scheduler Queue 2
		DISPATCH_RESOURCE_STALL_CYCLES_2_MASK_INT_SCHEDULER_3_TOKEN_STALL = 0x8, // Number of cycles stalled due to no tokens available for Integer Scheduler Queue 3
		DISPATCH_RESOURCE_STALL_CYCLES_2_MASK_RETIRE_TOKEN_STALL = 0x20, // Number of cycles stalled due to insufficient tokens available for Retire Queue
		RETIRED_INSTRUCTIONS = 0xc0, // Number of instructions retired
		RETIRED_OPS = 0xc1, // Number of macro-ops retired
		RETIRED_BRANCH_INSTRUCTIONS = 0xc2, // Number of branch instructions retired. This includes all types of architectural control flow changes
		RETIRED_BRANCH_INSTRUCTIONS_MISPREDICTED = 0xc3, // Number of retired branch instructions
		RETIRED_TAKEN_BRANCH_INSTRUCTIONS = 0xc4, // Number of taken branches that were retired. This includes all types of architectural control flow changes
		RETIRED_TAKEN_BRANCH_INSTRUCTIONS_MISPREDICTED = 0xc5, // Number of retired taken branch instructions that were mispredicted
		RETIRED_FAR_CONTROL_TRANSFERS = 0xc6, // Number of far control transfers retired including far call/jump/return
		RETIRED_NEAR_RETURNS = 0xc8, // Number of near return instructions (RET or RET Iw) retired
		RETIRED_NEAR_RETURNS_MISPREDICTED = 0xc9, // Number of near returns retired that were not correctly predicted by the return address predictor. Each such mispredict incurs the same penalty as a mispredicted conditional branch instruction
		RETIRED_INDIRECT_BRANCH_INSTRUCTIONS_MISPREDICTED = 0xca, // Number of indirect branches retired there were not correctly predicted. Each such mispredict incurs the same penalty as a mispredicted condition branch instruction. Only EX mispredicts are counted
		RETIRED_MMX_FP_INSTRUCTIONS = 0xcb, // Number of MMX
		RETIRED_MMX_FP_INSTRUCTIONS_MASK_SSE_INSTR = 0x4, // Number of SSE instructions (SSE
		RETIRED_MMX_FP_INSTRUCTIONS_MASK_MMX_INSTR = 0x2, // Number of MMX instructions
		RETIRED_MMX_FP_INSTRUCTIONS_MASK_X87_INSTR = 0x1, // Number of x87 instructions
		RETIRED_INDIRECT_BRANCH_INSTRUCTIONS = 0xcc, // Number of indirect branches retired
		RETIRED_CONDITIONAL_BRANCH_INSTRUCTIONS = 0xd1, // Number of retired conditional branch instructions
		DIV_CYCLES_BUSY_COUNT = 0xd3, // Number of cycles when the divider is busy
		DIV_OP_COUNT = 0xd4, // Number of divide ops
		RETIRED_BRANCH_MISPREDICTED_DIRECTION_MISMATCH = 0x1c7, // Number of retired conditional branch instructions that were not correctly predicted because of branch direction mismatch
		TAGGED_IBS_OPS = 0x1cf, // Counts Op IBS related events
		TAGGED_IBS_OPS_MASK_IBS_COUNT_ROLLOVER = 0x4, // Number of times a op could not be tagged by IBS because of a previous tagged op that has not retired
		TAGGED_IBS_OPS_MASK_IBS_TAGGED_OPS_RET = 0x2, // Number of ops tagged by IBS that retired
		TAGGED_IBS_OPS_MASK_IBS_TAGGED_OPS = 0x1, // Number of ops tagged by IBS
		RETIRED_FUSED_INSTRUCTIONS = 0x1d0, // Counts retired fused instructions
		REQUESTS_TO_L2_GROUP1 = 0x60, // All L2 cache requests
		REQUESTS_TO_L2_GROUP1_MASK_RD_BLK_L = 0x80, // Number of data cache reads (including software and hardware prefetches)
		REQUESTS_TO_L2_GROUP1_MASK_RD_BLK_X = 0x40, // Number of data cache stores
		REQUESTS_TO_L2_GROUP1_MASK_LS_RD_BLK_C_S = 0x20, // Number of data cache shared reads
		REQUESTS_TO_L2_GROUP1_MASK_CACHEABLE_IC_READ = 0x10, // Number of instruction cache reads
		REQUESTS_TO_L2_GROUP1_MASK_CHANGE_TO_X = 0x8, // Number of requests change to writable
		REQUESTS_TO_L2_GROUP1_MASK_PREFETCH_L2 = 0x4, // TBD
		REQUESTS_TO_L2_GROUP1_MASK_L2_HW_PF = 0x2, // Number of prefetches accepted by L2 pipeline
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS = 0x64, // L2 cache request outcomes. This event does not count accesses to the L2 cache by the L2 prefetcher
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_LS_RD_BLK_C_S = 0x80, // Number of data cache shared read hitting in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_LS_RD_BLK_L_HIT_X = 0x40, // Number of data cache reads hitting in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_LS_RD_BLK_L_HIT_S = 0x20, // Number of data cache reads hitting a non-modifiable line in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_LS_RD_BLK_X = 0x10, // Number of data cache store or state change requests hitting in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_LS_RD_BLK_C = 0x8, // Number of data cache requests missing in the L2 (all types)
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_IC_FILL_HIT_X = 0x4, // Number of instruction cache fill requests hitting a modifiable line in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_IC_FILL_HIT_S = 0x2, // Number of instruction cache fill requests hitting a non-modifiable line in the L2
		CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS_MASK_IC_FILL_MISS = 0x1, // Number of instruction cache fill requests missing the L2
		L2_PREFETCH_HIT_L2 = 0x70, // Number of L2 prefetches that hit in the L2
		L2_PREFETCH_HIT_L2_MASK_L2_HW_PREFETCHER = 0x1f, // Number of requests generated by L2 hardware prefetcher
		L2_PREFETCH_HIT_L2_MASK_L1_HW_PREFETCHER = 0xe0, // Number of requests generated by L1 hardware prefetcher
		L2_PREFETCH_HIT_L3 = 0x71, // Number of L2 prefetches accepted by the L2 pipeline which miss the L2 cache and hit the L3
		L2_PREFETCH_HIT_L3_MASK_L2_HW_PREFETCHER = 0x1f, // Number of requests generated by L2 hardware prefetcher
		L2_PREFETCH_HIT_L3_MASK_L1_HW_PREFETCHER = 0xe0, // Number of requests generated by L1 hardware prefetcher
		L2_PREFETCH_MISS_L3 = 0x72, // Number of L2 prefetches accepted by the L2 pipeline which miss the L2 and the L3 caches
		L2_PREFETCH_MISS_L3_MASK_L2_HW_PREFETCHER = 0x1f, // Number of requests generated by L2 hardware prefetcher
		L2_PREFETCH_MISS_L3_MASK_L1_HW_PREFETCHER = 0xe0, // Number of requests generated by L1 hardware prefetcher
		UOPS_QUEUE_EMPTY = 0xa9, // Counts cycles where the decoded uops queue is empty
		};};