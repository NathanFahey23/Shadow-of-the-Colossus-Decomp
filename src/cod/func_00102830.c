#include "common.h"

extern s32 D_0013C790[256];

s32 func_00102830(s32 arg0) {
    s32 *p;
    s32 i;
    s32 ret;

    if (arg0 == 0) {
        goto fail;
    }

    p = D_0013C790;
    i = 0;
    do {
        if (*p++ == 0) {
            ret = i;
            goto found;
        }
        i++;
    } while (i < 256);
    ret = -1;

found:
    if (ret >= 0) {
        D_0013C790[ret] = arg0;
        return ret;
    }

fail:
    return -1;
}
