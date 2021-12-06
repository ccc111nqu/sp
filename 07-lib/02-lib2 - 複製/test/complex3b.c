#include <stdio.h>
#include <_Complex.h>
#include <tgmath.h>

int add_i(int x, int y) {
    return x+y;
}

double _Complex add_c(double _Complex  x, double _Complex  y) {
    return x+y;
}

double add_d(double x, double y) {
    return x+y;
}

#define add(x,y) _Generic((x), \
              int: add_i, \
              double _Complex: add_c, \
              double: add_d \
)(x,y)

int main(void)
{
    printf("add(1, 3)=%d\n", add(1,3));
    double _Complex c1 = add(1.0+I, 3.0+2I);
    printf("add(1+i, 3+2i)=%f+%fi\n", creal(c1), cimag(c1));
}
