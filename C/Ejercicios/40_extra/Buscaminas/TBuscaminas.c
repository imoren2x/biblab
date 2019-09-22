/*
 * TBuscaminas.c
 *
 *  Created on: 21/11/2010
 *      Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>
#include "TBuscaminas.h"

int Dif2Dim(const eDificultad_t eDificultad);
int Dif2Bombas(const eDificultad_t eDificultad);



bool fCreaTablero(rTablero_t *rTablero, const eDificultad_t eDificultad)
{
	bool result;

	int iDim = Dif2Dim(eDificultad);
	int iBombas = Dif2Bombas(eDificultad);
	rTablero->eDificultad = eDificultad;

	//rTablero->iDimension = iDim;
	rTablero->tablero = (ppTablero_t)malloc(iDim*sizeof(pTablero_t));
	int iFila, iColumna;
	for (iFila = 0; iFila < iDim; iFila++)
	{
		rTablero->tablero[iFila] = (pTablero_t)malloc(iDim*sizeof(rCelda_t));
		for (iColumna = 0; iColumna < iDim; iColumna++)
		{
			//TBR//
			rTablero->tablero[iFila][iColumna].bMina = true;
			rTablero->tablero[iFila][iColumna].iMinas = 1;
			rTablero->tablero[iFila][iColumna].bDesc = true;
		}
	}

	result = true; //TBR//
	return result;
}

bool fDescubreFicha(rTablero_t *rTablero, const int iFila, const int iColumna)
{
	bool result;

	if (rTablero != NULL)
	{
		result = true;
		rTablero->tablero[iFila][iColumna].bDesc = true;
	}
	else
	{
		result = false;
		fprintf(stderr, "ERROR!");
	}

	return result;
}


bool fDibujaTablero(const rTablero_t rTablero, char *sTablero)
{
	bool result;
	sTablero = (char*)malloc(sizeof(char));
	sTablero = "N";

	result = true;

	int iFila, iCol;//TBI//
	int iDim = Dif2Dim(rTablero.eDificultad);
	for (iFila = 0; iFila < iDim; iFila++)
	{
		//TBD//Escribir numeros de fila y columna//
		for (iCol = 0; iCol < iDim; iCol++)
		{
			if (rTablero.tablero[iFila][iCol].bDesc = true)
			{
				int iMinas = rTablero.tablero[iFila][iCol].iMinas;
				printf("%d ", iMinas);
			}
			else
			{
				printf("X");
			}
			//TBD//More cases to consider//
		}
		printf("\n");
	}

	return result;
}


int Dif2Dim(const eDificultad_t eDificultad)
{
	int iDim, iBombas;

	if (eDificultad == test)
	{
		iDim = 2;
		iBombas = 1;
	}
	else if (eDificultad == bajo)
	{
		iDim = 5;
		iBombas = 7;
	}
	else if (eDificultad == medio)
	{
		iDim = 6;
		iBombas = 10;
	}
	else if (eDificultad == alto)
	{
		iDim = 7;
		iBombas = 15;
	}
	else
	{
		//Comportamiento indefinido//
	}

	return iDim;
}

int Dif2Bombas(const eDificultad_t eDificultad)
{
	int iDim, iBombas;

	if (eDificultad == test)
	{
		iDim = 2;
		iBombas = 1;
	}
	else if (eDificultad == bajo)
	{
		iDim = 5;
		iBombas = 7;
	}
	else if (eDificultad == medio)
	{
		iDim = 6;
		iBombas = 10;
	}
	else if (eDificultad == alto)
	{
		iDim = 7;
		iBombas = 15;
	}
	else
	{
		//Comportamiento indefinido//
	}

	return iBombas;
}
