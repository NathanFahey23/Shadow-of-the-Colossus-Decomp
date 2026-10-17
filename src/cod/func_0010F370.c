#include "common.h"

s32 func_0010F370(u32 *dest, const u32 *src, u32 len) {
    u32 i = 0;
    len >>= 2;
    if (len != 0) {
        do {
            *dest++ = *src++;
            i++;
        } while (i < len);
    }
    return 0;
}
