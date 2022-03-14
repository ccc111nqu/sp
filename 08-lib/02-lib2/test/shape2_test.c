#include <lib2.h>

int main(void) {
  int a[]={1,2,3,4}, b[]={2,2,2,2}, c[4];
  _shape_t s = {.dim=2, .shape={2,2}, .type=_INT};
  printf("_tidx(s,1,1)=%d\n", _sidx(&s, (int[]){1, 1}));
  int n = _ssize(&s);
  printf("a  ="); _EACH(a, n, _put); _BR;
  printf("b  ="); _EACH(b, n, _put); _BR;
  _sadd(&s, a, b, c);
  printf("a+b="); _EACH(c, n, _put); _BR;
  _ssub(&s, a, b, c);
  printf("a-b="); _EACH(c, n, _put); _BR;
  _smul(&s, a, b, c);
  printf("a*b="); _EACH(c, n, _put); _BR;
  _sdiv(&s, a, b, c);
  printf("a/b="); _EACH(c, n, _put); _BR;
}
