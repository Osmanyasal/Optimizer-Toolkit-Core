#include <cstdint>

namespace optkit::intel{
	enum class ivbep_unc_c : uint64_t {
		UNC_C_CLOCKTICKS = 0x00, // C-box Uncore clockticks
		UNC_C_COUNTER0_OCCUPANCY = 0x1f, // Counter 0 occupancy. Counts the occupancy related information by filtering CB0 occupancy count captured in counter 0.
		UNC_C_LLC_LOOKUP = 0x34, // Cache lookups
		UNC_C_LLC_LOOKUP_MASK_DATA_READ = 0x300, // Data read requests
		UNC_C_LLC_LOOKUP_MASK_WRITE = 0x500, // Write requests. Includes all write transactions (cached
		UNC_C_LLC_LOOKUP_MASK_REMOTE_SNOOP = 0x900, // External snoop request
		UNC_C_LLC_LOOKUP_MASK_ANY = 0x1100, // Any request
		UNC_C_LLC_LOOKUP_MASK_NID = 0x4100, // X modifier)
		UNC_C_LLC_VICTIMS = 0x37, // Lines victimized
		UNC_C_LLC_VICTIMS_MASK_STATE_M = 0x100, // Lines in M state
		UNC_C_LLC_VICTIMS_MASK_STATE_E = 0x200, // Lines in E state
		UNC_C_LLC_VICTIMS_MASK_STATE_S = 0x400, // Lines in S state
		UNC_C_LLC_VICTIMS_MASK_MISS = 0x800, // TBD
		UNC_C_LLC_VICTIMS_MASK_NID = 0x4000, // X modifier)
		UNC_C_MISC = 0x39, // Miscellaneous C-Box events
		UNC_C_MISC_MASK_BL = 0x400, // Onto BL ring
		UNC_C_MISC_MASK_WC_ALIASING = 0x200, // Counts the number of times a USWC write (WCIL(F)) transaction hits in the LLC in M state
		UNC_C_MISC_MASK_STARTED = 0x400, // TBD
		UNC_C_MISC_MASK_RFO_HIT_S = 0x800, // Counts the number of times that an RFO hits in S state. This is useful for determining if it might be good for a workload to use RSPIWB instead of RSPSWB
		UNC_C_RING_AD_USED = 0x1b, // Address ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_AD_USED_MASK_UP_VR0_EVEN = 0x100, // Up and Even ring polarity filter on virtual ring 0
		UNC_C_RING_AD_USED_MASK_UP_VR0_ODD = 0x200, // Up and odd ring polarity filter on virtual ring 0
		UNC_C_RING_AD_USED_MASK_DOWN_VR0_EVEN = 0x400, // Down and even ring polarity filter on virtual ring 0
		UNC_C_RING_AD_USED_MASK_DOWN_VR0_ODD = 0x800, // Down and odd ring polarity filter on virtual ring 0
		UNC_C_RING_AD_USED_MASK_UP_VR1_EVEN = 0x1000, // Up and Even ring polarity filter on virtual ring 1
		UNC_C_RING_AD_USED_MASK_UP_VR1_ODD = 0x2000, // Up and odd ring polarity filter on virtual ring 1
		UNC_C_RING_AD_USED_MASK_DOWN_VR1_EVEN = 0x4000, // Down and even ring polarity filter on virtual ring 1
		UNC_C_RING_AD_USED_MASK_DOWN_VR1_ODD = 0x8000, // Down and odd ring polarity filter on virtual ring 1
		UNC_C_RING_AD_USED_MASK_UP = 0x3300, // Up on any virtual ring
		UNC_C_RING_AD_USED_MASK_DOWN = 0xcc00, // Down any virtual ring
		UNC_C_RING_AK_USED = 0x1c, // Acknowledgement ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_AK_USED_MASK_UP_VR0_EVEN = 0x100, // Up and Even ring polarity filter on virtual ring 0
		UNC_C_RING_AK_USED_MASK_UP_VR0_ODD = 0x200, // Up and odd ring polarity filter on virtual ring 0
		UNC_C_RING_AK_USED_MASK_DOWN_VR0_EVEN = 0x400, // Down and even ring polarity filter on virtual ring 0
		UNC_C_RING_AK_USED_MASK_DOWN_VR0_ODD = 0x800, // Down and odd ring polarity filter on virtual ring 0
		UNC_C_RING_AK_USED_MASK_UP_VR1_EVEN = 0x1000, // Up and Even ring polarity filter on virtual ring 1
		UNC_C_RING_AK_USED_MASK_UP_VR1_ODD = 0x2000, // Up and odd ring polarity filter on virtual ring 1
		UNC_C_RING_AK_USED_MASK_DOWN_VR1_EVEN = 0x4000, // Down and even ring polarity filter on virtual ring 1
		UNC_C_RING_AK_USED_MASK_DOWN_VR1_ODD = 0x8000, // Down and odd ring polarity filter on virtual ring 1
		UNC_C_RING_AK_USED_MASK_UP = 0x3300, // Up on any virtual ring
		UNC_C_RING_AK_USED_MASK_DOWN = 0xcc00, // Down any virtual ring
		UNC_C_RING_BL_USED = 0x1d, // Bus or Data ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_BL_USED_MASK_UP_VR0_EVEN = 0x100, // Up and Even ring polarity filter on virtual ring 0
		UNC_C_RING_BL_USED_MASK_UP_VR0_ODD = 0x200, // Up and odd ring polarity filter on virtual ring 0
		UNC_C_RING_BL_USED_MASK_DOWN_VR0_EVEN = 0x400, // Down and even ring polarity filter on virtual ring 0
		UNC_C_RING_BL_USED_MASK_DOWN_VR0_ODD = 0x800, // Down and odd ring polarity filter on virtual ring 0
		UNC_C_RING_BL_USED_MASK_UP_VR1_EVEN = 0x1000, // Up and Even ring polarity filter on virtual ring 1
		UNC_C_RING_BL_USED_MASK_UP_VR1_ODD = 0x2000, // Up and odd ring polarity filter on virtual ring 1
		UNC_C_RING_BL_USED_MASK_DOWN_VR1_EVEN = 0x4000, // Down and even ring polarity filter on virtual ring 1
		UNC_C_RING_BL_USED_MASK_DOWN_VR1_ODD = 0x8000, // Down and odd ring polarity filter on virtual ring 1
		UNC_C_RING_BL_USED_MASK_UP = 0x3300, // Up on any virtual ring
		UNC_C_RING_BL_USED_MASK_DOWN = 0xcc00, // Down any virtual ring
		UNC_C_RING_BOUNCES = 0x05, // Number of LLC responses that bounced in the ring
		UNC_C_RING_BOUNCES_MASK_AD_IRQ = 0x200, // TBD
		UNC_C_RING_BOUNCES_MASK_AK = 0x400, // Acknowledgments to core
		UNC_C_RING_BOUNCES_MASK_BL = 0x800, // Data responses to core
		UNC_C_RING_BOUNCES_MASK_IV = 0x1000, // Snoops of processor cache
		UNC_C_RING_IV_USED = 0x1e, // Invalidate ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_IV_USED_MASK_ANY = 0xf00, // Any filter
		UNC_C_RING_IV_USED_MASK_UP = 0x3300, // Filter on any up polarity
		UNC_C_RING_IV_USED_MASK_DOWN = 0xcc00, // Filter on any down polarity
		UNC_C_RING_SRC_THRTL = 0x07, // TDB
		UNC_C_RXR_EXT_STARVED = 0x12, // Ingress arbiter blocking cycles
		UNC_C_RXR_EXT_STARVED_MASK_IRQ = 0x100, // Irq externally starved
		UNC_C_RXR_EXT_STARVED_MASK_IPQ = 0x200, // IPQ externally starved
		UNC_C_RXR_EXT_STARVED_MASK_PRQ = 0x400, // IRQ is blocking the ingress queue and causing starvation
		UNC_C_RXR_EXT_STARVED_MASK_ISMQ_BIDS = 0x800, // Number of time the ISMQ bids
		UNC_C_RXR_INSERTS = 0x13, // Ingress Allocations
		UNC_C_RXR_INSERTS_MASK_IPQ = 0x400, // IPQ
		UNC_C_RXR_INSERTS_MASK_IRQ = 0x100, // IRQ
		UNC_C_RXR_INSERTS_MASK_IRQ_REJECTED = 0x200, // IRQ rejected
		UNC_C_RXR_INSERTS_MASK_VFIFO = 0x1000, // Counts the number of allocated into the IRQ ordering FIFO
		UNC_C_RXR_IPQ_RETRY = 0x31, // Probe Queue Retries
		UNC_C_RXR_IPQ_RETRY_MASK_ADDR_CONFLICT = 0x400, // Address conflict
		UNC_C_RXR_IPQ_RETRY_MASK_ANY = 0x100, // Any Reject
		UNC_C_RXR_IPQ_RETRY_MASK_FULL = 0x200, // No Egress credits
		UNC_C_RXR_IPQ_RETRY_MASK_QPI_CREDITS = 0x1000, // No QPI credits
		UNC_C_RXR_IRQ_RETRY = 0x32, // Ingress Request Queue Rejects
		UNC_C_RXR_IRQ_RETRY_MASK_ADDR_CONFLICT = 0x400, // Address conflict
		UNC_C_RXR_IRQ_RETRY_MASK_ANY = 0x100, // Any reject
		UNC_C_RXR_IRQ_RETRY_MASK_FULL = 0x200, // No Egress credits
		UNC_C_RXR_IRQ_RETRY_MASK_QPI_CREDITS = 0x1000, // No QPI credits
		UNC_C_RXR_IRQ_RETRY_MASK_RTID = 0x800, // No RTIDs
		UNC_C_RXR_IRQ_RETRY_MASK_IIO_CREDITS = 0x2000, // No IIO Credits
		UNC_C_RXR_ISMQ_RETRY = 0x33, // ISMQ Retries
		UNC_C_RXR_ISMQ_RETRY_MASK_ANY = 0x100, // Any reject
		UNC_C_RXR_ISMQ_RETRY_MASK_FULL = 0x200, // No Egress credits
		UNC_C_RXR_ISMQ_RETRY_MASK_IIO_CREDITS = 0x2000, // No IIO credits
		UNC_C_RXR_ISMQ_RETRY_MASK_QPI_CREDITS = 0x1000, // NO QPI credits
		UNC_C_RXR_ISMQ_RETRY_MASK_RTID = 0x800, // No RTIDs
		UNC_C_RXR_ISMQ_RETRY_MASK_WB_CREDITS = 0x8000, // No WB credits
		UNC_C_RXR_OCCUPANCY = 0x11, // Ingress Occupancy
		UNC_C_RXR_OCCUPANCY_MASK_IPQ = 0x400, // IPQ
		UNC_C_RXR_OCCUPANCY_MASK_IRQ = 0x100, // IRQ
		UNC_C_RXR_OCCUPANCY_MASK_IRQ_REJECTED = 0x200, // IRQ rejected
		UNC_C_RXR_OCCUPANCY_MASK_VFIFO = 0x1000, // Counts the number of allocated into the IRQ ordering FIFO
		UNC_C_TOR_INSERTS = 0x35, // TOR Inserts
		UNC_C_TOR_INSERTS_MASK_OPCODE = 0x100, // Number of transactions inserted into the TOR that match an opcode (must provide opc_* umask)
		UNC_C_TOR_INSERTS_MASK_MISS_OPCODE = 0x300, // Number of miss transactions inserted into the TOR that match an opcode (must provide opc_* umask)
		UNC_C_TOR_INSERTS_MASK_EVICTION = 0x400, // Number of Evictions transactions inserted into TOR
		UNC_C_TOR_INSERTS_MASK_ALL = 0x800, // Number of transactions inserted in TOR
		UNC_C_TOR_INSERTS_MASK_WB = 0x1000, // Number of write transactions inserted into the TOR
		UNC_C_TOR_INSERTS_MASK_LOCAL_OPCODE = 0x2100, // Number of opcode-matched transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS_MASK_MISS_LOCAL_OPCODE = 0x2300, // Number of miss opcode-matched transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS_MASK_LOCAL = 0x2800, // Number of transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS_MASK_MISS_LOCAL = 0x2a00, // Number of miss transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS_MASK_NID_OPCODE = 0x4100, // X modifier)
		UNC_C_TOR_INSERTS_MASK_NID_MISS_OPCODE = 0x4300, // X modifier)
		UNC_C_TOR_INSERTS_MASK_NID_EVICTION = 0x4400, // X modifier)
		UNC_C_TOR_INSERTS_MASK_NID_ALL = 0x4800, // X modifier)
		UNC_C_TOR_INSERTS_MASK_NID_MISS_ALL = 0x4a00, // X modifier)
		UNC_C_TOR_INSERTS_MASK_NID_WB = 0x5000, // X modifier)
		UNC_C_TOR_INSERTS_MASK_REMOTE_OPCODE = 0x8100, // Number of opcode-matched transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS_MASK_MISS_REMOTE_OPCODE = 0x8300, // Number of miss opcode-matched transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS_MASK_REMOTE = 0x8800, // Number of transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS_MASK_MISS_REMOTE = 0x8a00, // Number of miss transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY = 0x36, // TOR Occupancy
		UNC_C_TOR_OCCUPANCY_MASK_OPCODE = 0x100, // Number of TOR entries that match an opcode (must provide opc_* umask)
		UNC_C_TOR_OCCUPANCY_MASK_MISS_OPCODE = 0x300, // Number of TOR entries that match a NID and an opcode (must provide opc_* umask)
		UNC_C_TOR_OCCUPANCY_MASK_EVICTION = 0x400, // Number of outstanding eviction transactions in the TOR
		UNC_C_TOR_OCCUPANCY_MASK_ALL = 0x800, // All valid TOR entries
		UNC_C_TOR_OCCUPANCY_MASK_MISS_ALL = 0xa00, // Number of outstanding miss requests in the TOR
		UNC_C_TOR_OCCUPANCY_MASK_WB = 0x1000, // Number of write transactions in the TOR. Does not include RFO
		UNC_C_TOR_OCCUPANCY_MASK_LOCAL_OPCODE = 0x2100, // Number of opcode-matched transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY_MASK_MISS_LOCAL_OPCODE = 0x2300, // Number of miss opcode-matched transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY_MASK_LOCAL = 0x2800, // Number of transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY_MASK_MISS_LOCAL = 0x2a00, // Number of miss transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY_MASK_NID_OPCODE = 0x4100, // X modifier and opc_* umask)
		UNC_C_TOR_OCCUPANCY_MASK_NID_MISS_OPCODE = 0x4300, // X modifier and opc_* umask)
		UNC_C_TOR_OCCUPANCY_MASK_NID_EVICTION = 0x4400, // X modifier)
		UNC_C_TOR_OCCUPANCY_MASK_NID_ALL = 0x4800, // X modifier)
		UNC_C_TOR_OCCUPANCY_MASK_NID_MISS_ALL = 0x4a00, // X modifier)
		UNC_C_TOR_OCCUPANCY_MASK_NID_WB = 0x5000, // X modifier)
		UNC_C_TOR_OCCUPANCY_MASK_REMOTE_OPCODE = 0x8100, // Number of opcode-matched transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY_MASK_MISS_REMOTE_OPCODE = 0x8300, // Number of miss opcode-matched transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY_MASK_REMOTE = 0x8800, // Number of transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY_MASK_MISS_REMOTE = 0x8a00, // Number of miss transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TXR_ADS_USED = 0x04, // Egress events
		UNC_C_TXR_ADS_USED_MASK_AD = 0x100, // onto AD ring
		UNC_C_TXR_ADS_USED_MASK_AK = 0x200, // Onto AK ring
		UNC_C_TXR_INSERTS = 0x02, // Egress allocations
		UNC_C_TXR_INSERTS_MASK_AD_CACHE = 0x100, // Counts the number of ring transactions from Cachebo to AD ring
		UNC_C_TXR_INSERTS_MASK_AK_CACHE = 0x200, // Counts the number of ring transactions from Cachebo to AK ring
		UNC_C_TXR_INSERTS_MASK_BL_CACHE = 0x400, // Counts the number of ring transactions from Cachebo to BL ring
		UNC_C_TXR_INSERTS_MASK_IV_CACHE = 0x800, // Counts the number of ring transactions from Cachebo ton IV ring
		UNC_C_TXR_INSERTS_MASK_AD_CORE = 0x1000, // Counts the number of ring transactions from Corebo to AD ring
		UNC_C_TXR_INSERTS_MASK_AK_CORE = 0x2000, // Counts the number of ring transactions from Corebo to AK ring
		UNC_C_TXR_INSERTS_MASK_BL_CORE = 0x4000, // Counts the number of ring transactions from Corebo to BL ring
		
	};
};