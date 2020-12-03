// Lexi Anderson
// CS 2750
// Project 3
// Calculator program

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int hflag = 0;
	int tflag = 0;
	int opt;
	double result;
	
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

	printf("input 1 is: %d\n", op);
	printf("input 2 is: %d\n", x);
	printf("input 3 is: %d\n", y);
}

