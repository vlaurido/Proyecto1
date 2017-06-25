#include <stdlib.h>
#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if (lista!=NULL && elemento!=NULL){
		ElementoLista *aux = &(lista->ancla);
		if(elemento->anterior==aux){
			return NULL;
		}else{
			while((aux->siguiente)!=&(lista->ancla)){
  				if (aux == elemento){
    				ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
					elem = aux->anterior;
					return elem;
				}
  				aux = aux->siguiente;
			}return NULL;
		}
	}
	return NULL;
}
