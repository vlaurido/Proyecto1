#include "miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista);

void Lista_SacarTodos(ListaEnlazada *lista){
	if (lista!=NULL){
		lista->numeroElementos = 0;
		ElementoLista *elem = lista->ancla;
		elem->objeto = NULL;
		elem->siguiente = &(lista->ancla);
		elem->anterior = &(lista->ancla);
	}
}
