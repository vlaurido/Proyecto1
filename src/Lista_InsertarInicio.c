#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista y un objeto de cualquier tipo
int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto);

/** Funcion que permite insertar un objeto al inicio de una lista dada
Retorna 0 si se pudo insertar y -1 si la lista es nula**/
int Lista_InsertarInicio(ListaEnlazada *lista,void *objeto) {
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
		} else { //Si no esta vacia, se ingresa al inico y se cambian los punteros al ultimo y al ancla
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
