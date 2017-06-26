#include "miLista.h"
#include <stdlib.h>

int Lista_Vacia(ListaEnlazada *lista);

int Lista_Vacia(ListaEnlazada *lista){
	if (lista!=NULL){
		return ((lista->numeroElementos) == 0);
	}
	return -1;
}
