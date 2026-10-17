#include "common.h"

s32 remove_trailing_zero_bits(u32 *arg0) {
s32 result, count; u32 value = *arg0;
if (value & 7) {
 result = 0;
 if (!(value & 1)) {
 if (value & 2) { *arg0 = value >> 1; return 1; }
 *arg0 = value >> 2; return 2;
 }
 return result;
}
count = 0;
if (!(value & 0xffff)) { count = 16; value >>= 16; }
if (!(value & 0xff)) { count += 8; value >>= 8; }
if (!(value & 0xf)) { count += 4; value >>= 4; }
if (!(value & 3)) { count += 2; value >>= 2; }
if (!(value & 1)) { value >>= 1; count++; if (!value) return 32; }
*arg0 = value;
return count;
}
