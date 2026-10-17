#include "common.h"

// TARGET: 0x00118380
// TC: 2.9
// -G0
// -O2

struct LibnetClient {
    u8 pad[0x30];
    s32 buffer_size;
};

extern char D_00138AC0[];
extern char D_00138AF8[];

void func_00108EF8(char *, ...);
s32 func_00119F18(struct LibnetClient *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 func_00118380(struct LibnetClient *client, s32 fno, void *arg2, s32 ssize, s32 rsize) {
    s32 buf;
    s32 aligned_ssize;
    s32 aligned_rsize;

    buf = client->buffer_size;
    aligned_ssize = (ssize + 0x3F) & -0x40;
    aligned_rsize = (rsize + 0x3F) & -0x40;

    if (buf < aligned_ssize || buf < aligned_rsize) {
        func_00108EF8(D_00138AC0);
        func_00108EF8(D_00138AF8, fno, aligned_ssize, aligned_rsize, buf);
        return -0x21F;
    }

    return func_00119F18(client, fno, 0, arg2, aligned_ssize, arg2, aligned_rsize, (void *)0, (void *)0);
}
