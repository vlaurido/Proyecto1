#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if ((lista!=NULL) && (elemento!=NULL) && !Lista_Vacia(lista)){
		ElementoLista *aux = (ElementoLista *)malloc(sizeof(ElementoLista));
		aux = Lista_Ultimo(lista);
		if (elemento != aux)
			return elemento->siguiente;
	}
	return NULL;	
}
