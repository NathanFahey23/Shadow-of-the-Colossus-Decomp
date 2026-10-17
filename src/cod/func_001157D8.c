#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} PadInfoEntry;

s32 func_001157D8(u8 *arg0, PadInfoEntry *arg1) {
    s32 bit;
    s32 byte_idx;
    s32 i;
    s32 bit_idx;
    bit = 0;
    byte_idx = 0;
    bit_idx = 0;
    i = 0;
    do {
        if ((*arg0 >> bit) & 1) {
            arg1->f0 = 1;
            arg1->f8 = byte_idx;
            arg1->fC = bit_idx;
            if ((u32)(i - 0x10) < 0x10U || (u32)(i - 0x23) < 4U) {
                arg1->f4 = 8;
                byte_idx++;
            } else {
                bit_idx++;
                arg1->f4 = 1;
                if ((bit_idx & 7) == 0) {
                    byte_idx++;
                    bit_idx = 0;
                }
            }
        } else {
            arg1->f0 = 0;
            arg1->f8 = 0;
            arg1->fC = 0;
        }
        bit++;
        i++;
        if ((bit & 7) == 0) {
            arg0++;
            bit = 0;
        }
        arg1++;
    } while (i < 0x28);
    return 1;
}
