#pragma once

#include "Nodo.h"

typedef struct {
	Nodo* primerElem;
	int n;
}ListaEnlazada;

Nodo* getNodo(ListaEnlazada* lista, int elem);

ListaEnlazada* crearListaEnlazada();

int getValor(ListaEnlazada* lista, int posicion);

void setValor(ListaEnlazada* lista, int posicion, int nuevoValor);

void insertar(ListaEnlazada* lista, int posicion, int nuevoValor);

void eliminar(ListaEnlazada* lista, int posicion);

void destruirListaEnlazada(ListaEnlazada* lista);