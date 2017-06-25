#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento);

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento) {
	if ((lista != NULL) && (elemento != NULL)) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		ElementoLista *anterior = Lista_Anterior(lista,elemento);
		elemento->anterior = elem;
		elem->siguiente = elemento;
		elem->anterior = anterior;
		anterior->siguiente = elem;
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}

