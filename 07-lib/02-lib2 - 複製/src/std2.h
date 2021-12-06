#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <complex.h>
#include <tgmath.h>

#define i8 int8_t
#define u8 uint8_t
#define i16 int16_t
#define u16 uint16_t
#define i32 int32_t
#define u32 uint32_t
#define i64 int64_t
#define u64 uint64_t
#define uint unsigned int
#define f32 float
#define f64 double
#define c32 complex float
#define c64 complex double

typedef enum { _i8, _u8, _i16, _u16, _i32, _u32, _i64, _u64, _int, _uint, _f32, _f64, _c32, _c64 } _type_t;

#define _each(a, n, f) \
    for (int i=0; i<n; i++) { \
        f(a[i]); \
    }

#define _map(a, n, f, r) \
    for (int i=0; i<n; i++) { \
        r[i] = f(a[i]); \
    }

#define _map2(a, b, n, f, r) \
    for (int i=0; i<n; i++) { \
        r[i] = f(a[i], b[i]); \
    } 

// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
// https://en.wikipedia.org/wiki/ANSI_escape_code
// https://shengwen1997.gitbooks.io/program_with_c/content/Stringification.html
#define _ok(cond, ...) \
  do { if (!(cond)) { \
     printf("\033[1;31mError: at FILE=%s LINE=%d\033[0m\n", __FILE__, __LINE__); \
     printf("\033[1;32m  Check:%s but ", #cond);\
     printf(__VA_ARGS__);\
     printf("\033[0m\n"); \
  } } while (0)

#define _line printf("\n")
#define _error(...) _ok(false, __VA_ARGS__)
#define _new(type, size) _new0(sizeof(type)*size, __FILE__, __LINE__)
#define _free(p) { free(p);p=NULL; }

extern void _putf(double x);
extern void _puti(int x);
extern void _putc(c64 x);
extern void *_new0(int size, char *file, int line);

#define _put(x) _Generic((x), \
              int: _puti, \
              c64: _putc, \
              double: _putf \
)(x)
