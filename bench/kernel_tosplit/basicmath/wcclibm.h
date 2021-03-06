#ifndef _WCCLIBM
#define _WCCLIBM

#define int32_t      int
#define u_int32_t    unsigned int

// Often used variables/consts
static const float basicmath_one    =  1.0f,
                   basicmath_tiny   =  1.0e-30f,
                   basicmath_half   =  5.0000000000e-01, /* 0x3f000000 */
                   basicmath_huge   =  1.0e30,
                   basicmath_two    =  2.0,
                   basicmath_two24  =  16777216.0,       /* 0x4b800000 */
                   basicmath_zero   =  0.0;

float   basicmath___copysignf(float x, float y);
float   basicmath___cosf(float x);
float   basicmath___fabsf(float x);
float   basicmath___ieee754_acosf(float x);
float   basicmath___ieee754_powf(float x, float y);
int32_t basicmath___ieee754_rem_pio2f(float x, float *y);
float   basicmath___ieee754_sqrtf(float x);
int     basicmath___isinff (float x);
float   basicmath___kernel_cosf(float x, float y);
float   basicmath___kernel_sinf(float x, float y, int iy);
float   basicmath___scalbnf (float x, int n);

#endif // _WCCLIBM
