# CC = cl
# CC = clang
CC := gcc
LIBS = ../src/std2.c
ifeq ($(CC), gcc)
OPTS = -D__GNU__ -Wall -I../src/
OBJS = std2_test gnu2_test number2_test vector2_test tensor2_test
RUNS = gnu2_run std2_run number2_run vector2_run tensor2_run
else
OPTS = -Wall -I../src/
OBJS = std2_test number2_test vector2_test tensor2_test
RUNS = std2_run number2_run vector2_run tensor2_run
endif

all: $(OBJS) $(RUNS)

std2_test: std2_test.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

gnu2_test: gnu2_test.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

number2_test: number2_test.c ../src/number2.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

vector2_test: vector2_test.c ../src/vector2.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

tensor2_test: tensor2_test.c ../src/vector2.c ../src/tensor2.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

std2_run:
	./std2_test

gnu2_run:
	./gnu2_test

number2_run:
	./number2_test

vector2_run:
	./vector2_test

tensor2_run:
	./tensor2_test

clean:
	rm $(OBJS)
