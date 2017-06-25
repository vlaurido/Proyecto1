#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if ((lista!=NULL) && (elemento!=NULL) && !Lista_Vacia(lista)){
		/*ElementoLista *aux = &(lista->ancla);
		if(elemento->siguiente==aux){
			return NULL;
		}else{
			while((aux->siguiente)!=&(lista->ancla)){
  				if (aux == elemento){
    				ElementoLista *elem = (ElementoLista *)malloc(sizeof(ElementoLista));
					elem = aux->siguiente;
					return elem;
				}
  				aux = aux->siguiente;
			}return NULL;
		}*/
		ElementoLista *aux = Lista_Ultimo(lista);
		if (elemento != aux)
			return elemento->siguiente;
	}
	return NULL;	
}
