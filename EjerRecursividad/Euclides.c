#include <assert.h>

int MCD(int a, int b) {
	assert(a >= 0 && b >= 0 && a > b);

	int resto = a % b;

	if (resto == 0) {
		return b;
	}
	return MCD(b, resto);
}
