#include "common.h"

extern u8 D_0015F480[];

s32 func_00120438(void) {
    u8 *p = D_0015F480;
    u8 *end = D_0015F480 + 0x4020;
    do {
        *(s32 *)(p + 0x0) = -1;
        *(s32 *)(p + 0xC) = 0;
        p += 0x2010;
    } while ((s32)p < (s32)end);
    return 1;
}
