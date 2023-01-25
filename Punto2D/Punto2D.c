#include "Punto2D.h"
#include "math.h"

Punto2D crearPunto2D(float coordenadaX, float coordenadaY) {
	// creamos el nuevo punto
	Punto2D punto;

	// asignamos los valores
	punto.x = coordenadaX;
	punto.y = coordenadaY;

	// devolvemos una copia
	return punto;
}

void desplazar(Punto2D* punto, float desplazaX, float desplazaY) {
	// accedemos a las variables del punto
	punto->x += desplazaX;
	punto->y += desplazaY;
}

float calcularDistanciaAlOrigen(Punto2D punto) {
	float distancia;

	distancia = hypot(punto.x, punto.y);

	return distancia;
}

void escribir(Punto2D punto) {
	printf("(%.2f, %.2f)", punto.x, punto.y);
}