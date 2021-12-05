CC = cl
# CC = clang
# CC = gcc
OPTS = -Wall -I../src/
OBJS = std2_test gnu2_test test

all: $(OBJS)

std2_test: std2_test.c
	$(CC) $(OPTS) $^ -o $@

gnu2_test: gnu2_test.c
	$(CC) $(OPTS) $^ -o $@

test:
	./std2_test
	./gnu2_test

clean:
	rm *.exe $(OBJS)