#include "miLista.h"
#include <stdlib.h>

int Lista_Inicializar(ListaEnlazada *lista);

int Lista_Inicializar(ListaEnlazada *lista){
	if (lista!=NULL){
		lista->numeroElementos = 0;
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		(ElementoLista *)lista->ancla = elem;
		elem->objeto = NULL;
		elem->siguiente = &(lista->ancla);
		elem->anterior = &(lista->ancla);

		return 0;
	}
	return -1;
}
