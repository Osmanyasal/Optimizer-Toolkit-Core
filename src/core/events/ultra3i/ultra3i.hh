#include <cstdint>

namespace optkit_ultra3i{
	enum class pe : uint64_t {
		Cycle_cnt = 0x0, // Accumulated cycles
		Instr_cnt = 0x1, // Number of instructions completed
		Dispatch0_IC_miss = 0x2, // I-buffer is empty from I-Cache miss
		IC_ref = 0x8, // I-cache references
		DC_rd = 0x9, // D-cache read references (including accesses that subsequently trap)
		DC_wr = 0xa, // D-cache store accesses (including cacheable stores that subsequently trap)
		EC_ref = 0xc, // E-cache references
		EC_snoop_inv = 0xe, // L2-cache invalidates generated from a snoop by a remote processor
		Dispatch0_mispred = 0x2, // I-buffer is empty from Branch misprediction
		EC_wb = 0xd, // Dirty sub-blocks that produce writebacks due to L2-cache miss events
		EC_snoop_cb = 0xe, // L2-cache copybacks generated from a snoop by a remote processor
		Dispatch0_br_target = 0x3, // I-buffer is empty due to a branch target address calculation
		Dispatch0_2nd_br = 0x4, // Stall cycles due to having two branch instructions line-up in one 4-instruction group causing the second branch in the group to be re-fetched
		Rstall_storeQ = 0x5, // R-stage stall for a store instruction which is the next instruction to be executed
		Rstall_IU_use = 0x6, // R-stage stall for an event that the next instruction to be executed depends on the result of a preceding integer instruction in the pipeline that is not yet available
		EC_write_hit_RTO = 0xd, // W-cache exclusive requests that hit L2-cache in S
		EC_rd_miss = 0xf, // L2-cache miss events (including atomics) from D-cache events
		PC_port0_rd = 0x10, // P-cache cacheable FP loads to the first port (general purpose load path to D-cache and P-cache via MS pipeline)
		SI_snoop = 0x11, // Counts snoops from remote processor(s) including RTS
		SI_ciq_flow = 0x12, // Counts system clock cycles when the flow control (PauseOut) signal is asserted
		SI_owned = 0x13, // Counts events where owned_in is asserted on bus requests from the local processor
		SW_count0 = 0x14, // Counts software-generated occurrences of 'sethi %hi(0xfc000)
		IU_Stat_Br_miss_taken = 0x15, // Retired branches that were predicted to be taken
		IU_Stat_Br_Count_taken = 0x16, // Retired taken branches
		Dispatch0_rs_mispred = 0x4, // I-buffer is empty due to a Return Address Stack misprediction
		FA_pipe_completion = 0x18, // Instructions that complete execution on the FPG ALU pipelines
		IC_miss_cancelled = 0x3, // I-cache misses cancelled due to mis-speculation
		Re_FPU_bypass = 0x5, // Stall due to recirculation when an FPU bypass condition that does not have a direct bypass path occurs
		Re_DC_miss = 0x6, // Stall due to loads that miss D-cache and get recirculated
		Re_EC_miss = 0x7, // Stall due to loads that miss L2-cache and get recirculated
		IC_miss = 0x8, // I-cache misses
		DC_rd_miss = 0x9, // Recirculated loads that miss the D-cache
		DC_wr_miss = 0xa, // D-cache store accesses that miss D-cache
		Rstall_FP_use = 0xb, // R-stage stall for an event that the next instruction to be executed depends on the result of a preceding floating-point instruction in the pipeline that is not yet available
		EC_misses = 0xc, // E-cache misses
		EC_ic_miss = 0xf, // L2-cache read misses from I-cache requests
		Re_PC_miss = 0x10, // Stall due to recirculation when a prefetch cache miss occurs on a prefetch predicted second load
		ITLB_miss = 0x11, // I-TLB miss traps taken
		DTLB_miss = 0x12, // Memory reference instructions which trap due to D-TLB miss
		WC_miss = 0x13, // W-cache misses
		WC_snoop_cb = 0x14, // W-cache copybacks generated by a snoop from a remote processor
		WC_scrubbed = 0x15, // W-cache hits to clean lines
		WC_wb_wo_read = 0x16, // W-cache writebacks not requiring a read
		PC_soft_hit = 0x18, // FP loads that hit a P-cache line that was prefetched by a software-prefetch instruction
		PC_snoop_inv = 0x19, // P-cache invalidates that were generated by a snoop from a remote processor and stores by a local processor
		PC_hard_hit = 0x1a, // FP loads that hit a P-cache line that was prefetched by a hardware prefetch
		PC_port1_rd = 0x1b, // P-cache cacheable FP loads to the second port (memory and out-of-pipeline instruction execution loads via the A0 and A1 pipelines)
		SW_count1 = 0x1c, // Counts software-generated occurrences of 'sethi %hi(0xfc000)
		IU_Stat_Br_miss_untaken = 0x1d, // Retired branches that were predicted to be untaken
		IU_Stat_Br_Count_untaken = 0x1e, // Retired untaken branches
		PC_MS_miss = 0x1f, // FP loads through the MS pipeline that miss P-cache
		Re_RAW_miss = 0x26, // Stall due to recirculation when there is a load in the E-stage which has a non-bypassable read-after-write hazard with an earlier store instruction
		FM_pipe_completion = 0x27, // Instructions that complete execution on the FPG Multiply pipelines
		MC_read_dispatched = 0x20, // DDR 64-byte reads dispatched by the MIU
		MC_write_dispatched = 0x21, // DDR 64-byte writes dispatched by the MIU
		MC_read_returned_to_JBU = 0x22, // 64-byte reads that return data to JBU
		MC_msl_busy_stall = 0x23, // Stall cycles due to msl_busy
		MC_mdb_overflow_stall = 0x24, // Stall cycles due to potential memory data buffer overflow
		MC_miu_spec_request = 0x25, // Speculative requests accepted by MIU
		MC_reads = 0x20, // 64-byte reads by the MSL
		MC_writes = 0x21, // 64-byte writes by the MSL
		MC_page_close_stall = 0x22, // DDR page conflicts
		Re_DC_missovhd = 0x4, // Used to measure D-cache stall counts separately for L2-cache hits and misses.  This counter is used with the recirculation and cache access events to separately calculate the D-cache loads that hit and miss the L2-cache
		
	};
};