#include "common.h"

extern s32 D_0013BB90[];

void func_00102A00(void) {
    s32 val = -1;
    s32 count = 255;
    s32 *p = D_0013BB90 + count;
    do {
        count--;
        *p = val;
        p--;
    } while (count >= 0);
}
