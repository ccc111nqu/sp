# amacc 編譯器

專案 -- https://github.com/ccc-c/amacc

## 執行

```
root@localhost:~/ccc/amacc# PATH=$PATH:/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
root@localhost:~/ccc/amacc# make check
[*** verify tests/fib.c <JIT> *******]
[*** verify tests/fib.c <ELF> *******]
[*** verify tests/fib.c <ELF-self> **]
tests/fib.c Passed
[*** verify tests/func_param.c <JIT> *******]
[*** verify tests/func_param.c <ELF> *******]
[*** verify tests/func_param.c <ELF-self> **]
tests/func_param.c Passed
[*** verify tests/comments.c <JIT> *******]
[*** verify tests/comments.c <ELF> *******]
[*** verify tests/comments.c <ELF-self> **]
tests/comments.c Passed
[*** verify tests/read.c <JIT> *******]
[*** verify tests/read.c <ELF> *******]
[*** verify tests/read.c <ELF-self> **]
tests/read.c Passed
[*** verify tests/struct.c <JIT> *******]
[*** verify tests/struct.c <ELF> *******]
[*** verify tests/struct.c <ELF-self> **]
tests/struct.c Passed
[*** verify tests/jit.c <JIT> *******]
[*** verify tests/jit.c <ELF> *******]
[*** verify tests/jit.c <ELF-self> **]
tests/jit.c Passed
[*** verify tests/literal.c <JIT> *******]
[*** verify tests/literal.c <ELF> *******]
[*** verify tests/literal.c <ELF-self> **]
tests/literal.c Passed
[*** verify tests/hello.c <JIT> *******]
[*** verify tests/hello.c <ELF> *******]
[*** verify tests/hello.c <ELF-self> **]
tests/hello.c Passed
[*** verify tests/arginc.c <JIT> *******]
[*** verify tests/arginc.c <ELF> *******]
[*** verify tests/arginc.c <ELF-self> **]
tests/arginc.c Passed
[*** verify tests/inc.c <JIT> *******]
[*** verify tests/inc.c <ELF> *******]
[*** verify tests/inc.c <ELF-self> **]
tests/inc.c Passed
[*** verify tests/while.c <JIT> *******]
[*** verify tests/while.c <ELF> *******]
[*** verify tests/while.c <ELF-self> **]
tests/while.c Passed
[*** verify tests/cond.c <JIT> *******]
[*** verify tests/cond.c <ELF> *******]
[*** verify tests/cond.c <ELF-self> **]
tests/cond.c Passed
[*** verify tests/shift.c <JIT> *******]
[*** verify tests/shift.c <ELF> *******]
[*** verify tests/shift.c <ELF-self> **]
tests/shift.c Passed
[*** verify tests/char.c <JIT> *******]
[*** verify tests/char.c <ELF> *******]
[*** verify tests/char.c <ELF-self> **]
tests/char.c Passed
[*** verify tests/ptr.c <JIT> *******]
[*** verify tests/ptr.c <ELF> *******]
[*** verify tests/ptr.c <ELF-self> **]
tests/ptr.c Passed
[*** verify tests/eq.c <JIT> *******]
[*** verify tests/eq.c <ELF> *******]
[*** verify tests/eq.c <ELF-self> **]
tests/eq.c Passed
[*** verify tests/enum.c <JIT> *******]
[*** verify tests/enum.c <ELF> *******]
[*** verify tests/enum.c <ELF-self> **]
tests/enum.c Passed
[*** verify tests/local.c <JIT> *******]
[*** verify tests/local.c <ELF> *******]
[*** verify tests/local.c <ELF-self> **]
tests/local.c Passed
[*** verify tests/for.c <JIT> *******]
[*** verify tests/for.c <ELF> *******]
[*** verify tests/for.c <ELF-self> **]
tests/for.c Passed
[*** verify tests/assign.c <JIT> *******]
[*** verify tests/assign.c <ELF> *******]
[*** verify tests/assign.c <ELF-self> **]
tests/assign.c Passed
[*** verify tests/printf.c <JIT> *******]
[*** verify tests/printf.c <ELF> *******]
[*** verify tests/printf.c <ELF-self> **]
tests/printf.c Passed
[*** verify tests/switch.c <JIT> *******]
[*** verify tests/switch.c <ELF> *******]
[*** verify tests/switch.c <ELF-self> **]
tests/switch.c Passed
[ C to IR translation          ] Passed
[ JIT compilation + execution  ] Passed
[ ELF generation               ] Passed
[ nested/self compilation      ] Passed
[ Compatibility with GCC/Arm   ] /lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
.
----------------------------------------------------------------------
Ran 44 tests in 4.106s

OK

```

## 安裝

```
root@localhost:~/ccc# curl -fsSL https://releases.linaro.org/components/toolchain/binaries/latest-7/arm-linux-gnueabihf/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf.tar.xz --output gnueabihf.tar.xz
root@localhost:~/ccc# ls -all
total 208932
drwxr-xr-x  6 root root      4096 Jan 20 05:29 .
drwx------ 16 root root      4096 Jan 17 10:34 ..
drwxr-xr-x  7 root root      4096 Dec 25  2018 c2riscv
-rw-r--r--  1 root root 104873984 Jan 20 05:29 gnueabihf.tar.xa
-rw-r--r--  1 root root 109045732 Jan 20 05:30 gnueabihf.tar.xz
drwxr-xr-x  5 root root      4096 Jan 17 10:39 linux
drwxr-xr-x  5 root root      4096 Dec 25  2018 linux_bak
drwxr-xr-x  5 root root      4096 Feb 14  2019 sp
root@localhost:~/ccc# rm gnueabihf.tar.xa
root@localhost:~/ccc# ls
c2riscv  gnueabihf.tar.xz  linux  linux_bak  sp
root@localhost:~/ccc# tar xf gnueabihf.tar.xz
root@localhost:~/ccc# ls
c2riscv                                            gnueabihf.tar.xz  linux_bak
gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf  linux             sp
root@localhost:~/ccc# cd gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf# ls
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf# cd bin
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin# ls
arm-linux-gnueabihf-addr2line   arm-linux-gnueabihf-gcov-tool
arm-linux-gnueabihf-ar          arm-linux-gnueabihf-gdb
arm-linux-gnueabihf-as          arm-linux-gnueabihf-gdb-add-index
arm-linux-gnueabihf-c++         arm-linux-gnueabihf-gfortran
arm-linux-gnueabihf-c++filt     arm-linux-gnueabihf-gprof
arm-linux-gnueabihf-cpp         arm-linux-gnueabihf-ld
arm-linux-gnueabihf-dwp         arm-linux-gnueabihf-ld.bfd
arm-linux-gnueabihf-elfedit     arm-linux-gnueabihf-ld.gold
arm-linux-gnueabihf-g++         arm-linux-gnueabihf-nm
arm-linux-gnueabihf-gcc         arm-linux-gnueabihf-objcopy
arm-linux-gnueabihf-gcc-7.5.0   arm-linux-gnueabihf-objdump
arm-linux-gnueabihf-gcc-ar      arm-linux-gnueabihf-ranlib
arm-linux-gnueabihf-gcc-nm      arm-linux-gnueabihf-readelf
arm-linux-gnueabihf-gcc-ranlib  arm-linux-gnueabihf-size
arm-linux-gnueabihf-gcov        arm-linux-gnueabihf-strings
arm-linux-gnueabihf-gcov-dump   arm-linux-gnueabihf-strip
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin# cd ..
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf# ls
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf# cd ..
root@localhost:~/ccc# sudo apt-get install qemu-user
Reading package lists... Done
Building dependency tree
Reading state information... Done
The following additional packages will be installed:
  binfmt-support qemu-user-binfmt
The following NEW packages will be installed:
  binfmt-support qemu-user qemu-user-binfmt
0 upgraded, 3 newly installed, 0 to remove and 294 not upgraded.
Need to get 7,409 kB of archives.
After this operation, 63.4 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://mirrors.linode.com/ubuntu bionic/main amd64 binfmt-support amd64 2.1.8-2 [51.6 kB]
Get:2 http://mirrors.linode.com/ubuntu bionic-updates/universe amd64 qemu-user amd64 1:2.11+dfsg-1ubuntu7.21 [7,355 kB]
Get:3 http://mirrors.linode.com/ubuntu bionic-updates/universe amd64 qemu-user-binfmt amd64 1:2.11+dfsg-1ubuntu7.21 [2,572 B]
Fetched 7,409 kB in 0s (46.7 MB/s)
Selecting previously unselected package binfmt-support.
(Reading database ... 129844 files and directories currently installed.)
Preparing to unpack .../binfmt-support_2.1.8-2_amd64.deb ...
Unpacking binfmt-support (2.1.8-2) ...
Selecting previously unselected package qemu-user.
Preparing to unpack .../qemu-user_1%3a2.11+dfsg-1ubuntu7.21_amd64.deb ...
Unpacking qemu-user (1:2.11+dfsg-1ubuntu7.21) ...
Selecting previously unselected package qemu-user-binfmt.
Preparing to unpack .../qemu-user-binfmt_1%3a2.11+dfsg-1ubuntu7.21_amd64.deb ...
Unpacking qemu-user-binfmt (1:2.11+dfsg-1ubuntu7.21) ...
Setting up binfmt-support (2.1.8-2) ...
Created symlink /etc/systemd/system/multi-user.target.wants/binfmt-support.service → /lib/systemd/system/binfmt-support.service.
Setting up qemu-user (1:2.11+dfsg-1ubuntu7.21) ...
Processing triggers for ureadahead (0.100.0-20) ...
Setting up qemu-user-binfmt (1:2.11+dfsg-1ubuntu7.21) ...
Processing triggers for systemd (237-3ubuntu10.3) ...
Processing triggers for man-db (2.8.3-2) ...
root@localhost:~/ccc# ls
c2riscv                                            gnueabihf.tar.xz  linux_bak
gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf  linux             sp
root@localhost:~/ccc# ls gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc# ls gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
arm-linux-gnueabihf-addr2line   arm-linux-gnueabihf-gcov-tool
arm-linux-gnueabihf-ar          arm-linux-gnueabihf-gdb
arm-linux-gnueabihf-as          arm-linux-gnueabihf-gdb-add-index
arm-linux-gnueabihf-c++         arm-linux-gnueabihf-gfortran
arm-linux-gnueabihf-c++filt     arm-linux-gnueabihf-gprof
arm-linux-gnueabihf-cpp         arm-linux-gnueabihf-ld
arm-linux-gnueabihf-dwp         arm-linux-gnueabihf-ld.bfd
arm-linux-gnueabihf-elfedit     arm-linux-gnueabihf-ld.gold
arm-linux-gnueabihf-g++         arm-linux-gnueabihf-nm
arm-linux-gnueabihf-gcc         arm-linux-gnueabihf-objcopy
arm-linux-gnueabihf-gcc-7.5.0   arm-linux-gnueabihf-objdump
arm-linux-gnueabihf-gcc-ar      arm-linux-gnueabihf-ranlib
arm-linux-gnueabihf-gcc-nm      arm-linux-gnueabihf-readelf
arm-linux-gnueabihf-gcc-ranlib  arm-linux-gnueabihf-size
arm-linux-gnueabihf-gcov        arm-linux-gnueabihf-strings
arm-linux-gnueabihf-gcov-dump   arm-linux-gnueabihf-strip
root@localhost:~/ccc# cd gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/^C
root@localhost:~/ccc# PATH=$PATH:/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
root@localhost:~/ccc# cd amacc
-bash: cd: amacc: No such file or directory
root@localhost:~/ccc# ls
c2riscv                                            gnueabihf.tar.xz  linux_bak
gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf  linux             sp
root@localhost:~/ccc# git clone https://github.com/ccc-c/amacc.git
Cloning into 'amacc'...
remote: Enumerating objects: 663, done.
remote: Total 663 (delta 0), reused 0 (delta 0), pack-reused 663
Receiving objects: 100% (663/663), 245.85 KiB | 513.00 KiB/s, done.
Resolving deltas: 100% (378/378), done.
root@localhost:~/ccc# cd amacc
root@localhost:~/ccc/amacc# ls
amacc.c  AUTHORS  docs  LICENSE  Makefile  mk  README.md  runtest.py  tests

root@localhost:~/ccc# PATH=$PATH:/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
root@localhost:~/ccc# cd amacc
-bash: cd: amacc: No such file or directory
root@localhost:~/ccc# ls
c2riscv                                            gnueabihf.tar.xz  linux_bak
gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf  linux             sp
root@localhost:~/ccc# git clone https://github.com/ccc-c/amacc.git
Cloning into 'amacc'...
remote: Enumerating objects: 663, done.
remote: Total 663 (delta 0), reused 0 (delta 0), pack-reused 663
Receiving objects: 100% (663/663), 245.85 KiB | 513.00 KiB/s, done.
Resolving deltas: 100% (378/378), done.
root@localhost:~/ccc# cd amacc
root@localhost:~/ccc/amacc# ls
amacc.c  AUTHORS  docs  LICENSE  Makefile  mk  README.md  runtest.py  tests
root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc# make check
/bin/sh: 1: arm-linux-gnueabihf-cpp: not found
mk/arm.mk:11: *** "no valid GNU toolchain for ARM found.".  Stop.
root@localhost:~/ccc/amacc# PATH
PATH: command not found
root@localhost:~/ccc/amacc# echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/root/riscv/toolchain/bin:/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
root@localhost:~/ccc/amacc# ls /root/gcc^C
root@localhost:~/ccc/amacc# ls /root//gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
ls: cannot access '/root//gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin': No such file or directory
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
ls: cannot access '/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin': No such file or directory
root@localhost:~/ccc/amacc# ls /root
blog6  blog7  ccc  mysite_old  riscv  site  site_bak  test  user
root@localhost:~/ccc/amacc# cd ccc
-bash: cd: ccc: No such file or directory
root@localhost:~/ccc/amacc# cd ..
root@localhost:~/ccc# ls
amacc    gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf  linux      sp
c2riscv  gnueabihf.tar.xz                                   linux_bak
root@localhost:~/ccc# mv gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/ ../
root@localhost:~/ccc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin
arm-linux-gnueabihf-addr2line   arm-linux-gnueabihf-gcov-tool
arm-linux-gnueabihf-ar          arm-linux-gnueabihf-gdb
arm-linux-gnueabihf-as          arm-linux-gnueabihf-gdb-add-index
arm-linux-gnueabihf-c++         arm-linux-gnueabihf-gfortran
arm-linux-gnueabihf-c++filt     arm-linux-gnueabihf-gprof
arm-linux-gnueabihf-cpp         arm-linux-gnueabihf-ld
arm-linux-gnueabihf-dwp         arm-linux-gnueabihf-ld.bfd
arm-linux-gnueabihf-elfedit     arm-linux-gnueabihf-ld.gold
arm-linux-gnueabihf-g++         arm-linux-gnueabihf-nm
arm-linux-gnueabihf-gcc         arm-linux-gnueabihf-objcopy
arm-linux-gnueabihf-gcc-7.5.0   arm-linux-gnueabihf-objdump
arm-linux-gnueabihf-gcc-ar      arm-linux-gnueabihf-ranlib
arm-linux-gnueabihf-gcc-nm      arm-linux-gnueabihf-readelf
arm-linux-gnueabihf-gcc-ranlib  arm-linux-gnueabihf-size
arm-linux-gnueabihf-gcov        arm-linux-gnueabihf-strings
arm-linux-gnueabihf-gcov-dump   arm-linux-gnueabihf-strip
root@localhost:~/ccc# cd amacc
root@localhost:~/ccc/amacc# make check
/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/../libexec/gcc/arm-linux-gnueabihf/7.5.0/cc1: error while loading shared libraries: libz.so.1: cannot open shared object file: No such file or directory
mk/arm.mk:11: *** "no valid GNU toolchain for ARM found.".  Stop.
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/
gcc
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc
arm-linux-gnueabihf
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc/arm-linux-gnueabihf/
7.5.0
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc/arm-linux-gnueabihf/7.5.0
cc1       f951              liblto_plugin.so.0      lto-wrapper
cc1plus   install-tools     liblto_plugin.so.0.0.0  plugin
collect2  liblto_plugin.so  lto1
root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc# sudo apt-get install zlib1g
Reading package lists... Done
Building dependency tree
Reading state information... Done
zlib1g is already the newest version (1:1.2.11.dfsg-0ubuntu2).
0 upgraded, 0 newly installed, 0 to remove and 294 not upgraded.
root@localhost:~/ccc/amacc# make check
/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/../libexec/gcc/arm-linux-gnueabihf/7.5.0/cc1: error while loading shared libraries: libz.so.1: cannot open shared object file: No such file or directory
mk/arm.mk:11: *** "no valid GNU toolchain for ARM found.".  Stop.
root@localhost:~/ccc/amacc# sudo apt-get install zlib1g:i386
Reading package lists... Done
Building dependency tree
Reading state information... Done
The following additional packages will be installed:
  gcc-8-base gcc-8-base:i386 lib32atomic1 lib32gcc1 lib32gomp1 lib32itm1
  lib32mpx2 lib32quadmath0 lib32stdc++6 libatomic1 libc6:i386 libcc1-0 libgcc1
  libgcc1:i386 libgomp1 libitm1 liblsan0 libmpx2 libquadmath0 libstdc++6
  libtsan0 libx32atomic1 libx32gcc1 libx32gomp1 libx32itm1 libx32quadmath0
  libx32stdc++6
Suggested packages:
  glibc-doc:i386 locales:i386
The following NEW packages will be installed:
  gcc-8-base:i386 libc6:i386 libgcc1:i386 zlib1g:i386
The following packages will be upgraded:
  gcc-8-base lib32atomic1 lib32gcc1 lib32gomp1 lib32itm1 lib32mpx2
  lib32quadmath0 lib32stdc++6 libatomic1 libcc1-0 libgcc1 libgomp1 libitm1
  liblsan0 libmpx2 libquadmath0 libstdc++6 libtsan0 libx32atomic1 libx32gcc1
  libx32gomp1 libx32itm1 libx32quadmath0 libx32stdc++6
24 upgraded, 4 newly installed, 0 to remove and 270 not upgraded.
Need to get 5,346 kB of archives.
After this operation, 11.2 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libquadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [133 kB]
Get:2 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32gcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [47.9 kB]
Get:3 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32quadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [135 kB]
Get:4 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libitm1 amd64 8.3.0-6ubuntu1~18.04.1 [28.0 kB]
Get:5 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32itm1 amd64 8.3.0-6ubuntu1~18.04.1 [30.0 kB]
Get:6 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32quadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [208 kB]
Get:7 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32stdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [416 kB]
Get:8 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 gcc-8-base amd64 8.3.0-6ubuntu1~18.04.1 [18.7 kB]
Get:9 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libstdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [400 kB]
Get:10 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32itm1 amd64 8.3.0-6ubuntu1~18.04.1 [28.1 kB]
Get:11 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libmpx2 amd64 8.3.0-6ubuntu1~18.04.1 [11.6 kB]
Get:12 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32gomp1 amd64 8.3.0-6ubuntu1~18.04.1 [77.7 kB]
Get:13 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 liblsan0 amd64 8.3.0-6ubuntu1~18.04.1 [133 kB]
Get:14 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32atomic1 amd64 8.3.0-6ubuntu1~18.04.1 [9,176 B]
Get:15 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32atomic1 amd64 8.3.0-6ubuntu1~18.04.1 [8,660 B]
Get:16 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32stdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [387 kB]
Get:17 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32mpx2 amd64 8.3.0-6ubuntu1~18.04.1 [12.9 kB]
Get:18 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libtsan0 amd64 8.3.0-6ubuntu1~18.04.1 [288 kB]
Get:19 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32gomp1 amd64 8.3.0-6ubuntu1~18.04.1 [83.7 kB]
Get:20 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32gcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [40.4 kB]
Get:21 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libcc1-0 amd64 8.3.0-6ubuntu1~18.04.1 [47.4 kB]
Get:22 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libatomic1 amd64 8.3.0-6ubuntu1~18.04.1 [9,184 B]
Get:23 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libgomp1 amd64 8.3.0-6ubuntu1~18.04.1 [76.4 kB]
Get:24 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libgcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [40.7 kB]
Get:25 http://mirrors.linode.com/ubuntu bionic-updates/main i386 gcc-8-base i386 8.3.0-6ubuntu1~18.04.1 [18.7 kB]
Get:26 http://mirrors.linode.com/ubuntu bionic-updates/main i386 libgcc1 i386 1:8.3.0-6ubuntu1~18.04.1 [48.1 kB]
Get:27 http://mirrors.linode.com/ubuntu bionic/main i386 libc6 i386 2.27-3ubuntu1 [2,551 kB]
Get:28 http://mirrors.linode.com/ubuntu bionic/main i386 zlib1g i386 1:1.2.11.dfsg-0ubuntu2 [58.2 kB]
Fetched 5,346 kB in 0s (19.5 MB/s)
Preconfiguring packages ...
(Reading database ... 129922 files and directories currently installed.)
Preparing to unpack .../0-libquadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libquadmath0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../1-lib32gcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32gcc1 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../2-libx32quadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32quadmath0 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../3-libitm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libitm1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../4-lib32itm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32itm1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../5-lib32quadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32quadmath0 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../6-lib32stdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32stdc++6 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../7-gcc-8-base_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking gcc-8-base:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Selecting previously unselected package gcc-8-base:i386.
Preparing to unpack .../8-gcc-8-base_8.3.0-6ubuntu1~18.04.1_i386.deb ...
Unpacking gcc-8-base:i386 (8.3.0-6ubuntu1~18.04.1) ...
Setting up gcc-8-base:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up gcc-8-base:i386 (8.3.0-6ubuntu1~18.04.1) ...
(Reading database ... 129925 files and directories currently installed.)
Preparing to unpack .../libstdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libstdc++6:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Setting up libstdc++6:amd64 (8.3.0-6ubuntu1~18.04.1) ...
(Reading database ... 129925 files and directories currently installed.)
Preparing to unpack .../00-libx32itm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32itm1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../01-libmpx2_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libmpx2:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../02-libx32gomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32gomp1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../03-liblsan0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking liblsan0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../04-libx32atomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32atomic1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../05-lib32atomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32atomic1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../06-libx32stdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32stdc++6 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../07-lib32mpx2_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32mpx2 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../08-libtsan0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libtsan0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../09-lib32gomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32gomp1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../10-libx32gcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32gcc1 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../11-libcc1-0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libcc1-0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../12-libatomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libatomic1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../13-libgomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libgomp1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../14-libgcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libgcc1:amd64 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Selecting previously unselected package libgcc1:i386.
Preparing to unpack .../15-libgcc1_1%3a8.3.0-6ubuntu1~18.04.1_i386.deb ...
Unpacking libgcc1:i386 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up libgcc1:amd64 (1:8.3.0-6ubuntu1~18.04.1) ...
Selecting previously unselected package libc6:i386.
(Reading database ... 129927 files and directories currently installed.)
Preparing to unpack .../libc6_2.27-3ubuntu1_i386.deb ...
Unpacking libc6:i386 (2.27-3ubuntu1) ...
Replacing files in old package libc6-i386 (2.27-3ubuntu1) ...
Setting up libc6:i386 (2.27-3ubuntu1) ...
Setting up libgcc1:i386 (1:8.3.0-6ubuntu1~18.04.1) ...
Selecting previously unselected package zlib1g:i386.
(Reading database ... 130230 files and directories currently installed.)
Preparing to unpack .../zlib1g_1%3a1.2.11.dfsg-0ubuntu2_i386.deb ...
Unpacking zlib1g:i386 (1:1.2.11.dfsg-0ubuntu2) ...
Setting up libquadmath0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libgomp1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libatomic1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libcc1-0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32gcc1 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32gomp1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up zlib1g:i386 (1:1.2.11.dfsg-0ubuntu2) ...
Setting up libtsan0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32mpx2 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32stdc++6 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32atomic1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32atomic1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up liblsan0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32gomp1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libmpx2:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Processing triggers for libc-bin (2.27-3ubuntu1) ...
Setting up libx32itm1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32quadmath0 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32itm1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libitm1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32quadmath0 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32gcc1 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32stdc++6 (8.3.0-6ubuntu1~18.04.1) ...
Processing triggers for libc-bin (2.27-3ubuntu1) ...

```

...

```
root@localhost:~/ccc/amacc# make check
/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/../libexec/gcc/arm-linux-gnueabihf/7.5.0/cc1: error while loading shared libraries: libz.so.1: cannot open shared object file: No such file or directory
mk/arm.mk:11: *** "no valid GNU toolchain for ARM found.".  Stop.
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/
gcc
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc
arm-linux-gnueabihf
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc/arm-linux-gnueabihf/
7.5.0
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/libexec/gcc/arm-linux-gnueabihf/7.5.0
cc1       f951              liblto_plugin.so.0      lto-wrapper
cc1plus   install-tools     liblto_plugin.so.0.0.0  plugin
collect2  liblto_plugin.so  lto1
root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc# sudo apt-get install zlib1g
Reading package lists... Done
Building dependency tree
Reading state information... Done
zlib1g is already the newest version (1:1.2.11.dfsg-0ubuntu2).
0 upgraded, 0 newly installed, 0 to remove and 294 not upgraded.
root@localhost:~/ccc/amacc# make check
/root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/bin/../libexec/gcc/arm-linux-gnueabihf/7.5.0/cc1: error while loading shared libraries: libz.so.1: cannot open shared object file: No such file or directory
mk/arm.mk:11: *** "no valid GNU toolchain for ARM found.".  Stop.
root@localhost:~/ccc/amacc# sudo apt-get install zlib1g:i386
Reading package lists... Done
Building dependency tree
Reading state information... Done
The following additional packages will be installed:
  gcc-8-base gcc-8-base:i386 lib32atomic1 lib32gcc1 lib32gomp1 lib32itm1
  lib32mpx2 lib32quadmath0 lib32stdc++6 libatomic1 libc6:i386 libcc1-0 libgcc1
  libgcc1:i386 libgomp1 libitm1 liblsan0 libmpx2 libquadmath0 libstdc++6
  libtsan0 libx32atomic1 libx32gcc1 libx32gomp1 libx32itm1 libx32quadmath0
  libx32stdc++6
Suggested packages:
  glibc-doc:i386 locales:i386
The following NEW packages will be installed:
  gcc-8-base:i386 libc6:i386 libgcc1:i386 zlib1g:i386
The following packages will be upgraded:
  gcc-8-base lib32atomic1 lib32gcc1 lib32gomp1 lib32itm1 lib32mpx2
  lib32quadmath0 lib32stdc++6 libatomic1 libcc1-0 libgcc1 libgomp1 libitm1
  liblsan0 libmpx2 libquadmath0 libstdc++6 libtsan0 libx32atomic1 libx32gcc1
  libx32gomp1 libx32itm1 libx32quadmath0 libx32stdc++6
24 upgraded, 4 newly installed, 0 to remove and 270 not upgraded.
Need to get 5,346 kB of archives.
After this operation, 11.2 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libquadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [133 kB]
Get:2 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32gcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [47.9 kB]
Get:3 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32quadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [135 kB]
Get:4 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libitm1 amd64 8.3.0-6ubuntu1~18.04.1 [28.0 kB]
Get:5 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32itm1 amd64 8.3.0-6ubuntu1~18.04.1 [30.0 kB]
Get:6 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32quadmath0 amd64 8.3.0-6ubuntu1~18.04.1 [208 kB]
Get:7 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32stdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [416 kB]
Get:8 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 gcc-8-base amd64 8.3.0-6ubuntu1~18.04.1 [18.7 kB]
Get:9 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libstdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [400 kB]
Get:10 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32itm1 amd64 8.3.0-6ubuntu1~18.04.1 [28.1 kB]
Get:11 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libmpx2 amd64 8.3.0-6ubuntu1~18.04.1 [11.6 kB]
Get:12 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32gomp1 amd64 8.3.0-6ubuntu1~18.04.1 [77.7 kB]
Get:13 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 liblsan0 amd64 8.3.0-6ubuntu1~18.04.1 [133 kB]
Get:14 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32atomic1 amd64 8.3.0-6ubuntu1~18.04.1 [9,176 B]
Get:15 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32atomic1 amd64 8.3.0-6ubuntu1~18.04.1 [8,660 B]
Get:16 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32stdc++6 amd64 8.3.0-6ubuntu1~18.04.1 [387 kB]
Get:17 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32mpx2 amd64 8.3.0-6ubuntu1~18.04.1 [12.9 kB]
Get:18 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libtsan0 amd64 8.3.0-6ubuntu1~18.04.1 [288 kB]
Get:19 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 lib32gomp1 amd64 8.3.0-6ubuntu1~18.04.1 [83.7 kB]
Get:20 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libx32gcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [40.4 kB]
Get:21 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libcc1-0 amd64 8.3.0-6ubuntu1~18.04.1 [47.4 kB]
Get:22 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libatomic1 amd64 8.3.0-6ubuntu1~18.04.1 [9,184 B]
Get:23 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libgomp1 amd64 8.3.0-6ubuntu1~18.04.1 [76.4 kB]
Get:24 http://mirrors.linode.com/ubuntu bionic-updates/main amd64 libgcc1 amd64 1:8.3.0-6ubuntu1~18.04.1 [40.7 kB]
Get:25 http://mirrors.linode.com/ubuntu bionic-updates/main i386 gcc-8-base i386 8.3.0-6ubuntu1~18.04.1 [18.7 kB]
Get:26 http://mirrors.linode.com/ubuntu bionic-updates/main i386 libgcc1 i386 1:8.3.0-6ubuntu1~18.04.1 [48.1 kB]
Get:27 http://mirrors.linode.com/ubuntu bionic/main i386 libc6 i386 2.27-3ubuntu1 [2,551 kB]
Get:28 http://mirrors.linode.com/ubuntu bionic/main i386 zlib1g i386 1:1.2.11.dfsg-0ubuntu2 [58.2 kB]
Fetched 5,346 kB in 0s (19.5 MB/s)
Preconfiguring packages ...
(Reading database ... 129922 files and directories currently installed.)
Preparing to unpack .../0-libquadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libquadmath0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../1-lib32gcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32gcc1 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../2-libx32quadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32quadmath0 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../3-libitm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libitm1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../4-lib32itm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32itm1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../5-lib32quadmath0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32quadmath0 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../6-lib32stdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32stdc++6 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../7-gcc-8-base_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking gcc-8-base:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Selecting previously unselected package gcc-8-base:i386.
Preparing to unpack .../8-gcc-8-base_8.3.0-6ubuntu1~18.04.1_i386.deb ...
Unpacking gcc-8-base:i386 (8.3.0-6ubuntu1~18.04.1) ...
Setting up gcc-8-base:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up gcc-8-base:i386 (8.3.0-6ubuntu1~18.04.1) ...
(Reading database ... 129925 files and directories currently installed.)
Preparing to unpack .../libstdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libstdc++6:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Setting up libstdc++6:amd64 (8.3.0-6ubuntu1~18.04.1) ...
(Reading database ... 129925 files and directories currently installed.)
Preparing to unpack .../00-libx32itm1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32itm1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../01-libmpx2_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libmpx2:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../02-libx32gomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32gomp1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../03-liblsan0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking liblsan0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../04-libx32atomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32atomic1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../05-lib32atomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32atomic1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../06-libx32stdc++6_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32stdc++6 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../07-lib32mpx2_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32mpx2 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../08-libtsan0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libtsan0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../09-lib32gomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking lib32gomp1 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../10-libx32gcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libx32gcc1 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../11-libcc1-0_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libcc1-0:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../12-libatomic1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libatomic1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../13-libgomp1_8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libgomp1:amd64 (8.3.0-6ubuntu1~18.04.1) over (8.2.0-1ubuntu2~18.04) ...
Preparing to unpack .../14-libgcc1_1%3a8.3.0-6ubuntu1~18.04.1_amd64.deb ...
Unpacking libgcc1:amd64 (1:8.3.0-6ubuntu1~18.04.1) over (1:8.2.0-1ubuntu2~18.04) ...
Selecting previously unselected package libgcc1:i386.
Preparing to unpack .../15-libgcc1_1%3a8.3.0-6ubuntu1~18.04.1_i386.deb ...
Unpacking libgcc1:i386 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up libgcc1:amd64 (1:8.3.0-6ubuntu1~18.04.1) ...
Selecting previously unselected package libc6:i386.
(Reading database ... 129927 files and directories currently installed.)
Preparing to unpack .../libc6_2.27-3ubuntu1_i386.deb ...
Unpacking libc6:i386 (2.27-3ubuntu1) ...
Replacing files in old package libc6-i386 (2.27-3ubuntu1) ...
Setting up libc6:i386 (2.27-3ubuntu1) ...
Setting up libgcc1:i386 (1:8.3.0-6ubuntu1~18.04.1) ...
Selecting previously unselected package zlib1g:i386.
(Reading database ... 130230 files and directories currently installed.)
Preparing to unpack .../zlib1g_1%3a1.2.11.dfsg-0ubuntu2_i386.deb ...
Unpacking zlib1g:i386 (1:1.2.11.dfsg-0ubuntu2) ...
Setting up libquadmath0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libgomp1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libatomic1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libcc1-0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32gcc1 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32gomp1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up zlib1g:i386 (1:1.2.11.dfsg-0ubuntu2) ...
Setting up libtsan0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32mpx2 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32stdc++6 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32atomic1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32atomic1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up liblsan0:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32gomp1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libmpx2:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Processing triggers for libc-bin (2.27-3ubuntu1) ...
Setting up libx32itm1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32quadmath0 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32itm1 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libitm1:amd64 (8.3.0-6ubuntu1~18.04.1) ...
Setting up libx32quadmath0 (8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32gcc1 (1:8.3.0-6ubuntu1~18.04.1) ...
Setting up lib32stdc++6 (8.3.0-6ubuntu1~18.04.1) ...
Processing triggers for libc-bin (2.27-3ubuntu1) ...
root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc# make check
  CC+LD         amacc
  CC+LD         amacc-native
amacc.c:2023:5: warning: return type of ‘main’ is not ‘int’ [-Wmain]
 int main(int argc, char **argv)
     ^~~~
amacc.c:2023:5: warning: first argument of ‘main’ should be ‘int’ [-Wmain]
  SelfCC        elf/amacc
[*** verify tests/fib.c <JIT> *******]
[*** verify tests/fib.c <ELF> *******]
[*** verify tests/fib.c <ELF-self> **]
tests/fib.c Passed
[*** verify tests/func_param.c <JIT> *******]
[*** verify tests/func_param.c <ELF> *******]
[*** verify tests/func_param.c <ELF-self> **]
tests/func_param.c Passed
[*** verify tests/comments.c <JIT> *******]
[*** verify tests/comments.c <ELF> *******]
[*** verify tests/comments.c <ELF-self> **]
tests/comments.c Passed
[*** verify tests/read.c <JIT> *******]
[*** verify tests/read.c <ELF> *******]
[*** verify tests/read.c <ELF-self> **]
tests/read.c Passed
[*** verify tests/struct.c <JIT> *******]
[*** verify tests/struct.c <ELF> *******]
[*** verify tests/struct.c <ELF-self> **]
tests/struct.c Passed
[*** verify tests/jit.c <JIT> *******]
[*** verify tests/jit.c <ELF> *******]
[*** verify tests/jit.c <ELF-self> **]
tests/jit.c Passed
[*** verify tests/literal.c <JIT> *******]
[*** verify tests/literal.c <ELF> *******]
[*** verify tests/literal.c <ELF-self> **]
tests/literal.c Passed
[*** verify tests/hello.c <JIT> *******]
[*** verify tests/hello.c <ELF> *******]
[*** verify tests/hello.c <ELF-self> **]
tests/hello.c Passed
[*** verify tests/arginc.c <JIT> *******]
[*** verify tests/arginc.c <ELF> *******]
[*** verify tests/arginc.c <ELF-self> **]
tests/arginc.c Passed
[*** verify tests/inc.c <JIT> *******]
[*** verify tests/inc.c <ELF> *******]
[*** verify tests/inc.c <ELF-self> **]
tests/inc.c Passed
[*** verify tests/while.c <JIT> *******]
[*** verify tests/while.c <ELF> *******]
[*** verify tests/while.c <ELF-self> **]
tests/while.c Passed
[*** verify tests/cond.c <JIT> *******]
[*** verify tests/cond.c <ELF> *******]
[*** verify tests/cond.c <ELF-self> **]
tests/cond.c Passed
[*** verify tests/shift.c <JIT> *******]
[*** verify tests/shift.c <ELF> *******]
[*** verify tests/shift.c <ELF-self> **]
tests/shift.c Passed
[*** verify tests/char.c <JIT> *******]
[*** verify tests/char.c <ELF> *******]
[*** verify tests/char.c <ELF-self> **]
tests/char.c Passed
[*** verify tests/ptr.c <JIT> *******]
[*** verify tests/ptr.c <ELF> *******]
[*** verify tests/ptr.c <ELF-self> **]
tests/ptr.c Passed
[*** verify tests/eq.c <JIT> *******]
[*** verify tests/eq.c <ELF> *******]
[*** verify tests/eq.c <ELF-self> **]
tests/eq.c Passed
[*** verify tests/enum.c <JIT> *******]
[*** verify tests/enum.c <ELF> *******]
[*** verify tests/enum.c <ELF-self> **]
tests/enum.c Passed
[*** verify tests/local.c <JIT> *******]
[*** verify tests/local.c <ELF> *******]
[*** verify tests/local.c <ELF-self> **]
tests/local.c Passed
[*** verify tests/for.c <JIT> *******]
[*** verify tests/for.c <ELF> *******]
[*** verify tests/for.c <ELF-self> **]
tests/for.c Passed
[*** verify tests/assign.c <JIT> *******]
[*** verify tests/assign.c <ELF> *******]
[*** verify tests/assign.c <ELF-self> **]
tests/assign.c Passed
[*** verify tests/printf.c <JIT> *******]
[*** verify tests/printf.c <ELF> *******]
[*** verify tests/printf.c <ELF-self> **]
tests/printf.c Passed
[*** verify tests/switch.c <JIT> *******]
[*** verify tests/switch.c <ELF> *******]
[*** verify tests/switch.c <ELF-self> **]
tests/switch.c Passed
[ C to IR translation          ] Passed
[ JIT compilation + execution  ] Passed
[ ELF generation               ] Passed
[ nested/self compilation      ] Passed
[ Compatibility with GCC/Arm   ] /lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
./lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
/lib/ld-linux-armhf.so.3: No such file or directory
.
----------------------------------------------------------------------
Ran 44 tests in 4.141s

OK
root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc# ECHO $LD_LIBRARY_PATH
ECHO: command not found
root@localhost:~/ccc/amacc# echo $LD_LIBRARY_PATH

root@localhost:~/ccc/amacc# ^C
root@localhost:~/ccc/amacc#  ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/
arm-linux-gnueabihf                          include  share
bin                                          lib
gcc-linaro-7.5.0-2019.12-linux-manifest.txt  libexec
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/lib
gcc        libcc1.so.0      libgmp.a    libmpc.a
libcc1.so  libcc1.so.0.0.0  libgmpxx.a  libmpfr.a
root@localhost:~/ccc/amacc# ls /root/gcc-linaro-7.5.0-2019.12-i686_arm-linux-gnueabihf/lib^C

```


## 執行

