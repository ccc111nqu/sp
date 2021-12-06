#include <number2.h>

_def_fxy(_add, x+y);
_def_fxy(_sub, x-y);
_def_fxy(_mul, x*y);
_def_fxy(_div, x/y);

int sum(int a[], int n) {
    int r = 0;
    for (int i=0; i<n; i++) {
        r+=a[i];
    }
    return r;
}

int product(int a[], int n) {
    int r = 1;
    for (int i=0; i<n; i++) {
        r*=a[i];
    }
    return r;
}
