#ifndef FHASH_INCLUDED
#define FHASH_INCLUDED

#include <stdint.h>

typedef struct FHB_struct {
    uint64_t val[2048];
} FHB;

// Hash a block
FHB FH_hash(const FHB block, const uint64_t rounds);
// increment a block
void FH_inc(FHB* block);

#endif
