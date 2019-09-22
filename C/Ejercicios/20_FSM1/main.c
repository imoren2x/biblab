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
#include "Fsm.h"

int main(int argn, char* argv[]) {

	Fsm_r fsm = crearFsmIni(atoi(argv[1]) );

	run(&fsm);

	printf("\n");
	//system("pause");

	return EXIT_SUCCESS;
}
