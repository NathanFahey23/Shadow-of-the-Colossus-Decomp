#include "common.h"

typedef struct {
    u64 f0 : 14;
    u64 f1 : 2;
    u64 f2 : 8;
    u64 f3 : 8;
} CmdBits;

void *func_0012821C(void *, const void *, u32);
s32 func_00116828(s32, CmdBits, s32 *, void *);

typedef struct {
    s32 f0;
    s32 f4;
    u8 data[0x28];
} Pkt115940;

s32 func_00115940(s32 arg0, s32 arg1, void *arg2, s32 arg3, void *arg4) {
    Pkt115940 pkt;
    s32 len = 0x28;
    CmdBits bf;
    bf.f0 = 0xB;
    bf.f1 = 1;
    bf.f2 = 3;
    bf.f3 = 1;
    pkt.f4 = arg3;
    func_0012821C(pkt.data, arg4, arg3);
    pkt.f0 = arg1;
    func_0012821C(((Pkt115940 *)(arg3 + (s32)&pkt))->data, arg2, arg1);
    return func_00116828(arg0, bf, &len, &pkt);
}
