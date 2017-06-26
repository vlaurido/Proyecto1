#include "miLista.h"
#include <stdlib.h>

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento);

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento) {
	if ((lista != NULL) && (elemento != NULL) && !Lista_Vacia(lista)) {
		ElementoLista *aux = Lista_Buscar(lista,elemento->objeto);
		if (aux != NULL) {
			ElementoLista *siguiente = (ElementoLista *)malloc(sizeof(ElementoLista));
			siguiente = elemento->siguiente;
			ElementoLista *anterior = (ElementoLista *)malloc(sizeof(ElementoLista));
			anterior = elemento->anterior;
			if (elemento == Lista_Ultimo(lista)) {
				anterior->siguiente = &(lista->ancla);
				lista->ancla.anterior = anterior;
			} else if (elemento == Lista_Primero(lista)) {
				siguiente->anterior = &(lista->ancla);
				lista->ancla.siguiente = siguiente;
			} else {
				siguiente->anterior = anterior;
				anterior->siguiente = siguiente;
			}
			lista->numeroElementos -= 1;
		}
	}
}
