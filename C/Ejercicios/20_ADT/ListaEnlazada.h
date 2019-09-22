/*
 * ListaEnlazada.h
 *
 *  Created on: 29/11/2010
 *      Author: imoren2x
 */

#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_

#include <stdio.h>
#include <stdlib.h>


typedef struct rNodo {
	int dato;
	struct rNodo *sig;
} rNodo_t;

typedef rNodo_t *pLista_t;
typedef pLista_t tLista;

tLista crearLista();
void mostrarLista(const pLista_t ptr);
void insertar(pLista_t *ptr, const int kiElem);

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
#endif /* LISTAENLAZADA_H_ */
