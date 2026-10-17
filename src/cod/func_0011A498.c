#include "common.h"

// -fno-schedule-insns
s32 func_001220B0(void);
s32 func_00122048(s32);
extern s32 D_00135630;
extern s32 D_00151904;

s32 func_0011A498(void) {
    s32 val = func_001220B0();
    if (val < 0) {
        return 0x81018002;
    }
    if (D_00135630 == 0) {
        return 0x81018001;
    }
    if (D_00151904 != 0) {
        return 0x81010010;
    }
    return func_00122048(val) ? 0 : 0x81018002;
}
