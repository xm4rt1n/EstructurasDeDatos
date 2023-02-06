#include <assert.h>

float calcularPotencia(float base, int exponente) {
	assert(exponente >= 0);
	if (exponente == 0) {
		return 1;
	}
	if (exponente == 1) {
		return base;
	}
	return base * calcularPotencia(base, exponente - 1);
}

