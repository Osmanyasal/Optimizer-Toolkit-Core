#include <cstdint>

namespace optkit_amd64{
	enum class k8 : uint64_t {
		DISPATCHED_FPU = 0x0, // Dispatched FPU Operations
		DISPATCHED_FPU_MASK_OPS_ADD = 0x1, // Add pipe ops
		DISPATCHED_FPU_MASK_OPS_MULTIPLY = 0x2, // Multiply pipe ops
		DISPATCHED_FPU_MASK_OPS_STORE = 0x4, // Store pipe ops
		DISPATCHED_FPU_MASK_OPS_ADD_PIPE_LOAD_OPS = 0x8, // Add pipe load ops
		DISPATCHED_FPU_MASK_OPS_MULTIPLY_PIPE_LOAD_OPS = 0x10, // Multiply pipe load ops
		DISPATCHED_FPU_MASK_OPS_STORE_PIPE_LOAD_OPS = 0x20, // Store pipe load ops
		DISPATCHED_FPU_MASK_ALL = 0x3f, // All sub-events selected
		CYCLES_NO_FPU_OPS_RETIRED = 0x1, // Cycles with no FPU Ops Retired
		DISPATCHED_FPU_OPS_FAST_FLAG = 0x2, // Dispatched Fast Flag FPU Operations
		SEGMENT_REGISTER_LOADS = 0x20, // Segment Register Loads
		SEGMENT_REGISTER_LOADS_MASK_ES = 0x1, // ES
		SEGMENT_REGISTER_LOADS_MASK_CS = 0x2, // CS
		SEGMENT_REGISTER_LOADS_MASK_SS = 0x4, // SS
		SEGMENT_REGISTER_LOADS_MASK_DS = 0x8, // DS
		SEGMENT_REGISTER_LOADS_MASK_FS = 0x10, // FS
		SEGMENT_REGISTER_LOADS_MASK_GS = 0x20, // GS
		SEGMENT_REGISTER_LOADS_MASK_HS = 0x40, // HS
		SEGMENT_REGISTER_LOADS_MASK_ALL = 0x7f, // All segments
		PIPELINE_RESTART_DUE_TO_SELF_MODIFYING_CODE = 0x21, // Pipeline restart due to self-modifying code
		PIPELINE_RESTART_DUE_TO_PROBE_HIT = 0x22, // Pipeline restart due to probe hit
		LS_BUFFER_2_FULL_CYCLES = 0x23, // LS Buffer 2 Full
		LOCKED_OPS = 0x24, // Locked Operations
		LOCKED_OPS_MASK_EXECUTED = 0x1, // The number of locked instructions executed
		LOCKED_OPS_MASK_CYCLES_SPECULATIVE_PHASE = 0x2, // The number of cycles spent in speculative phase
		LOCKED_OPS_MASK_CYCLES_NON_SPECULATIVE_PHASE = 0x4, // The number of cycles spent in non-speculative phase (including cache miss penalty)
		LOCKED_OPS_MASK_ALL = 0x7, // All sub-events selected
		MEMORY_REQUESTS = 0x65, // Memory Requests by Type
		MEMORY_REQUESTS_MASK_NON_CACHEABLE = 0x1, // Requests to non-cacheable (UC) memory
		MEMORY_REQUESTS_MASK_WRITE_COMBINING = 0x2, // Requests to write-combining (WC) memory or WC buffer flushes to WB memory
		MEMORY_REQUESTS_MASK_STREAMING_STORE = 0x80, // Streaming store (SS) requests
		MEMORY_REQUESTS_MASK_ALL = 0x83, // All sub-events selected
		DATA_CACHE_ACCESSES = 0x40, // Data Cache Accesses
		DATA_CACHE_MISSES = 0x41, // Data Cache Misses
		DATA_CACHE_REFILLS = 0x42, // Data Cache Refills from L2 or System
		DATA_CACHE_REFILLS_MASK_SYSTEM = 0x1, // Refill from System
		DATA_CACHE_REFILLS_MASK_L2_SHARED = 0x2, // Shared-state line from L2
		DATA_CACHE_REFILLS_MASK_L2_EXCLUSIVE = 0x4, // Exclusive-state line from L2
		DATA_CACHE_REFILLS_MASK_L2_OWNED = 0x8, // Owned-state line from L2
		DATA_CACHE_REFILLS_MASK_L2_MODIFIED = 0x10, // Modified-state line from L2
		DATA_CACHE_REFILLS_MASK_ALL = 0x1f, // Shared
		DATA_CACHE_REFILLS_FROM_SYSTEM = 0x43, // Data Cache Refills from System
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_INVALID = 0x1, // Invalid
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_SHARED = 0x2, // Shared
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_EXCLUSIVE = 0x4, // Exclusive
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_OWNED = 0x8, // Owned
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_MODIFIED = 0x10, // Modified
		DATA_CACHE_REFILLS_FROM_SYSTEM_MASK_ALL = 0x1f, // Invalid
		DATA_CACHE_LINES_EVICTED = 0x44, // Data Cache Lines Evicted
		DATA_CACHE_LINES_EVICTED_MASK_INVALID = 0x1, // Invalid
		DATA_CACHE_LINES_EVICTED_MASK_SHARED = 0x2, // Shared
		DATA_CACHE_LINES_EVICTED_MASK_EXCLUSIVE = 0x4, // Exclusive
		DATA_CACHE_LINES_EVICTED_MASK_OWNED = 0x8, // Owned
		DATA_CACHE_LINES_EVICTED_MASK_MODIFIED = 0x10, // Modified
		DATA_CACHE_LINES_EVICTED_MASK_ALL = 0x1f, // Invalid
		L1_DTLB_MISS_AND_L2_DTLB_HIT = 0x45, // L1 DTLB Miss and L2 DTLB Hit
		L1_DTLB_AND_L2_DTLB_MISS = 0x46, // L1 DTLB and L2 DTLB Miss
		MISALIGNED_ACCESSES = 0x47, // Misaligned Accesses
		MICROARCHITECTURAL_LATE_CANCEL_OF_AN_ACCESS = 0x48, // Microarchitectural Late Cancel of an Access
		MICROARCHITECTURAL_EARLY_CANCEL_OF_AN_ACCESS = 0x49, // Microarchitectural Early Cancel of an Access
		SCRUBBER_SINGLE_BIT_ECC_ERRORS = 0x4a, // Single-bit ECC Errors Recorded by Scrubber
		SCRUBBER_SINGLE_BIT_ECC_ERRORS_MASK_SCRUBBER_ERROR = 0x1, // Scrubber error
		SCRUBBER_SINGLE_BIT_ECC_ERRORS_MASK_PIGGYBACK_ERROR = 0x2, // Piggyback scrubber errors
		SCRUBBER_SINGLE_BIT_ECC_ERRORS_MASK_ALL = 0x3, // All sub-events selected
		PREFETCH_INSTRUCTIONS_DISPATCHED = 0x4b, // Prefetch Instructions Dispatched
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_LOAD = 0x1, // Load (Prefetch
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_STORE = 0x2, // Store (PrefetchW)
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_NTA = 0x4, // NTA (PrefetchNTA)
		PREFETCH_INSTRUCTIONS_DISPATCHED_MASK_ALL = 0x7, // All sub-events selected
		DCACHE_MISSES_BY_LOCKED_INSTRUCTIONS = 0x4c, // DCACHE Misses by Locked Instructions
		DCACHE_MISSES_BY_LOCKED_INSTRUCTIONS_MASK_DATA_CACHE_MISSES_BY_LOCKED_INSTRUCTIONS = 0x2, // Data cache misses by locked instructions
		DCACHE_MISSES_BY_LOCKED_INSTRUCTIONS_MASK_ALL = 0x2, // All sub-events selected
		DATA_PREFETCHES = 0x67, // Data Prefetcher
		DATA_PREFETCHES_MASK_CANCELLED = 0x1, // Cancelled prefetches
		DATA_PREFETCHES_MASK_ATTEMPTED = 0x2, // Prefetch attempts
		DATA_PREFETCHES_MASK_ALL = 0x3, // All sub-events selected
		SYSTEM_READ_RESPONSES = 0x6c, // System Read Responses by Coherency State
		SYSTEM_READ_RESPONSES_MASK_EXCLUSIVE = 0x1, // Exclusive
		SYSTEM_READ_RESPONSES_MASK_MODIFIED = 0x2, // Modified
		SYSTEM_READ_RESPONSES_MASK_SHARED = 0x4, // Shared
		SYSTEM_READ_RESPONSES_MASK_ALL = 0x7, // Exclusive
		QUADWORDS_WRITTEN_TO_SYSTEM = 0x6d, // Quadwords Written to System
		QUADWORDS_WRITTEN_TO_SYSTEM_MASK_QUADWORD_WRITE_TRANSFER = 0x1, // Quadword write transfer
		QUADWORDS_WRITTEN_TO_SYSTEM_MASK_ALL = 0x1, // All sub-events selected
		REQUESTS_TO_L2 = 0x7d, // Requests to L2 Cache
		REQUESTS_TO_L2_MASK_INSTRUCTIONS = 0x1, // IC fill
		REQUESTS_TO_L2_MASK_DATA = 0x2, // DC fill
		REQUESTS_TO_L2_MASK_TLB_WALK = 0x4, // TLB fill (page table walks)
		REQUESTS_TO_L2_MASK_SNOOP = 0x8, // Tag snoop request
		REQUESTS_TO_L2_MASK_CANCELLED = 0x10, // Cancelled request
		REQUESTS_TO_L2_MASK_ALL = 0x1f, // All non-cancelled requests
		L2_CACHE_MISS = 0x7e, // L2 Cache Misses
		L2_CACHE_MISS_MASK_INSTRUCTIONS = 0x1, // IC fill
		L2_CACHE_MISS_MASK_DATA = 0x2, // DC fill (includes possible replays
		L2_CACHE_MISS_MASK_TLB_WALK = 0x4, // TLB page table walk
		L2_CACHE_MISS_MASK_ALL = 0x7, // Instructions
		L2_FILL_WRITEBACK = 0x7f, // L2 Fill/Writeback
		L2_FILL_WRITEBACK_MASK_L2_FILLS = 0x1, // L2 fills (victims from L1 caches
		L2_FILL_WRITEBACK_MASK_ALL = 0x1, // All sub-events selected
		L2_FILL_WRITEBACK_MASK_L2_WRITEBACKS = 0x2, // L2 Writebacks to system.
		L2_FILL_WRITEBACK_MASK_ALL = 0x3, // All sub-events selected
		INSTRUCTION_CACHE_FETCHES = 0x80, // Instruction Cache Fetches
		INSTRUCTION_CACHE_MISSES = 0x81, // Instruction Cache Misses
		INSTRUCTION_CACHE_REFILLS_FROM_L2 = 0x82, // Instruction Cache Refills from L2
		INSTRUCTION_CACHE_REFILLS_FROM_SYSTEM = 0x83, // Instruction Cache Refills from System
		L1_ITLB_MISS_AND_L2_ITLB_HIT = 0x84, // L1 ITLB Miss and L2 ITLB Hit
		L1_ITLB_MISS_AND_L2_ITLB_MISS = 0x85, // L1 ITLB Miss and L2 ITLB Miss
		PIPELINE_RESTART_DUE_TO_INSTRUCTION_STREAM_PROBE = 0x86, // Pipeline Restart Due to Instruction Stream Probe
		INSTRUCTION_FETCH_STALL = 0x87, // Instruction Fetch Stall
		RETURN_STACK_HITS = 0x88, // Return Stack Hits
		RETURN_STACK_OVERFLOWS = 0x89, // Return Stack Overflows
		RETIRED_CLFLUSH_INSTRUCTIONS = 0x26, // Retired CLFLUSH Instructions
		RETIRED_CPUID_INSTRUCTIONS = 0x27, // Retired CPUID Instructions
		CPU_CLK_UNHALTED = 0x76, // CPU Clocks not Halted
		RETIRED_INSTRUCTIONS = 0xc0, // Retired Instructions
		RETIRED_UOPS = 0xc1, // Retired uops
		RETIRED_BRANCH_INSTRUCTIONS = 0xc2, // Retired Branch Instructions
		RETIRED_MISPREDICTED_BRANCH_INSTRUCTIONS = 0xc3, // Retired Mispredicted Branch Instructions
		RETIRED_TAKEN_BRANCH_INSTRUCTIONS = 0xc4, // Retired Taken Branch Instructions
		RETIRED_TAKEN_BRANCH_INSTRUCTIONS_MISPREDICTED = 0xc5, // Retired Taken Branch Instructions Mispredicted
		RETIRED_FAR_CONTROL_TRANSFERS = 0xc6, // Retired Far Control Transfers
		RETIRED_BRANCH_RESYNCS = 0xc7, // Retired Branch Resyncs
		RETIRED_NEAR_RETURNS = 0xc8, // Retired Near Returns
		RETIRED_NEAR_RETURNS_MISPREDICTED = 0xc9, // Retired Near Returns Mispredicted
		RETIRED_INDIRECT_BRANCHES_MISPREDICTED = 0xca, // Retired Indirect Branches Mispredicted
		RETIRED_MMX_AND_FP_INSTRUCTIONS = 0xcb, // Retired MMX/FP Instructions
		RETIRED_MMX_AND_FP_INSTRUCTIONS_MASK_X87 = 0x1, // X87 instructions
		RETIRED_MMX_AND_FP_INSTRUCTIONS_MASK_MMX_AND_3DNOW = 0x2, // MMX and 3DNow! instructions
		RETIRED_MMX_AND_FP_INSTRUCTIONS_MASK_PACKED_SSE_AND_SSE2 = 0x4, // Packed SSE and SSE2 instructions
		RETIRED_MMX_AND_FP_INSTRUCTIONS_MASK_SCALAR_SSE_AND_SSE2 = 0x8, // Scalar SSE and SSE2 instructions
		RETIRED_MMX_AND_FP_INSTRUCTIONS_MASK_ALL = 0xf, // X87
		RETIRED_FASTPATH_DOUBLE_OP_INSTRUCTIONS = 0xcc, // Retired Fastpath Double Op Instructions
		RETIRED_FASTPATH_DOUBLE_OP_INSTRUCTIONS_MASK_POSITION_0 = 0x1, // With low op in position 0
		RETIRED_FASTPATH_DOUBLE_OP_INSTRUCTIONS_MASK_POSITION_1 = 0x2, // With low op in position 1
		RETIRED_FASTPATH_DOUBLE_OP_INSTRUCTIONS_MASK_POSITION_2 = 0x4, // With low op in position 2
		RETIRED_FASTPATH_DOUBLE_OP_INSTRUCTIONS_MASK_ALL = 0x7, // With low op in position 0
		INTERRUPTS_MASKED_CYCLES = 0xcd, // Interrupts-Masked Cycles
		INTERRUPTS_MASKED_CYCLES_WITH_INTERRUPT_PENDING = 0xce, // Interrupts-Masked Cycles with Interrupt Pending
		INTERRUPTS_TAKEN = 0xcf, // Interrupts Taken
		DECODER_EMPTY = 0xd0, // Decoder Empty
		DISPATCH_STALLS = 0xd1, // Dispatch Stalls
		DISPATCH_STALL_FOR_BRANCH_ABORT = 0xd2, // Dispatch Stall for Branch Abort to Retire
		DISPATCH_STALL_FOR_SERIALIZATION = 0xd3, // Dispatch Stall for Serialization
		DISPATCH_STALL_FOR_SEGMENT_LOAD = 0xd4, // Dispatch Stall for Segment Load
		DISPATCH_STALL_FOR_REORDER_BUFFER_FULL = 0xd5, // Dispatch Stall for Reorder Buffer Full
		DISPATCH_STALL_FOR_RESERVATION_STATION_FULL = 0xd6, // Dispatch Stall for Reservation Station Full
		DISPATCH_STALL_FOR_FPU_FULL = 0xd7, // Dispatch Stall for FPU Full
		DISPATCH_STALL_FOR_LS_FULL = 0xd8, // Dispatch Stall for LS Full
		DISPATCH_STALL_WAITING_FOR_ALL_QUIET = 0xd9, // Dispatch Stall Waiting for All Quiet
		DISPATCH_STALL_FOR_FAR_TRANSFER_OR_RSYNC = 0xda, // Dispatch Stall for Far Transfer or Resync to Retire
		FPU_EXCEPTIONS = 0xdb, // FPU Exceptions
		FPU_EXCEPTIONS_MASK_X87_RECLASS_MICROFAULTS = 0x1, // X87 reclass microfaults
		FPU_EXCEPTIONS_MASK_SSE_RETYPE_MICROFAULTS = 0x2, // SSE retype microfaults
		FPU_EXCEPTIONS_MASK_SSE_RECLASS_MICROFAULTS = 0x4, // SSE reclass microfaults
		FPU_EXCEPTIONS_MASK_SSE_AND_X87_MICROTRAPS = 0x8, // SSE and x87 microtraps
		FPU_EXCEPTIONS_MASK_ALL = 0xf, // All sub-events selected
		DR0_BREAKPOINT_MATCHES = 0xdc, // DR0 Breakpoint Matches
		DR1_BREAKPOINT_MATCHES = 0xdd, // DR1 Breakpoint Matches
		DR2_BREAKPOINT_MATCHES = 0xde, // DR2 Breakpoint Matches
		DR3_BREAKPOINT_MATCHES = 0xdf, // DR3 Breakpoint Matches
		DRAM_ACCESSES_PAGE = 0xe0, // DRAM Accesses
		DRAM_ACCESSES_PAGE_MASK_HIT = 0x1, // Page hit
		DRAM_ACCESSES_PAGE_MASK_MISS = 0x2, // Page Miss
		DRAM_ACCESSES_PAGE_MASK_CONFLICT = 0x4, // Page Conflict
		DRAM_ACCESSES_PAGE_MASK_ALL = 0x7, // Page Hit
		MEMORY_CONTROLLER_PAGE_TABLE_OVERFLOWS = 0xe1, // Memory Controller Page Table Overflows
		MEMORY_CONTROLLER_TURNAROUNDS = 0xe3, // Memory Controller Turnarounds
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_CHIP_SELECT = 0x1, // DIMM (chip select) turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_READ_TO_WRITE = 0x2, // Read to write turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_WRITE_TO_READ = 0x4, // Write to read turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_ALL = 0x7, // All Memory Controller Turnarounds
		MEMORY_CONTROLLER_BYPASS = 0xe4, // Memory Controller Bypass Counter Saturation
		MEMORY_CONTROLLER_BYPASS_MASK_HIGH_PRIORITY = 0x1, // Memory controller high priority bypass
		MEMORY_CONTROLLER_BYPASS_MASK_LOW_PRIORITY = 0x2, // Memory controller low priority bypass
		MEMORY_CONTROLLER_BYPASS_MASK_DRAM_INTERFACE = 0x4, // DRAM controller interface bypass
		MEMORY_CONTROLLER_BYPASS_MASK_DRAM_QUEUE = 0x8, // DRAM controller queue bypass
		MEMORY_CONTROLLER_BYPASS_MASK_ALL = 0xf, // All sub-events selected
		SIZED_BLOCKS = 0xe5, // Sized Blocks
		SIZED_BLOCKS_MASK_32_BYTE_WRITES = 0x4, // 32-byte Sized Writes
		SIZED_BLOCKS_MASK_64_BYTE_WRITES = 0x8, // 64-byte Sized Writes
		SIZED_BLOCKS_MASK_32_BYTE_READS = 0x10, // 32-byte Sized Reads
		SIZED_BLOCKS_MASK_64_BYTE_READS = 0x20, // 64-byte Sized Reads
		SIZED_BLOCKS_MASK_ALL = 0x3c, // All sub-events selected
		THERMAL_STATUS_AND_ECC_ERRORS = 0xe8, // Thermal Status and ECC Errors
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_CLKS_CPU_ACTIVE = 0x1, // Number of clocks CPU is active when HTC is active
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_CLKS_CPU_INACTIVE = 0x2, // Number of clocks CPU clock is inactive when HTC is active
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_CLKS_DIE_TEMP_TOO_HIGH = 0x4, // Number of clocks when die temperature is higher than the software high temperature threshold
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_CLKS_TEMP_THRESHOLD_EXCEEDED = 0x8, // Number of clocks when high temperature threshold was exceeded
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_DRAM_ECC_ERRORS = 0x80, // Number of correctable and Uncorrectable DRAM ECC errors
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_ALL = 0x80, // All sub-events selected
		THERMAL_STATUS_AND_ECC_ERRORS_MASK_ALL = 0x8f, // All sub-events selected
		CPU_IO_REQUESTS_TO_MEMORY_IO = 0xe9, // CPU/IO Requests to Memory/IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_I_O_TO_I_O = 0x1, // I/O to I/O
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_I_O_TO_MEM = 0x2, // I/O to Mem
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_CPU_TO_I_O = 0x4, // CPU to I/O
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_CPU_TO_MEM = 0x8, // CPU to Mem
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_TO_REMOTE_NODE = 0x10, // To remote node
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_TO_LOCAL_NODE = 0x20, // To local node
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_FROM_REMOTE_NODE = 0x40, // From remote node
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_FROM_LOCAL_NODE = 0x80, // From local node
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_ALL = 0xff, // All sub-events selected
		CACHE_BLOCK = 0xea, // Cache Block Commands
		CACHE_BLOCK_MASK_VICTIM_WRITEBACK = 0x1, // Victim Block (Writeback)
		CACHE_BLOCK_MASK_DCACHE_LOAD_MISS = 0x4, // Read Block (Dcache load miss refill)
		CACHE_BLOCK_MASK_SHARED_ICACHE_REFILL = 0x8, // Read Block Shared (Icache refill)
		CACHE_BLOCK_MASK_READ_BLOCK_MODIFIED = 0x10, // Read Block Modified (Dcache store miss refill)
		CACHE_BLOCK_MASK_READ_TO_DIRTY = 0x20, // Change to Dirty (first store to clean block already in cache)
		CACHE_BLOCK_MASK_ALL = 0x3d, // All sub-events selected
		SIZED_COMMANDS = 0xeb, // Sized Commands
		SIZED_COMMANDS_MASK_NON_POSTED_WRITE_BYTE = 0x1, // NonPosted SzWr Byte (1-32 bytes) Legacy or mapped I/O
		SIZED_COMMANDS_MASK_NON_POSTED_WRITE_DWORD = 0x2, // NonPosted SzWr Dword (1-16 dwords) Legacy or mapped I/O
		SIZED_COMMANDS_MASK_POSTED_WRITE_BYTE = 0x4, // Posted SzWr Byte (1-32 bytes) Sub-cache-line DMA writes
		SIZED_COMMANDS_MASK_POSTED_WRITE_DWORD = 0x8, // Posted SzWr Dword (1-16 dwords) Block-oriented DMA writes
		SIZED_COMMANDS_MASK_READ_BYTE_4_BYTES = 0x10, // SzRd Byte (4 bytes) Legacy or mapped I/O
		SIZED_COMMANDS_MASK_READ_DWORD_1_16_DWORDS = 0x20, // SzRd Dword (1-16 dwords) Block-oriented DMA reads
		SIZED_COMMANDS_MASK_READ_MODIFY_WRITE = 0x40, // RdModWr
		SIZED_COMMANDS_MASK_ALL = 0x7f, // All sub-events selected
		PROBE = 0xec, // Probe Responses and Upstream Requests
		PROBE_MASK_MISS = 0x1, // Probe miss
		PROBE_MASK_HIT_CLEAN = 0x2, // Probe hit clean
		PROBE_MASK_HIT_DIRTY_NO_MEMORY_CANCEL = 0x4, // Probe hit dirty without memory cancel (probed by Sized Write or Change2Dirty)
		PROBE_MASK_HIT_DIRTY_WITH_MEMORY_CANCEL = 0x8, // Probe hit dirty with memory cancel (probed by DMA read or cache refill request)
		PROBE_MASK_UPSTREAM_DISPLAY_REFRESH_READS = 0x10, // Upstream display refresh reads
		PROBE_MASK_UPSTREAM_NON_DISPLAY_REFRESH_READS = 0x20, // Upstream non-display refresh reads
		PROBE_MASK_ALL = 0x3f, // All sub-events selected
		PROBE_MASK_UPSTREAM_WRITES = 0x40, // Upstream writes
		PROBE_MASK_ALL = 0x7f, // All sub-events selected
		GART = 0xee, // GART Events
		GART_MASK_APERTURE_HIT_FROM_CPU = 0x1, // GART aperture hit on access from CPU
		GART_MASK_APERTURE_HIT_FROM_IO = 0x2, // GART aperture hit on access from I/O
		GART_MASK_MISS = 0x4, // GART miss
		GART_MASK_ALL = 0x7, // All sub-events selected
		HYPERTRANSPORT_LINK0 = 0xf6, // HyperTransport Link 0 Transmit Bandwidth
		HYPERTRANSPORT_LINK0_MASK_COMMAND_DWORD_SENT = 0x1, // Command dword sent
		HYPERTRANSPORT_LINK0_MASK_DATA_DWORD_SENT = 0x2, // Data dword sent
		HYPERTRANSPORT_LINK0_MASK_BUFFER_RELEASE_DWORD_SENT = 0x4, // Buffer release dword sent
		HYPERTRANSPORT_LINK0_MASK_NOP_DWORD_SENT = 0x8, // Nop dword sent (idle)
		HYPERTRANSPORT_LINK0_MASK_ALL = 0xf, // All sub-events selected
		HYPERTRANSPORT_LINK1 = 0xf7, // HyperTransport Link 1 Transmit Bandwidth
		HYPERTRANSPORT_LINK1_MASK_COMMAND_DWORD_SENT = 0x1, // Command dword sent
		HYPERTRANSPORT_LINK1_MASK_DATA_DWORD_SENT = 0x2, // Data dword sent
		HYPERTRANSPORT_LINK1_MASK_BUFFER_RELEASE_DWORD_SENT = 0x4, // Buffer release dword sent
		HYPERTRANSPORT_LINK1_MASK_NOP_DWORD_SENT = 0x8, // Nop dword sent (idle)
		HYPERTRANSPORT_LINK1_MASK_ALL = 0xf, // All sub-events selected
		HYPERTRANSPORT_LINK2 = 0xf8, // HyperTransport Link 2 Transmit Bandwidth
		HYPERTRANSPORT_LINK2_MASK_COMMAND_DWORD_SENT = 0x1, // Command dword sent
		HYPERTRANSPORT_LINK2_MASK_DATA_DWORD_SENT = 0x2, // Data dword sent
		HYPERTRANSPORT_LINK2_MASK_BUFFER_RELEASE_DWORD_SENT = 0x4, // Buffer release dword sent
		HYPERTRANSPORT_LINK2_MASK_NOP_DWORD_SENT = 0x8, // Nop dword sent (idle)
		HYPERTRANSPORT_LINK2_MASK_ALL = 0xf, // All sub-events selected
		};};