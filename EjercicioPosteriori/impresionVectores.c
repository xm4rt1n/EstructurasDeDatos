#include "Ordenacion.h"
#include <stdio.h>

void imprimeArray(int* array, int numElem) {
	printf("El vector original es el siguiente:");
	if (numElem <= 10) {
		for (int i = 0; i < numElem - 1; i++)
		{
			printf("%d ", *(array + i));
		}
		printf("\n");
	}
	else {
		printf("<demasiados componentes para mostar>\n");
	}

}