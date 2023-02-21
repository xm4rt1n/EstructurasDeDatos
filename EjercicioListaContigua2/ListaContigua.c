#include "ListaContigua.h"
#include "assert.h"
#include "stdlib.h"

// Numero de posiciones en que se incrementa/decrementa la capacidad de la ListaContigua cada vez que es necesario
// Precondición: INCREMENTO >= 1
#define INCREMENTO 2

ListaContigua* crearListaContigua() {
	ListaContigua* lista = (ListaContigua*)malloc(sizeof(ListaContigua));
	lista->lista = NULL; // No hay que reservar memoria ya que la ListaContigua se crea vacía en un principio
	lista->n = 0;
	lista->capacidad = 0;
	return(lista);
}

void destruirListaContigua(ListaContigua* lista) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n); // n y capacidad tienen sentido
	free(lista->lista); // Liberamos la zona de memoria para guardar los elementos
	free(lista); // Liberamos el struct en si mismo
}

int isLlena(ListaContigua* lista) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);
	return (lista->n == lista->capacidad);
}

int getValor(ListaContigua* lista, int posicion) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);
	assert(posicion >= 0 && posicion <= lista->n - 1);
	return (lista->lista[posicion]);
}

void setValor(ListaContigua* lista, int posicion, int nuevoValor) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);
	assert(posicion >= 0 && posicion <= lista->n - 1);
	lista->lista[posicion] = nuevoValor;
}

void ampliarCapacidad(ListaContigua* lista, int incremento) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);
	lista->lista = (int*)realloc(lista->lista, sizeof(int) * (lista->capacidad + incremento));
	lista->capacidad += incremento;
}

void insertarAlFinal(ListaContigua* lista, int nuevoValor) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);

	insertarEn(lista, lista->n, nuevoValor);

}

void eliminarAlFinal(ListaContigua* lista) {
	assert(lista != NULL);
	assert(lista->n > 0);
	assert(lista->capacidad >= lista->n);

	eliminar(lista, lista->n-1);
}

void insertarEn(ListaContigua* lista, int index, int value) {
	assert(lista != NULL);
	assert(lista->n >= 0 && lista->capacidad >= lista->n);
	assert(index >= 0 && index <= lista->n);

	if (isLlena(lista)) ampliarCapacidad(lista, INCREMENTO);

	memmove(lista->lista+index+1, lista->lista+index, sizeof(int)*(lista->n - index));

	lista->n++;
	setValor(lista, index, value);
}

void eliminar(ListaContigua* lista, int index) {
	assert(lista != NULL);
	assert(lista->n > 0);
	assert(lista->capacidad >= lista->n);

	memmove(lista->lista + index, lista->lista + index + 1, sizeof(int) * (lista->n - index - 1));

	// Eliminar es simplemente disminuir el numero actual de elementos
	lista->n--;

	// Si la capacidad sobrante es demasiada (2*INCREMENTO), la reducimos en INCREMENTO unidades
	if (lista->capacidad - lista->n >= 2 * INCREMENTO) ampliarCapacidad(lista, -INCREMENTO);
}

void concatenar(ListaContigua* lista1, ListaContigua* lista2) {
	assert(lista1 != NULL);
	assert(lista1->n > 0);
	assert(lista1->capacidad >= lista1->n);

	ampliarCapacidad(lista1, lista2->n);

	for (int i = 0; i < lista2->n; i++) {
		insertarAlFinal(lista1, getValor(lista2, i));
	}
}

int buscar(ListaContigua* lista, int elem) {
	assert(lista != NULL);
	assert(lista->n > 0);
	assert(lista->capacidad >= lista->n);

	for (int i = 0; i < lista->n; i++) {
		if (getValor(lista, i) == elem) return i;
	}
	return -1;
}