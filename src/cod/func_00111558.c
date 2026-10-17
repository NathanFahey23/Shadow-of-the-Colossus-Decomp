#include "common.h"

u64 func_001240A8(u64, u64);

void func_00111558(u64 clocks, u32 *psec, u32 *pusec) {
    u32 s = func_001240A8(clocks, 147456000);
    if (psec != 0) {
        *psec = s;
    }
    if (pusec != 0) {
        *pusec = func_001240A8((clocks - (u64)s * 147456000) * 1000000, 147456000);
    }
}
