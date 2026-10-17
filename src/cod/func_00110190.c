#include "common.h"

// TARGET: 0x00110190

extern s32 D_001326B0;

s32 func_00110000(s32);
void func_00110118(void);
void func_00106C20(s32, s32, s32);

void func_00110190(s32 arg0, s32 arg1) {
    s32 res = func_00110000(arg0);
    func_00110118();
    func_00106C20(res, arg1, D_001326B0 + 4);
}
