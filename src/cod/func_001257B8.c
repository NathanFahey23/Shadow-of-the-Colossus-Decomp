#include "common.h"

typedef struct DoubleParts { s32 kind; s32 sign; s32 exponent; u64 fraction; } DoubleParts;
f64 func_001270D8(DoubleParts *);
f64 func_001257B8(s32 value) {
 DoubleParts p;
 p.kind = 3;
 p.sign = (u32)value >> 31;
 if (!value) p.kind = 2;
 else {
  p.exponent = 60;
  if (p.sign) {
   if (value == (-2147483647 - 1)) return -2147483648.0;
   p.fraction = -value;
  } else p.fraction = value;
  while (p.fraction < ((u64)1 << 60)) {
   p.fraction <<= 1;
   p.exponent--;
  }
 }
 return func_001270D8(&p);
}
