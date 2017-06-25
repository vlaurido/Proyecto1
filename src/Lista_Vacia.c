#include "miLista.h"
#include <stdlib.h>

// Firma de la funcion que retorna un entero y recibe un puntero a una estructura lista
//int Lista_Vacia(ListaEnlazada *lista);

/** Funcion que permite conocer si una lista esta vacia o no
Retorna 1 si esta vacia, 1 si no esta vacia y -1 si la lista es nula**/
int Lista_Vacia(ListaEnlazada *lista){
	//Se valida que la lista no sea nula
	if (lista!=NULL){
		//Se verifica que el numero de elementos es 0 para decir que esta vacia
		if (lista->numeroElementos == 0){
			return 1;
		}
		return 0;
	}
	return -1;
}
