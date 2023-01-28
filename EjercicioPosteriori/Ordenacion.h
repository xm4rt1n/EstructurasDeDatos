
// Metodo para crear un array
// Parametros:
// - numElem: Numero de elementos que va a contener el array.
// Retorno: Direccion de memoria del primer elemento del array.
int crearArray(int numElem);


// Metodo que realiza una ordenacion por seleccion de un array.
// Parametros:
// - array. Puntero que apunta al primer elemento del array.
// - numElem. Numero de elementos que contieen el array.
void ordenacionPorSeleccion(int* array, int numElem);


// Metodo que busca el valor minimo en un fragmento del array indicado.
// Parametros:
// - array. Puntero que apunta al primer elemento del array.
// - numElem. Numero de elementos que contieen el array.
// - posInicio. Posicion en la que se empieza a buscar.
// - posFinal. Posicion en la que se termina de buscar.
// Retorno: Posicion del minimo encontrado. 
int minimoRelativoArray(int* array, int numElem, int posInicio, int posFinal);