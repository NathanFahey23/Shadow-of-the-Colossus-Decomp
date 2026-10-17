#include "common.h"

#include "scus_map.h"

s32 func_00117798(s32);
s32 func_0010FB20(void);
void func_0010FB70(void);
extern void *D_00150E00;
extern void *D_00150E04;

void *func_00116C80(void *arg0) {
    void *old;
    s32 intr;
    if (func_00117798(1) != 0) {
        return 0;
    }
    intr = func_0010FB20();
    old = D_00150E00;
    D_00150E00 = arg0;
    SAVE_GP(D_00150E04);
    if (intr != 0) {
        func_0010FB70();
    }
    return old;
}
