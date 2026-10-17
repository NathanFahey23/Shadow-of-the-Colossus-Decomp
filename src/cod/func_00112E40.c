#include "common.h"

s32 func_00112CC8(u32, s32, void *, s32, s32, s32, s32);

s32 func_00112E40(u32 command, void *buffer, s32 size, s32 word0, s32 word1, s32 word2) {
    s32 ret = func_00112CC8(command, 1, buffer, size, word0, word1, word2);
    return ret;
}
