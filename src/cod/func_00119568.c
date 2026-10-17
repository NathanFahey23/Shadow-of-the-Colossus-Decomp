#include "common.h"

s32 func_00118DD0(s32, s32, void *, s32);
s32 func_00118E58(s32, s32, s32, s32, void *, s32);

s32 func_00119568(s32 arg0, s32 arg1, s32 *out) {
    s32 buf[256];
    s32 stat;
    s32 count;
    s32 i;

    count = func_00118DD0(arg0, arg1, buf, 0x100);
    if (count < 0) {
        return -1;
    }
    if (count == 0) {
        return -2;
    }
    for (i = 0; i < count; i++) {
        if (func_00118E58(arg0, arg1, buf[i], 8, &stat, 4) < 0) {
            return -1;
        }
        if (stat & 2) {
            break;
        }
    }
    if (i == count) {
        return -2;
    }
    *out = buf[i];
    return 0;
}
