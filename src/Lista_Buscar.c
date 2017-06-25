#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un puntero a una estructura elemento y recibe un puntero a una estructura lista y un objeto que puede ser de cualquier tipo
ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

/** Funcion que retorna el elemento de la lista en donde se encuentre el objeto dado
Retorna el elemento si se encuentra y NULL si la lista es nula, o la lista esta vacia**/
ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if((lista!=NULL) && !Lista_Vacia(lista)){
		ElementoLista *aux = Lista_Primero(lista);
		ElementoLista *ultimo = Lista_Ultimo(lista);
		while(aux != ultimo) {
			if (aux->objeto==objeto)
				return aux;
			aux = aux->siguiente;		
		}
		if (aux->objeto == ultimo->objeto)
			return ultimo;
	}
	return NULL;
}
