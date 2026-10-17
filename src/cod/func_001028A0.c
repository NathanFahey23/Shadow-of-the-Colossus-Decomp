#include "common.h"

extern s32 D_0013BF90[];

s32 func_001028A0(s32 arg0) {
    s32 *base = D_0013BF90;
    s32 i = 0;
    s32 minus1 = -1;
    s32 *p = base + 1;
    do {
        if (*p == arg0) {
            *p = minus1;
            p[-1] = minus1;
            return arg0;
        }
        i++;
        p += 2;
    } while (i < 256);
    return minus1;
}
