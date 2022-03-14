#include <lib2.h>

_def_fx(square, x*x);
#define square(x) _generic_fx(square,x) 

int main(void) {
  int a[] = {1,2,3}, b[3];
  _EACH(a, 3, _put); _BR;
  _MAP(a, 3, square, b);
  _EACH(b, 3, _put); _BR;
  int c[3];
  // _MAP2(a, b, 3, _add, c);
  // _MAP2(a, b, 3, _mul, c);
  _MAP2(a, b, 3, _sub, c);
  _EACH(c, 3, _put); _BR;

  _c64_t d[]={1.0+I,2.0+I,3.0+I}, e[3];
  _EACH(d, 3, _put); _BR;
  _MAP(d, 3, square, e);
  _EACH(e, 3, _put); _BR;

}
 