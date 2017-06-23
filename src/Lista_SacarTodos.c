#include "miLista.h"
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista){
	if (lista!=NULL){
		lista->numeroElementos = 0;
		ElementoLista *elem = (ElementoLista *)lista->ancla;
		elem->siguiente = &(lista->ancla);
		elem->anterior = &(lista->ancla);
	}
}
