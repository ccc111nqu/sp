#pragma once

#include "std2.h"
#include "vector2.h"

#define NSHAPE 4

typedef struct _shape {
    int dim;
    int shape[NSHAPE];
    _type_t type;
} _shape_t;

#define _def_top(op) \
void _t##op(_shape_t *s, void *a, void *b, void *c) { \
    int size = _tsize(s); \
    if (s->type == _int) _v##op##_i((int*)a, (int*)b, (int*)c, size); \
    if (s->type == _f64) _v##op##_d((double*)a, (double*)b, (double*)c, size); \
    if (s->type == _c64) _v##op##_c((complex double*)a, (complex double*)b, (complex double*)c, size); \
}

int _tsize(_shape_t *t);
void _tadd(_shape_t *t, void *a, void *b, void *c);

