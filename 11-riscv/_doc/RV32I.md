# RV32I

1. 指令只有六种格式，并且所有的指令都是 32 位长，这简化了指令解码。
2. 提供三个寄存器操作数
3. 对于所有指令，要读写的寄存器的标识符总是在同一位置，意味着在解码指令之前，就可以先开始访问寄存
器。
4. 这些格式的立即数字段总是符号扩展，符号位总是在指令中最高位。这意味着可能成为关键路径的立即数符号扩展，可以在指令解码之前进行。

## 

* 为了帮助程序员，所有位全部是 0 是非法的 RV32I 指令。因此, 试图跳转到被清零的内存区域的错误跳转将会立即触发异常，这可以帮助调试。