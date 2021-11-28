# Hack 虛擬機

## HackCPU 虛擬機

* [模擬 HackCPU 的虛擬機](./hackCpuVm)
* [延伸 HackCPU 指令集](./hackCpuExt)


## HackVM 虛擬機

* [將 HackVM 對應到 HackCPU](./hackVmToCPU)
* [HackVM 堆疊式虛擬機](./hackVm)
* [HackVM 函數呼叫如何處理](./hackVmCall)

## HackCPU 虛擬機的用法


```
$ gcc asm.c c6.c -o asm
$ ./asm ../add/Add
```

上面的組譯器指令會產生 ../add/Add.bin 檔，於是我們可以用虛擬機執行該機器碼檔案！


```
PS D:\ccc\course\sp\code\c\03-asmVm\hack\c> gcc vm.c -o vm
PS D:\ccc\course\sp\code\c\03-asmVm\hack\c> ./vm ../test/Add.bin
PC=0000 I=0002 A=0001 D=0002 m[A]=0000
PC=0001 I=EC10 A=0002 D=0002 m[A]=0002 a=0 c=30 d=2 j=0
PC=0002 I=0003 A=0003 D=0003 m[A]=0002
PC=0003 I=E090 A=0004 D=0003 m[A]=0005 a=0 c=02 d=2 j=0
PC=0004 I=0000 A=0005 D=0000 m[A]=0005
PC=0005 I=E308 A=0006 D=0000 m[A]=0005 a=0 c=0C d=1 j=0
exit program !
```
