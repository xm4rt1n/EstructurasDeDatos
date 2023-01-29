#include "ordenacion.h"
#include <stdio.h>
#include <stdlib.h>

int* crearArray(int numElem) {
	int* array;
	// Declaramos el array en memoria dinamica
	array = (int*)malloc(numElem * sizeof(int));
	if (array == NULL) {
		printf("No se ha podido reservar memoria \n");
		exit(1);
	}
	// Le pasamos la semilla en funcion del tiempo para que los numeros sean disitntos cada vez que se ejecuta el programa
	srand(time(NULL));

	// Rellenamos el array con numeros aleatorios
	for (int i = 0; i < numElem; i++) {
		*(array + i) = rand();
	}

	// Devolvemos la variable array la cual consitne la posicion de memoria en la que inicia.
	return array;
}



void ordenacionPorSeleccion(int* array, int numElem) {
	for (int i = 0; i < numElem - 1; i++) {
		int minimo = i;
		for (int j = i + 1; j < numElem; j++) {
			if (array[j] < array[minimo]) {
				minimo = j;
			}
		}
		int aux = array[i];
		array[i] = array[minimo];
		array[minimo] = aux;
	}
}



int minimoRelativoArray(int* array, int numElem, int posInicio, int posFinal) {
	int minimo = posInicio;
	for (int j = posInicio + 1; j <= posFinal; j++) {
		if (array[j] < array[minimo]) {
			minimo = j;
		}
	}
	return minimo;
}