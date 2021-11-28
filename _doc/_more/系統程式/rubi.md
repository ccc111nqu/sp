# 專案欣賞 -- rubi 編譯器


專案 -- https://github.com/ccc-c/rubi

## 執行

本程式只能在 linux 上編譯執行！


```
guest@localhost:~/sp/ccc/rubi$ make
cc -Wall -m32 -mstackrealign -std=gnu99 -O2 -c engine.c
engine.c: In function ‘main’:
engine.c:162:5: warning: ignoring return value of ‘fread’, declared with attribute warn_unused_result [-Wunused-result]
     fread(src, sizeof(char), ssz, fp);
     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
cc -Wall -m32 -mstackrealign -std=gnu99 -O2 -c expr.c
cc -Wall -m32 -mstackrealign -std=gnu99 -O2 -c parser.c
parser.c: In function ‘isassign’:
parser.c:416:13: warning: this ‘if’ clause does not guard... [-Wmisleading-indentation]
             if (!strcmp(val, "[")) t++; if (!strcmp(val, "]")) t--;
             ^~
parser.c:416:41: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘if’
             if (!strcmp(val, "[")) t++; if (!strcmp(val, "]")) t--;
                                         ^~
cc -Wall -m32 -mstackrealign -std=gnu99 -O2 -c stdlib.c
cc -Wall -m32 -mstackrealign -std=gnu99 -O2 -o rubi engine.o expr.o parser.o stdlib.o
guest@localhost:~/sp/ccc/rubi$ ./rubi progs/fib.rb
832040
guest@localhost:~/sp/ccc/rubi$ ./rubi progs/dfs.rb
5 1 4 0 6 8 7 4 6 6  sum = 23
true
4 1 6 6 1 7 0 1 3 3  sum = 9
true
8 2 7 4 3 7 0 4 0 5  sum = 9
true
0 6 9 8 2 1 9 8 7 9  sum = 17
true
8 5 1 8 5 6 4 2 4 7  sum = 5
true
8 1 2 2 4 4 3 4 8 2  sum = 1
true
6 1 0 1 3 9 7 1 2 8  sum = 15
true
3 4 7 3 6 8 3 3 8 7  sum = 24
true
4 9 5 2 8 2 0 6 9 8  sum = 8
true
8 6 6 4 0 3 2 7 5 9  sum = 24
true
guest@localhost:~/sp/ccc/rubi$ ./rubi progs/file.rb
I love to do my homework.
```