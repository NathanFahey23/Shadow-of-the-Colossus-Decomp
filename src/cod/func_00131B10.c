#include "common.h"

typedef signed int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;

typedef s32 SItype;
typedef double FLO_type;
typedef u64 fractype;

#define MAX_SI_INT ((SItype) ((unsigned) (~0)>>1))
#define FRACBITS 52
#define NGARDS 8

typedef enum
{
  CLASS_SNAN,
  CLASS_QNAN,
  CLASS_ZERO,
  CLASS_NUMBER,
  CLASS_INFINITY
} fp_class_type;

typedef struct
{
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
  union
  {
    fractype ll;
    s32 l[2];
  } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;
} FLO_union_type;

void func_001271B0 (FLO_union_type *, fp_number_type *);

SItype func_00131B10 (FLO_type arg_a)
{
  fp_number_type a;
  SItype tmp;
  SItype res = 0;

  func_001271B0 ((FLO_union_type *) & arg_a, &a);
  if ((a.class ^ 2) == 0)
    return res;
  if ((u32)a.class < 2)
    return res;
  if ((a.class ^ 4) == 0)
    return a.sign ? (-MAX_SI_INT)-1 : MAX_SI_INT;
  res = 0;
  if (a.normal_exp < 0)
    return res;
  if (a.normal_exp >= 31)
    return a.sign ? (-MAX_SI_INT)-1 : MAX_SI_INT;
  tmp = a.fraction.ll >> (60 - a.normal_exp);
  return a.sign ? (-tmp) : (tmp);
}
