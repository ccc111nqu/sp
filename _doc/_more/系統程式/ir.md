# 中間碼


## 編譯為中間碼

* https://github.com/ccccourse/sp/tree/master/code/c/02-compiler/04-compiler-ir

```
PS D:\ccc\course\sp\code\c\02-compiler\04-compiler-ir> make
gcc -std=c99 -O0 ir.c lexer.c compiler.c main.c -o compiler
PS D:\ccc\course\sp\code\c\02-compiler\04-compiler-ir> ./compiler test/sum.c 

s=0;
i=1;
while (i < 10) {
  s = s + i;
  i = i + 1;
}


========== lex ==============
token=s
token==
token=0
token=;
token=i
token==
token=1
token=;
token=while
token=(
token=i
token=<
token=10
token=)
token={
token=s
token==
token=s
token=+
token=i
token=;
token=i
token==
token=i
token=+
token=1
token=;
token=}
========== dump ==============
0:s
1:=
2:0
3:;
4:i
5:=
6:1
7:;
8:while
9:(
10:i
11:<
12:10
13:)
14:{
15:s
16:=
17:s
18:+
19:i
20:;
21:i
22:=
23:i
24:+
25:1
26:;
27:}
============ parse =============
T1 = 0
s = T1
T2 = 1
i = T2
(L1)
T3 = i
T4 = 10
t5 = t3 < t4
if T5 goto L1
T6 = s
T7 = i
t8 = t6 + t7
s = T8
T9 = i
T10 = 1
t11 = t9 + t10
i = T11
goto L1
(L2)
```

## 編譯為中間碼後執行之

* https://github.com/ccccourse/sp/tree/master/code/c/02-compiler/05-compiler-run


```
PS D:\ccc\course\sp\code\c\02-compiler\05-c0c-ir-run> make                            
gcc -std=c99 -O0 map.c util.c ir.c irvm.c lexer.c compiler.c main.c -o compiler       
PS D:\ccc\course\sp\code\c\02-compiler\05-c0c-ir-run> ./compiler test/sum.c -run      
===================irRun()=======================
00: t1 = 0 = 0
01: s = t1 = 0
02: t1 = 1 = 1
03: i = t1 = 1
04: (L1) = 4
05: t2 = i = 1
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 0
10: t2 = i = 1
11: t3 = t1 + t2 = 1
12: s = t3 = 1
13: t1 = i = 1
14: t2 = 1 = 1
15: t3 = t1 + t2 = 2
16: i = t3 = 2
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 2
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 1
10: t2 = i = 2
11: t3 = t1 + t2 = 3
12: s = t3 = 3
13: t1 = i = 2
14: t2 = 1 = 1
15: t3 = t1 + t2 = 3
16: i = t3 = 3
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 3
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 3
10: t2 = i = 3
11: t3 = t1 + t2 = 6
12: s = t3 = 6
13: t1 = i = 3
14: t2 = 1 = 1
15: t3 = t1 + t2 = 4
16: i = t3 = 4
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 4
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 6
10: t2 = i = 4
11: t3 = t1 + t2 = 10
12: s = t3 = 10
13: t1 = i = 4
14: t2 = 1 = 1
15: t3 = t1 + t2 = 5
16: i = t3 = 5
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 5
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 10
10: t2 = i = 5
11: t3 = t1 + t2 = 15
12: s = t3 = 15
13: t1 = i = 5
14: t2 = 1 = 1
15: t3 = t1 + t2 = 6
16: i = t3 = 6
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 6
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 15
10: t2 = i = 6
11: t3 = t1 + t2 = 21
12: s = t3 = 21
13: t1 = i = 6
14: t2 = 1 = 1
15: t3 = t1 + t2 = 7
16: i = t3 = 7
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 7
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 21
10: t2 = i = 7
11: t3 = t1 + t2 = 28
12: s = t3 = 28
13: t1 = i = 7
14: t2 = 1 = 1
15: t3 = t1 + t2 = 8
16: i = t3 = 8
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 8
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 28
10: t2 = i = 8
11: t3 = t1 + t2 = 36
12: s = t3 = 36
13: t1 = i = 8
14: t2 = 1 = 1
15: t3 = t1 + t2 = 9
16: i = t3 = 9
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 9
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 36
10: t2 = i = 9
11: t3 = t1 + t2 = 45
12: s = t3 = 45
13: t1 = i = 9
14: t2 = 1 = 1
15: t3 = t1 + t2 = 10
16: i = t3 = 10
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 10
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 1
08: ifnot t4(=1)  -- fail
09: t1 = s = 45
10: t2 = i = 10
11: t3 = t1 + t2 = 55
12: s = t3 = 55
13: t1 = i = 10
14: t2 = 1 = 1
15: t3 = t1 + t2 = 11
16: i = t3 = 11
17: goto L1 = 4
04: (L1) = 4
05: t2 = i = 11
06: t3 = 10 = 10
07: t4 = t2 <= t3 = 0
08: ifnot t4(=0) goto L2 = 18
18: (L2) = 18
```