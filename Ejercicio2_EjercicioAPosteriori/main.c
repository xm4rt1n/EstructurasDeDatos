#include "ordenacion.h"
#include "impresionVectores.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ordenacionQuickSort.h"


void main() {
	int nElementos;
	int* array;
	int* array2;
	clock_t t1, t2, t3, t4;
	// Pedimos al usuario que establezca el tamaño del vector en tiempo de ejecucion.
	printf("Introduce el tamano del vector (numero mayor igual que 1): ");
	scanf("%d", &nElementos);

	// Creamos el array llamando a la funcion y lo asignamos a una variable.
	array = crearArray(nElementos);
	array2 = crearArray(nElementos);

	// Mostramos el array por pantalla.
	printf("\nEl vector original es el siguiente: \n");
	imprimeArray(array, nElementos);


	printf("\n");


	t1 = clock();
	ordenacionPorSeleccion(array, nElementos);
	t2 = clock();
	printf("Clocks de inicio con ordenacion por seleccion:\t %d\n", t1);
	printf("Clocks de fin con ordenacion por seleccion:\t %d\n", t2);
	printf("CLOCK_PER_SEC:\t %d\n", CLOCKS_PER_SEC);
	printf("Con ordenacion por seleccion he tardado %.3f segundos en ordenarlo.\n", ((float)(t2-t1)/CLOCKS_PER_SEC));
	printf("El vector resultado es: \n");
	imprimeArray(array, nElementos);
	
	printf("\n");

	t3 = clock();
	qsort(array2, nElementos, sizeof(int), compare);
	t4 = clock();
	printf("Clocks de inicio con ordenacion por QuickSort:\t %d\n", t3);
	printf("Clocks de fin con ordenacion por QuickSort:\t %d\n", t4);
	printf("CLOCK_PER_SEC:\t %d\n", CLOCKS_PER_SEC);
	printf("Con ordenacion por seleccion he tardado %.3f segundos en ordenarlo.\n", ((float)(t4 - t3) / CLOCKS_PER_SEC));
	printf("El vector resultado es: \n");
	imprimeArray(array2, nElementos);

	// Liberamos la memoria dinamica que ocupa el array.
	free(array);
}