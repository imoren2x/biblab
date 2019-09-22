/*
 ============================================================================
 Name        : 2_EscribeBlancos.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
		Escribir una función recursiva EscribeBlancos(n) que imprima
		n caracteres blancos consecutivos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char *string;

string fEscribeBlancos(const int n);
int fEscribeBlancosRec(const int n2, string sLinea2);

int main(void) {
	int iN;

	etiqueta:
	fflush(stdin);
	printf("Escribe el numero de caracteres en blanco");
	printf("\n >> ");
	scanf("%d", &iN);
	printf("\n%s", fEscribeBlancos(iN));

	char sSig;
	printf("\n\n ¿Quieres seguir? (S/N)");
	fflush(stdin);
	printf("\n >> ");
	scanf("%c", &sSig);

	switch(sSig) {
		case 'S': case 's': system("cls"); goto etiqueta; break;
		default : break;
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

string fEscribeBlancos(const int n) {
	string sLinea = (string)malloc((n+1)*sizeof(char));
	sLinea[n] = '\0';
	fEscribeBlancosRec(n-1, sLinea);
	return sLinea;
}

const char kcSimbolo = '*';

int fEscribeBlancosRec(const int n2, string sLinea2) {
	if (n2 == 0) {
		sLinea2[n2] = kcSimbolo;
	} else {
		sLinea2[n2] = kcSimbolo;
		fEscribeBlancosRec(n2-1, sLinea2);
	}
	return 0;
}
