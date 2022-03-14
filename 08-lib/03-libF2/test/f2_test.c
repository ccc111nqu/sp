#include <lib2.h>

int square(int x) { return x*x; }
int cadd(int t, int x) { return t+x; }

void test1() {
  int a[]={ 1, 2, 3 };
  int n = _LEN(a);
  _OK(_ARRAY_EQ(a, a, int, n));
 
  int b[n];
  // _MAP(a, n, square, b);
  #define sq(x) x*x
  _MAP(a, n, sq, b);
  _EACH(b, n, _put); _BR;
  _OK(!_ARRAY_EQ(a, b, int, n));

  int r = 0;
  // #define cadd(t, x) (t+x)
  _REDUCE(a, n, cadd, r);
  printf("r=%d\n", r);

  int m;
  #define odd(x) (x%2==1)
  _FILTER(a, n, odd, b, m);
  printf("filter(a, odd)="); _EACH(b, m, _put); _BR;

  #define even(x) (x%2==0)
  int eveni = _FIND(a, n, even);
  _OK(eveni==1);

  char str[100];
  _STR(a, n, str); printf("a:str=%s\n", str);
  _STR(b, n, str); printf("b:str=%s\n", str);
}

void test2() {
  _OK(_EQ(1, 1));
  _OK(_NE(1, 2));
  _OK(_LT(1.3, 2.5));
  _OK(_AND(true, true));
  _OK(_OR(1, 0));
  _OK(_NOT(false));
  _OK(_NEG(10.0)<1.3);
  _OK(_SHL(1, 3)==8);
  _OK(_MUL(3, 7)==21);
}

void test3() {
  int a[]={ 1, 2, 3 }, b[] = { 2, 3, 4 }, c[] = { 2, 2, 2 };
  int n = _LEN(a);
  _OK(n==3);
  _OK(_ALL(a, b, n, _LT));
  _OK(_ANY(a, b, n, _LT));
  _OK(_ANY(a, c, n, _GT));
}

void f_test1() {
  int a[]={ 1, 2, 3 };
  int n = _LEN(a);
 
  _each(a, n, _puti); _BR;

/*
  int b[n];
  // _MAP(a, n, square, b);
  #define sq(x) x*x
  _MAP(a, n, sq, b);
  _EACH(b, n, _put); _BR;
  _OK(!_ARRAY_EQ(a, b, int, n));

  int r = 0;
  // #define cadd(t, x) (t+x)
  _REDUCE(a, n, cadd, r);
  printf("r=%d\n", r);

  int m;
  #define odd(x) (x%2==1)
  _FILTER(a, n, odd, b, m);
  printf("filter(a, odd)="); _EACH(b, m, _put); _BR;

  #define even(x) (x%2==0)
  int eveni = _FIND(a, n, even);
  _OK(eveni==1);

  char str[100];
  _STR(a, n, str); printf("a:str=%s\n", str);
  _STR(b, n, str); printf("b:str=%s\n", str);
*/
}


int main(void) {
  test1();
  test2();
  test3();
  f_test1();
}
