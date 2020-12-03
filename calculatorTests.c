#include <stdlib.h>
#include "calculator.h"

void testAdd() {
	int x = 10;
	int y = 20;

	if ((x + y) != add(x, y)) {
		fprintf(stderr, "testAdd has failed for %d + %d, x, y);
	}
	
	// test commutativity
	if (add(x, y) != add(y, x)) {
		fprintf(stderr, "Addition has failed commutativity test\n");
	}

	// test identity
	if (add(x, 0) != x) {
		fprintf(stderr, "Addition has failed identity test\n");
	}

	// test negative addition
	x = -10;
	if ((x + y) != add(x, y)) {
		fprintf(stderr, "testAdd has failed for %d + %d", x, y);
	}

	y = -3;
	if ((x + y) != add(x, y)) {
		fprintf(stderr, "testAdd has failed for %d + %d", x, y);
	}
}

void testSubtract() {
	
}

void testMultiply() {

}

void testDivide() {

}

void testModulus() {

}
