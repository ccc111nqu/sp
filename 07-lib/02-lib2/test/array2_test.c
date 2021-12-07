#include <lib2.h>

int square(int x) { return x*x; }
int cadd(int t, int x) { return t+x; }

void test1() {
  int a[]={ 1, 2, 3 };
  int n = _LEN(a);
  _OK(_EQ(a, a, int, n));
 
  int b[n];
  // _MAP(a, n, square, b);
  #define sq(x) x*x
  _MAP(a, n, sq, b);
  _EACH(b, n, _put); _BR;

  int r = 0;
  // #define cadd(t, x) (t+x)
  _REDUCE(a, n, cadd, r);
  printf("r=%d\n", r);

  int m;
  #define odd(x) (x%2==1)
  _FILTER(a, n, odd, b, m);
  printf("filter(a, odd)="); _EACH(b, m, _put); _BR;
}

void test2() {
  int a[]={ 1, 2, 3 }, b[]={2,2,2};
  int n = sizeof(a)/sizeof(int);

  char str[100];
  _STR(a, n, str);
  printf("a:str=%s\n", str);
}

int main(void) {
  test1();
  test2();
}
