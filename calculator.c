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

}

