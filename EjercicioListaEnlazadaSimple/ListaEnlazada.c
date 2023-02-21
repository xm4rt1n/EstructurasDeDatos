#include "ListaEnlazada.h"
#include <assert.h>
#include <stdlib.h>

Nodo* getNodo(ListaEnlazada* lista, int elem) {
	Nodo* nodo;
	nodo = lista->primerElem;
	for (int i = 0; i < elem; i++) {
		nodo = nodo->siguienteNodo;
	}
	return nodo;
}

ListaEnlazada* crearListaEnlazada() {
	ListaEnlazada* lista = (ListaEnlazada*)malloc(sizeof(ListaEnlazada));
	lista->n = 0;
	lista->primerElem = NULL;

	return lista;
}

int getValor(ListaEnlazada* lista, int posicion) {
	assert(lista != NULL);
	assert(posicion >= 0 && posicion <= lista->n - 1);
	return (getNodo(lista, posicion)->elem);
}

void setValor(ListaEnlazada* lista, int posicion, int nuevoValor) {
	assert(lista != NULL);
	assert(posicion >= 0 && posicion <= lista->n - 1);

	getNodo(lista, posicion)->elem = nuevoValor;
}

void insertar(ListaEnlazada* lista, int posicion, int nuevoValor) {
	Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
	nuevoNodo->elem = nuevoValor;
	if (posicion != 0 && posicion != 0) {
		nuevoNodo->siguienteNodo = getNodo(lista, posicion);
		getNodo(lista, posicion - 1)->siguienteNodo = nuevoNodo;
	}

	if (lista->primerElem == NULL) {
		nuevoNodo->siguienteNodo = NULL;
		lista->primerElem = nuevoNodo;
	}

	if (posicion == 0) {
		nuevoNodo->siguienteNodo = lista->primerElem;
		lista->primerElem = nuevoNodo;
	}

	if (posicion == lista->n) {
		nuevoNodo->siguienteNodo = NULL;
		getNodo(lista, lista->n)->siguienteNodo = nuevoNodo;
	}
	lista->n++;
}

void eliminar(ListaEnlazada* lista, int posicion) {
	if (posicion != 0 && posicion != 0) {
		getNodo(lista, posicion - 1)->siguienteNodo = getNodo(lista, posicion + 1);
	}

	if (posicion == 0) {
		lista->primerElem = getNodo(lista, posicion + 1);
	}

	if (posicion == lista->n) {
		getNodo(lista, lista->n-1)->siguienteNodo = NULL;
	}
	lista->n--;
}

void destruirListaEnlazada(ListaEnlazada* lista) {
	for (int i = lista->n; i > 0; i--) {
		free(getNodo(lista, i - 1));
		free(lista);
	}
}