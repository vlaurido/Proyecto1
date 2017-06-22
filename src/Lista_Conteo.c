#include "miLista.h"

int Lista_Conteo(ListaEnlazada *lista);

int Lista_Conteo(ListaEnlazada *lista){
	if (lista!=NULL){
		int numElem = lista->numeroElementos;
		return numElem;
	}
	return -1;
}
