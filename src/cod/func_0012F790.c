#include "common.h"

extern const double D_00139B60[];

double func_001253A0(double a, double b);

double func_0012F790(int dig) {
    double v = 1.0;
    if (dig < 24)
        return D_00139B60[dig];
    while (dig > 0) {
        v = func_001253A0(v, 10.0);
        dig--;
    }
    return v;
}
