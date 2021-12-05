#include <stdio.h>

void foo_int(int x){
    printf("I am int type !!~\n");
}

void foo_double(double x){
    printf("I am double type !!~\n");
}

#define foo(x) _Generic(x, int : foo_int, \
                          double : foo_double)(x)

int main(){
    foo(123);  // foo_int(123) // I am int type !!~
    foo(1.23);  // foo_double(1.23) // I am double type !!~
    return 0;
}