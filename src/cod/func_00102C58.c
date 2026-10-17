#include "common.h"

extern s32 D_0013C790[];

void func_00102C58(void) {
    s32 count = 255;
    s32 *p = D_0013C790 + count;
    do {
        count--;
        *p = 0;
        p--;
    } while (count >= 0);
}
