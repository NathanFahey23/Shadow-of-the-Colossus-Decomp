#include "common.h"

#include "scus_map.h"

s32 func_0010FB20(void);
void func_0010FB70(void);
extern s32 D_00133A88;
extern void *D_00150E08;
extern void *D_00150E0C;
extern s32 D_00150E10;
void func_00117210(void);

void *func_00117138(void *arg0, s32 arg1) {
    void *old;
    s32 intr;
    if (D_00133A88 < 0) {
        func_00117210();
    }
    intr = func_0010FB20();
    old = D_00150E08;
    D_00150E10 = arg1;
    D_00150E08 = arg0;
    SAVE_GP(D_00150E0C);
    if (intr != 0) {
        func_0010FB70();
    }
    return old;
}
