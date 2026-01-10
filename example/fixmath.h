#ifndef FIXMATH_H
#define FIXMATH_H

#include <stdint.h>

typedef int32_t fix16_t;

static inline fix16_t fix16_from_int(int32_t a)
{
    return a << 16;
}

static inline int32_t fix16_to_int(fix16_t a)
{
    return a >> 16;
}

static inline float fix16_to_float(fix16_t a)
{
    return (float)a / 65536.0f;
}

static inline fix16_t fix16_from_float(float a)
{
    return (fix16_t)(a * 65536.0f);
}

static inline fix16_t fix16_mul(fix16_t a, fix16_t b)
{
    return (fix16_t)(((int64_t)a * (int64_t)b) >> 16);
}

static inline fix16_t fix16_div(fix16_t a, fix16_t b)
{
    return (fix16_t)(((int64_t)a << 16) / b);
}

#endif // FIXMATH_H
