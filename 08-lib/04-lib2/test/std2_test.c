#include <lib2.h>

int main(void) {
  int one=1, two=2;
  _OK(one==1);
  _OK(two==1);

  printf("one="); _PUT(one); _BR; 

  double pi=3.14159;
  char str[100]; _SPUT(str, pi); printf("pi:str=%s\n", str);

  int *a=_NEW(int, 99);
  _FREE(a);
  int *b=_NEW(int, 999999999);
  _FREE(b);
}
