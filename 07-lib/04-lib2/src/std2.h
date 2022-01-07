#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <complex.h>
#include <tgmath.h>

#define _uint_t unsigned int
#define _c32_t complex float
#define _c64_t complex double

typedef enum { _I8, _U8, _I16, _U16, _I32, _U32, _I64, _U64, _INT, _UINT, _F32, _F64, _C32, _C64 } _type_t;

// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
// https://en.wikipedia.org/wiki/ANSI_escape_code
// https://shengwen1997.gitbooks.io/program_with_c/content/Stringification.html
#define _OK(cond, ...) _ok0(cond, #cond, __FILE__, __LINE__)
#define _BR printf("\n")
#define _ERROR(...) { printf("\033[1;31mError: "); printf(__VA_ARGS__); printf("\033[0m\n"); }
#define _NEW(type, size) _new0(sizeof(type)*size, __FILE__, __LINE__)
#define _FREE(p) { free(p);p=NULL; }

extern void _putf(double x);
extern void _puti(int x);
extern void _putc(_c64_t x);

extern void _sputf(char *str, double x);
extern void _sputi(char *str, int x);
extern void _sputc(char *str, _c64_t x);

extern void *_new0(int size, char *file, int line);
extern bool _ok0(bool cond, char *exp, char *file, int line);

#define _PUT(x) _Generic((x), \
              int: _puti, \
              _c64_t: _putc, \
              double: _putf \
)(x)

#define _SPUT(str, x) _Generic((x), \
              int: _sputi, \
              _c64_t: _sputc, \
              double: _sputf \
)(str, x)
