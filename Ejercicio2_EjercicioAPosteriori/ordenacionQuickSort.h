#pragma once

// Funcion que compara dos elementos
// Parametros:
// - a. Puntero al primer elemento.
// - b. Puntero al segundo elemento.
// - Retorno: Devielve negativo si el primer parametro es menor que el segundo, cero si son iguales, o positivo si el primero es mayor
// - Precondiciones: a!= NULL && b != NULL
int compare(const void* a, const void* b);