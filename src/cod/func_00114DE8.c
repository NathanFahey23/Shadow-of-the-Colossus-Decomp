#include "common.h"

void func_001147C0(void *);
void *func_001148B8(void *);
typedef struct { s32 chcr; u32 p0[3]; void *madr; u32 p1[3]; u32 qwc; u32 p2[3]; void *tadr; } dma_chan_t;
void func_00114DE8(dma_chan_t *d, void *addr, u32 size) { void *t = func_001148B8(addr); func_001147C0(d); if ((void *)-1 != d->madr) d->madr=t; d->qwc=size; d->chcr &= -13; d->chcr &= -2; d->chcr |= 0x100; }
