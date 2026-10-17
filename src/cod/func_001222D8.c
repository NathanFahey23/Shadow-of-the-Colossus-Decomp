#include "common.h"

s32 func_00109980(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001221D0(void);
void func_001230B0(void);
extern u8 D_00167EC0[];
extern u8 D_00167F00[];

s32 func_001222D8(void) {
    int one = 1;
    s32 res;
    int cond;
    func_001230B0();
    func_001221D0();
    res = func_00109980(D_00167EC0, 0xF, 0, D_00167F00, 0x1000, D_00167F00, 0x1000, 0, 0);
    cond = res > -one;
    return cond ? 0 : res;
}
