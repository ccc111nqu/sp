#pragma once

typedef struct vector {
    int size;
    void *array;
} vector_t;

#define _def_vop(type, name, op) \
void name(type *a, type *b, type *c, int size) { \
    type *ta=a, *tb=b, *tc=c; \
    for (int i=0; i<size; i++) { \
        tc[i] = ta[i] op tb[i]; \
    } \
}

#define _dec_vop(type, name) \
void name(type *a, type *b, type *c, int size)

_dec_vop(int, _vadd_i);
