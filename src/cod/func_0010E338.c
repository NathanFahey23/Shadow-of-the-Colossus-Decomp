#include "common.h"

// TARGET: 0x0010E338

s32 func_00128188(void *, void *, s32);
extern void *D_00132334;
extern char D_0013227C[];
extern char D_001475A8[];

s32 func_0010E338(void) {
    void *a = D_0013227C;
    void *b = D_001475A8;
    s32 res = 0;
    if (func_00128188(b, a, 4) != 0 && func_00128188(b, D_00132334, 4) != 0) {
        res = func_00128188(a, D_00132334, 4) != 0;
    }
    return res;
}
