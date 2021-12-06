#include <std2.h>
#include <tensor2.h>

int main(void) {
  int a[]={1,2,3,4}, b[]={2,2,2,2}, c[4];
  _shape_t s = {.dim=2, .shape={2,2}, .type=_INT};
  printf("_tidx(s,1,1)=%d\n", _tidx((&s), 1, 1));
  printf("_tget(s,a,1,0)=%d\n", _tget((&s), a, 1, 0));
  _tset((&s), a, 5, 0, 1);
  printf("a  ="); _each(a, _tsize(&s), _put); _line;
  printf("b  ="); _each(b, _tsize(&s), _put); _line;
  _tadd(&s, a, b, c);
  printf("a+b="); _each(c, _tsize(&s), _put); _line;
  _tsub(&s, a, b, c);
  printf("a-b="); _each(c, _tsize(&s), _put); _line;
  _tmul(&s, a, b, c);
  printf("a*b="); _each(c, _tsize(&s), _put); _line;
  _tdiv(&s, a, b, c);
  printf("a/b="); _each(c, _tsize(&s), _put); _line;
}
