#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista
//int Lista_Inicializar(ListaEnlazada *lista);

/** Funcion que permite inicializar una lista dada
Retorna 0 si se inicializo y -1 si la lista es nula**/
int Lista_Inicializar(ListaEnlazada *lista){
	//Se valida que la lista no sea nula
	if (lista!=NULL){
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = NULL;
		elem->siguiente = elem;
		elem->anterior = elem;
		lista->ancla = *elem;
		lista->numeroElementos = 0;
		return 0;
	}
	//Se retorna -1 cuando es nula
	return -1;
}

