#include "common.h"

// TARGET: 0x00116E58
// TC: 2.9
// -G0
// -O2

typedef struct {
    s32 status;
    void *func;
    void *stack;
    s32 stack_size;
    void *gp_reg;
    s32 initial_priority;
    s32 current_priority;
    u32 attr;
    u32 option;
} ee_thread_t;

extern s32 D_00133A54;
extern ee_thread_t D_00150E18;
extern u8 D_00138890[];

void func_00116D88(void);
s32 func_00106E70(s32, s32);
s32 func_00106DE0(ee_thread_t *);
s32 func_00107AD0(s32, void *);

s32 func_00116E58(s32 priority, void *stackAddr, s32 stackSize) {
    s32 ret = 1;

    if (D_00133A54 == 0) {
        D_00150E18.stack_size = stackSize;
        D_00150E18.func = func_00116D88;
        D_00150E18.stack = stackAddr;
        D_00150E18.initial_priority = priority;
        D_00150E18.option = (u32)D_00138890;
        D_00150E18.gp_reg = (void *)0;

        D_00133A54 = func_00106DE0(&D_00150E18);
        func_00107AD0(D_00133A54, (void *)0);
    } else {
        func_00106E70(D_00133A54, priority);
        ret = 0;
    }
    return ret;
}
