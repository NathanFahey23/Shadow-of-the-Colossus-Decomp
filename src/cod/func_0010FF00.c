#include "common.h"

typedef struct {
    s32 a;
    s32 b;
} Pair10FF00;

extern Pair10FF00 D_00133150[];
extern u8 D_001329A8[];
s32 func_0010FE98(void);
void func_0010FE30(s32, s32);
void func_0010FE40(u32, void *, s32);
void func_00107260(s32);
s32 func_0010FE88(s32);

void func_0010FF00(void) {
    u32 i;
    if (func_0010FE98() != 0) {
        func_0010FE30(D_00133150[0].a, D_00133150[0].b);
        func_0010FE40(0x80074000, D_001329A8, 0x7A8);
        func_00107260(0);
        func_00107260(2);
        func_0010FE30(D_00133150[1].a, D_00133150[1].b);
        for (i = 2; i < 3; i++) {
            func_0010FE30(D_00133150[i].a, func_0010FE88(D_00133150[i].a));
        }
    }
}
