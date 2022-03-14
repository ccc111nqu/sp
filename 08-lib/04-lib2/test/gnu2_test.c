#include <lib2.h>

int main() {
  double f[] = { 1.0, 2.0, 3.0, 4.0 }, *g = _NEW(double, 4);

  _EACH(f, 4, _PUT); _BR;
  _MAP(f, 4, _lambda(float,(float x),{ return x*2.0; }), g);
  _EACH(g, 4, _PUT); _BR;

  double h[4];
  _MAP2(f, g, 4, _fxy(float, x+y), h);
  _EACH(h, 4, _PUT); _BR;
  _FREE(g);
}
