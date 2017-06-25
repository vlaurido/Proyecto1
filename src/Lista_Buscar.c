#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto);

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista!=NULL){
		ElementoLista *aux = &(lista->ancla);
		while((aux->siguiente)!=&(lista->ancla) && (aux->objeto)!=(objeto)){
			aux = aux->siguiente;			
		}
		if (aux->objeto==objeto){
				ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
				elem->objeto = objeto;
				elem->anterior = &(aux->anterior);
				elem->siguiente = &(aux->siguiente);
				return elem;
		}
		else{
			return NULL;
		}
	}
	return NULL;
}
