#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista y un objeto de cualquier tipo
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto);

/** Funcion que permite insertar un objeto al final de una lista dada
Retorna 0 si se pudo insertar y -1 si la lista es nula**/
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto) {
	// Se valida que la lista no sea nula
	if (lista != NULL) {
		ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
		elem->objeto = objeto;
		//Se verifica que si la lista esta vacia, se inserte el elemento como primero de la lista
		if (Lista_Vacia(lista)) {
			elem->siguiente = &(lista->ancla);
			elem->anterior = &(lista->ancla);
			lista->ancla.siguiente = elem;
			lista->ancla.anterior = elem;
		} else { //Si no esta vacia, se ingresa al final y se cambian los punteros al penultimo y al ancla
			ElementoLista *ultimo = Lista_Ultimo(lista);
			ultimo->siguiente = elem;
			elem->anterior = ultimo;
			elem->siguiente = &(lista->ancla);
			lista->ancla.anterior = elem;
		}
		lista->numeroElementos += 1;
		return 0;
	}
	return -1;
}
