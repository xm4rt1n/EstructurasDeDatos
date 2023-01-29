#include "Ordenacion.h"
#include "impresionVectores.h"
#include "ordenacionQuickSort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main() {
	int nElementos;
	int * array;

	printf("Introduce el tamano del vector (numero mayor igual que 1): ");
	scanf("%d", &nElementos);

	array = crearArray(nElementos);

	imprimeArray(&array, nElementos);


	free(array);

	printf("Acabe ");
}