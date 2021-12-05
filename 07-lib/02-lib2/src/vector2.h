#pragma once

#include <std2.h>

typedef struct vector {
    int size;
    void *array;
} vector_t;

#define _def_vop_t(type, name, op) \
void name(type *a, type *b, type *c, int size) { \
    type *ta=a, *tb=b, *tc=c; \
    for (int i=0; i<size; i++) { \
        tc[i] = ta[i] op tb[i]; \
    } \
}

#define _def_vop(name, op) \
  _def_vop_t(int, name##_i, op); \
  _def_vop_t(double, name##_d, op); \
  _def_vop_t(double complex, name##_c, op)

#define _dec_vop_t(type, name) \
void name(type *a, type *b, type *c, int size)

#define _dec_vop(name) \
  _dec_vop_t(int, name##_i); \
  _dec_vop_t(double, name##_d); \
  _dec_vop_t(double complex, name##_c);

#define _generic_vop(name, a, b, c, n) _Generic((a), \
              int*: name##_i, \
              double complex*: name##_c, \
              double*: name##_d \
)(a, b, c, n)

// _dec_vop_t(int, _vadd_i);

_dec_vop(_vadd);
_dec_vop(_vsub);
_dec_vop(_vmul);
_dec_vop(_vdiv);

#define _vadd(a,b,c,n) _generic_vop(_vadd,a,b,c,n)
#define _vsub(a,b,c,n) _generic_vop(_vsub,a,b,c,n)
#define _vmul(a,b,c,n) _generic_vop(_vmul,a,b,c,n)
#define _vdiv(a,b,c,n) _generic_vop(_vdiv,a,b,c,n)
