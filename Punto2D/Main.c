#include "Punto2D.h"
#include "stdio.h"

void main() {
	float x, y, w, z;

	printf("Introduce el valor de X e Y: ");
	scanf("%f", &x);
	scanf("%f", &y);

	Punto2D p = crearPunto2D(x, y);

	printf("El punto p: ");
	escribir(p);
	printf("\n");

	printf("Introduce el desplazamiento de X e Y: ");
	scanf("%f", &w);
	scanf("%f", &z);

	desplazar(&p, w, z);

	printf("El punto p desplazado: ");
	escribir(p);
	printf("\n");

	printf("La distancia al origen del punto p desplazado: %.2f", calcularDistanciaAlOrigen(p));
}