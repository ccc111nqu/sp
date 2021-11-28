# 參考文獻

* [Linux工具快速教程](https://linuxtools-rst.readthedocs.io/zh_CN/latest/index.html)
    * [13. readelf elf文件格式分析](https://linuxtools-rst.readthedocs.io/zh_CN/latest/tool/readelf.html)
* https://github.com/0intro/libelf

## 程式

* https://github.com/skuhl/sys-prog-examples (讚!)
    * fork : https://github.com/ccc-c/sys-prog-examples
    * 安裝 -- apt-get install libreadline-dev
    * 進 simple-code 執行 make

關注範例:

* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/asm.c
* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/backtrace.c
* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/color-tty.c
* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/fork-basics.c
* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/mmap.c
* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/endianness.c

```
guest@localhost:~/sp/ccc/sys-prog-examples/simple-examples$ ./endianness
Hex of the four bytes: deadbeef
Writing 4 bytes, 1 byte at a time
Note: If you are on a little-endian machine, this actually wrote: 0xefbeadde to the file! Run 'hexdump -C endianness.temp' or 'xxd endianness.temp' to convince yourself of that!
Reading 4 bytes.
We read the same thing that we wrote.
Reading 4 bytes into an array.
0xef was the first byte in the array

We created the file 'endianness.temp'. You can safely delete it.

```

* https://github.com/skuhl/sys-prog-examples/blob/master/simple-examples/chroot.c

```
current working directory: /home/guest/sp/ccc/sys-prog-examples/simple-examples
stat(/Makefile): No such file or directory
current working directory: /
found /Makefile
Breaking out of chroot....
current working directory (escape part 1): (unreachable)/home/guest/sp/ccc/sys-prog-examples/simple-examples
current working directory (escape part 2): (unreachable)/
current working directory (escape part 3): /
listing of files in this directory
bin   home            lib32       media  root  srv  var
boot  initrd.img      lib64       mnt    run   sys  vmlinuz
dev   initrd.img.old  libx32      opt    sbin  tmp  vmlinuz.old
etc   lib             lost+found  proc   snap  usr

```