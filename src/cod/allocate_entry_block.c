#include "common.h"

void *func_00127A60(s32, s32);
void *func_001283D0(void *, s32, s32);
void *allocate_entry_block(s32 allocator, s32 count) {
s32 size;
char *block, *entries;
size = count * 0x58;
block = func_00127A60(allocator, size + 12);
entries = block + 12;
if (block != NULL) {
*(s32 *)(block + 4) = count;
*(s32 *)block = 0;
*(char **)(block + 8) = entries;
func_001283D0(entries, 0, size);
return block;
}
return NULL;
}
