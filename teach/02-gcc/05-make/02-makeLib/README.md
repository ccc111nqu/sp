# make 建置函式庫

```
csienqu-teacher:02-makeLib csienqu$ make
gcc -std=c99 -O0 -c sum.c -o sum.o
ar -r libstat.a sum.o
ar: creating archive libstat.a
gcc -std=c99 -O0 -c main.c -o main.o
gcc -std=c99 -O0 libstat.a main.o -L ./ -lstat -o run
csienqu-teacher:02-makeLib csienqu$ ./run
sum(10)=55
```