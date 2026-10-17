#include "common.h"

extern s32 D_00135630;
extern s32 D_00151904;
extern s32 D_00151E2C;

void func_00107000(s32);
void func_00107020(s32);
s32 func_001164A8(s32 *);

s32 func_0011A518(s32 arg0, s32 arg1) {
    s32 buf[12];
    s32 res;

    if (D_00135630 == 0) {
        return 0x81018001;
    }
    if (D_00151904 != 0) {
        return 0x81010010;
    }
    func_00107020(D_00151E2C);
    buf[2] = arg0;
    buf[3] = arg1;
    res = func_001164A8(buf);
    if (res < 0) {
        func_00107000(D_00151E2C);
        return 0x81018002;
    }
    func_00107000(D_00151E2C);
    return res;
}
