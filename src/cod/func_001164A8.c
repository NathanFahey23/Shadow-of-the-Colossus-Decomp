#include "common.h"

void func_00107000(s32);
s32 func_00107020(s32);
s32 func_00109980(void *, u32, s32, void *, s32, void *, s32, s32, s32);
void func_00116C58(const char *, ...);

extern char D_00138720[];
extern s32 D_0014E900[];
extern s32 D_0014EA00[];
extern s32 D_00150DC0;

s32 func_001164A8(s32 *arg0) {
    s32 res;
    func_00107020(D_00150DC0);
    D_0014EA00[2] = 2;
    D_0014EA00[4] = arg0[2];
    D_0014EA00[5] = arg0[3];
    if (func_00109980(D_0014E900, 0x8000131D, 0, D_0014EA00, 0x90, D_0014EA00, 0x90, 0, 0) < 0) {
        func_00116C58(D_00138720);
        func_00107000(D_00150DC0);
        return -1;
    }
    res = D_0014EA00[1];
    func_00107000(D_00150DC0);
    return res;
}
