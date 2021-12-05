#include "std2.h"

void _putf(double x) {
    printf("%f ", x);
}

void _puti(int x) {
    printf("%d ", x);
}

void _putc(double complex x) {
    printf("%.4f+%.4fi ", creal(x), cimag(x));
}

void *_new0(int size, char *file, int line) {
   void *p=malloc(size);
   printf("p=%p\n", p);
   if (!p) {
     printf("Error: malloc fail! file=%s line=%d\n", file, line);
     exit(1);
   }
   return p;
}
