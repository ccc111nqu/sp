# 自製 RISC-V 工具鏈

## build

```
user@DESKTOP-96FRN6B MINGW64 /d/ccc/ccc109/sp/_my/rv5/rv (master)
$ make
gcc -std=c99 -m32 as5.c asm.c parser.c cpu.c riscv.c ../lib/lib.c ../lib/st.c ../lib/map.c -o as5
gcc -std=c99 -m32 ob5dump.c obj.c cpu.c riscv.c ../lib/lib.c ../lib/st.c ../lib/map.c -o ob5dump
gcc -std=c99 -m32 vm5.c vm.c obj.c cpu.c riscv.c ../lib/lib.c ../lib/st.c ../lib/map.c -o vm5
```

## assembler

```
user@DESKTOP-96FRN6B MINGW64 /d/ccc/ccc109/sp/_my/rv5/rv (master)
$ ./as5 test/sum1
======= mapDump() ==============
============= PASS1 ================
// # x1:sum, x2:i
// addi x1, x0, 0  # 00: sum = 0
// addi x2, x0, 1  # 04: i = 1
// addi x3, x0, 11 # 08: x3 = 11
// # loop:
// add  x1, x1, x2 # 12: sum = sum + i
// addi x2, x2, 1  # 16: i = i + 1
// blt  x2, x3, -8 # 20: if (i<=10) goto loop
======= mapDump() ==============
============= PASS2 ================
// # x1:sum, x2:i
// addi x1, x0, 0  # 00: sum = 0
0000:93000000             I 13 0 00 r:01 00 00 imm:0
// addi x2, x0, 1  # 04: i = 1
0004:13011000             I 13 0 00 r:02 00 00 imm:1
// addi x3, x0, 11 # 08: x3 = 11
0008:9301B000             I 13 0 00 r:03 00 00 imm:11
// # loop:
// add  x1, x1, x2 # 12: sum = sum + i
000C:B3802000             R 33 0 00 r:01 01 02 imm:-1
// addi x2, x2, 1  # 16: i = i + 1
0010:13011100             I 13 0 00 r:02 02 00 imm:1
// blt  x2, x3, -8 # 20: if (i<=10) goto loop
0014:E34C31FE             B 63 4 00 r:00 02 03 imm:-8
```

## 反組譯器

```
user@DESKTOP-96FRN6B MINGW64 /d/ccc/ccc109/sp/_my/rv5/rv (master)
$ ./ob5dump test/sum1.bin
0000:00000093 addi x1,x0,0
0004:00100113 addi x2,x0,1
0008:00B00193 addi x3,x0,11
000C:002080B3 add x1,x1,x2
0010:00110113 addi x2,x2,1
0014:FE314CE3 blt x2,x3,-8
```

## 虛擬機

```
user@DESKTOP-96FRN6B MINGW64 /d/ccc/ccc109/sp/_my/rv5/rv (master)
$ ./vm5 test/sum1.bin -d
0000:00000093 addi x1,x0,0                   x[1]=0
0004:00100113 addi x2,x0,1                   x[2]=1
0008:00B00193 addi x3,x0,11                  x[3]=11
000C:002080B3 add x1,x1,x2                   x[1]=1
0010:00110113 addi x2,x2,1                   x[2]=2
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=3
0010:00110113 addi x2,x2,1                   x[2]=3
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=6
0010:00110113 addi x2,x2,1                   x[2]=4
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=10
0010:00110113 addi x2,x2,1                   x[2]=5
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=15
0010:00110113 addi x2,x2,1                   x[2]=6
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=21
0010:00110113 addi x2,x2,1                   x[2]=7
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=28
0010:00110113 addi x2,x2,1                   x[2]=8
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=36
0010:00110113 addi x2,x2,1                   x[2]=9
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=45
0010:00110113 addi x2,x2,1                   x[2]=10
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
000C:002080B3 add x1,x1,x2                   x[1]=55
0010:00110113 addi x2,x2,1                   x[2]=11
0014:FE314CE3 blt x2,x3,-8                   x[25]=0
```

## 搭配 riscv toolchain

```
root@localhost:~/co/riscv/mini_riscv/01/test# riscv64-unknown-elf-gcc -march=rv32ima -mabi=ilp32 -Wl,-Ttext=0x
0 -nostdlib -o sum_c sum_c.s
/usr/local/lib/gcc/riscv64-unknown-elf/9.2.0/../../../../riscv64-unknown-elf/bin/ld: warning: cannot find entry symbol _start; defaulting to 0000000000000000
root@localhost:~/co/riscv/mini_riscv/01/test# riscv64-unknown-elf-objdump -d sum_c

sum_c:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <main>:
   0:   00000093                li      ra,0
   4:   00100113                li      sp,1
   8:   00b00193                li      gp,11

0000000c <.loop>:
   c:   002080b3                add     ra,ra,sp
  10:   00110113                addi    sp,sp,1
  14:   fe314ce3                blt     sp,gp,c <.loop>
root@localhost:~/co/riscv/mini_riscv/01/test# riscv64-unknown-elf-objcopy -O binary sum_c sum_c.bin
root@localhost:~/co/riscv/mini_riscv/01/test# cd ..
root@localhost:~/co/riscv/mini_riscv/01# make clean
rm -f *.o *.exe
root@localhost:~/co/riscv/mini_riscv/01# make
g++ -std=c++11 -D__VM__ vm.cpp dasm.cpp riscv.cpp -o vm
g++ -std=c++11 -D__DASM__ dasm.cpp riscv.cpp -o dasm
root@localhost:~/co/riscv/mini_riscv/01# ./dasm test/sum_c.bin
asm                  addr:code     T op f3 f7 rd rs1 rs2
---------------------------------------------------------
0000:addi x1,x0,0         00000093 I 13  0 00 01  00  00
0004:addi x2,x0,1         00100113 I 13  0 00 02  00  01
0008:addi x3,x0,11        00B00193 I 13  0 00 03  00  0B
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
root@localhost:~/co/riscv/mini_riscv/01# ./vm test/sum_c.bin
0000:addi x1,x0,0         00000093 I 13  0 00 01  00  00
  x[1]=0
0004:addi x2,x0,1         00100113 I 13  0 00 02  00  01
  x[2]=1
0008:addi x3,x0,11        00B00193 I 13  0 00 03  00  0B
  x[3]=11
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=1
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=2
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=3
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=3
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=6
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=4
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=10
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=5
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=15
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=6
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=21
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=7
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=28
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=8
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=36
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=9
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=45
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=10
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
000C:add x1,x1,x2         002080B3 R 33  0 00 01  01  02
  x[1]=55
0010:addi x2,x2,1         00110113 I 13  0 00 02  02  01
  x[2]=11
0014:blt x2,x3,-8         FE314CE3 B 63  4 7F 19  02  03
  x[25]=0
```
