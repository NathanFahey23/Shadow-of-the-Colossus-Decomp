#include "common.h"

// TARGET: 0x00124EB8
// TC: 2.96
// -G0
// -O2

typedef void (*func_ptr)(void);

extern func_ptr *D_00135964;
extern s32 D_00135968;
extern int D_001360E0;

void func_001261D8(void *);

void func_00124EB8(void) {
    while (*D_00135964) {
        func_ptr *p = D_00135964;
        D_00135964 = p + 1;
        (*p)();
    }

    if (D_00135968 == 0) {
        D_00135968 = 1;
        func_001261D8(&D_001360E0);
    }
}
