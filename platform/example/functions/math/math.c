#include "math.h"
#include "js/math.h"

double acos(double x) {
    return JS_acos(x);
}
double acosh(double x) {
    return JS_acosh(x);
}
double asin(double x) {
    return JS_asin(x);
}
double asinh(double x) {
    return JS_asinh(x);
}
double atan(double x) {
    return JS_atan(x);
}
double atan2(double y, double x) {
    return JS_atan2(y, x);
}
double atanh(double x) {
    return JS_atanh(x);
}
double cbrt(double x) {
    return JS_cbrt(x);
}
double ceil(double x) {
    return JS_ceil(x);
}
// double copysign(double x, double y) {
// }
double cos(double x) {
    return JS_cos(x);
}
double cosh(double x) {
    return JS_cosh(x);
}
// double erf(double x) {
// }
// double erfc(double x) {
// }
double exp(double x) {
    return JS_exp(x);
}
double exp2(double x) {
    return JS_exp2(x);
}
double expm1(double x) {
    return JS_expm1(x);
}
double fabs(double x) {
    return JS_fabs(x);
}
// double fdim(double x, double y) {
//     return JS_fdim(x, y);
// }
double floor(double x) {
    return JS_floor(x);
}
// double fma(double x, double y, double z) {
// }
// double fmax(double x, double y) {
//     return JS_fmax(x, y);
// }
// double fmin(double x, double y) {
//     return JS_fmin(x, y);
// }
double fmod(double x, double y) {
    return JS_fmod(x, y);
}
// double frexp(double x, int  e*) {
// }
double hypot(double x, double y) {
    return JS_hypot(x, y);
}
// int ilogb(double x) {
// }
double ldexp(double x, int n) {
    return JS_ldexp(x, n);
}
// double lgamma(double x) {
// }
// long long llrint(double x) {
// }
// long long llround(double x) {
// }
double log(double x) {
    return JS_log(x);
}
double log10(double x) {
    return JS_log10(x);
}
double log1p(double x) {
    return JS_log1p(x);
}
double log2(double x) {
    return JS_log2(x);
}
// double logb(double x) {
// }
// long lrint(double x) {
// }
// long lround(double x) {
// }
double modf(double x, double  *iptr) {
    return JS_modf(x, iptr);
}
double nan(const char  *s) {
    return JS_nan(s);
}
// double nearbyint(double x) {
// }
// double nextafter(double, double x) {
// }
// double nexttoward(double, long double x) {
// }
double pow(double x, double y) {
    return JS_pow(x, y);
}
// double remainder(double, double x) {
// }
// double remquo(double, double, int  x*) {
// }
// double rint(double x) {
// }
double round(double x) {
    return JS_round(x);
}
// double scalbln(double, long x) {
// }
// double scalbn(double, int x) {
// }
double sin(double x) {
    return JS_sin(x);
}
double sinh(double x) {
    return JS_sinh(x);
}
double sqrt(double x) {
    return JS_sqrt(x);
}
double tan(double x) {
    return JS_tan(x);
}
double tanh(double x) {
    return JS_tanh(x);
}
// double tgamma(double x) {
// }
double trunc(double x) {
    return JS_trunc(x);
}


float acosf(float x) {
    return JS_acos(x);
}
float acoshf(float x) {
    return JS_acosh(x);
}
float asinf(float x) {
    return JS_asin(x);
}
float asinhf(float x) {
    return JS_asinh(x);
}
float atanf(float x) {
    return JS_atan(x);
}
float atan2f(float y, float x) {
    return JS_atan2(y, x);
}
float atanhf(float x) {
    return JS_atanh(x);
}
float cbrtf(float x) {
    return JS_cbrt(x);
}
float ceilf(float x) {
    return JS_ceil(x);
}
float cosf(float x) {
    return JS_cos(x);
}
float coshf(float x) {
    return JS_cosh(x);
}
float expf(float x) {
    return JS_exp(x);
}
float exp2f(float x) {
    return JS_exp2(x);
}
float expm1f(float x) {
    return JS_expm1(x);
}
float fabsf(float x) {
    return JS_fabs(x);
}
// float fdimf(float x, float y) {
//     return JS_fdim(x, y);
// }
float floorf(float x) {
    return JS_floor(x);
}
// float fmaxf(float x, float y) {
//     return JS_fmax(x, y);
// }
// float fminf(float x, float y) {
//     return JS_fmin(x, y);
// }
float fmodf(float x, float y) {
    return JS_fmod(x, y);
}
float hypotf(float x, float y) {
    return JS_hypot(x, y);
}
float ldexpf(float x, int n) {
    return JS_ldexp(x, n);
}
float logf(float x) {
    return JS_log(x);
}
float log10f(float x) {
    return JS_log10(x);
}
float log1pf(float x) {
    return JS_log1p(x);
}
float log2f(float x) {
    return JS_log2(x);
}
float modff(float x, float  *iptr) {
    return JS_modf(x, (double*)iptr);
}
float nanf(const char *s) {
    return JS_nan(s);
}
float powf(float x, float y) {
    return JS_pow(x, y);
}
float roundf(float x) {
    return JS_round(x);
}
float sinf(float x) {
    return JS_sin(x);
}
float sinhf(float x) {
    return JS_sinh(x);
}
float sqrtf(float x) {
    return JS_sqrt(x);
}
float tanf(float x) {
    return JS_tan(x);
}
float tanhf(float x) {
    return JS_tanh(x);
}
float truncf(float x) {
    return JS_trunc(x);
}
