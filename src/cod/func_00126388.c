#include "common.h"

typedef struct Chunk {
    u32 size;
    s32 f4;
    u32 start;
    u32 len;
} Chunk;

Chunk *func_00126388(Chunk *chunk, u32 addr) {
    while (chunk->size != 0) {
        if (chunk->f4 != 0 && chunk->start != 0) {
            if (addr - chunk->start < chunk->len) {
                return chunk;
            }
        }
        chunk = (Chunk *)((u8 *)chunk + chunk->size + 4);
    }
    return 0;
}
