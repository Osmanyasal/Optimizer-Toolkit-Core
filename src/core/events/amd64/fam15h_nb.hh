#include <cstdint>

namespace optkit::amd64{
	enum class fam15h_nb : uint64_t {
		DRAM_ACCESSES = 0xe0, // DRAM Accesses
		DRAM_ACCESSES_MASK_DCT0_PAGE_HIT = 0x1, // DCT0 Page hit
		DRAM_ACCESSES_MASK_DCT0_PAGE_MISS = 0x2, // DCT0 Page Miss
		DRAM_ACCESSES_MASK_DCT0_PAGE_CONFLICT = 0x4, // DCT0 Page Conflict
		DRAM_ACCESSES_MASK_DCT1_PAGE_HIT = 0x8, // DCT1 Page hit
		DRAM_ACCESSES_MASK_DCT1_PAGE_MISS = 0x10, // DCT1 Page Miss
		DRAM_ACCESSES_MASK_DCT1_PAGE_CONFLICT = 0x20, // DCT1 Page Conflict
		DRAM_ACCESSES_MASK_ALL = 0x3f, // All sub-events selected
		DRAM_CONTROLLER_PAGE_TABLE_OVERFLOWS = 0xe1, // DRAM Controller Page Table Overflows
		DRAM_CONTROLLER_PAGE_TABLE_OVERFLOWS_MASK_DCT0_PAGE_TABLE_OVERFLOW = 0x1, // DCT0 Page Table Overflow
		DRAM_CONTROLLER_PAGE_TABLE_OVERFLOWS_MASK_DCT1_PAGE_TABLE_OVERFLOW = 0x2, // DCT1 Page Table Overflow
		DRAM_CONTROLLER_PAGE_TABLE_OVERFLOWS_MASK_ALL = 0x3, // All sub-events selected
		MEMORY_CONTROLLER_DRAM_COMMAND_SLOTS_MISSED = 0xe2, // Memory Controller DRAM Command Slots Missed
		MEMORY_CONTROLLER_DRAM_COMMAND_SLOTS_MISSED_MASK_DCT0_COMMAND_SLOTS_MISSED = 0x1, // DCT0 Command Slots Missed (in MemClks)
		MEMORY_CONTROLLER_DRAM_COMMAND_SLOTS_MISSED_MASK_DCT1_COMMAND_SLOTS_MISSED = 0x2, // DCT1 Command Slots Missed (in MemClks)
		MEMORY_CONTROLLER_DRAM_COMMAND_SLOTS_MISSED_MASK_ALL = 0x3, // All sub-events selected
		MEMORY_CONTROLLER_TURNAROUNDS = 0xe3, // Memory Controller Turnarounds
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT0_DIMM_TURNAROUND = 0x1, // DCT0 DIMM (chip select) turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT0_READ_WRITE_TURNAROUND = 0x2, // DCT0 Read to write turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT0_WRITE_READ_TURNAROUND = 0x4, // DCT0 Write to read turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT1_DIMM_TURNAROUND = 0x8, // DCT1 DIMM (chip select) turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT1_READ_WRITE_TURNAROUND = 0x10, // DCT1 Read to write turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_DCT1_WRITE_READ_TURNAROUND = 0x20, // DCT1 Write to read turnaround
		MEMORY_CONTROLLER_TURNAROUNDS_MASK_ALL = 0x3f, // All sub-events selected
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION = 0xe4, // Memory Controller Bypass Counter Saturation
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MASK_MEMORY_CONTROLLER_HIGH_PRIORITY_BYPASS = 0x1, // Memory controller high priority bypass
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MASK_MEMORY_CONTROLLER_MEDIUM_PRIORITY_BYPASS = 0x2, // Memory controller medium priority bypass
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MASK_DCT0_DCQ_BYPASS = 0x4, // DCT0 DCQ bypass
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MASK_DCT1_DCQ_BYPASS = 0x8, // DCT1 DCQ bypass
		MEMORY_CONTROLLER_BYPASS_COUNTER_SATURATION_MASK_ALL = 0xf, // All sub-events selected
		THERMAL_STATUS = 0xe8, // Thermal Status
		THERMAL_STATUS_MASK_NUM_HTC_TRIP_POINT_CROSSED = 0x4, // Number of times the HTC trip point is crossed
		THERMAL_STATUS_MASK_NUM_CLOCKS_HTC_PSTATE_INACTIVE = 0x20, // Number of clocks HTC P-state is inactive
		THERMAL_STATUS_MASK_NUM_CLOCKS_HTC_PSTATE_ACTIVE = 0x40, // Number of clocks HTC P-state is active
		THERMAL_STATUS_MASK_ALL = 0x64, // All sub-events selected
		CPU_IO_REQUESTS_TO_MEMORY_IO = 0xe9, // CPU/IO Requests to Memory/IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_REMOTE_IO_TO_LOCAL_IO = 0x61, // Remote IO to Local IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_REMOTE_CPU_TO_LOCAL_IO = 0x64, // Remote CPU to Local IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_IO_TO_REMOTE_IO = 0x91, // Local IO to Remote IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_IO_TO_REMOTE_MEM = 0x92, // Local IO to Remote Mem
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_CPU_TO_REMOTE_IO = 0x94, // Local CPU to Remote IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_CPU_TO_REMOTE_MEM = 0x98, // Local CPU to Remote Mem
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_IO_TO_LOCAL_IO = 0xa1, // Local IO to Local IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_IO_TO_LOCAL_MEM = 0xa2, // Local IO to Local Mem
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_CPU_TO_LOCAL_IO = 0xa4, // Local CPU to Local IO
		CPU_IO_REQUESTS_TO_MEMORY_IO_MASK_LOCAL_CPU_TO_LOCAL_MEM = 0xa8, // Local CPU to Local Mem
		CACHE_BLOCK_COMMANDS = 0xea, // Cache Block Commands
		CACHE_BLOCK_COMMANDS_MASK_VICTIM_BLOCK = 0x1, // Victim Block (Writeback)
		CACHE_BLOCK_COMMANDS_MASK_READ_BLOCK = 0x4, // Read Block (Dcache load miss refill)
		CACHE_BLOCK_COMMANDS_MASK_READ_BLOCK_SHARED = 0x8, // Read Block Shared (Icache refill)
		CACHE_BLOCK_COMMANDS_MASK_READ_BLOCK_MODIFIED = 0x10, // Read Block Modified (Dcache store miss refill)
		CACHE_BLOCK_COMMANDS_MASK_CHANGE_TO_DIRTY = 0x20, // Change-to-Dirty (first store to clean block already in cache)
		CACHE_BLOCK_COMMANDS_MASK_ALL = 0x3d, // All sub-events selected
		SIZED_COMMANDS = 0xeb, // Sized Commands
		SIZED_COMMANDS_MASK_NON-POSTED_SZWR_BYTE = 0x1, // Non-Posted SzWr Byte (1-32 bytes). Typical Usage: Legacy or mapped IO
		SIZED_COMMANDS_MASK_NON-POSTED_SZWR_DW = 0x2, // Non-Posted SzWr DW (1-16 dwords). Typical Usage: Legacy or mapped IO
		SIZED_COMMANDS_MASK_POSTED_SZWR_BYTE = 0x4, // Posted SzWr Byte (1-32 bytes). Typical Usage: Subcache-line DMA writes
		SIZED_COMMANDS_MASK_POSTED_SZWR_DW = 0x8, // Posted SzWr DW (1-16 dwords). Typical Usage: Block-oriented DMA writes
		SIZED_COMMANDS_MASK_SZRD_BYTE = 0x10, // SzRd Byte (4 bytes). Typical Usage: Legacy or mapped IO.
		SIZED_COMMANDS_MASK_SZRD_DW = 0x20, // SzRd DW (1-16 dwords). Typical Usage: Block-oriented DMA reads
		SIZED_COMMANDS_MASK_ALL = 0x3f, // All sub-events selected
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS = 0xec, // Probe Responses and Upstream Requests
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_PROBE_MISS = 0x1, // Probe miss
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_PROBE_HIT_CLEAN = 0x2, // Probe hit clean
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_PROBE_HIT_DIRTY_WITHOUT_MEMORY_CANCEL = 0x4, // Probe hit dirty without memory cancel (probed by Sized Write or Change2Dirty)
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_PROBE_HIT_DIRTY_WITH_MEMORY_CANCEL = 0x8, // Probe hit dirty with memory cancel (probed by DMA read or cache refill request)
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_UPSTREAM_DISPLAY_REFRESH_ISOC_READS = 0x10, // Upstream display refresh/ISOC reads
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_UPSTREAM_NON-DISPLAY_REFRESH_READS = 0x20, // Upstream non-display refresh reads
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_UPSTREAM_ISOC_WRITES = 0x40, // Upstream ISOC writes
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_UPSTREAM_NON-ISOC_WRITES = 0x80, // Upstream non-ISOC writes
		PROBE_RESPONSES_AND_UPSTREAM_REQUESTS_MASK_ALL = 0xff, // All sub-events selected
		GART_EVENTS = 0xee, // GART Events
		GART_EVENTS_MASK_GART_APERTURE_HIT_ON_ACCESS_FROM_CPU = 0x1, // GART aperture hit on access from CPU
		GART_EVENTS_MASK_GART_APERTURE_HIT_ON_ACCESS_FROM_IO = 0x2, // GART aperture hit on access from IO
		GART_EVENTS_MASK_GART_MISS = 0x4, // GART miss
		GART_EVENTS_MASK_GART_REQUEST_HIT_TABLE_WALK_IN_PROGRESS = 0x8, // GART Request hit table walk in progress
		GART_EVENTS_MASK_GART_MULTIPLE_TABLE_WALK_IN_PROGRESS = 0x80, // GART multiple table walk in progress
		GART_EVENTS_MASK_ALL = 0x8f, // All sub-events selected
		LINK_TRANSMIT_BANDWIDTH_LINK_0 = 0xf6, // Link Transmit Bandwidth Link 0
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_COMMAND_DW_SENT = 0x1, // Command DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_DATA_DW_SENT = 0x2, // Data DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_BUFFER_RELEASE_DW_SENT = 0x4, // Buffer release DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_NOP_DW_SENT = 0x8, // NOP DW sent (idle)
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_ADDRESS_DW_SENT = 0x10, // Address (including extensions) DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_PER_PACKET_CRC_SENT = 0x20, // Per packet CRC sent
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_ALL = 0x3f, // All sub-events selected
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_SUBLINK_1 = 0x80, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_0_MASK_SUBLINK_0 = 0x00, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_1 = 0xf7, // Link Transmit Bandwidth Link 1
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_COMMAND_DW_SENT = 0x1, // Command DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_DATA_DW_SENT = 0x2, // Data DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_BUFFER_RELEASE_DW_SENT = 0x4, // Buffer release DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_NOP_DW_SENT = 0x8, // NOP DW sent (idle)
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_ADDRESS_DW_SENT = 0x10, // Address (including extensions) DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_PER_PACKET_CRC_SENT = 0x20, // Per packet CRC sent
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_ALL = 0x3f, // All sub-events selected
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_SUBLINK_1 = 0x80, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_1_MASK_SUBLINK_0 = 0x00, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_2 = 0xf8, // Link Transmit Bandwidth Link 2
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_COMMAND_DW_SENT = 0x1, // Command DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_DATA_DW_SENT = 0x2, // Data DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_BUFFER_RELEASE_DW_SENT = 0x4, // Buffer release DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_NOP_DW_SENT = 0x8, // NOP DW sent (idle)
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_ADDRESS_DW_SENT = 0x10, // Address (including extensions) DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_PER_PACKET_CRC_SENT = 0x20, // Per packet CRC sent
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_ALL = 0x3f, // All sub-events selected
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_SUBLINK_1 = 0x80, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_2_MASK_SUBLINK_0 = 0x00, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_3 = 0x1f9, // Link Transmit Bandwidth Link 3
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_COMMAND_DW_SENT = 0x1, // Command DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_DATA_DW_SENT = 0x2, // Data DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_BUFFER_RELEASE_DW_SENT = 0x4, // Buffer release DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_NOP_DW_SENT = 0x8, // NOP DW sent (idle)
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_ADDRESS_DW_SENT = 0x10, // Address (including extensions) DW sent
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_PER_PACKET_CRC_SENT = 0x20, // Per packet CRC sent
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_ALL = 0x3f, // All sub-events selected
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_SUBLINK_1 = 0x80, // When links are unganged
		LINK_TRANSMIT_BANDWIDTH_LINK_3_MASK_SUBLINK_0 = 0x00, // When links are unganged
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE = 0x1e0, // CPU to DRAM Requests to Target Node
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_0 = 0x1, // From Local node to Node 0
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_1 = 0x2, // From Local node to Node 1
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_2 = 0x4, // From Local node to Node 2
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_3 = 0x8, // From Local node to Node 3
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_4 = 0x10, // From Local node to Node 4
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_5 = 0x20, // From Local node to Node 5
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_6 = 0x40, // From Local node to Node 6
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_7 = 0x80, // From Local node to Node 7
		CPU_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_ALL = 0xff, // All sub-events selected
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE = 0x1e1, // IO to DRAM Requests to Target Node
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_0 = 0x1, // From Local node to Node 0
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_1 = 0x2, // From Local node to Node 1
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_2 = 0x4, // From Local node to Node 2
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_3 = 0x8, // From Local node to Node 3
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_4 = 0x10, // From Local node to Node 4
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_5 = 0x20, // From Local node to Node 5
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_6 = 0x40, // From Local node to Node 6
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_LOCAL_TO_NODE_7 = 0x80, // From Local node to Node 7
		IO_TO_DRAM_REQUESTS_TO_TARGET_NODE_MASK_ALL = 0xff, // All sub-events selected
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3 = 0x1e2, // CPU Read Command Latency to Target Node 0-3
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_0 = 0x11, // Read block From Local node to Node 0
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_0 = 0x12, // Read block shared From Local node to Node 0
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_0 = 0x14, // Read block modified From Local node to Node 0
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_0 = 0x18, // Change-to-Dirty From Local node to Node 0
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_1 = 0x21, // Read block From Local node to Node 1
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_1 = 0x22, // Read block shared From Local node to Node 1
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_1 = 0x24, // Read block modified From Local node to Node 1
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_1 = 0x28, // Change-to-Dirty From Local node to Node 1
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_2 = 0x41, // Read block From Local node to Node 2
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_2 = 0x42, // Read block shared From Local node to Node 2
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_2 = 0x44, // Read block modified From Local node to Node 2
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_2 = 0x48, // Change-to-Dirty From Local node to Node 2
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_3 = 0x81, // Read block From Local node to Node 3
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_3 = 0x82, // Read block shared From Local node to Node 3
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_3 = 0x84, // Read block modified From Local node to Node 3
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_3 = 0x88, // Change-to-Dirty From Local node to Node 3
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_0_3_MASK_ALL = 0xff, // All sub-events selected
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3 = 0x1e3, // CPU Read Command Requests to Target Node 0-3
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_0 = 0x11, // Read block From Local node to Node 0
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_0 = 0x12, // Read block shared From Local node to Node 0
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_0 = 0x14, // Read block modified From Local node to Node 0
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_0 = 0x18, // Change-to-Dirty From Local node to Node 0
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_1 = 0x21, // Read block From Local node to Node 1
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_1 = 0x22, // Read block shared From Local node to Node 1
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_1 = 0x24, // Read block modified From Local node to Node 1
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_1 = 0x28, // Change-to-Dirty From Local node to Node 1
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_2 = 0x41, // Read block From Local node to Node 2
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_2 = 0x42, // Read block shared From Local node to Node 2
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_2 = 0x44, // Read block modified From Local node to Node 2
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_2 = 0x48, // Change-to-Dirty From Local node to Node 2
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_LOCAL_TO_NODE_3 = 0x81, // Read block From Local node to Node 3
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_3 = 0x82, // Read block shared From Local node to Node 3
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_3 = 0x84, // Read block modified From Local node to Node 3
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_3 = 0x88, // Change-to-Dirty From Local node to Node 3
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_0_3_MASK_ALL = 0xff, // All sub-events selected
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7 = 0x1e4, // CPU Read Command Latency to Target Node 4-7
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_4 = 0x11, // Read block From Local node to Node 4
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_4 = 0x12, // Read block shared From Local node to Node 4
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_4 = 0x14, // Read block modified From Local node to Node 4
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_4 = 0x18, // Change-to-Dirty From Local node to Node 4
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_5 = 0x21, // Read block From Local node to Node 5
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_5 = 0x22, // Read block shared From Local node to Node 5
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_5 = 0x24, // Read block modified From Local node to Node 5
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_5 = 0x28, // Change-to-Dirty From Local node to Node 5
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_6 = 0x41, // Read block From Local node to Node 6
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_6 = 0x42, // Read block shared From Local node to Node 6
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_6 = 0x44, // Read block modified From Local node to Node 6
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_6 = 0x48, // Change-to-Dirty From Local node to Node 6
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_7 = 0x81, // Read block From Local node to Node 7
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_7 = 0x82, // Read block shared From Local node to Node 7
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_7 = 0x84, // Read block modified From Local node to Node 7
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_7 = 0x88, // Change-to-Dirty From Local node to Node 7
		CPU_READ_COMMAND_LATENCY_TO_TARGET_NODE_4_7_MASK_ALL = 0xff, // All sub-events selected
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7 = 0x1e5, // CPU Read Command Requests to Target Node 4-7
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_4 = 0x11, // Read block From Local node to Node 4
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_4 = 0x12, // Read block shared From Local node to Node 4
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_4 = 0x14, // Read block modified From Local node to Node 4
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_4 = 0x18, // Change-to-Dirty From Local node to Node 4
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_5 = 0x21, // Read block From Local node to Node 5
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_5 = 0x22, // Read block shared From Local node to Node 5
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_5 = 0x24, // Read block modified From Local node to Node 5
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_5 = 0x28, // Change-to-Dirty From Local node to Node 5
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_6 = 0x41, // Read block From Local node to Node 6
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_6 = 0x42, // Read block shared From Local node to Node 6
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_6 = 0x44, // Read block modified From Local node to Node 6
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_6 = 0x48, // Change-to-Dirty From Local node to Node 6
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_LOCAL_TO_NODE_7 = 0x81, // Read block From Local node to Node 7
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_SHARED_LOCAL_TO_NODE_7 = 0x82, // Read block shared From Local node to Node 7
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_READ_BLOCK_MODIFIED_LOCAL_TO_NODE_7 = 0x84, // Read block modified From Local node to Node 7
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_CHANGE_TO_DIRTY_LOCAL_TO_NODE_7 = 0x88, // Change-to-Dirty From Local node to Node 7
		CPU_READ_COMMAND_REQUESTS_TO_TARGET_NODE_4_7_MASK_ALL = 0xff, // All sub-events selected
		CPU_COMMAND_LATENCY_TO_TARGET_NODE = 0x1e6, // CPU Command Latency to Target Node
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_0 = 0x11, // Read Sized From Local node to Node 0
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_0 = 0x12, // Write Sized From Local node to Node 0
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_0 = 0x14, // Victim Block From Local node to Node 0
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_1 = 0x21, // Read Sized From Local node to Node 1
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_1 = 0x22, // Write Sized From Local node to Node 1
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_1 = 0x24, // Victim Block From Local node to Node 1
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_2 = 0x41, // Read Sized From Local node to Node 2
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_2 = 0x42, // Write Sized From Local node to Node 2
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_2 = 0x44, // Victim Block From Local node to Node 2
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_3 = 0x81, // Read Sized From Local node to Node 3
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_3 = 0x82, // Write Sized From Local node to Node 3
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_3 = 0x84, // Victim Block From Local node to Node 3
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_4 = 0x19, // Read Sized From Local node to Node 4
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_4 = 0x1a, // Write Sized From Local node to Node 4
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_4 = 0x1c, // Victim Block From Local node to Node 4
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_5 = 0x29, // Read Sized From Local node to Node 5
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_5 = 0x2a, // Write Sized From Local node to Node 5
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_5 = 0x2c, // Victim Block From Local node to Node 5
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_6 = 0x49, // Read Sized From Local node to Node 6
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_6 = 0x4a, // Write Sized From Local node to Node 6
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_6 = 0x4c, // Victim Block From Local node to Node 6
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_7 = 0x89, // Read Sized From Local node to Node 7
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_7 = 0x8a, // Write Sized From Local node to Node 7
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_7 = 0x8c, // Victim Block From Local node to Node 7
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_ALL_LOCAL_TO_NODE_0_3 = 0xf7, // All From Local node to Node 0-3
		CPU_COMMAND_LATENCY_TO_TARGET_NODE_MASK_ALL_LOCAL_TO_NODE_4_7 = 0xff, // All From Local node to Node 4-7
		CPU_REQUESTS_TO_TARGET_NODE = 0x1e7, // CPU Requests to Target Node
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_0 = 0x11, // Read Sized From Local node to Node 0
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_0 = 0x12, // Write Sized From Local node to Node 0
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_0 = 0x14, // Victim Block From Local node to Node 0
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_1 = 0x21, // Read Sized From Local node to Node 1
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_1 = 0x22, // Write Sized From Local node to Node 1
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_1 = 0x24, // Victim Block From Local node to Node 1
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_2 = 0x41, // Read Sized From Local node to Node 2
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_2 = 0x42, // Write Sized From Local node to Node 2
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_2 = 0x44, // Victim Block From Local node to Node 2
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_3 = 0x81, // Read Sized From Local node to Node 3
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_3 = 0x82, // Write Sized From Local node to Node 3
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_3 = 0x84, // Victim Block From Local node to Node 3
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_4 = 0x19, // Read Sized From Local node to Node 4
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_4 = 0x1a, // Write Sized From Local node to Node 4
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_4 = 0x1c, // Victim Block From Local node to Node 4
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_5 = 0x29, // Read Sized From Local node to Node 5
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_5 = 0x2a, // Write Sized From Local node to Node 5
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_5 = 0x2c, // Victim Block From Local node to Node 5
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_6 = 0x49, // Read Sized From Local node to Node 6
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_6 = 0x4a, // Write Sized From Local node to Node 6
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_6 = 0x4c, // Victim Block From Local node to Node 6
		CPU_REQUESTS_TO_TARGET_NODE_MASK_READ_SIZED_LOCAL_TO_NODE_7 = 0x89, // Read Sized From Local node to Node 7
		CPU_REQUESTS_TO_TARGET_NODE_MASK_WRITE_SIZED_LOCAL_TO_NODE_7 = 0x8a, // Write Sized From Local node to Node 7
		CPU_REQUESTS_TO_TARGET_NODE_MASK_VICTIM_BLOCK_LOCAL_TO_NODE_7 = 0x8c, // Victim Block From Local node to Node 7
		CPU_REQUESTS_TO_TARGET_NODE_MASK_ALL_LOCAL_TO_NODE_0_3 = 0xf7, // All From Local node to Node 0-3
		CPU_REQUESTS_TO_TARGET_NODE_MASK_ALL_LOCAL_TO_NODE_4_7 = 0xff, // All From Local node to Node 4-7
		REQUEST_CACHE_STATUS_0 = 0x1ea, // Request Cache Status 0
		REQUEST_CACHE_STATUS_0_MASK_PROBE_HIT_S = 0x1, // Probe Hit S
		REQUEST_CACHE_STATUS_0_MASK_PROBE_HIT_E = 0x2, // Probe Hit E
		REQUEST_CACHE_STATUS_0_MASK_PROBE_HIT_MUW_OR_O = 0x4, // Probe Hit MuW or O
		REQUEST_CACHE_STATUS_0_MASK_PROBE_HIT_M = 0x8, // Probe Hit M
		REQUEST_CACHE_STATUS_0_MASK_PROBE_MISS = 0x10, // Probe Miss
		REQUEST_CACHE_STATUS_0_MASK_DIRECTED_PROBE = 0x20, // Directed Probe
		REQUEST_CACHE_STATUS_0_MASK_TRACK_CACHE_STAT_FOR_RDBLK = 0x40, // Track Cache Stat for RdBlk
		REQUEST_CACHE_STATUS_0_MASK_TRACK_CACHE_STAT_FOR_RDBLKS = 0x80, // Track Cache Stat for RdBlkS
		REQUEST_CACHE_STATUS_0_MASK_ALL = 0xff, // All sub-events selected
		REQUEST_CACHE_STATUS_1 = 0x1eb, // Request Cache Status 1
		REQUEST_CACHE_STATUS_1_MASK_PROBE_HIT_S = 0x1, // Probe Hit S
		REQUEST_CACHE_STATUS_1_MASK_PROBE_HIT_E = 0x2, // Probe Hit E
		REQUEST_CACHE_STATUS_1_MASK_PROBE_HIT_MUW_OR_O = 0x4, // Probe Hit MuW or O
		REQUEST_CACHE_STATUS_1_MASK_PROBE_HIT_M = 0x8, // Probe Hit M
		REQUEST_CACHE_STATUS_1_MASK_PROBE_MISS = 0x10, // Probe Miss
		REQUEST_CACHE_STATUS_1_MASK_DIRECTED_PROBE = 0x20, // Directed Probe
		REQUEST_CACHE_STATUS_1_MASK_TRACK_CACHE_STAT_FOR_CHGTODIRTY = 0x40, // Track Cache Stat for ChgToDirty
		REQUEST_CACHE_STATUS_1_MASK_TRACK_CACHE_STAT_FOR_RDBLKM = 0x80, // Track Cache Stat for RdBlkM
		REQUEST_CACHE_STATUS_1_MASK_ALL = 0xff, // All sub-events selected
		MEMORY_CONTROLLER_REQUESTS = 0x1f0, // Memory Controller Requests
		MEMORY_CONTROLLER_REQUESTS_MASK_WRITE_REQUESTS_TO_DCT = 0x1, // Write requests sent to the DCT
		MEMORY_CONTROLLER_REQUESTS_MASK_READ_REQUESTS_TO_DCT = 0x2, // Read requests (including prefetch requests) sent to the DCT
		MEMORY_CONTROLLER_REQUESTS_MASK_PREFETCH_REQUESTS_TO_DCT = 0x4, // Prefetch requests sent to the DCT
		MEMORY_CONTROLLER_REQUESTS_MASK_32_BYTES_SIZED_WRITES = 0x8, // 32 Bytes Sized Writes
		MEMORY_CONTROLLER_REQUESTS_MASK_64_BYTES_SIZED_WRITES = 0x10, // 64 Bytes Sized Writes
		MEMORY_CONTROLLER_REQUESTS_MASK_32_BYTES_SIZED_READS = 0x20, // 32 Bytes Sized Reads
		MEMORY_CONTROLLER_REQUESTS_MASK_64_BYTE_SIZED_READS = 0x40, // 64 Byte Sized Reads
		MEMORY_CONTROLLER_REQUESTS_MASK_READ_REQUESTS_TO_DCT_WHILE_WRITES_PENDING = 0x80, // Read requests sent to the DCT while writes requests are pending in the DCT
		MEMORY_CONTROLLER_REQUESTS_MASK_ALL = 0xff, // All sub-events selected
		READ_REQUEST_TO_L3_CACHE = 0x4e0, // Read Request to L3 Cache
		READ_REQUEST_TO_L3_CACHE_MASK_READ_BLOCK_EXCLUSIVE = 0x1, // Read Block Exclusive (Data cache read)
		READ_REQUEST_TO_L3_CACHE_MASK_READ_BLOCK_SHARED = 0x2, // Read Block Shared (Instruction cache read)
		READ_REQUEST_TO_L3_CACHE_MASK_READ_BLOCK_MODIFY = 0x4, // Read Block Modify
		READ_REQUEST_TO_L3_CACHE_MASK_PREFETCH = 0x8, // Count prefetches only
		READ_REQUEST_TO_L3_CACHE_MASK_READ_BLOCK_ANY = 0x7, // Count any read request
		L3_CACHE_MISSES = 0x4e1, // L3 Cache Misses
		L3_CACHE_MISSES_MASK_READ_BLOCK_EXCLUSIVE = 0x1, // Read Block Exclusive (Data cache read)
		L3_CACHE_MISSES_MASK_READ_BLOCK_SHARED = 0x2, // Read Block Shared (Instruction cache read)
		L3_CACHE_MISSES_MASK_READ_BLOCK_MODIFY = 0x4, // Read Block Modify
		L3_CACHE_MISSES_MASK_PREFETCH = 0x8, // Count prefetches only
		L3_CACHE_MISSES_MASK_READ_BLOCK_ANY = 0x7, // Count any read request
		L3_FILLS_CAUSED_BY_L2_EVICTIONS = 0x4e2, // L3 Fills caused by L2 Evictions
		L3_FILLS_CAUSED_BY_L2_EVICTIONS_MASK_SHARED = 0x1, // Shared
		L3_FILLS_CAUSED_BY_L2_EVICTIONS_MASK_EXCLUSIVE = 0x2, // Exclusive
		L3_FILLS_CAUSED_BY_L2_EVICTIONS_MASK_OWNED = 0x4, // Owned
		L3_FILLS_CAUSED_BY_L2_EVICTIONS_MASK_MODIFIED = 0x8, // Modified
		L3_FILLS_CAUSED_BY_L2_EVICTIONS_MASK_ALL = 0xff, // All sub-events selected
		L3_EVICTIONS = 0x4e3, // L3 Evictions
		L3_EVICTIONS_MASK_SHARED = 0x1, // Shared
		L3_EVICTIONS_MASK_EXCLUSIVE = 0x2, // Exclusive
		L3_EVICTIONS_MASK_OWNED = 0x4, // Owned
		L3_EVICTIONS_MASK_MODIFIED = 0x8, // Modified
		L3_EVICTIONS_MASK_ALL = 0xf, // All sub-events selected
		NON_CANCELED_L3_READ_REQUESTS = 0x4ed, // Non-canceled L3 Read Requests
		NON_CANCELED_L3_READ_REQUESTS_MASK_READ_BLOCK_EXCLUSIVE = 0x1, // Read Block Exclusive (Data cache read)
		NON_CANCELED_L3_READ_REQUESTS_MASK_READ_BLOCK_SHARED = 0x2, // Read Block Shared (Instruction cache read)
		NON_CANCELED_L3_READ_REQUESTS_MASK_READ_BLOCK_MODIFY = 0x4, // Read Block Modify
		NON_CANCELED_L3_READ_REQUESTS_MASK_PREFETCH = 0x8, // Count prefetches only
		NON_CANCELED_L3_READ_REQUESTS_MASK_READ_BLOCK_ANY = 0x7, // Count any read request
		L3_LATENCY = 0x4ef, // L3 Latency
		L3_LATENCY_MASK_L3_REQUEST_CYCLE = 0x1, // L3 Request cycle count.
		L3_LATENCY_MASK_L3_REQUEST = 0x2, // L3 request count.
		L3_LATENCY_MASK_ALL = 0x3, // All sub-events selected
		
	};
};