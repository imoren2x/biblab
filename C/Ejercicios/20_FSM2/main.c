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

	struct rFsm* pfsm;

	//crearFsmIni(&pfsm, atoi(argv[1]) );
	crearFsm(&pfsm);

	run(pfsm);

	printf("\n");
	//system("pause");

	return EXIT_SUCCESS;
}
