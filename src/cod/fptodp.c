#include "common.h"

typedef struct { s32 kind, sign, exponent; u32 fraction; } FloatParts;
void unpack_float(f32 *, FloatParts *);
f64 pack_double(s32, s32, s32, u64);
f64 fptodp(f32 value) {
 FloatParts parts;
 unpack_float(&value, &parts);
 return pack_double(parts.kind, parts.sign, parts.exponent, (u64)parts.fraction << 30);
}
