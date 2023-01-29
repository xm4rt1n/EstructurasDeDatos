#include "ordenacion.h"
#include <stdio.h>

void imprimeArray(int* array, int numElem) {
	if (numElem <= 10) {
		for (int i = 0; i < numElem; i++)
		{
			printf("%d ", *(array + i));
		}
		printf("\n\n");
	}
	else {
		printf("<demasiados componentes para mostar>\n");
	}

}