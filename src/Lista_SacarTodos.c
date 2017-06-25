#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que no retorna nada y recibe un puntero a una estructura lista
//void Lista_SacarTodos(ListaEnlazada *lista);

/** Funcion que permite sacar todos los elementos de una lista dada**/
void Lista_SacarTodos(ListaEnlazada *lista){
	//Se valida que la lista no sea nula
	if (lista!=NULL){
		lista->numeroElementos = 0;
		ElementoLista *elem = &(lista->ancla);
		elem->siguiente = elem;
		elem->anterior = elem;
		elem->objeto = NULL;
	}
}
