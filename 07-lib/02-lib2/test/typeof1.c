#include <stdio.h>
#include <complex.h>
#include <tgmath.h>

#define type1(var) #var

int main() {
    int i = 5;
    complex int ci = 3+2I;
    double d = 3.0;
    complex double c = 3.0+2.0I;
    printf("typeof(i)=%s\n", type1(i));
    /*
    printf("sizeof(complex int)=%d\n", sizeof(ci));
    printf("sizeof(double)=%d\n", sizeof(d));
    printf("sizeof(complex double)=%d\n", sizeof(c));
    */
}