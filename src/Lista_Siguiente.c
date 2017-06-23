#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if (lista!=NULL && elemento!=NULL){
		ElementoLista *aux = (ElementoLista *)lista->ancla;
		if(elemento->siguiente==aux){
			return NULL;
		}else{
			while((aux->siguiente)!=((ElementoLista *)lista->ancla)){
      				if (aux == elemento){
        				ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
					elem = aux->siguiente;
					return elem;
				}
      				aux = aux->siguiente;
			}return NULL;
		}
	}
	return NULL;	
}
