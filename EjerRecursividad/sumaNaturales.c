#include <assert.h>
int sumaNaturales(int n) {
	assert(n >= 0);

	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return n;
	}
	return n + sumaNaturales(n - 1);
}