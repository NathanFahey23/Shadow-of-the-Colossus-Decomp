#include "common.h"

extern s32 D_0013BB90[256];

s32 func_00102930(s32 arg0) {
    s32 i = 0;
    s32 *p = D_0013BB90;
    do {
        if (*p == arg0) {
            *p = -1;
            return arg0;
        }
        i++;
        p++;
    } while (i < 256);
    return -1;
}
