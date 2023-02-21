#include "impresionListasEnlazadas.h"
#include "ListaEnlazada.h"
#include <stdio.h>

void main() {
	ListaEnlazada* lista = crearListaEnlazada();
	printf("Nueva ListaEnlazada creada: \n");
	imprimirListaEnlazada(lista);

	printf("Inserto 10 con la lista vacia: \n");
	insertar(lista, 0, 10);
	imprimirListaEnlazada(lista);

	printf("Inserto 20 y 21 al final: \n");
	insertar(lista, lista->n, 20);
	imprimirListaEnlazada(lista);
	insertar(lista, lista->n, 21);
	imprimirListaEnlazada(lista);

	printf("Inserto 30 al principio: \n");
	insertar(lista, 0, 30);
	imprimirListaEnlazada(lista);

	printf("Inserto 40 en la posicion 2: \n");
	insertar(lista, 2, 40);
	imprimirListaEnlazada(lista);

	printf("Elimino el primer elemento: \n");
	eliminar(lista, 0);
	imprimirListaEnlazada(lista);

	printf("Elimino el ultimo elemento: \n");
	eliminar(lista, lista->n-1);
	imprimirListaEnlazada(lista);

	printf("Elimino el elemento del medio: \n");
	eliminar(lista, 1);
	imprimirListaEnlazada(lista);

	printf("Elimino el 20 y el 10 para dejar la lista vacia: \n");
	eliminar(lista, 1);
	imprimirListaEnlazada(lista);
	eliminar(lista, 1);
	imprimirListaEnlazada(lista);


}