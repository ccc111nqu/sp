#pragma once

#include <std2.h>

// ============== vector op2 ==================
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

// ============== vector acc op ==================

#define _def_aop_t(type, name, start, op) \
type name(type a[], int n) { \
    type r = (type) start; \
    for (int i=0; i<n; i++) { \
        r op a[i]; \
    } \
    return r;  \
}

#define _dec_aop_t(type, name) \
type name(type a[], int n)

#define _def_aop(name, start, op) \
  _def_aop_t(int, name##_i, start, op); \
  _def_aop_t(double, name##_d, start, op); \
  _def_aop_t(double complex, name##_c, start, op)

#define _dec_aop(name) \
  _dec_aop_t(int, name##_i); \
  _dec_aop_t(double, name##_d); \
  _dec_aop_t(double complex, name##_c);

#define _generic_aop(name, a, n) _Generic((a), \
              int*: name##_i, \
              double complex*: name##_c, \
              double*: name##_d \
)(a, n)

_dec_aop(_vsum);
_dec_aop(_vproduct);

#define _vsum(a,n) _generic_aop(_vsum,a,n)
#define _vproduct(a,n) _generic_aop(_vproduct,a,n)
