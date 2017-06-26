#include "miLista.h"
#include <stdlib.h>

int Lista_Inicializar(ListaEnlazada *lista);

int Lista_Inicializar(ListaEnlazada *lista){
	if (lista!=NULL){
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = NULL;
		elem->siguiente = elem;
		elem->anterior = elem;
		lista->ancla = *elem;
		lista->numeroElementos = 0;
		return 0;
	}
	return -1;
}
