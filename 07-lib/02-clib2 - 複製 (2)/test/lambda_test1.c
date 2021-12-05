#include <stdio.h>
#include <string.h>
#include <math.h>
#include <clib2.h>
#include <lambda2.h>

int main() {
  double f[] = { 1.0, 2.0, 3.0, 4.0 }, *g = _new(double, 4);

  _each(f, 4, _putf); _line;
  _map(f, 4, _lambda(float,(float x),{ return x*2.0; }), g);
  _each(g, 4, _putf); _line;

  double h[4];
  _map2(f, g, 4, _fxy(float, x+y), h);
  _each(h, 4, _putf); _line;
  _free(g);
}
