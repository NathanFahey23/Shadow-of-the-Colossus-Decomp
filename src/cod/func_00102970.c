#include "common.h"

extern s32 D_0013C790[256];

static inline s32 FindIopMemoryIndex(s32 iopmem_id) {
    s32 i;
    for (i = 0; i < 256; i++) {
        if (D_0013C790[i] == iopmem_id) {
            return i;
        }
    }
    return -1;
}

s32 func_00102970(s32 iopmem_id) {
    s32 i = FindIopMemoryIndex(iopmem_id);
    if (i >= 0) {
        D_0013C790[i] = 0;
    }
    return i;
}
