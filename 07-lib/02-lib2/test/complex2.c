#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

_c64_t add(_c64_t  x, _c64_t  y) { \
    return x+y;
}

int main(void)
{
    _c64_t c1 = add(1+I, 3+2I);
    printf("add(1+i, 3+2i)=%f+%fi\n", creal(c1), cimag(c1));
}