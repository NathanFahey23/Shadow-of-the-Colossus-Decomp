#include "common.h"

void func_001132E8(u32 **pkt, u32 align, u32 offset) {
    u32 mask = 0xFFFFFFFFU >> (32 - ((align + 2) & 0x1F));
    u32 *p = *pkt;
    u32 *target = (u32 *)(((u32)p & ~mask) + (offset << 2));
    if (target < p) {
        u32 tmp = (u32)target + 1;
        target = (u32 *)(tmp + mask);
    }
    while (*pkt < target) {
        **pkt = 0;
        (*pkt)++;
    }
}
