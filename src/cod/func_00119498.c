#include "common.h"

s32 func_00118380(s32, s32, void *, s32, s32);

s32 func_00119498(s32 arg0, s32 *buf, s32 *dst, s32 count, s32 cmd) {
    s32 *p_dst;
    s32 rem;
    s32 *src;

    if (func_00118380(arg0, cmd, buf, 0, (count << 2) + 4) < 0) {
        return -0x21E;
    }
    if (count <= 0) {
        return *buf;
    }
    p_dst = dst;
    rem = count;
    src = buf + 1;
    do {
        *p_dst++ = *src++;
        rem--;
    } while (rem != 0);
    return *buf;
}
