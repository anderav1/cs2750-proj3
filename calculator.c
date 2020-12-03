// Lexi Anderson
// CS 2750
// Project 3
// Calculator program

#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char** argv) {
	int hflag = 0;
	int tflag = 0;
	int opt;
	int result;
	
	while ((opt = getopt(argc, argv, "ht")) != -1) {
		switch (opt) {
			case 'h':
				hflag = 1;
				printf("h flag set\n");
				break;
			case 't':
				tflag = 1;
				printf("t flag set\n");
				break;
			default:
				abort();
		}
	}
	
	// if help option is selected, display instructions
	// for running the program
	if (hflag) {
		printf("Program Help:\n");
		// add more instructions here
	}

	// if test option is selected, run all tests
	if (tflag) {
		printf("Commencing unit tests\n");
		// runTests();
	}

	// prompt user to choose operation and enter two operands
	printf("\nArithmetic Operations:\n\n");
	printf("1. Addition \t\tA + B\n");
	printf("2. Subtraction \t\tA - B\n");
	printf("3. Multiplication \tA * B\n");
	printf("4. Division \t\tA / B\n");
	printf("5. Modulus \t\tA \% B\n");

	printf("\nEnter the number of the option you would like to choose");
	printf(" as well as two integer operands, separated by spaces\n");
	printf("(e.g., entering \"2 5 8\" will prompt the program to ");
	printf("perform subtraction on operands 5 and 8)\n");

	// check for valid input
	int op;
	char signs[] = {'+', '-', '*', '/', '%'};
	int x;
	int y;
	scanf("%d %d %d", &op, &x, &y);

	if (op >= 1 && op <= 5) {
		printf("\nOperation: %c\n", signs[op - 1]);
	} else {
		printf("Operation: invalid\n");
	}
	printf("Operand 1: %d\n", x);
	printf("Operand 2: %d\n\n", y);

	switch (op) {
		case 1:
			printf("Performing addition\n");
			result = add(x, y);
			break;
		case 2:
			printf("Performing subtraction\n");
			result = subtract(x, y);
			break;
		case 3:
			printf("Performing multiplication\n");
			result = multiply(x, y);
			break;
		case 4:
			printf("Performing division\n");
			result = divide(x, y);
			break;
		case 5:
			printf("Performing modulus\n");
			result = modulus(x, y);
			break;
		default:
			fprintf(stderr, "%d is an invalid option\n", op);
			exit(1);
	}

	// print result
	printf("%d %c %d = %d\n", x, signs[op - 1], y, result);
}

int add(int x, int y) { return (x + y); }

int subtract(int x, int y) { return (x - y); }

int multiply(int x, int y) { return (x * y); }

int divide(int x, int y) { return (x / y); }

int modulus(int x, int y) { return (x % y); }
