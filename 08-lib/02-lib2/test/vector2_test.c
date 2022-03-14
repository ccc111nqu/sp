#include <lib2.h>

int main(void) {
  int a[]={1,2,3}, b[]={1,1,1}, c[3];
  _vadd(a, b, c, 3);
  _EACH(a, 3, _put); _BR;
  _EACH(b, 3, _put); _BR;
  _EACH(c, 3, _put); _BR;

  int csum = _vsum(c, 3);
  printf("csum=%d\n", csum);
  
  double da[]={1.0,2.0,3.0}, db[]={2.0,2.0,2.0}, dc[3];
  _vmul(da, db, dc, 3);
  _EACH(dc, 3, _put); _BR;

}
