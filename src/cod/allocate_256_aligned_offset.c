#include "common.h"

static inline u32 align_offset_inline(s32 size, u32 alignment) {
 u32 aligned = ((g_allocation_offset + alignment - 1) / alignment) * alignment;
 g_allocation_offset = aligned + size;
 return aligned;
}
u32 allocate_256_aligned_offset(s32 size) { return align_offset_inline(size, 256); }
