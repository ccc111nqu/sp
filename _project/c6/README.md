# C6 -- 500 行的 C 語言編譯器 (從 C4->C5->C6 一路修改過來)

## hello.c

```
$ ./c6 test/fib.c
f(7)=13
exit(8) cycle = 920
$ ./c6 -s test/hello.c
1: #include <stdio.h>
2: 
3: int main()
4: {
5:   printf("hello, world\n");
 0001     ENT  0          // 進入函數，分配 0 個區域變數
 0003     STR  0          // 位於 data 段第 0 個位址的字串，也就是 "hello, world\n"
 0005     PSH             // 將字串位址推入堆疊
 0006     PRTF            // 呼叫 printf
 0007     ADJ  1          // 函數呼叫後要調整堆疊把參數移除
6:   return 0;
 0009     IMM  0          // 累積器 a = 0 
 000b     LEV             // 離開 (sp 與 pc 還原)
7: }
 000c     LEV             // 有些程式沒有 return ，所以這裡還會補一個 LEV
$ ./c6 test/hello.c
hello, world
exit(0) cycle = 9
```

## sum.c

```
$ gcc -w c6.c -o c6
$ ./c6 -s test/sum.c
1: #include <stdio.h>
2:
3: // sum(n) = 1+2+...+n
4: int sum(int n) {     
5:   int s;
6:   int i;
7:   s=0;
 0001     ENT  2
 0003     LEA  -1
 0005     PSH
 0006     IMM  0
 0008     SI
8:   i=1;
 0009     LEA  -2
 000b     PSH
 000c     IMM  1
 000e     SI
9:   while (i <= n) {
 000f     LEA  -2
 0011     LI
 0012     PSH
 0013     LEA  2
 0015     LI
 0016     LE
 0017     BZ   0
10:     s = s + i;
 0019     LEA  -1
 001b     PSH
 001c     LEA  -1
 001e     LI
 001f     PSH
 0020     LEA  -2
 0022     LI
 0023     ADD
 0024     SI
11:     i ++;
 0025     LEA  -2
 0027     PSH
 0028     LI
 0029     PSH
 002a     IMM  1
 002c     ADD
 002d     SI
 002e     PSH
 002f     IMM  1
 0031     SUB
12:   }
13:   return s;
 0032     JMP  000f
 0034     LEA  -1
 0036     LI
 0037     LEV
14: }
 0038     LEV
15:
16: int main() {
17:   printf("sum(10)=%d\n", sum(10));
 0039     ENT  0
 003b     STR  0
 003d     PSH
 003e     IMM  10
 0040     PSH
 0041     JSR  0001
 0043     ADJ  1
 0045     PSH
 0046     PRTF
 0047     ADJ  2
18:   return 0;
 0049     IMM  0
 004b     LEV
19: }
 004c     LEV
$ ./c6 test/sum.c
sum(10)=55
exit(0) cycle = 303
```

## fib.c

```
$ ./c6 -s test/fib.c
1: #include <stdio.h>
2:
3: int f(int n) {       
4:   if (n<=0) return 0;
 0001     ENT  0        
 0003     LEA  2        
 0005     LI
 0006     PSH
 0007     IMM  0        
 0009     LE
 000a     BZ   0        
 000c     IMM  0
 000e     LEV
5:   if (n==1) return 1;
 000f     LEA  2
 0011     LI
 0012     PSH
 0013     IMM  1
 0015     EQ
 0016     BZ   0
 0018     IMM  1
 001a     LEV
6:   return f(n-1) + f(n-2);
 001b     LEA  2
 001d     LI
 001e     PSH
 001f     IMM  1
 0021     SUB
 0022     PSH
 0023     JSR  0001
 0025     ADJ  1
 0027     PSH
 0028     LEA  2
 002a     LI
 002b     PSH
 002c     IMM  2
 002e     SUB
 002f     PSH
 0030     JSR  0001
 0032     ADJ  1
 0034     ADD
 0035     LEV
7: }
 0036     LEV
8:
9: int main() {
10:   printf("f(7)=%d\n", f(7));
 0037     ENT  0
 0039     STR  0
 003b     PSH
 003c     IMM  7
 003e     PSH
 003f     JSR  0001
 0041     ADJ  1
 0043     PSH
 0044     PRTF
 0045     ADJ  2
11: }
 0047     LEV
$ ./c6 test/fib.c
f(7)=13
exit(8) cycle = 920
```