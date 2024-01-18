#include "cache.h"

struct GHB_entry {
    uint64_t addr;
    unsigned int prev_ptr = 0;
};

struct IT_entry {
    unsigned int GHB_entry_addr = 0;
};

struct GHB_entry GHB_buffer[256];
struct IT_entry IT[256];
unsigned int GHB_index = 0;


void CACHE::l2c_prefetcher_initialize()
{
    cout << "CPU " << cpu << " L2C GHB Stride prefetcher" << endl;
}

uint32_t CACHE::l2c_prefetcher_operate(uint64_t addr, uint64_t ip, uint8_t cache_hit, uint8_t type, uint32_t metadata_in)
{
    uint64_t cl_addr = addr >> LOG2_BLOCK_SIZE;
    GHB_buffer[GHB_index].addr = cl_addr;
}

uint32_t CACHE::l2c_prefetcher_cache_fill(uint64_t addr, uint32_t set, uint32_t way, uint8_t prefetch, uint64_t evicted_addr, uint32_t metadata_in)
{
    return metadata_in;
}

void CACHE::l2c_prefetcher_final_stats()
{
   cout << "CPU " << cpu << " L2C GHB Stride prefetcher final stats" << endl;
}