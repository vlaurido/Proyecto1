#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista, un objeto y una estructura elemento
int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

/** Funcion que permite insertar un objeto antes de un elemento dado en una lista
Retorna 0 si se pudo insertar y -1 si la lista es nula, o el elemento dado es nulo, o el objeto es nulo o la lista esta vacia**/
int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento) {
	// Se valida que lista no sea nula, o el elemento dado no sea nulo, o el objeto no sea nulo o la lista no esta vacia
	if ((lista != NULL) && (elemento != NULL) && (objeto != NULL) && !Lista_Vacia(lista)) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		ElementoLista *anterior = (ElementoLista *)malloc(sizeof(ElementoLista));
		anterior = elemento->anterior;
		elemento->anterior = elem;
		elem->siguiente = elemento;
		elem->anterior = anterior;
		anterior->siguiente = elem;
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}

