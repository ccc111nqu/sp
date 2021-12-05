#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

int add_i(int x, int y) {
    return x+y;
}

complex double add_c(complex double  x, complex double  y) {
    return x+y;
}

double add_d(double x, double y) {
    return x+y;
}

#define add(x,y) _Generic((x), \
              int: add_i, \
              complex double: add_c, \
              double: add_d \
)(x,y)

int main(void)
{
    printf("add(1, 3)=%d\n", add(1,3));
    complex double c1 = add(1.0+I, 3.0+2I);
    printf("add(1+i, 3+2i)=%f+%fi\n", creal(c1), cimag(c1));
}
