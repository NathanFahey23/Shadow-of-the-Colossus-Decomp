#include "common.h"

// TARGET: 0x00117798
// TC: 2.9
// -G0
// -O2

extern s32 D_00133A50;
extern s32 D_00133A74;
extern u8 D_00134C10[];
extern u8 D_001389A0[];

s32 func_00108EF8(void *);
s32 func_00107A08(s32);
s32 func_00109B80(void *);

s32 func_00117798(s32 mode) {
    if (mode == 0) {
        if (D_00133A50 > 0) {
            func_00108EF8(D_001389A0);
        }
        while (D_00133A74 != 0 || func_00109B80(D_00134C10) != 0) {
            func_00107A08(0xFA0);
        }
        return 0;
    }

    if (D_00133A74 || func_00109B80(D_00134C10)) {
        return 1;
    }
    return 0;
}
