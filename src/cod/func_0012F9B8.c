#include "common.h"

s32 func_0012F9B8(s64 x) {
    s32 hx = (s32)(x >> 32);
    s32 lx = (s32)x;
    do {
        hx &= 0x7FFFFFFF;
        hx |= ((u32)(lx | -lx)) >> 31;
        hx = 0x7FF00000 - hx;
        return 1 - ((s32)(((u32)(hx | -hx)) >> 31));
    } while (0);
}
