#include "std2.h"

void _puti(int x) {
    printf("%d ", x);
}

void _putf(double x) {
    printf("%f ", x);
}

void _putc(_c64_t x) {
    printf("%.4f+%.4fi ", creal(x), cimag(x));
}

void _sputi(char *str, int x) {
    sprintf(str, "%d ", x);
}

void _sputf(char *str, double x) {
    sprintf(str, "%f ", x);
}

void _sputc(char *str, _c64_t x) {
    sprintf(str, "%.4f+%.4fi ", creal(x), cimag(x));
}

void *_new0(int size, char *file, int line) {
   void *p=malloc(size);
   // printf("p=%p\n", p);
   if (!p) {
     _ERROR("new0 malloc() fail!")
   }
   return p;
}

bool _ok0(bool cond, char *exp, char *file, int line) {
    printf("\033[1;32mCheck:%s  \033[0m\n", exp);
    if (cond)
      printf("\033[1;32m  pass!\033[0m\n");
    else
      printf("\033[1;31m  Error: at FILE=%s LINE=%d\033[0m\n", file, line);
    return cond;
}
