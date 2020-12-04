#include <stdio.h>
#include <stdlib.h>
#include "mathOps.h"

void testAdd() {
	int x = 10;
	int y = 20;

	if (add(x, y) != 30) {
		fprintf(stderr, "testAdd has failed for %d + %d\n", x, y);
		exit(1);
	}
	
	// test commutativity
	if (add(x, y) != add(y, x)) {
		fprintf(stderr, "Addition has failed commutativity test\n");
		exit(1);
	}

	// test identity
	if (add(x, 0) != x) {
		fprintf(stderr, "Addition has failed identity test\n");
		exit(1);
	}

	// test addition with negative and positive values

	if (add(-10, 5) != -5) {
		fprintf(stderr, "testAdd has failed for -10 + 5\n");
		exit(1);
	}

	if (add(-10, 20) != 10) {
		fprintf(stderr, "testAdd has failed for -10 + 20\n");
		exit(1);
	}

	if (add(-10, -3) != -13) {
		fprintf(stderr, "testAdd has failed for -10 + -3\n");
		exit(1);
	}

	if (add(5, -3) != 2) {
		fprintf(stderr, "testAdd has failed for 5 + -3\n");
		exit(1);
	}

	if (add(2, -3) != -1) {
		fprintf(stderr, "testAdd has failed for 2 + -3\n");
		exit(1);
	}
	
	printf("\tAll addition tests successful\n");
	return;
}

void testSubtract() {
	int x = 10;
	int y = 5;

	if (subtract(x, y) != (x - y)) {
		fprintf(stderr, "testSubtract has failed for %d - %d\n", x, y);
		exit(1);
	}

	// test anticommutativity
	if (subtract(x, y) != (-1 * subtract(y, x))) {
		fprintf(stderr, "Subtraction has failed anticommutativity test\n");
		exit(1);
	}	

	// test identity
	if (subtract(x, 0) != x) {
		fprintf(stderr, "Subtraction has failed identity test\n");
		exit(1);
	}

	if (subtract(0, x) != (-1 * x)) {
		fprintf(stderr, "testSubtract has failed for 0 - %d\n", x);
		exit(1);
	}

	// test subtraction with negative and positive values

	if (subtract(3, 5) != -2) {
		fprintf(stderr, "testSubtract has failed for 3 - 5\n");
		exit(1);
	}

	if (subtract(-1, 5) != -6) {
		fprintf(stderr, "testSubtract has failed for -1 - 6\n");
		exit(1);
	}

	if (subtract(-1, -3) != 2) {
		fprintf(stderr, "testSubtract has failed for -1 - -3\n");
		exit(1);
	}

	if (subtract(-4, 1) != -5) {
		fprintf(stderr, "testSubtract has failed for -4 - 1\n");
		exit(1);
	}

	if (subtract(3, -2) != 5) {
		fprintf(stderr, "testSubtract has failed for 3 - -2\n");
		exit(1);
	}

	printf("\tAll subtraction tests successful\n");
	return;
}

void testMultiply() {
	int x = 3;
	int y = 5;

	if (multiply(x, y) != 15) {
		fprintf(stderr, "testMultiply has failed for %d * %d\n", x, y);
		exit(1);
	}

	// test commutativity
	if (multiply(x, y) != multiply(y, x)) {
		fprintf(stderr, "Multiplication has failed commutativity test\n");
		exit(1);
	}

	// test identity
	if (multiply(x, 1) != x) {
		fprintf(stderr, "Multiplication has failed identity test\n");
		exit(1);
	}
	
	// test zero property
	if (multiply(x, 0) != 0) {
		fprintf(stderr, "Multiplication has failed zero property test\n");
		exit(1);
	}

	// test negation
	if (multiply(x, -1) != (0 - x)) {
		fprintf(stderr, "Multiplication has failed negation test\n");
		exit(1);
	}

	// test multiplication of positive and negative values

	if (multiply(-3, -9) != multiply(3, 9)) {
		fprintf(stderr, "testMultiply failed for -3 * -9\n");
		exit(1);
	}
	
	if (multiply(-3, 9) != -27) {
		fprintf(stderr, "testMultiply failed for -3 * 9\n");
		exit(1);
	}

	printf("\tAll multiplication tests successful\n");
	return;
}

void testDivide() {

}

void testModulus() {

}

void runTests() {
	printf("\nCommencing unit tests...\n");
	testAdd();
	testSubtract();
	testMultiply();
	// testDivide();
	// testModulus();
	printf("All tests passed.\n");
}
