#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

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
