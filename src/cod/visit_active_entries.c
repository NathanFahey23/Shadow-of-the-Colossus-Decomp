#include "common.h"

s32 visit_active_entries(s32 arg0, s32 (*arg1)(void *)) {
s32 count, result;
char *item; char *block;
block = (char *)(arg0 + 0x1D8); result = 0;
if (block != NULL) { do {
count = *(s32 *)(block+4); item = *(char **)(block+8);
count--;
if (count >= 0) { do {
if (*(s16 *)(item+12) != 0) result |= arg1(item);
count--; item += 0x58;
} while (count >= 0); }
block = *(char **)block;
} while (block != NULL); }
return result;
}
