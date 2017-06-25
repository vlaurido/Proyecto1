#include <stdlib.h>
#include "miLista.h"

// Firma de la funcion que retorna un puntero a una estructura elemento y recibe un puntero a una estructura lista y una estructura elemento
ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

/** Funcion que retorna el elemento anterior a un elemento dado en la lista
Retorna el elemento si se encuentra y NULL si la lista es nula, o el elemento es nulo o la lista esta vacia**/
ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	//Se valida que la lista no sea nula, el elemento no sea nulo y la lista no este vacia
	if ((lista!=NULL) && (elemento!=NULL) && !Lista_Vacia(lista)){
		ElementoLista *aux = (ElementoLista *)malloc(sizeof(ElementoLista));
		aux = Lista_Primero(lista);
		//Se valida que no se solicite el elemento anterior al primer elemento de la lista
		if (elemento != aux)
			return elemento->anterior;
	}
	return NULL;
}
