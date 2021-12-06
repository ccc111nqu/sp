#include "tensor2.h"

int _tsize(_shape_t *t) {
    return _vproduct(t->shape, t->dim); 
}

_def_top(add);
_def_top(sub);
_def_top(mul);
_def_top(div);

