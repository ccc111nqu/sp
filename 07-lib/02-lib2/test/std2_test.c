#include <stdio.h>
#include <string.h>
#include <math.h>
#include <std2.h>

int square(int x) { return x*x; }

int main(void) {
  int one=1, two=2;
  _test(one==1, "one==%d\n", one);
  _test(two==1, "two==%d\n", two);
  _test(one==1, "one==%d\n", one);
  _test(two==1, "two==%d\n", two);

  int a[] = { 1, 2, 3 }, *b = _new(int, 3);
  _each(a, 3, _put); _line;
  _map(a, 3, square, b);
  _each(b, 3, _put); _line;

  // int *z=_new(int, 999999999);
  int *z=_new(int, 99);
  _free(z);
}
