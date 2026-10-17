#include "common.h"

s32 func_0010FFC0(u8 *dest, const u8 *src, u32 len) {
    u32 i = 0;
    if (len != 0) {
        do {
            *dest++ = *src++;
            i++;
        } while (i < len);
    }
    return 0;
}
