#include "common.h"

u32 allocate_aligned_offset(s32 arg0, u32 arg1) {
 u32 aligned = ((g_allocation_offset + arg1 - 1) / arg1) * arg1;
 g_allocation_offset = aligned + arg0;
 return aligned;
}
