#include "common.h"

typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  char name[16];
} DbcSocketParam;

typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  char name[16];
  s32 result;
  s32 arg1;
  s32 arg2;
  s32 pad[24];
} DbcRpcBuffer;

typedef struct 
{
  s32 pad[20];
} SifClientData;

extern s32 D_00133A28;
extern s32 D_00150DC0;
extern DbcRpcBuffer D_0014EA00;
extern SifClientData D_0014E900;
extern const char D_00138680[];

void func_00107020(s32);
void func_00107000(s32);
s32 func_00116C58(const char *, ...);
s32 func_00109980(SifClientData *, u32, s32, void *, s32, void *, s32, void *, void *);

s32 func_00115E40(DbcSocketParam *arg0, s32 arg1, s32 arg2)
{
  DbcRpcBuffer *rpc;
  s32 i;
  s32 res;
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;

  if (D_00133A28 == 0)
  {
    return 0;
  }
  func_00107020(D_00150DC0);
  f0 = arg0->f0;
  arg0->f0++;
  arg0->f0--;
  D_0014EA00.f0 = f0;
  rpc = &D_0014EA00;
  rpc->arg1 = arg1;
  f4 = arg0->f4;
  rpc->arg2 = arg2;
  rpc->f4 = f4;
  rpc->f8 = arg0->f8;
  rpc->f4 = f4;
  rpc->fC = arg0->fC;
  rpc->f10 = arg0->f10;
  for (i = 0; i < 16; i++)
  {
    rpc->name[i] = arg0->name[i];
  }

  if (func_00109980(&D_0014E900, 0x80001301, 0, &D_0014EA00, 0x90, &D_0014EA00, 0x90, 0, 0) < 0)
  {
    func_00116C58(D_00138680);
    func_00107000(D_00150DC0);
    return 0;
  }
  res = rpc->result;
  func_00107000(D_00150DC0);
  return res;
}
