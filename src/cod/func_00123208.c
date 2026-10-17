#include "common.h"

s32 func_00106FF0(s32);
s32 func_0010FB20(void);
void func_0010FB70(s32);
extern s32 D_00135960;

s32 func_00123208(void) {
    s32 id;
    s32 ret = func_0010FB20();
    id = D_00135960;
    D_00135960 = -1;
    if (ret != 0) {
        func_0010FB70(-1);
    }
    if (id >= 0) {
        func_00106FF0(id);
    }
    return 0;
}
