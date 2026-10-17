#include "common.h"

extern s32 D_00163CC8;

s32 func_00122018(u32 arg0) {
    if (arg0 <= 1) {
        goto label;
    }
    return 0;
label:
    return *(s32 *)((u8 *)&D_00163CC8 + arg0 * 0x24) != 0;
}
