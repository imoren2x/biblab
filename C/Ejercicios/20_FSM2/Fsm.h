/*
 * FSM.h
 *
 *  Created on: 29/11/2010
 *  Author: imoren2x
 */

#ifndef FSM_H_
#define FSM_H_

#include <stdio.h>
#include <stdlib.h>

/* http://en.wikipedia.org/wiki/Opaque_pointer#C */
/**
 * The compiler considers struct obj an incomplete type. Incomplete types
 * can be used in declarations.
 */

typedef struct rFsm Fsm_r;

typedef Fsm_r* Fsm_t;
//typedef pFsm_t Fsm_t;

void crearFsm(Fsm_t* ptr);
void crearFsmIni(Fsm_t* ptr, int seed);
void run(Fsm_t ptr);
void state0(Fsm_t ptr);
void state2(Fsm_t ptr);
void stateEnd(Fsm_t ptr);
float getDatum(Fsm_t ptr);

/**
  * void ImprimirElementos(const pLista_t pLista);
  * void CopiarLista(const pLista_t pListaOrigen, pLista_t *ppListaDestino);
  * int LongitudLista(const pLista_t pLista);
  * void EliminarUltimo(pLista_t *ppLista);
  * bool EnLista(const pLista_t pLista, const int dato);
  * //Inserta "dato" tras "dato_ant"//
  * void InsertarTras(pLista_t *ppLista, const int dato, const int dato_ant);
  * //Elimina elementos duplicados en una lista//
  * void PurgarDup(pLista_t *ppLista);
  * //Ordena de menor a mayor//
  * void OrdenarLista(pLista_t *ppLista);
*/
#endif /* FSM_H_ */
