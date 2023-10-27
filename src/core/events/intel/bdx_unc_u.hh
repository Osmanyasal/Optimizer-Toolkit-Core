#include <cstdint>

namespace optkit_intel{
	enum class bdx_unc_u : uint64_t {
		UNC_U_EVENT_MSG = 0x42, // Virtual Logical Wire (legacy) message were received from uncore
		UNC_U_EVENT_MSG_MASK_DOORBELL_RCVD = 0x800, // VLW Received
		UNC_U_PHOLD_CYCLES = 0x45, // PHOLD cycles.  Filter from source CoreID.
		UNC_U_PHOLD_CYCLES_MASK_ASSERT_TO_ACK = 0x100, // Cycles PHOLD Assert to Ack. Assert to ACK
		UNC_U_RACU_REQUESTS = 0x46, // Number outstanding register requests within message channel tracker
		};};