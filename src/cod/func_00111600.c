#include "common.h"

u64 func_001240A8(u64, u64);

u64 func_00111600(u32 sec, u32 usec) {
    u64 prod = (u64)sec * 147456000;
    return prod + func_001240A8((u64)usec * 147456000, 1000000);
}
