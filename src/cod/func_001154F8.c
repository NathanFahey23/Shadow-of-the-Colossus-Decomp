#include "common.h"

typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
} PadInfoEntry;

typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  void *buf;
  PadInfoEntry info[0x28];
  u8 pad[0xA0];
} PadSocket;

extern PadSocket D_0014B598[];

s32 func_001154F8(s32 arg0, u8 *arg1, s32 arg2)
{
  PadInfoEntry entry = D_0014B598[arg0].info[arg2];
  s32 res;
  if (entry.f0 == 0)
  {
    goto err;
  }
  switch (entry.f4)
  {
    case 1:
      if (!((arg1[entry.f8] >> entry.fC) & 1))
        return entry.f4;
      else
        return 0;

    case 8:
      res = (arg1[entry.f8] >> entry.fC) & 0xFF;
      if (entry.fC != 0)
      {
        entry.f8++;
        res = (res | (arg1[entry.f8] << (entry.f4 - entry.fC))) & 0xFF;
      }
      return res;

    default:
      return -1;
  }

err:
  return -1;
}
