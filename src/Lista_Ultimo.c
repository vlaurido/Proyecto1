#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Ultimo(ListaEnlazada *lista);

ElementoLista *Lista_Ultimo(ListaEnlazada *lista) {
	if ((lista != NULL) && !Lista_Vacia(lista)) {
		return (lista->ancla.anterior);
	}
	return NULL;
}
