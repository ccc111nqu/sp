# CC = cl
# CC = clang
CC := gcc
LIBS = ../src/std2.c ../src/gnu2.c ../src/number2.c ../src/array2.c ../src/vector2.c ../src/shape2.c ../src/tensor2.c
ifeq ($(CC), gcc)
OPTS = -D__GNU__ -Wall -I../src/
OBJS = std2_test gnu2_test array2_test number2_test vector2_test shape2_test tensor2_test
else
OPTS = -Wall -I../src/
OBJS = std2_test number2_test vector2_test tensor2_test
endif

all: $(OBJS) run

run:
	./std2_test
	./gnu2_test
	./number2_test
	./array2_test
	./vector2_test
	./shape2_test
	./tensor2_test

std2_test: std2_test.c
	$(CC) $(OPTS) $^ $(LIBS) -o $@

%: %.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

clean:
	rm $(OBJS)
