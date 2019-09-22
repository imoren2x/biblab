/*
 ============================================================================
 Name        : Buscaminas.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "TBuscaminas.h"

int main(int argn, char* argv[])
{
	//Define parámetros del juego
	//dificultad
	//tamaño (a elegir)
	bool bOk;
	rTablero_t rTablero;
	eDificultad_t eDificultad = test;

	//Crea un tablero
	bOk = fCreaTablero(&rTablero, eDificultad);
	//
	char *sTablero;
	//system("pause");

	if (bOk)
	{
		bOk = fDibujaTablero(rTablero, sTablero);
	}
	else
	{
		printf("ERROR!");
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
