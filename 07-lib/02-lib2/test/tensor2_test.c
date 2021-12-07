#include <lib2.h>

int main(void) {
  int a[]={1,2,3,4}, b[]={2,2,2,2}, c[4];
  _shape_t s = {.dim=2, .shape={2,2}, .type=_INT};
  _tensor_t ta={&s,a}; //, tb={&s,b}, tc={&s,c};
  printf("_tget(s,a,1,0)=%d\n", (int) _T(&ta, int, 1, 0));
  _T(&ta, int, 0, 1) = 5;
  printf("a  ="); _EACH(a, _ssize(&s), _put); _BR;
}
