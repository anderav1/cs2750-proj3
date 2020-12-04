CC = gcc
CFLAGS = -g -Wall -Wshadow
DEPS = mathOps.h mathOps.c tests.h tests.c calculator.c
OBJ = mathOps.o tests.o calculator.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

calculator: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

