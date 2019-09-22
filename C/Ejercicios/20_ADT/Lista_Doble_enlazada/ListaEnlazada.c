/**
 * ListaEnlazada.c
 *
 *  Created on: 29/11/2010
 *      Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>
#include "ListaEnlazada.h"

tLista crearLista() {
 return NULL;
}

void MostrarLista(const pLista_t ptr) {
	pLista_t pAux;

	for ( pAux = ptr; pAux != NULL; pAux = ptr->sig) {
		printf("\n Valor: %d", pAux->dato);
	}
}

//conviene que en la llamada se pase con & y la variable//
//(p.ej., Insertar(&ptr);)
void Insertar(pLista_t *ptr, const int kiElem) {
	pLista_t pAux;
	pAux = (pLista_t)malloc(1*sizeof(pLista_t));
	pAux->dato = kiElem;
	pAux->sig = NULL;

	pLista_t pAux2;

	pAux2 = *ptr;
	if (*ptr == NULL) { //Lista Vacia//
		*ptr = pAux;
	} else {
		for (pAux2 = *ptr; pAux2->sig != NULL; pAux2= pAux2->sig) {
			//Recorre el array hasta la última posición//
		}
		pAux2->sig = pAux;
	}
}
