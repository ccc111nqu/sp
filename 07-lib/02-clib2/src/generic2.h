#pragma once

#define _def_fxt(type, name, exp) \
  type name(type x) { \
    return exp; \
  }

#define _dec_fxt(type, name) \
  type name(type x)

#define _def_fx(name, exp) \
  _def_fxt(int, name##_i, exp) \
  _def_fxt(double, name##_d, exp) \
  _def_fxt(double complex, name##_c, exp)

#define _dec_fx(name) \
  _dec_fxt(int, name##_i); \
  _dec_fxt(double, name##_d); \
  _dec_fxt(double complex, name##_c);

#define _def_fxyt(type, name, exp) \
  type name(type x, type y) { \
    return exp; \
  }

#define _def_fxy(name, exp) \
  _def_fxyt(int, name##_i, exp); \
  _def_fxyt(double, name##_d, exp); \
  _def_fxyt(double complex, name##_c, exp);

#define _dec_fxyt(type, name) \
  type name(type x, type y)

#define _dec_fxy(name) \
  _dec_fxyt(int, name##_i); \
  _dec_fxyt(double, name##_d); \
  _dec_fxyt(double complex, name##_c);

#define _generic_fx(name, x) _Generic((x), \
              int: name##_i, \
              double complex: name##_c, \
              double: name##_d \
)(x)

#define _generic_fxy(name, x, y) _Generic((x), \
              int: name##_i, \
              double complex: name##_c, \
              double: name##_d \
)(x, y)

#define add(x,y) _generic_fxy(add,x,y)

// _dec_fxy(add); // ?? error
