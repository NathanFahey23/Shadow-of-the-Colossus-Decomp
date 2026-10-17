#include "common.h"

s32 func_001311B8(s32, s32, s32, s32);
s32 func_0012FB28(void *arg0, s32 arg1, s32 arg2)
{
  s32 result = func_001311B8(*((s32 *) (((u8 *) arg0) + 0x54)), *((s16 *) (((u8 *) arg0) + 0xe)), arg1, arg2);
  s64 ext = result;
  unsigned long long new_var;
  new_var = -1;
  if (result == new_var)
  {
    *((u16 *) (((u8 *) arg0) + 0xc)) &= 0xefff;
  }
  else
  {
    *((s32 *) (((u8 *) arg0) + 0x50)) = ext;
    *((u16 *) (((u8 *) arg0) + 0xc)) |= 0x1000;
  }
  return result;
}
