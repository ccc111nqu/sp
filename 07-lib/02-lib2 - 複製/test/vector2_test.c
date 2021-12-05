#include <std2.h>
#include <vector2.h>

int main(void) {
  int a[]={1,2,3}, b[]={1,1,1}, c[3]={0,0,0};
  _vadd_i(a, b, c, 3);
  _each(a, 3, _put); _line;
  _each(b, 3, _put); _line;
  _each(c, 3, _put); _line;
}
