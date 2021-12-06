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
    if (s->type == _INT) _v##op##_i((int*)a, (int*)b, (int*)c, size); \
    if (s->type == _F64) _v##op##_d((double*)a, (double*)b, (double*)c, size); \
    if (s->type == _C64) _v##op##_c((_c64*)a, (_c64*)b, (_c64*)c, size); \
}

int _tsize(_shape_t *t);
void _tadd(_shape_t *t, void *a, void *b, void *c);
void _tsub(_shape_t *t, void *a, void *b, void *c);
void _tmul(_shape_t *t, void *a, void *b, void *c);
void _tdiv(_shape_t *t, void *a, void *b, void *c);

#define _tidx(s, ...) ({ \
  int idx[] = { __VA_ARGS__ }; \
  int pos = (s->dim == 1) ? idx[0] : \
            (s->dim == 2) ? idx[0]*s->shape[1]+idx[1] : \
            (s->dim == 3) ? (idx[0]*s->shape[1]+idx[1])*s->shape[2]+idx[2] : -1; \
  pos; \
})

#define _tget(s, a, ...) a[_tidx(s, __VA_ARGS__)]
#define _tset(s, a, v, ...) a[_tidx(s, __VA_ARGS__)] = v
