#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista, un objeto y una estructura elemento
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

/** Funcion que permite insertar un objeto despues de un elemento dado en una lista
Retorna 0 si se pudo insertar y -1 si la lista es nula, o el elemento dado es nulo, o el objeto es nulo o la lista esta vacia**/
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento) {
	if ((lista != NULL) && (elemento != NULL) && (objeto != NULL) && !Lista_Vacia(lista)) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		ElementoLista *siguiente = (ElementoLista *)malloc(sizeof(ElementoLista));
		siguiente = elemento->siguiente;
		elemento->siguiente = elem;
		elem->anterior = elemento;
		elem->siguiente = siguiente;
		siguiente->anterior = elem;
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}
