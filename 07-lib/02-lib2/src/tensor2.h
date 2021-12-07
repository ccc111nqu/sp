#pragma once

#include "shape2.h"

typedef struct _tensor {
    _shape_t *shape;
    void *array;
} _tensor_t;

#define _T(t,type,...) _A((t)->array, type, _sidx((t)->shape, (int[]) { __VA_ARGS__ }))
