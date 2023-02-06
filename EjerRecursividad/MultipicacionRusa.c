#include <assert.h>

int multilicacionRusa(int op1, int op2) {
	assert(op1 > 0 && op2 > 0);

	if (op1 == 1) {
		return op2;
	}

	if (op1 % 2 != 0) {
		return  op2 + multilicacionRusa(op1 / 2, op2 * 2);
	}
	return multilicacionRusa(op1 / 2, op2 * 2);
}
