/*
 ============================================================================
 Name        : main.c
 Author      : imoren2x
 Version     :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ListaEnlazada.h"

int main(void) {

	pLista_t pLista = crearLista();

	Insertar(&pLista, 3);
	MostrarLista(pLista);

	printf("\n");
	//system("pause");

	return EXIT_SUCCESS;
}
