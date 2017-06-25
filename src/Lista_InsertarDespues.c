#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

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
