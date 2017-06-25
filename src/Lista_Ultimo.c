#include "miLista.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista);

ElementoLista *Lista_Ultimo(ListaEnlazada *lista) {
	if (lista != NULL) {
		ElementoLista ancla = Lista_Buscar(lista,NULL);
		if (ancla != NULL)
			return ancla->anterior;
	}
	return NULL;
}
