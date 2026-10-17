#include "common.h"

s32 func_0012FA00(s64 x) {
    s32 hx = (s32)(x >> 32);
    s32 lx = (s32)x;
    do {
        hx &= 0x7FFFFFFF;
        hx |= ((u32)(lx | -lx)) >> 31;
        hx = 0x7FF00000 - hx;
    } while (0);
    return ((u32)hx) >> 31;
}
