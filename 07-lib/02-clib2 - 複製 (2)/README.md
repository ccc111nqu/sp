# clib2

## gcc OK

```
$ clang -I../src test1.c
$ ./test1
Error: at FILE=test1.c LINE=11
  Check:two==1 but two==2

Error: at FILE=test1.c LINE=13
  Check:two==1 but two==2

1 2 3
1 4 9
```

clang 失敗

```
$ clang -I../src test1.c
test1.c:23:38: error: function definition is not allowed here
  _map(f, 4, _lambda(float,(float x),{ return x*2.0; }), g); 
                                     ^
test1.c:23:14: error: use of undeclared identifier 'lambda$__anon$'
  _map(f, 4, _lambda(float,(float x),{ return x*2.0; }), g);
             ^
../src\clib2.h:29:6: note: expanded from macro '_lambda'
    &lambda$__anon$;\
     ^
test1.c:27:18: error: function definition is not allowed here
  _map2(f, g, 4, _fxy(float, x+y), h);
                 ^
../src\clib2.h:33:57: note: expanded from macro '_fxy'
#define _fxy(type, exp) _lambda(type, (type x, type y), { return exp; })
                                                        ^
test1.c:27:18: error: use of undeclared identifier 'lambda$__anon$'
../src\clib2.h:33:25: note: expanded from macro '_fxy'
#define _fxy(type, exp) _lambda(type, (type x, type y), { return exp; })
                        ^
../src\clib2.h:29:6: note: expanded from macro '_lambda'
    &lambda$__anon$;\
     ^
4 errors generated.
```

MSVC 的 cl 會失敗

```
PS C:\ccc\course\sp\07-lib\02-clib2\test> cl -I../src test1.c
Microsoft (R) C/C++ Optimizing Compiler Version 19.29.30133 for x86
Copyright (C) Microsoft Corporation.  著作權所有，並保留一切權利。

test1.c
../src\clib2.h(1): warning C4819: 檔案含有無法在目前字碼頁 (950) 中表示的字元。請以 Unicode 格式儲存檔案以防止資料遺失
test1.c(20): error C2059: 語法錯誤: '{'
test1.c(20): error C2065: 'p': 未宣告的識別項
test1.c(20): error C2059: 語法錯誤: ')'
test1.c(31): error C2059: 語法錯誤: '}'
PS C:\ccc\course\sp\07-lib\02-clib2\test>
```

## Reference

* lambda 語法
    * https://stackoverflow.com/questions/10405436/anonymous-functions-using-gcc-statement-expressions
    * https://github.com/wd5gnr/clambda/blob/master/clambda2.c
    * https://hackaday.com/2019/09/11/lambdas-for-c-sort-of/
    * https://gcc.gnu.org/onlinedocs/gcc/Statement-Exprs.html#Statement-Exprs
* https://shengwen1997.gitbooks.io/program_with_c/content/Stringification.html
* [使用泛型型別巨集 (_Generic) 撰寫泛型程式](https://opensourcedoc.com/c-programming/generics-with-generic-selection/)
