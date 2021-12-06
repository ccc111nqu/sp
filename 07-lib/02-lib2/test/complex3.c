#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

int add_i(int x, int y) {
    return x+y;
}

// 在 windows 的 clang 會錯，因為使用的還是 Windows 的函式庫 (但 gcc 不會，因為使用自帶函式庫)
_c64 add_c(_c64  x, _c64  y) {
    return x+y;
}

double add_d(double x, double y) {
    return x+y;
}

#define add(x,y) _Generic((x), \
              int: add_i, \
              _c64: add_c, \
              double: add_d \
)(x,y)

int main(void)
{
    printf("add(1, 3)=%d\n", add(1,3));
    _c64 c1 = add(1.0+I, 3.0+2I);
    printf("add(1+i, 3+2i)=%f+%fi\n", creal(c1), cimag(c1));
}
