#include "common.h"

extern s32 D_0013B790[];

void func_00102A40(void) {
    s32 val = -1;
    s32 count = 255;
    s32 *p = D_0013B790 + count;
    do {
        count--;
        *p = val;
        p--;
    } while (count >= 0);
}
