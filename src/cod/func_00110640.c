#include "common.h"

extern s32 D_00133920;

s32 func_00110640(void) {
    if (D_00133920 < 0) {
        return 0x80008001;
    }
    return *(volatile u32 *)0x10001010 & 3;
}
