#include "common.h"

typedef struct Chunk {
    u32 size;
    s32 f4;
    s32 f8;
} Chunk;

s32 func_001262B8(Chunk *chunk) {
    s32 count = 0;
    while (chunk->size != 0) {
        if (chunk->f4 != 0 && chunk->f8 != 0) {
            count++;
        }
        chunk = (Chunk *)((u8 *)chunk + chunk->size + 4);
    }
    return count;
}
