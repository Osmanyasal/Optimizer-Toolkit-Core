#include <cstdint>

namespace optkit_intel{
	enum class nhm_unc : uint64_t {
		UNC_CLK_UNHALTED = 0xff, // Uncore clockticks.
		UNC_DRAM_OPEN = 0x60, // DRAM open commands issued for read or write
		UNC_DRAM_OPEN_MASK_CH0 = 0x100, // DRAM Channel 0 open commands issued for read or write
		UNC_DRAM_OPEN_MASK_CH1 = 0x200, // DRAM Channel 1 open commands issued for read or write
		UNC_DRAM_OPEN_MASK_CH2 = 0x400, // DRAM Channel 2 open commands issued for read or write
		UNC_DRAM_PAGE_CLOSE = 0x61, // DRAM page close due to idle timer expiration
		UNC_DRAM_PAGE_CLOSE_MASK_CH0 = 0x100, // DRAM Channel 0 page close
		UNC_DRAM_PAGE_CLOSE_MASK_CH1 = 0x200, // DRAM Channel 1 page close
		UNC_DRAM_PAGE_CLOSE_MASK_CH2 = 0x400, // DRAM Channel 2 page close
		UNC_DRAM_PAGE_MISS = 0x62, // DRAM Channel 0 page miss
		UNC_DRAM_PAGE_MISS_MASK_CH0 = 0x100, // DRAM Channel 0 page miss
		UNC_DRAM_PAGE_MISS_MASK_CH1 = 0x200, // DRAM Channel 1 page miss
		UNC_DRAM_PAGE_MISS_MASK_CH2 = 0x400, // DRAM Channel 2 page miss
		UNC_DRAM_PRE_ALL = 0x66, // DRAM Channel 0 precharge all commands
		UNC_DRAM_PRE_ALL_MASK_CH0 = 0x100, // DRAM Channel 0 precharge all commands
		UNC_DRAM_PRE_ALL_MASK_CH1 = 0x200, // DRAM Channel 1 precharge all commands
		UNC_DRAM_PRE_ALL_MASK_CH2 = 0x400, // DRAM Channel 2 precharge all commands
		UNC_DRAM_READ_CAS = 0x63, // DRAM Channel 0 read CAS commands
		UNC_DRAM_READ_CAS_MASK_CH0 = 0x100, // DRAM Channel 0 read CAS commands
		UNC_DRAM_READ_CAS_MASK_AUTOPRE_CH0 = 0x200, // DRAM Channel 0 read CAS auto page close commands
		UNC_DRAM_READ_CAS_MASK_CH1 = 0x400, // DRAM Channel 1 read CAS commands
		UNC_DRAM_READ_CAS_MASK_AUTOPRE_CH1 = 0x800, // DRAM Channel 1 read CAS auto page close commands
		UNC_DRAM_READ_CAS_MASK_CH2 = 0x1000, // DRAM Channel 2 read CAS commands
		UNC_DRAM_READ_CAS_MASK_AUTOPRE_CH2 = 0x2000, // DRAM Channel 2 read CAS auto page close commands
		UNC_DRAM_REFRESH = 0x65, // DRAM Channel 0 refresh commands
		UNC_DRAM_REFRESH_MASK_CH0 = 0x100, // DRAM Channel 0 refresh commands
		UNC_DRAM_REFRESH_MASK_CH1 = 0x200, // DRAM Channel 1 refresh commands
		UNC_DRAM_REFRESH_MASK_CH2 = 0x400, // DRAM Channel 2 refresh commands
		UNC_DRAM_WRITE_CAS = 0x64, // DRAM Channel 0 write CAS commands
		UNC_DRAM_WRITE_CAS_MASK_CH0 = 0x100, // DRAM Channel 0 write CAS commands
		UNC_DRAM_WRITE_CAS_MASK_AUTOPRE_CH0 = 0x200, // DRAM Channel 0 write CAS auto page close commands
		UNC_DRAM_WRITE_CAS_MASK_CH1 = 0x400, // DRAM Channel 1 write CAS commands
		UNC_DRAM_WRITE_CAS_MASK_AUTOPRE_CH1 = 0x800, // DRAM Channel 1 write CAS auto page close commands
		UNC_DRAM_WRITE_CAS_MASK_CH2 = 0x1000, // DRAM Channel 2 write CAS commands
		UNC_DRAM_WRITE_CAS_MASK_AUTOPRE_CH2 = 0x2000, // DRAM Channel 2 write CAS auto page close commands
		UNC_GQ_ALLOC = 0x3, // GQ read tracker requests
		UNC_GQ_ALLOC_MASK_READ_TRACKER = 0x100, // GQ read tracker requests
		UNC_GQ_ALLOC_MASK_RT_LLC_MISS = 0x200, // GQ read tracker LLC misses
		UNC_GQ_ALLOC_MASK_RT_TO_LLC_RESP = 0x400, // GQ read tracker LLC requests
		UNC_GQ_ALLOC_MASK_RT_TO_RTID_ACQUIRED = 0x800, // GQ read tracker LLC miss to RTID acquired
		UNC_GQ_ALLOC_MASK_WT_TO_RTID_ACQUIRED = 0x1000, // GQ write tracker LLC miss to RTID acquired
		UNC_GQ_ALLOC_MASK_WRITE_TRACKER = 0x2000, // GQ write tracker LLC misses
		UNC_GQ_ALLOC_MASK_PEER_PROBE_TRACKER = 0x4000, // GQ peer probe tracker requests
		UNC_GQ_CYCLES_FULL = 0x0, // Cycles GQ read tracker is full.
		UNC_GQ_CYCLES_FULL_MASK_READ_TRACKER = 0x100, // Cycles GQ read tracker is full.
		UNC_GQ_CYCLES_FULL_MASK_WRITE_TRACKER = 0x200, // Cycles GQ write tracker is full.
		UNC_GQ_CYCLES_FULL_MASK_PEER_PROBE_TRACKER = 0x400, // Cycles GQ peer probe tracker is full.
		UNC_GQ_CYCLES_NOT_EMPTY = 0x1, // Cycles GQ read tracker is busy
		UNC_GQ_CYCLES_NOT_EMPTY_MASK_READ_TRACKER = 0x100, // Cycles GQ read tracker is busy
		UNC_GQ_CYCLES_NOT_EMPTY_MASK_WRITE_TRACKER = 0x200, // Cycles GQ write tracker is busy
		UNC_GQ_CYCLES_NOT_EMPTY_MASK_PEER_PROBE_TRACKER = 0x400, // Cycles GQ peer probe tracker is busy
		UNC_GQ_DATA_FROM = 0x4, // Cycles GQ data is imported
		UNC_GQ_DATA_FROM_MASK_QPI = 0x100, // Cycles GQ data is imported from Quickpath interface
		UNC_GQ_DATA_FROM_MASK_QMC = 0x200, // Cycles GQ data is imported from Quickpath memory interface
		UNC_GQ_DATA_FROM_MASK_LLC = 0x400, // Cycles GQ data is imported from LLC
		UNC_GQ_DATA_FROM_MASK_CORES_02 = 0x800, // Cycles GQ data is imported from Cores 0 and 2
		UNC_GQ_DATA_FROM_MASK_CORES_13 = 0x1000, // Cycles GQ data is imported from Cores 1 and 3
		UNC_GQ_DATA_TO = 0x5, // Cycles GQ data is exported
		UNC_GQ_DATA_TO_MASK_QPI_QMC = 0x100, // Cycles GQ data sent to the QPI or QMC
		UNC_GQ_DATA_TO_MASK_LLC = 0x200, // Cycles GQ data sent to LLC
		UNC_GQ_DATA_TO_MASK_CORES = 0x400, // Cycles GQ data sent to cores
		UNC_LLC_HITS = 0x8, // Number of LLC read hits
		UNC_LLC_HITS_MASK_READ = 0x100, // Number of LLC read hits
		UNC_LLC_HITS_MASK_WRITE = 0x200, // Number of LLC write hits
		UNC_LLC_HITS_MASK_PROBE = 0x400, // Number of LLC peer probe hits
		UNC_LLC_HITS_MASK_ANY = 0x300, // Number of LLC hits
		UNC_LLC_LINES_IN = 0xa, // LLC lines allocated in M state
		UNC_LLC_LINES_IN_MASK_M_STATE = 0x100, // LLC lines allocated in M state
		UNC_LLC_LINES_IN_MASK_E_STATE = 0x200, // LLC lines allocated in E state
		UNC_LLC_LINES_IN_MASK_S_STATE = 0x400, // LLC lines allocated in S state
		UNC_LLC_LINES_IN_MASK_F_STATE = 0x800, // LLC lines allocated in F state
		UNC_LLC_LINES_IN_MASK_ANY = 0xf00, // LLC lines allocated
		UNC_LLC_LINES_OUT = 0xb, // LLC lines victimized in M state
		UNC_LLC_LINES_OUT_MASK_M_STATE = 0x100, // LLC lines victimized in M state
		UNC_LLC_LINES_OUT_MASK_E_STATE = 0x200, // LLC lines victimized in E state
		UNC_LLC_LINES_OUT_MASK_S_STATE = 0x400, // LLC lines victimized in S state
		UNC_LLC_LINES_OUT_MASK_I_STATE = 0x800, // LLC lines victimized in I state
		UNC_LLC_LINES_OUT_MASK_F_STATE = 0x1000, // LLC lines victimized in F state
		UNC_LLC_LINES_OUT_MASK_ANY = 0x1f00, // LLC lines victimized
		UNC_LLC_MISS = 0x9, // Number of LLC read misses
		UNC_LLC_MISS_MASK_READ = 0x100, // Number of LLC read misses
		UNC_LLC_MISS_MASK_WRITE = 0x200, // Number of LLC write misses
		UNC_LLC_MISS_MASK_PROBE = 0x400, // Number of LLC peer probe misses
		UNC_LLC_MISS_MASK_ANY = 0x300, // Number of LLC misses
		UNC_QHL_ADDRESS_CONFLICTS = 0x24, // QHL 2 way address conflicts
		UNC_QHL_ADDRESS_CONFLICTS_MASK_2WAY = 0x200, // QHL 2 way address conflicts
		UNC_QHL_ADDRESS_CONFLICTS_MASK_3WAY = 0x400, // QHL 3 way address conflicts
		UNC_QHL_CONFLICT_CYCLES = 0x25, // QHL IOH Tracker conflict cycles
		UNC_QHL_CONFLICT_CYCLES_MASK_IOH = 0x100, // QHL IOH Tracker conflict cycles
		UNC_QHL_CONFLICT_CYCLES_MASK_REMOTE = 0x200, // QHL Remote Tracker conflict cycles
		UNC_QHL_CONFLICT_CYCLES_MASK_LOCAL = 0x400, // QHL Local Tracker conflict cycles
		UNC_QHL_CYCLES_FULL = 0x21, // Cycles QHL  Remote Tracker is full
		UNC_QHL_CYCLES_FULL_MASK_REMOTE = 0x200, // Cycles QHL  Remote Tracker is full
		UNC_QHL_CYCLES_FULL_MASK_LOCAL = 0x400, // Cycles QHL Local Tracker is full
		UNC_QHL_CYCLES_FULL_MASK_IOH = 0x100, // Cycles QHL IOH Tracker is full
		UNC_QHL_CYCLES_NOT_EMPTY = 0x22, // Cycles QHL Tracker is not empty
		UNC_QHL_CYCLES_NOT_EMPTY_MASK_IOH = 0x100, // Cycles QHL IOH is busy
		UNC_QHL_CYCLES_NOT_EMPTY_MASK_REMOTE = 0x200, // Cycles QHL Remote Tracker is busy
		UNC_QHL_CYCLES_NOT_EMPTY_MASK_LOCAL = 0x400, // Cycles QHL Local Tracker is busy
		UNC_QHL_FRC_ACK_CNFLTS = 0x33, // QHL FrcAckCnflts sent to local home
		UNC_QHL_FRC_ACK_CNFLTS_MASK_LOCAL = 0x400, // QHL FrcAckCnflts sent to local home
		UNC_QHL_OCCUPANCY = 0x23, // Cycles QHL Tracker Allocate to Deallocate Read Occupancy
		UNC_QHL_OCCUPANCY_MASK_IOH = 0x100, // Cycles QHL IOH Tracker Allocate to Deallocate Read Occupancy
		UNC_QHL_OCCUPANCY_MASK_REMOTE = 0x200, // Cycles QHL Remote Tracker Allocate to Deallocate Read Occupancy
		UNC_QHL_OCCUPANCY_MASK_LOCAL = 0x400, // Cycles QHL Local Tracker Allocate to Deallocate Read Occupancy
		UNC_QHL_REQUESTS = 0x20, // Quickpath Home Logic local read requests
		UNC_QHL_REQUESTS_MASK_LOCAL_READS = 0x1000, // Quickpath Home Logic local read requests
		UNC_QHL_REQUESTS_MASK_LOCAL_WRITES = 0x2000, // Quickpath Home Logic local write requests
		UNC_QHL_REQUESTS_MASK_REMOTE_READS = 0x400, // Quickpath Home Logic remote read requests
		UNC_QHL_REQUESTS_MASK_IOH_READS = 0x100, // Quickpath Home Logic IOH read requests
		UNC_QHL_REQUESTS_MASK_IOH_WRITES = 0x200, // Quickpath Home Logic IOH write requests
		UNC_QHL_REQUESTS_MASK_REMOTE_WRITES = 0x800, // Quickpath Home Logic remote write requests
		UNC_QHL_TO_QMC_BYPASS = 0x26, // Number of requests to QMC that bypass QHL
		UNC_QMC_BUSY = 0x29, // Cycles QMC busy with a read request
		UNC_QMC_BUSY_MASK_READ_CH0 = 0x100, // Cycles QMC channel 0 busy with a read request
		UNC_QMC_BUSY_MASK_READ_CH1 = 0x200, // Cycles QMC channel 1 busy with a read request
		UNC_QMC_BUSY_MASK_READ_CH2 = 0x400, // Cycles QMC channel 2 busy with a read request
		UNC_QMC_BUSY_MASK_WRITE_CH0 = 0x800, // Cycles QMC channel 0 busy with a write request
		UNC_QMC_BUSY_MASK_WRITE_CH1 = 0x1000, // Cycles QMC channel 1 busy with a write request
		UNC_QMC_BUSY_MASK_WRITE_CH2 = 0x2000, // Cycles QMC channel 2 busy with a write request
		UNC_QMC_CANCEL = 0x30, // QMC cancels
		UNC_QMC_CANCEL_MASK_CH0 = 0x100, // QMC channel 0 cancels
		UNC_QMC_CANCEL_MASK_CH1 = 0x200, // QMC channel 1 cancels
		UNC_QMC_CANCEL_MASK_CH2 = 0x400, // QMC channel 2 cancels
		UNC_QMC_CANCEL_MASK_ANY = 0x700, // QMC cancels
		UNC_QMC_CRITICAL_PRIORITY_READS = 0x2e, // QMC critical priority read requests
		UNC_QMC_CRITICAL_PRIORITY_READS_MASK_CH0 = 0x100, // QMC channel 0 critical priority read requests
		UNC_QMC_CRITICAL_PRIORITY_READS_MASK_CH1 = 0x200, // QMC channel 1 critical priority read requests
		UNC_QMC_CRITICAL_PRIORITY_READS_MASK_CH2 = 0x400, // QMC channel 2 critical priority read requests
		UNC_QMC_CRITICAL_PRIORITY_READS_MASK_ANY = 0x700, // QMC critical priority read requests
		UNC_QMC_HIGH_PRIORITY_READS = 0x2d, // QMC high priority read requests
		UNC_QMC_HIGH_PRIORITY_READS_MASK_CH0 = 0x100, // QMC channel 0 high priority read requests
		UNC_QMC_HIGH_PRIORITY_READS_MASK_CH1 = 0x200, // QMC channel 1 high priority read requests
		UNC_QMC_HIGH_PRIORITY_READS_MASK_CH2 = 0x400, // QMC channel 2 high priority read requests
		UNC_QMC_HIGH_PRIORITY_READS_MASK_ANY = 0x700, // QMC high priority read requests
		UNC_QMC_ISOC_FULL = 0x28, // Cycles DRAM full with isochronous (ISOC) read requests
		UNC_QMC_ISOC_FULL_MASK_READ_CH0 = 0x100, // Cycles DRAM channel 0 full with isochronous read requests
		UNC_QMC_ISOC_FULL_MASK_READ_CH1 = 0x200, // Cycles DRAM channel 1 full with isochronous read requests
		UNC_QMC_ISOC_FULL_MASK_READ_CH2 = 0x400, // Cycles DRAM channel 2 full with isochronous read requests
		UNC_QMC_ISOC_FULL_MASK_WRITE_CH0 = 0x800, // Cycles DRAM channel 0 full with isochronous write requests
		UNC_QMC_ISOC_FULL_MASK_WRITE_CH1 = 0x1000, // Cycles DRAM channel 1 full with isochronous write requests
		UNC_QMC_ISOC_FULL_MASK_WRITE_CH2 = 0x2000, // Cycles DRAM channel 2 full with isochronous write requests
		UNC_IMC_ISOC_OCCUPANCY = 0x2b, // IMC isochronous (ISOC) Read Occupancy
		UNC_IMC_ISOC_OCCUPANCY_MASK_CH0 = 0x100, // IMC channel 0 isochronous read request occupancy
		UNC_IMC_ISOC_OCCUPANCY_MASK_CH1 = 0x200, // IMC channel 1 isochronous read request occupancy
		UNC_IMC_ISOC_OCCUPANCY_MASK_CH2 = 0x400, // IMC channel 2 isochronous read request occupancy
		UNC_IMC_ISOC_OCCUPANCY_MASK_ANY = 0x700, // IMC isochronous read request occupancy
		UNC_QMC_NORMAL_FULL = 0x27, // Cycles DRAM full with normal read requests
		UNC_QMC_NORMAL_FULL_MASK_READ_CH0 = 0x100, // Cycles DRAM channel 0 full with normal read requests
		UNC_QMC_NORMAL_FULL_MASK_READ_CH1 = 0x200, // Cycles DRAM channel 1 full with normal read requests
		UNC_QMC_NORMAL_FULL_MASK_READ_CH2 = 0x400, // Cycles DRAM channel 2 full with normal read requests
		UNC_QMC_NORMAL_FULL_MASK_WRITE_CH0 = 0x800, // Cycles DRAM channel 0 full with normal write requests
		UNC_QMC_NORMAL_FULL_MASK_WRITE_CH1 = 0x1000, // Cycles DRAM channel 1 full with normal write requests
		UNC_QMC_NORMAL_FULL_MASK_WRITE_CH2 = 0x2000, // Cycles DRAM channel 2 full with normal write requests
		UNC_QMC_NORMAL_READS = 0x2c, // QMC normal read requests
		UNC_QMC_NORMAL_READS_MASK_CH0 = 0x100, // QMC channel 0 normal read requests
		UNC_QMC_NORMAL_READS_MASK_CH1 = 0x200, // QMC channel 1 normal read requests
		UNC_QMC_NORMAL_READS_MASK_CH2 = 0x400, // QMC channel 2 normal read requests
		UNC_QMC_NORMAL_READS_MASK_ANY = 0x700, // QMC normal read requests
		UNC_QMC_OCCUPANCY = 0x2a, // QMC Occupancy
		UNC_QMC_OCCUPANCY_MASK_CH0 = 0x100, // IMC channel 0 normal read request occupancy
		UNC_QMC_OCCUPANCY_MASK_CH1 = 0x200, // IMC channel 1 normal read request occupancy
		UNC_QMC_OCCUPANCY_MASK_CH2 = 0x400, // IMC channel 2 normal read request occupancy
		UNC_QMC_PRIORITY_UPDATES = 0x31, // QMC priority updates
		UNC_QMC_PRIORITY_UPDATES_MASK_CH0 = 0x100, // QMC channel 0 priority updates
		UNC_QMC_PRIORITY_UPDATES_MASK_CH1 = 0x200, // QMC channel 1 priority updates
		UNC_QMC_PRIORITY_UPDATES_MASK_CH2 = 0x400, // QMC channel 2 priority updates
		UNC_QMC_PRIORITY_UPDATES_MASK_ANY = 0x700, // QMC priority updates
		UNC_QMC_WRITES = 0x2f, // QMC cache line writes
		UNC_QMC_WRITES_MASK_FULL_CH0 = 0x100, // QMC channel 0 full cache line writes
		UNC_QMC_WRITES_MASK_FULL_CH1 = 0x200, // QMC channel 1 full cache line writes
		UNC_QMC_WRITES_MASK_FULL_CH2 = 0x400, // QMC channel 2 full cache line writes
		UNC_QMC_WRITES_MASK_FULL_ANY = 0x700, // QMC full cache line writes
		UNC_QMC_WRITES_MASK_PARTIAL_CH0 = 0x800, // QMC channel 0 partial cache line writes
		UNC_QMC_WRITES_MASK_PARTIAL_CH1 = 0x1000, // QMC channel 1 partial cache line writes
		UNC_QMC_WRITES_MASK_PARTIAL_CH2 = 0x2000, // QMC channel 2 partial cache line writes
		UNC_QMC_WRITES_MASK_PARTIAL_ANY = 0x3800, // QMC partial cache line writes
		UNC_QPI_RX_NO_PPT_CREDIT = 0x43, // Link 0 snoop stalls due to no PPT entry
		UNC_QPI_RX_NO_PPT_CREDIT_MASK_STALLS_LINK_0 = 0x100, // Link 0 snoop stalls due to no PPT entry
		UNC_QPI_RX_NO_PPT_CREDIT_MASK_STALLS_LINK_1 = 0x200, // Link 1 snoop stalls due to no PPT entry
		UNC_QPI_TX_HEADER = 0x42, // Cycles link 0 outbound header busy
		UNC_QPI_TX_HEADER_MASK_BUSY_LINK_0 = 0x200, // Cycles link 0 outbound header busy
		UNC_QPI_TX_HEADER_MASK_BUSY_LINK_1 = 0x800, // Cycles link 1 outbound header busy
		UNC_QPI_TX_STALLED_MULTI_FLIT = 0x41, // Cycles QPI outbound stalls
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_DRS_LINK_0 = 0x100, // Cycles QPI outbound link 0 DRS stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_NCB_LINK_0 = 0x200, // Cycles QPI outbound link 0 NCB stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_NCS_LINK_0 = 0x400, // Cycles QPI outbound link 0 NCS stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_DRS_LINK_1 = 0x800, // Cycles QPI outbound link 1 DRS stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_NCB_LINK_1 = 0x1000, // Cycles QPI outbound link 1 NCB stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_NCS_LINK_1 = 0x2000, // Cycles QPI outbound link 1 NCS stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_LINK_0 = 0x700, // Cycles QPI outbound link 0 multi flit stalled
		UNC_QPI_TX_STALLED_MULTI_FLIT_MASK_LINK_1 = 0x3800, // Cycles QPI outbound link 1 multi flit stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT = 0x40, // Cycles QPI outbound link stalls
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_HOME_LINK_0 = 0x100, // Cycles QPI outbound link 0 HOME stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_SNOOP_LINK_0 = 0x200, // Cycles QPI outbound link 0 SNOOP stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_NDR_LINK_0 = 0x400, // Cycles QPI outbound link 0 NDR stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_HOME_LINK_1 = 0x800, // Cycles QPI outbound link 1 HOME stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_SNOOP_LINK_1 = 0x1000, // Cycles QPI outbound link 1 SNOOP stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_NDR_LINK_1 = 0x2000, // Cycles QPI outbound link 1 NDR stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_LINK_0 = 0x700, // Cycles QPI outbound link 0 single flit stalled
		UNC_QPI_TX_STALLED_SINGLE_FLIT_MASK_LINK_1 = 0x3800, // Cycles QPI outbound link 1 single flit stalled
		UNC_SNP_RESP_TO_LOCAL_HOME = 0x6, // Local home snoop response
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_I_STATE = 0x100, // Local home snoop response - LLC does not have cache line
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_S_STATE = 0x200, // Local home snoop response - LLC has  cache line in S state
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_FWD_S_STATE = 0x400, // Local home snoop response - LLC forwarding cache line in S state.
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_FWD_I_STATE = 0x800, // Local home snoop response - LLC has forwarded a modified cache line
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_CONFLICT = 0x1000, // Local home conflict snoop response
		UNC_SNP_RESP_TO_LOCAL_HOME_MASK_WB = 0x2000, // Local home snoop response - LLC has cache line in the M state
		UNC_SNP_RESP_TO_REMOTE_HOME = 0x7, // Remote home snoop response
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_I_STATE = 0x100, // Remote home snoop response - LLC does not have cache line
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_S_STATE = 0x200, // Remote home snoop response - LLC has  cache line in S state
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_FWD_S_STATE = 0x400, // Remote home snoop response - LLC forwarding cache line in S state.
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_FWD_I_STATE = 0x800, // Remote home snoop response - LLC has forwarded a modified cache line
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_CONFLICT = 0x1000, // Remote home conflict snoop response
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_WB = 0x2000, // Remote home snoop response - LLC has cache line in the M state
		UNC_SNP_RESP_TO_REMOTE_HOME_MASK_HITM = 0x2400, // Remote home snoop response - LLC HITM
		
	};
};