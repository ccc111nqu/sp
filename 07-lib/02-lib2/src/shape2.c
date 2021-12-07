#include "tensor2.h"

_def_sop(add);
_def_sop(sub);
_def_sop(mul);
_def_sop(div);

int _ssize(_shape_t *t) {
    return _vproduct(t->shape, t->dim); 
}

int _sidx(_shape_t *s, int idx[]) {
  int pos = (s->dim == 1) ? idx[0] : 
            (s->dim == 2) ? idx[0]*s->shape[1]+idx[1] : 
            (s->dim == 3) ? (idx[0]*s->shape[1]+idx[1])*s->shape[2]+idx[2] : -1;
  return pos;
}


