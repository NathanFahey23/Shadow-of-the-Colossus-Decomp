#include "common.h"

struct StructA {
    u8 pad[0x10];
    s32 index;
    s32 val;
};

struct StructB {
    u8 pad[0x1C];
    s32 *base;
};

void func_001128A0(struct StructA *arg0, struct StructB *arg1) {
    arg1->base[arg0->index] = arg0->val;
}
