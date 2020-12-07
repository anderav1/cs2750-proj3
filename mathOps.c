#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) { return (x + y); }

int subtract(int x, int y) { return (x - y); }

int multiply(int x, int y) { return (x * y); }

int divide(int x, int y) { 
	if (y == 0) {
		fprintf(stderr, "Cannot divide by zero\n");
		exit(1);
	}
	return (x / y);
}

int modulus(int x, int y) {
	if (y == 0) {
		fprintf(stderr, "Cannot divide by zero\n");
		exit(1);
	}
	return (x % y);
}

