/**
 * FSM.c
 *
 *  Created on: 29/11/2010
 *      Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>
#include "Fsm.h"

float randn();
void assign(Fsm_t ptr);

Fsm_r crearFsm() {
	Fsm_r fsm;
	fsm.datum = 0;

	return fsm;
}

Fsm_r crearFsmIni(int seed) {
	Fsm_r fsm;

	//Start seed of the rand distribution//
	srand(seed);
	fsm.datum = randn();

	return fsm;
}

void run(const Fsm_t ptr) {
	state0(ptr);
}

void state0(Fsm_t ptr) {

	//Assign random value//
	assign(ptr);
	//Show value
	printf("[state1] input: %f\n", ptr->datum);

	if ( ptr->datum >= 0.5 ) {
		state2(ptr);
	} else {
		state3(ptr);
	}
}

void state2(Fsm_t ptr) {
	assign(ptr);

	printf("[state2] input: %f\n", getDatum(ptr));

	if ( ptr->datum <= 0.5) {
		state0(ptr);
	} else {
		state3(ptr);
	}
}

void state3(Fsm_t ptr) {

	printf("[state3] input: %f\n", ptr->datum);

	if (ptr->datum <= 0.5) {
		state2(ptr);
	} else {
		printf("[state3] The end.\n");
	}
}

float randn() {
	int i = rand();
	float r = (float) ((float) i / (float) RAND_MAX);
	//printf("[randn] rand() = %d / %d = %f\n", i, RAND_MAX, r);
	return (float) ((float) i / (float) RAND_MAX);
}

void assign(Fsm_t ptr) {
	//
	float f = randn();
	//assign random value to datum//
	ptr->datum = f;
}

float getDatum(Fsm_t ptr) {
	return ptr->datum;
}
