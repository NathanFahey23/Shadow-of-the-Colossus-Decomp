#include "common.h"

extern s32 D_0014EA00[];
extern s32 D_0014E900[];
extern char D_00138660[];
s32 func_00109980(void *, u32, s32, void *, s32, void *, s32, s32, s32);
void func_00116C58(const char *, ...);

s32 func_00115DD0(s32 arg0) {
    D_0014EA00[1] = arg0;
    if (func_00109980(D_0014E900, 0x80001304, 0, D_0014EA00, 0x90, D_0014EA00, 0x90, 0, 0) < 0) {
        func_00116C58(D_00138660);
        return 0;
    }
    return D_0014EA00[0];
}
