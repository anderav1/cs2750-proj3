GCC = gcc
CFLAGS = -g -Wall -Wshadow

calculator: mathOps.o tests.o calculator.o
	$(GCC) $(CFLAGS) mathOps.o  tests.o calculator.o -o calculator

mathOps.o: mathOps.c mathOps.h
	$(GCC) $(CFLAGS) -c mathOps.c mathOps.h

tests.o: tests.c tests.h
	$(GCC) $(CFLAGS) -c tests.c tests.h

calculator.o: calculator.c
	$(GCC) $(CFLAGS) -c calculator.c
