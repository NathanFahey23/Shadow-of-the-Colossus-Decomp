#include "common.h"

typedef enum 
{
  CLASS_SNAN = 0,
  CLASS_QNAN = 1,
  CLASS_ZERO = 2,
  CLASS_NUMBER = 3,
  CLASS_INFINITY = 4
} fp_class_type;

typedef struct 
{
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
  unsigned int fraction;
} fp_single_type;

void unpack_float(unsigned int *src, fp_single_type *dst)
{
  unsigned int val = *src;
  unsigned int frac = val & 0x7FFFFF;
  int exp = (val >> 23) & 0xFF;
  int normal_exp;
  unsigned int fraction = frac << 7;
  dst->sign = val >> 31;
  if (exp == 0)
  {
    dst->class = CLASS_ZERO;
    return;
  }
  normal_exp = exp - 127;
  dst->normal_exp = normal_exp;
  dst->class = CLASS_NUMBER;
  dst->fraction = (frac << 7) | 0x40000000;
}
