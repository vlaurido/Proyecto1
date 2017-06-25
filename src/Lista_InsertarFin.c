#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto) {
	if (lista != NULL && objeto != NULL) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		ElementoLista *ultimo = Lista_Ultimo(lista);
		ultimo->siguiente = elem;
		elem->anterior = ultimo;
		elem->siguiente = &(lista->ancla);
		lista->ancla.anterior = elem;
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}
