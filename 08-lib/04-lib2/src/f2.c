#include "f2.h"



/*

void _each(void* a[], char type, int n, void (*f)(void*)) {
    for (int i=0; i<n; i++) {
        f(a[i]);
    }
}
#define _MAP(a, n, f, r) \
    for (int i=0; i<n; i++) { \
        r[i] = f(a[i]); \
    }

#define _MAP2(a, b, n, f, r) \
    for (int i=0; i<n; i++) { \
        r[i] = f(a[i], b[i]); \
    }

#define _REDUCE(a, n, f, r) \
    for (int i=0; i<n; i++) { \
        r = f(r, a[i]); \
    }

#define _FILTER(a, n, f, r, m) \
    m=0; \
    for (int i=0; i<n; i++) { \
        if (f(a[i])) r[m++] = a[i]; \
    }

#define _ARRAY_EQ(a, b, type, len) (memcmp(a, b, sizeof(type)*len)==0)

#define _AT(a, type, i) ((type*)a)[i]

#define _LEN(a) (sizeof(a)/sizeof((a)[0]))

#define _STR(a, n, r) { \
  int ri = 0; \
  for (int i=0; i<n; i++) { \
      char *p = &r[ri]; \
      _SPUT(p, a[i]); \
      ri+=strlen(p); \
  } \
}

// f(x)
#define _NOT(x) (!(x))
#define _BNOT(x) (~(x))
#define _NEG(x) (-(x))

// f(x,y)
#define _ADD(x,y) ((x)+(y))
#define _SUB(x,y) ((x)-(y))
#define _MUL(x,y) ((x)*(y))
#define _DIV(x,y) ((x)/(y))
#define _MOD(x,y) ((x)%(y))
#define _BAND(x,y) ((x)&(y))
#define _BOR(x,y) ((x)|(y))
#define _BXOR(x,y) ((x)^(y))
#define _AND(x,y) ((x)&&(y))
#define _OR(x,y) ((x)||(y))
#define _SHL(x,y) ((x)<<(y))
#define _SHR(x,y) ((x)>>(y))
#define _EQ(x,y) ((x)==(y))
#define _NE(x,y) ((x)!=(y))
#define _LT(x,y) ((x)<(y))
#define _LE(x,y) ((x)<=(y))
#define _GT(x,y) ((x)>(y))
#define _GE(x,y) ((x)>=(y))

#define _ALL(a, b, n, f) ({ \
    bool r[n]; \
    _MAP2(a, b, n, f, r); \
    bool b = true; \
    _REDUCE(r, n, _AND, b); \
    b; \
})

#define _ANY(a, b, n, f) ({ \
    bool r[n]; \
    _MAP2(a, b, n, f, r); \
    bool b = true; \
    _REDUCE(r, n, _OR, b); \
    b; \
})

#define _FIND(a, n, f) ({ \
  int idx=-1; \
  for (int i=0; i<n; i++) { \
    if (f(a[i])) { idx=i; break; } \
  } \
  idx; \
})


*/
