#include "include/calculator.h"
#include "stdio.h"

int sum(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int divisor) {
        if(divisor==0)
	{
		printf("\nDivisor shouldn't be zero!\n");
		return 0;
	}
	else
		return x / divisor;
}
