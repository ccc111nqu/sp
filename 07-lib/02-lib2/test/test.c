#include <stdio.h>
#include <complex.h>
#include <tgmath.h>
 
int square_i(int x) { return x*x; } 

double square_d(double x) { return x*x; }

double square_c(_c64 x) { return x*x; }

#define square(x) _Generic((x), int: square_i, double: square_d, _c64: square_c )(x)


int main(){
    printf("square(3)=%d\n", square(3));
    printf("square(pi)=%f\n", square(3.14159));
    printf("square(1+2I)=%f\n", square(1.0+2I));
    return 0;
}
