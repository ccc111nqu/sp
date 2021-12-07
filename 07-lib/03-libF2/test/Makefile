CC := gcc
LIBS = ../src/std2.c ../src/gnu2.c ../src/f2.c
OPTS = -D__GNU__ -Wall -I../src/
OBJS = std2_test gnu2_test f2_test

all: $(OBJS) run

run:
	./std2_test
	./gnu2_test
	./f2_test

std2_test: std2_test.c
	$(CC) $(OPTS) $^ $(LIBS) -o $@

%: %.c $(LIBS)
	$(CC) $(OPTS) $^ -o $@

clean:
	rm $(OBJS)
