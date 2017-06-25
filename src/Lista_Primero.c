#include "miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista);

ElementoLista *Lista_Primero(ListaEnlazada *lista) {
	if (lista != NULL) {
		ElementoLista ancla = Lista_Buscar(lista,NULL);
		if (ancla != NULL)
			return ancla->siguiente;
	}
	return NULL;
}
