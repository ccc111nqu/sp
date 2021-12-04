#include <stdio.h>
#include <string.h>
#include <math.h>
#include <clib2.h>

int main() {
  int one=1, two=2;
  _test(one==1, "one==%d\n", one);
  _test(two==1, "two==%d\n", two);
  _test(one==1, "one==%d\n", one);
  _test(two==1, "two==%d\n", two);

  int a[] = { 1, 2, 3 }, b[3];
  _each(a, 3, _puti); _line;
  _map(a, 3, _fx(float, x*x), b);
  _each(b, 3, _puti); _line;

  double f[] = { 1.0, 2.0, 3.0, 4.0 }, *g = _new(double, 4);
  _each(f, 4, _putf); _line;
  _map(f, 4, _lambda(float,(float x),{ return x*2.0; }), g);
  _each(g, 4, _putf); _line;

  double h[4];
  _map2(f, g, 4, _fxy(float, x+y), h);
  _each(h, 4, _putf); _line;
}
