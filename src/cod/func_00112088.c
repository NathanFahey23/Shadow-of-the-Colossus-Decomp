#include "common.h"

s32 func_00112088(s32 arg0, void *arg1) {
*(s64 *)((u8 *)arg1 + 0x48) = 0;
*(s32 *)((u8 *)arg1 + 4) = 0x2000;
return 0;
}
