/**
 * FSM.c
 *
 *  Created on: 29/11/2010
 *  Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fsm.h"

struct rFsm {
	float datum;
	//struct Fsm_r *sig;
};

float randn();
void assign(Fsm_t ptr);

void crearFsm(Fsm_t* ptr) {
	time_t timeSeed;
	timeSeed = time( NULL );
	int seed = (int) timeSeed;

	Fsm_t aux = (Fsm_t) calloc(1, sizeof(Fsm_r));

	//Start seed of the rand distribution//
	srand(seed);
	aux->datum = randn();

	*ptr = aux;
	return;
}

void crearFsmIni(Fsm_t* ptr, int seed) {
	Fsm_t aux;

	aux = (Fsm_t) calloc(1, sizeof(Fsm_r));

	//Start seed of the rand distribution//
	srand(seed);
	aux->datum = randn();

	*ptr = aux;
	//ptr -> aux -> struct

	return;
}

void run(Fsm_t ptr) {
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
