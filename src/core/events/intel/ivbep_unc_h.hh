#include <cstdint>

namespace optkit_intel{
	enum class ivbep_unc_h : uint64_t {
		LAST = 0x00, // HA Uncore clockticks
		UNC_H_CONFLICT_CYCLES = 0xb, // Conflict Checks
		UNC_H_CONFLICT_CYCLES_MASK_CONFLICT = 0x200, // Number of cycles that we are handling conflicts
		UNC_H_CONFLICT_CYCLES_MASK_LAST = 0x400, // Count every last conflictor in conflict chain. Can be used to compute average conflict chain length
		UNC_H_CONFLICT_CYCLES_MASK_CMP_FWDS = 0x1000, // Count the number of cmp_fwd. This gives the number of late conflicts
		UNC_H_CONFLICT_CYCLES_MASK_ACKCNFLTS = 0x800, // Count the number Acknflts
		UNC_H_DIRECT2CORE_COUNT = 0x11, // Direct2Core Messages Sent
		UNC_H_DIRECT2CORE_CYCLES_DISABLED = 0x12, // Cycles when Direct2Core was Disabled
		UNC_H_DIRECT2CORE_TXN_OVERRIDE = 0x13, // Number of Reads that had Direct2Core Overridden
		UNC_H_DIRECTORY_LOOKUP = 0xc, // Directory Lookups
		UNC_H_DIRECTORY_LOOKUP_MASK_NO_SNP = 0x200, // Snoop not needed
		UNC_H_DIRECTORY_LOOKUP_MASK_SNOOP = 0x100, // SNooop needed
		UNC_H_DIRECTORY_UPDATE = 0xd, // Directory Updates
		UNC_H_DIRECTORY_UPDATE_MASK_ANY = 0x300, // Counts any directory update
		UNC_H_DIRECTORY_UPDATE_MASK_CLEAR = 0x200, // Directory clears
		UNC_H_DIRECTORY_UPDATE_MASK_SET = 0x100, // Directory set
		UNC_H_IGR_NO_CREDIT_CYCLES = 0x22, // Cycles without QPI Ingress Credits
		UNC_H_IGR_NO_CREDIT_CYCLES_MASK_AD_QPI0 = 0x100, // AD to QPI link 0
		UNC_H_IGR_NO_CREDIT_CYCLES_MASK_AD_QPI1 = 0x200, // AD to QPI link 1
		UNC_H_IGR_NO_CREDIT_CYCLES_MASK_BL_QPI0 = 0x400, // BL to QPI link 0
		UNC_H_IGR_NO_CREDIT_CYCLES_MASK_BL_QPI1 = 0x800, // BL to QPI link 1
		UNC_H_IMC_RETRY = 0x1e, // Retry Events
		UNC_H_IMC_WRITES = 0x1a, // HA to IMC Full Line Writes Issued
		UNC_H_IMC_WRITES_MASK_ALL = 0xf00, // Counts all writes
		UNC_H_IMC_WRITES_MASK_FULL = 0x100, // Counts full line non ISOCH
		UNC_H_IMC_WRITES_MASK_FULL_ISOCH = 0x400, // Counts ISOCH full line
		UNC_H_IMC_WRITES_MASK_PARTIAL = 0x200, // Counts partial non-ISOCH
		UNC_H_IMC_WRITES_MASK_PARTIAL_ISOCH = 0x800, // Counts ISOCH partial
		UNC_H_IMC_READS = 0x17, // HA to IMC normal priority reads issued
		UNC_H_IMC_READS_MASK_NORMAL = 0x100, // Normal priority
		UNC_H_REQUESTS = 0x1, // Read and Write Requests
		UNC_H_REQUESTS_MASK_READS = 0x300, // Counts incoming read requests. Good proxy for LLC read misses
		UNC_H_REQUESTS_MASK_READS_LOCAL = 0x100, // Counts incoming read requests coming from local socket. Good proxy for LLC read misses
		UNC_H_REQUESTS_MASK_READS_REMOTE = 0x200, // Counts incoming read requests coming from remote socket. Good proxy for LLC read misses
		UNC_H_REQUESTS_MASK_WRITES = 0xc00, // Counts incoming writes
		UNC_H_REQUESTS_MASK_WRITES_LOCAL = 0x400, // Counts incoming writes from local socket
		UNC_H_REQUESTS_MASK_WRITES_REMOTE = 0x800, // Counts incoming writes from remote socket
		UNC_H_REQUESTS_MASK_INVITOE_LOCAL = 0x1000, // Counts InvItoE coming from local socket
		UNC_H_RPQ_CYCLES_NO_REG_CREDITS = 0x15, // IMC RPQ Credits Empty
		UNC_H_RPQ_CYCLES_NO_REG_CREDITS_MASK_INVITOE_REMOTE = 0x2000, // Counts InvItoE coming from remote socket
		UNC_H_RPQ_CYCLES_NO_REG_CREDITS_MASK_CHN1 = 0x200, // Channel 1
		UNC_H_RPQ_CYCLES_NO_REG_CREDITS_MASK_CHN2 = 0x400, // channel 2
		UNC_H_RPQ_CYCLES_NO_REG_CREDITS_MASK_CHN3 = 0x800, // Chanell 3
		UNC_H_TAD_REQUESTS_G0 = 0x1b, // HA Requests to a TAD Region
		UNC_H_TAD_REQUESTS_G0_MASK_REGION0 = 0x100, // Counts for TAD Region 0
		UNC_H_TAD_REQUESTS_G0_MASK_REGION1 = 0x200, // Counts for TAD Region 1
		UNC_H_TAD_REQUESTS_G0_MASK_REGION2 = 0x400, // Counts for TAD Region 2
		UNC_H_TAD_REQUESTS_G0_MASK_REGION3 = 0x800, // Counts for TAD Region 3
		UNC_H_TAD_REQUESTS_G0_MASK_REGION4 = 0x1000, // Counts for TAD Region 4
		UNC_H_TAD_REQUESTS_G0_MASK_REGION5 = 0x2000, // Counts for TAD Region 5
		UNC_H_TAD_REQUESTS_G0_MASK_REGION6 = 0x4000, // Counts for TAD Region 6
		UNC_H_TAD_REQUESTS_G0_MASK_REGION7 = 0x8000, // Counts for TAD Region 7
		UNC_H_TAD_REQUESTS_G1 = 0x1c, // HA Requests to a TAD Region
		UNC_H_TAD_REQUESTS_G1_MASK_REGION8 = 0x100, // Counts for TAD Region 8
		UNC_H_TAD_REQUESTS_G1_MASK_REGION9 = 0x200, // Counts for TAD Region 9
		UNC_H_TAD_REQUESTS_G1_MASK_REGION10 = 0x400, // Counts for TAD Region 10
		UNC_H_TAD_REQUESTS_G1_MASK_REGION11 = 0x800, // Counts for TAD Region 11
		UNC_H_TXR_AD_CYCLES_FULL = 0x2a, // AD Egress Full
		UNC_H_TXR_AD_CYCLES_FULL_MASK_ALL = 0x300, // Counts cycles full from both schedulers
		UNC_H_TXR_AD_CYCLES_FULL_MASK_SCHED0 = 0x100, // Counts cycles full from scheduler bank 0
		UNC_H_TXR_AD_CYCLES_FULL_MASK_SCHED1 = 0x200, // Counts cycles full from scheduler bank 1
		UNC_H_TXR_AK_CYCLES_FULL = 0x32, // AK Egress Full
		UNC_H_TXR_AK_CYCLES_FULL_MASK_ALL = 0x300, // Counts cycles from both schedulers
		UNC_H_TXR_AK_CYCLES_FULL_MASK_SCHED0 = 0x100, // Counts cycles from scheduler bank 0
		UNC_H_TXR_AK_CYCLES_FULL_MASK_SCHED1 = 0x200, // Counts cycles from scheduler bank 1
		UNC_H_TXR_AK = 0xe, // Outbound Ring Transactions on AK
		UNC_H_TXR_AK_MASK_NDR = 0x100, // Number of outbound NDR (non-data response) transactions send on the AK ring. AK NDR is used for messages to the local socket
		UNC_H_TXR_AK_MASK_CRD_CBO = 0x200, // Number of outbound CDR transactions send on the AK ring to CBO
		UNC_H_TXR_AK_MASK_CRD_QPI = 0x400, // Number of outbound CDR transactions send on the AK ring to QPI
		UNC_H_TXR_BL = 0x10, // Outbound DRS Ring Transactions to Cache
		UNC_H_TXR_BL_MASK_DRS_CACHE = 0x100, // Counts data being sent to the cache
		UNC_H_TXR_BL_MASK_DRS_CORE = 0x200, // Counts data being sent directly to the requesting core
		UNC_H_TXR_BL_MASK_DRS_QPI = 0x400, // Counts data being sent to a remote socket over QPI
		UNC_H_TXR_BL_CYCLES_FULL = 0x36, // BL Egress Full
		UNC_H_TXR_BL_CYCLES_FULL_MASK_ALL = 0x300, // Counts cycles from both schedulers
		UNC_H_TXR_BL_CYCLES_FULL_MASK_SCHED0 = 0x100, // Counts cycles from scheduler bank 0
		UNC_H_TXR_BL_CYCLES_FULL_MASK_SCHED1 = 0x200, // Counts cycles from scheduler bank 1
		UNC_H_WPQ_CYCLES_NO_REG_CREDITS = 0x18, // HA IMC CHN0 WPQ Credits Empty
		UNC_H_WPQ_CYCLES_NO_REG_CREDITS_MASK_INVITOE_REMOTE = 0x2000, // Counts InvItoE coming from remote socket
		UNC_H_WPQ_CYCLES_NO_REG_CREDITS_MASK_CHN1 = 0x200, // Channel 1
		UNC_H_WPQ_CYCLES_NO_REG_CREDITS_MASK_CHN2 = 0x400, // channel 2
		UNC_H_WPQ_CYCLES_NO_REG_CREDITS_MASK_CHN3 = 0x800, // Chanell 3
		UNC_H_BT_BYPASS = 0x52, // Backup Tracker bypass
		UNC_H_BYPASS_IMC = 0x14, // HA to IMC bypass
		UNC_H_BYPASS_IMC_MASK_TAKEN = 0x200, // Bypass taken
		UNC_H_BYPASS_IMC_MASK_NOT_TAKEN = 0x100, // Bypass not taken
		UNC_H_BT_CYCLES_NE = 0x42, // Backup Tracker cycles not empty
		UNC_H_BT_OCCUPANCY = 0x43, // Backup Tracker inserts
		UNC_H_BT_OCCUPANCY_MASK_LOCAL = 0x100, // Local
		UNC_H_BT_OCCUPANCY_MASK_REMOTE = 0x200, // Remote
		UNC_H_BT_OCCUPANCY_MASK_READS_REMOTE = 0x800, // Reads remote
		UNC_H_BT_OCCUPANCY_MASK_WRITES_LOCAL = 0x1000, // Writes local
		UNC_H_BT_OCCUPANCY_MASK_WRITES_REMOTE = 0x2000, // Writes remote
		UNC_H_IGR_AD_QPI2 = 0x59, // AD QPI Link 2 credit accumulator
		UNC_H_IGR_BL_QPI2 = 0x5a, // BL QPI Link 2 credit accumulator
		UNC_H_IODC_INSERTS = 0x56, // IODC inserts
		UNC_H_IODC_CONFLICTS = 0x57, // IODC conflicts
		UNC_H_IODC_CONFLICTS_MASK_ANY = 0x100, // Any conflict
		UNC_H_IODC_OLEN_WBMTOI = 0x58, // IODC zero length writes
		UNC_H_OSB = 0x53, // OSB snoop broadcast
		UNC_H_OSB_MASK_REMOTE = 0x800, // Remote
		UNC_H_OSB_MASK_READS_LOCAL = 0x200, // Local reads
		UNC_H_OSB_EDR = 0x54, // OSB early data return
		UNC_H_OSB_EDR_MASK_INVITOE_LOCAL = 0x400, // Local InvItoE
		UNC_H_OSB_EDR_MASK_READS_LOCAL_I = 0x200, // Reads to local I
		UNC_H_OSB_EDR_MASK_READS_REMOTE_I = 0x400, // Reads to remote I
		UNC_H_OSB_EDR_MASK_READS_LOCAL_S = 0x800, // Reads to local S
		UNC_H_RING_AD_USED = 0x3e, // AD ring in use
		UNC_H_RING_AD_USED_MASK_READS_REMOTE_S = 0x1000, // Reads to remote S
		UNC_H_RING_AD_USED_MASK_CCW_VR0_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_AD_USED_MASK_CW_VR0_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 0
		UNC_H_RING_AD_USED_MASK_CW_VR0_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_AD_USED_MASK_CCW_VR1_EVEN = 0x400, // Counter-clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_AD_USED_MASK_CCW_VR1_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_AD_USED_MASK_CW_VR1_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_AD_USED_MASK_CW_VR1_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_AD_USED_MASK_CW = 0x3300, // Clockwise with any polarity on either virtual rings
		UNC_H_RING_AD_USED_MASK_CCW = 0xcc00, // Counter-clockwise with any polarity on either virtual rings
		UNC_H_RING_AK_USED = 0x3f, // AK ring in use
		UNC_H_RING_AK_USED_MASK_READS_REMOTE_S = 0x1000, // Reads to remote S
		UNC_H_RING_AK_USED_MASK_CCW_VR0_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_AK_USED_MASK_CW_VR0_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 0
		UNC_H_RING_AK_USED_MASK_CW_VR0_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_AK_USED_MASK_CCW_VR1_EVEN = 0x400, // Counter-clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_AK_USED_MASK_CCW_VR1_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_AK_USED_MASK_CW_VR1_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_AK_USED_MASK_CW_VR1_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_AK_USED_MASK_CW = 0x3300, // Clockwise with any polarity on either virtual rings
		UNC_H_RING_AK_USED_MASK_CCW = 0xcc00, // Counter-clockwise with any polarity on either virtual rings
		UNC_H_RING_BL_USED = 0x40, // BL ring in use
		UNC_H_RING_BL_USED_MASK_READS_REMOTE_S = 0x1000, // Reads to remote S
		UNC_H_RING_BL_USED_MASK_CCW_VR0_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_BL_USED_MASK_CW_VR0_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 0
		UNC_H_RING_BL_USED_MASK_CW_VR0_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 0
		UNC_H_RING_BL_USED_MASK_CCW_VR1_EVEN = 0x400, // Counter-clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_BL_USED_MASK_CCW_VR1_ODD = 0x800, // Counter-clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_BL_USED_MASK_CW_VR1_EVEN = 0x100, // Clockwise and even ring polarity on virtual ring 1
		UNC_H_RING_BL_USED_MASK_CW_VR1_ODD = 0x200, // Clockwise and odd ring polarity on virtual ring 1
		UNC_H_RING_BL_USED_MASK_CW = 0x3300, // Clockwise with any polarity on either virtual rings
		UNC_H_RING_BL_USED_MASK_CCW = 0xcc00, // Counter-clockwise with any polarity on either virtual rings
		UNC_H_DIRECTORY_LAT_OPT = 0x41, // Directory latency optimization data return path taken
		UNC_H_SNP_RESP_RECV_LOCAL = 0x60, // Snoop responses received local
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSPI = 0x100, // Filters for snoop responses of RspI. RspI is returned when the remote cache does not have the data or when the remote cache silently evicts data (e.g. RFO hit non-modified line)
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSPS = 0x200, // Filters for snoop responses of RspS. RspS is returned when the remote cache has the data but is not forwarding it. It is a way to let the requesting socket know that it cannot allocate the data in E-state
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSPIFWD = 0x400, // Filters for snoop responses of RspIFwd. RspIFwd is returned when the remote cache agent forwards data and the requesting agent is able to acquire the data in E or M state. This is commonly returned with RFO transacations. It can be either HitM or HitFE
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSPSFWD = 0x800, // Filters for snoop responses of RspSFwd. RspSFwd is returned when the remote cache agent forwards data  but holds on to its current copy. This is common for data and code reads that hit in a remote socket in E or F state
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSP_WB = 0x1000, // Filters for snoop responses of RspIWB or RspSWB. This is returned when a non-RFO requests hits in M-state. Data and code reads can return either RspIWB or RspSWB depending on how the system has been configured. InvItoE transactions will also return RspIWB because they must acquire ownership
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSP_FWD_WB = 0x2000, // Filters for snoop responses of RspxFwdxWB. This snoop response is only used in 4s systems. It is used when a snoop HITM in a remote caching agent and it directly forwards data to a requester and simultaneously returns data to the home to be written back to memory
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_RSPCNFLCT = 0x4000, // Filters for snoop responses of RspConflict. This is returned when a snoop finds an existing outstanding transaction in a remote caching agent when it CMAs that caching agent. This triggers the conflict resolution hardware. This covers both RspConflct and RspCnflctWBI
		UNC_H_SNP_RESP_RECV_LOCAL_MASK_OTHER = 0x8000, // Filters all other snoop responses
		UNC_H_TXR_BL_OCCUPANCY = 0x34, // BL Egress occupancy
		UNC_H_TXR_BL_OCCUPANCY_MASK_SCHED0 = 0x100, // Counts cycles full from scheduler bank 0
		UNC_H_TXR_BL_OCCUPANCY_MASK_SCHED1 = 0x200, // Counts cycles full from scheduler bank 1
		UNC_H_SNOOP_RESP = 0x21, // Snoop responses received
		UNC_H_SNOOP_RESP_MASK_RSPI = 0x100, // Filters for snoop responses of RspI. RspI is returned when the remote cache does not have the data or when the remote cache silently evicts data (e.g. RFO hit non-modified line)
		UNC_H_SNOOP_RESP_MASK_RSPS = 0x200, // Filters for snoop responses of RspS. RspS is returned when the remote cache has the data but is not forwarding it. It is a way to let the requesting socket know that it cannot allocate the data in E-state
		UNC_H_SNOOP_RESP_MASK_RSPIFWD = 0x400, // Filters for snoop responses of RspIFwd. RspIFwd is returned when the remote cache agent forwards data and the requesting agent is able to acquire the data in E or M state. This is commonly returned with RFO transacations. It can be either HitM or HitFE
		UNC_H_SNOOP_RESP_MASK_RSPSFWD = 0x800, // Filters for snoop responses of RspSFwd. RspSFwd is returned when the remote cache agent forwards data  but holds on to its current copy. This is common for data and code reads that hit in a remote socket in E or F state
		UNC_H_SNOOP_RESP_MASK_RSP_WB = 0x1000, // Filters for snoop responses of RspIWB or RspSWB. This is returned when a non-RFO requests hits in M-state. Data and code reads can return either RspIWB or RspSWB depending on how the system has been configured. InvItoE transactions will also return RspIWB because they must acquire ownership
		UNC_H_SNOOP_RESP_MASK_RSP_FWD_WB = 0x2000, // Filters for snoop responses of RspxFwdxWB. This snoop response is only used in 4s systems. It is used when a snoop HITM in a remote caching agent and it directly forwards data to a requester and simultaneously returns data to the home to be written back to memory
		UNC_H_SNOOP_RESP_MASK_RSPCNFLCT = 0x4000, // Filters for snoop responses of RspConflict. This is returned when a snoop finds an existing outstanding transaction in a remote caching agent when it CMAs that caching agent. This triggers the conflict resolution hardware. This covers both RspConflct and RspCnflctWBI
		
	};
};