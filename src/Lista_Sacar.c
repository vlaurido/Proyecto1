#include "miLista.h"
#include <stdlib.h>

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento);

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento) {
	if (lista != NULL && elemento != NULL) {
		ElementoLista *siguiente = Lista_Siguiente(lista,elemento);
		ElementoLista *anterior = Lista_Anterior(lista,elemento);
		siguiente->anterior = anterior;
		anterior->siguiente = siguiente;
		lista->numeroElementos -= 1;
	}
}
