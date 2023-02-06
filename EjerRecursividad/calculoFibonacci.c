#include <assert.h>

int calculaFibonacci(int n) {
	assert(n>=0);

	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return calculaFibonacci(n - 1) + calculaFibonacci(n - 2);
}


