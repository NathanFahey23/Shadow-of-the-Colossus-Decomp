#include "common.h"

// TARGET: 0x0012E490
// TC: 2.96
// -G0
// -O2

typedef struct Foo {
    u8 pad[0x30];
    s32 field_30;
    s32 field_34;
} Foo;

extern u8 D_00139B48;
extern u8 D_00139B38;

s32 func_00128E6C(s32, void *);

void *func_0012E490(Foo *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        if (func_00128E6C(arg2, &D_00139B48) != 0 && func_00128E6C(arg2, &D_00139B38) != 0) {
            return (void *)0;
        }
        arg0->field_30 = arg1;
        arg0->field_34 = arg2;
    }
    return &D_00139B48;
}
