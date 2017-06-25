#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

int Lista_InsertarInicio(ListaEnlazada *lista,void *objeto) {
	if (lista != NULL) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		if (Lista_Vacia(lista)) {
			elem->siguiente = &(lista->ancla);
			elem->anterior = &(lista->ancla);
			lista->ancla.siguiente = elem;
			lista->ancla.anterior = elem;
		} else {
			ElementoLista *primero = Lista_Primero(lista);
			primero->anterior = elem;
			elem->siguiente = primero;
			elem->anterior = &(lista->ancla);
			lista->ancla.siguiente = elem;
		}
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}
