#include "common.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern Pair D_001326B8[];
extern u8 D_00132338[];
extern s32 D_001326B0;

void func_0010F3B8(s32 arg0, s32 arg1);
void func_0010F360(void *arg0, void *arg1, s32 arg2);
void func_00107260(s32 arg0);
s32 func_0010F3A8(s32 arg0);

void func_0010F3C8(void) {
    u32 i;

    func_0010F3B8(D_001326B8[0].a, D_001326B8[0].b);
    func_0010F360((void *)0x80075000, D_00132338, 0x330);
    func_00107260(0);
    func_00107260(2);
    func_0010F3B8(D_001326B8[1].a, D_001326B8[1].b);
    func_0010F3B8(D_001326B8[2].a, D_001326B8[2].b);

    for (i = 3; i < 8; i++) {
        func_0010F3B8(D_001326B8[i].a, func_0010F3A8(D_001326B8[i].a));
    }
    D_001326B0 = func_0010F3A8(3);
}
