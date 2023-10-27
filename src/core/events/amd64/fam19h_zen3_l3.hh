#include <cstdint>

namespace optkit_amd64{
	enum class fam19h_zen3_l3 : uint64_t {
		UNC_L3_REQUESTS = 0x04, // Number of requests to L3 cache
		UNC_L3_REQUESTS_MASK_ALL = 0xff, // All types of requests
		UNC_L3_MISS_LATENCY = 0x90, // Each cycle
		UNC_L3_MISSES = 0x9a, // Number of L3 cache misses
		UNC_L3_MISSES_MASK_ALL = 0xff, // All types of requests
		};};