
#include <icl_recepies.hh>

namespace optkit::core::recepies::intel::icl
{
    /**
     * @brief No need for exact numbers, we only need intuitions
     * 
     * @return const std::vector<std::pair<uint64_t, std::string>> 
     */
    const std::vector<std::pair<uint64_t, std::string>> Recepies::computational_intensity()
    {
        return {
            {{optkit::intel::icl::INSTRUCTIONS_RETIRED}, "instructions"},

            {optkit::intel::icl::FP_ARITH_INST_RETIRED |
                 optkit::intel::icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR |
                 optkit::intel::icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_SINGLE |
                 optkit::intel::icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__SCALAR_DOUBLE |
                 optkit::intel::icl::FP_ARITH__MASK__INTEL_ICL_FP_ARITH_INST_RETIRED__VECTOR,
             "flops_executed"},

            {{optkit::intel::icl::MEM_LOAD_RETIRED |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L1_HIT |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L1_MISS |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L2_HIT |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L2_MISS |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L3_HIT |
              optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L3_MISS},
             "cache_hits_misses"},

            {optkit::intel::icl::MEM_LOAD_RETIRED | optkit::intel::icl::MEM_LOAD_RETIRED__MASK__INTEL_ICL_MEM_LOAD_RETIRED__L3_MISS,
             "l3_miss"}};

        // {optkit::intel::icl::MEM_LOAD_L3_MISS_RETIRED |
        //      optkit::intel::icl::MEM_LOAD_L3_MISS_RETIRED__MASK__INTEL_ICL_MEM_LOAD_L3_MISS_RETIRED__REMOTE_DRAM |
        //      optkit::intel::icl::MEM_LOAD_L3_MISS_RETIRED__MASK__INTEL_ICL_MEM_LOAD_L3_MISS_RETIRED__LOCAL_DRAM,
        //  "l3_miss_load_from_remote_local_dram"}};
    }

}