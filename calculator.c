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
				break;
			case 't':
				tflag = 1;
				break;
			default:
				abort();
		}
	}
}

