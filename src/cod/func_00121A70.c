#include "common.h"

typedef struct {
    u8 pad[0x14];
    s32 f14;
    u8 pad2[0x24 - 0x18];
} Struct24;

extern Struct24 D_00163CC8[];

void func_001218D8(s32, s32, s32, s32, s32);

void func_00121A70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001218D8(arg0, arg1, arg2, arg3, D_00163CC8[arg0].f14);
}
