#include "common.h"

extern s32 D_00132280;
extern s32 D_00143C90;

typedef struct {
    u8 pad0[4];
    u32 index;
    struct {
        u8 flag;
        u8 data;
    } entries[512];
} Queue;

extern Queue D_00143C98;

void func_00107010(s32 arg0);

s32 func_001078F0(u32 arg0) {
    u32 idx;
    u32 slot;

    if (arg0 >= 0x80) {
        return -1;
    }
    if (!D_00132280) {
        return -1;
    }
    idx = D_00143C98.index & 0x1FF;
    D_00143C98.index = idx + 1;
    D_00143C98.entries[idx].flag = 1;
    D_00143C98.entries[idx].data = arg0;
    func_00107010(D_00143C90);
    return arg0;
}
