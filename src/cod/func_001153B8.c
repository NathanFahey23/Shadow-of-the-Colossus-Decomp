#include "common.h"

typedef union {
    u64 raw;
    s32 word;
    struct {
        u64 f0 : 14;
        u64 f1 : 2;
        u64 f2 : 8;
        u64 f3 : 8;
    } b;
} CmdUnion;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u8 pad[0x324];
} PadSocket;

extern PadSocket D_0014B598[];
s32 func_00115650(s32);
s32 func_00115778(s32);
u8 *func_00115710(s32);
void func_001155D8(s32);
s32 func_00116B30(s32, s32, s32 *, u8 *);

u8 func_001153B8(s32 arg0) {
    u8 res;
    s32 len;
    if (D_0014B598[arg0].f4 == 0) {
        if (func_00115650(arg0) < 0) {
            return 0;
        }
    }
    if (func_00115778(arg0) != 0) {
        u8 *p = func_00115710(arg0);
        if (*(s32 *)(p + 4) == 0) {
            if (func_00115650(arg0) < 0) {
                D_0014B598[arg0].f4 = 0;
                func_001155D8(arg0);
                return 0;
            }
        }
        res = *p;
    } else {
        CmdUnion bf;
        bf.b.f0 = 0xC;
        bf.b.f1 = 2;
        bf.b.f2 = 1;
        bf.b.f3 = 1;
        if (func_00116B30(arg0, bf.word, &len, &res) < 0) {
            D_0014B598[arg0].f4 = 0;
            func_001155D8(arg0);
            return 0;
        }
    }
    return res;
}
