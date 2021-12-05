#include <generic2.h>

_def_fx(square, x*x);
#define square(x) _generic_fx(square,x) 

int main(void) {
  int a[] = {1,2,3}, b[3];
  _each(a, 3, _put); _line;
  _map(a, 3, square, b);
  _each(b, 3, _put); _line;
  int c[3];
  _map2(a, b, 3, add, c);
  _each(c, 3, _put); _line;

  double complex d[]={1.0+I,2.0+I,3.0+I}, e[3];
  _each(d, 3, _put); _line;
  _map(d, 3, square, e);
  _each(e, 3, _put); _line;

}
 