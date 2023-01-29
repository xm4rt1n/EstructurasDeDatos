#include "ordenacion.h"
#include "impresionVectores.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main() {
	int nElementos;
	int* array;
	clock_t t1, t2;
	// Pedimos al usuario que establezca el tamaño del vector en tiempo de ejecucion.
	printf("Introduce el tamano del vector (numero mayor igual que 1): ");
	scanf("%d", &nElementos);

	// Creamos el array llamando a la funcion y lo asignamos a una variable.
	array = crearArray(nElementos);

	// Mostramos el array por pantalla.
	printf("\nEl vector original es el siguiente: \n");
	imprimeArray(array, nElementos);

	t1 = clock();
	ordenacionPorSeleccion(array, nElementos);
	t2 = clock();
	printf("Clocks de inicio con ordenacion por seleccion:\t %d\n", t1);
	printf("Clocks de inicio con ordenacion por seleccion:\t %d\n", t2);
	printf("CLOCK_PER_SEC:\t %d\n", CLOCKS_PER_SEC);
	printf("Con ordenacion por seleccion he tardado %.3f segundos en ordenarlo.\n", ((float)(t2-t1)/CLOCKS_PER_SEC));
	printf("El vector resultado es: \n");
	imprimeArray(array, nElementos);


	// Liberamos la memoria dinamica que ocupa el array.
	free(array);
}