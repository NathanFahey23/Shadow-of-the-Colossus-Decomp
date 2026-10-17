#include "common.h"

// TARGET: 0x0010AAC8

s32 func_00128188(void *, void *, s32);
extern void *D_00132328;
extern char D_0013227C[];
extern char D_001470E8[];

s32 func_0010AAC8(void) {
    void *a = D_0013227C;
    void *b = D_001470E8;
    s32 res = 0;
    if (func_00128188(b, a, 4) != 0 && func_00128188(b, D_00132328, 4) != 0) {
        res = func_00128188(a, D_00132328, 4) != 0;
    }
    return res;
}
