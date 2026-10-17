#include "common.h"

s64 decimal_string_to_int64(const char *text) { return parse_signed_integer64(text, NULL, 10); }
