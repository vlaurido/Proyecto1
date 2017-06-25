#include <stdlib.h>
#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento);

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if ((lista!=NULL) && (elemento!=NULL) && !Lista_Vacia(lista)){
		ElementoLista *aux = (ElementoLista *)malloc(sizeof(ElementoLista));
		aux = Lista_Primero(lista);
		if (elemento != aux)
			return elemento->anterior;
	}
	return NULL;
}
