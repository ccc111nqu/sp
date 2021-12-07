#pragma once

#include "std2.h"
#include "vector2.h"

#define NSHAPE 4

typedef struct _shape {
    int dim;
    int shape[NSHAPE];
    _type_t type;
} _shape_t;

#define _def_sop(op) \
void _s##op(_shape_t *s, void *a, void *b, void *c) { \
    int size = _ssize(s); \
    if (s->type == _INT) _v##op##_i((int*)a, (int*)b, (int*)c, size); \
    if (s->type == _F64) _v##op##_d((double*)a, (double*)b, (double*)c, size); \
    if (s->type == _C64) _v##op##_c((_c64_t*)a, (_c64_t*)b, (_c64_t*)c, size); \
}

int _ssize(_shape_t *t);
int _sidx(_shape_t *s, int idx[]);

void _sadd(_shape_t *t, void *a, void *b, void *c);
void _ssub(_shape_t *t, void *a, void *b, void *c);
void _smul(_shape_t *t, void *a, void *b, void *c);
void _sdiv(_shape_t *t, void *a, void *b, void *c);

