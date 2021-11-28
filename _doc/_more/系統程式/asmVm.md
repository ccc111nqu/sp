# 組合語言

## 簡介

* [組合語言的類型](./assemblyType)
* [組合語言的函數呼叫](./assemblyCall)

## 轉換過程

* [從 C 到組合語言](./c2asm)
* [從組合語言到機器碼](./asm2bin)

## x86 組合語言

* x86 組合語言 -- http://www.int80h.org/

## Nand2tetris -- Hack 組譯器

1. 沒有符號的組譯器
    * 單一階段就能做
    * 指令表 cTable, dTable, jTable, ....
2. 符號的處理
    * 使用兩階段 2PASS 處理

# 虛擬機

## HackCPU 虛擬機

* [模擬 HackCPU 的虛擬機](./hackCpuVm)
* [延伸 HackCPU 指令集](./hackCpuExt)


## HackVM 虛擬機

* [將 HackVM 對應到 HackCPU](./hackVmToCPU)
* [HackVM 堆疊式虛擬機](./hackVm)
* [HackVM 函數呼叫如何處理](./hackVmCall)


