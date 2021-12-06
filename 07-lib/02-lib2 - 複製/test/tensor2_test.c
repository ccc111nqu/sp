#include <std2.h>
#include <tensor2.h>

int main(void) {
  int a[]={1,2,3,4}, b[]={1,1,1,1}, c[4];
  _shape_t t = {.dim=2, .shape={2,2}, .type=_int};
  _tadd(&t, a, b, c);
  _each(c, _tsize(&t), _put); _line;
}
