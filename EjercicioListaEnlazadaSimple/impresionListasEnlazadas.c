#include "ListaEnlazada.h"
#include "impresionListasEnlazadas.h"
#include <stdio.h>

void imprimirListaEnlazada(ListaEnlazada* lista) {
	if (lista->n == 0) printf("n=0|ListaEnlazada=vacia\n");
	else {
		if (lista->n > 20) printf("demasiadosElementosParaMostrar");
		else {
			printf("n=%d|ListaEnlazada=",lista->n);
			for (int i = 0; i < lista->n; i++) {
				printf("%d", getValor(lista, i));
				if (i < lista->n - 1) printf(","); // Imprimimos "," si no estamos al final
			}
		}
	}
	printf("\n");
}
