#include "common.h"

s32 func_00112710(s32, s32);
s32 func_001127E0(void);
s32 func_00111F18(s32 arg0, s32 arg1, s32 arg2) {
 if (arg0 == 0) {
  if (!*D_00133940) {
   if (!func_001127E0()) return -1;
   *D_00133940=1;
  }
  return func_00112710(arg1,arg2);
 }
 return -1;
}
