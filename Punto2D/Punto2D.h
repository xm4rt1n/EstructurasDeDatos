// Archivo que representa la declarion del TAD "Punto2D" (un punto en eje XY)

// Datos del TAD: coordenada X y cordenada Y
typedef struct {
	float x;
	float y;
}Punto2D;

// Consturctor que construye un punto a partir de dos enteros
// Parametros:
// - coordenadaX. El valor en el eje X inicial.
// - coordenadaY. El valor en el eje Y inicial.
// Retorno: El punto creado.
Punto2D crearPunto2D(float coordenadaX, float coordenadaY);


// Desplaza un punto en funcion de los parametros de entrada.
// Parametros:
// - punto. Puntero al punto a mover.
// - desplazaX. Desplazamiento a realizar en el eje X.
// - desplazaY. Desplazamiento a realizar en el eje Y.
void desplazar(Punto2D* punto, float desplazaX, float desplazaY);


// Calcula la distancia de un punto dado al origen de coordenadas (0, 0).
// Parametros:
// - punto. Puntero al punto.
// Retorno: Valor de la distancia del punto al origen. 
float calcularDistanciaAlOrigen(Punto2D punto);


void escribir(Punto2D punto);