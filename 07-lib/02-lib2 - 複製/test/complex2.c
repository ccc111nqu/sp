#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

double complex add(double complex  x, double complex  y) { \
    return x+y;
}

int main(void)
{
    double complex c1 = add(1+I, 3+2I);
    printf("add(1+i, 3+2i)=%f+%fi\n", creal(c1), cimag(c1));
}