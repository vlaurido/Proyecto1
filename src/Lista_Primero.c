#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un puntero a una estructura de ElementoLista y recibe un puntero a una estructura lista
//ElementoLista *Lista_Primero(ListaEnlazada *lista);

/** Funcion que retorna un puntero al primer elemento de la lista
Retorna NULL si la lista es nula o si esta vacia, si no retorna el elemento**/
ElementoLista *Lista_Primero(ListaEnlazada *lista) {
	//Se valida que la lista no sea nula y que no este vacia
	if ((lista != NULL) && !Lista_Vacia(lista)) {
		return (lista->ancla.siguiente);
	}
	return NULL;
}
