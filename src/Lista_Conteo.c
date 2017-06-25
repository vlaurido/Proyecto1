#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista
int Lista_Conteo(ListaEnlazada *lista);

/** Funcion que permite saber el numero de elementos de una lista dada
Retorna un entero con el numero de elementos o -1 si la lista es nula**/
int Lista_Conteo(ListaEnlazada *lista){
	//Se valida que la lista no sea nula
	if (lista!=NULL){
		return (lista->numeroElementos);
	}
	return -1;
}
