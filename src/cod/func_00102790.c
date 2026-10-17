#include "common.h"

extern s32 D_0013B790[256];

static inline s32 FindThreadIndex(void) {
    s32 i;
    for (i = 0; i < 256; i++) {
        if (D_0013B790[i] < 0) {
            return i;
        }
    }
    return -1;
}

void func_00102790(s32 thread_id) {
    D_0013B790[FindThreadIndex()] = thread_id;
}
