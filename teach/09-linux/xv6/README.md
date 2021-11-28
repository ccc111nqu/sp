## xv6-public

xv6 舊版，在 x86+linux 上編譯執行！

```
guest@localhost:~/sp/09-linux/05-xv6/xv6-public$ make qemu-nox
qemu-system-i386 -nographic -drive file=fs.img,index=1,media=disk,format=raw -drive file=xv6.img,index=0,media=disk,format=raw -smp 2 -m 512 
xv6...
cpu1: starting 1
cpu0: starting 0
sb: size 1000 nblocks 941 ninodes 200 nlog 30 logstart 2 inodestart 32 bmap start 58
init: starting sh
$ ls
.              1 1 512
..             1 1 512
README         2 2 2286
cat            2 3 13632
echo           2 4 12644
forktest       2 5 8072
grep           2 6 15508
init           2 7 13228
kill           2 8 12696
ln             2 9 12592
ls             2 10 14780
mkdir          2 11 12776
rm             2 12 12752
sh             2 13 23240
stressfs       2 14 13424
usertests      2 15 56356
wc             2 16 14172
zombie         2 17 12416
console        3 18 0
$ cat README | wc
50 329 2286 
$ QEMU: Terminated // 按下 Ctrl-a x 離開
```