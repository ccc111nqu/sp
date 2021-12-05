#pragma once

#include <stdlib.h>

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
#define _test(cond, ...) \
  do { if (!(cond)) { \
     printf("\033[1;31mError: at FILE=%s LINE=%d\033[0m\n", __FILE__, __LINE__); \
     printf("\033[1;32m  Check:%s but ", #cond);\
     printf(__VA_ARGS__);\
     printf("\033[0m\n"); \
  } } while (0)

// GCC has a feature called statement expressions
// https://stackoverflow.com/questions/3532621/using-and-returning-output-in-c-macro
#define _new(type, size) ({ \
    void *p=malloc(sizeof(type)*size);\
    _test(p, "_new() fail\n"); \
    p;\
  })

#define _free(p) ({ \
    _test(p!=NULL, "_free() fail\n"); \
    free(p); \
    p = NULL; \
  })

#define _putf(x) printf("%f ", x)
#define _puti(x) printf("%d ", x) 

#define _line printf("\n")
 