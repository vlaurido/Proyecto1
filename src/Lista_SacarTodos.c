#include "miLista.h"
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista){
	if (lista!=NULL && !Lista_Vacia(lista)) {
		lista->numeroElementos = 0;
		ElementoLista *elem = &(lista->ancla);
		elem->siguiente = elem;
		elem->anterior = elem;
		elem->objeto = NULL;
	}
}
