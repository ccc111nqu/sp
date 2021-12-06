#include <stdio.h>
void _vadd(int *a, int *b, int *c) {
    *c = *a + *b;
}

#define _def_top_t(type, op) \
void _t##op(void *a, void *b, void *c) { \
    _v##op((type*)a, (type*)b, (type*)c); \
}

_def_top_t(int, add);

int main() {
    int a=1, b=2, c;
    _tadd(&a, &b, &c);
    printf("c=%d\n", c);
}

