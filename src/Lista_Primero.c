#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Primero(ListaEnlazada *lista);

ElementoLista *Lista_Primero(ListaEnlazada *lista) {
	if ((lista != NULL) && !Lista_Vacia(lista)) {
		return (lista->ancla.siguiente);
	}
	return NULL;
}
