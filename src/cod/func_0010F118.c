#include "common.h"

s32 func_001073F0(s32);
void func_00111D50(void);
void func_00111CA8(s32, s32);

s32 func_0010F118(void) {
    if (func_001073F0(4) & 0x40000) {
        func_00111D50();
        func_00111CA8(1, 1);
        func_00111CA8(0, 1);
        return 1;
    }
    return 0;
}
