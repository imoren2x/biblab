/*
 * temp.h
 *
 *  Created on: 21/11/2010
 *      Author: imoren2x
 *  Description:
 *  Objetivo del juego:
 *  	En esta práctica se quiere implementar el juego del Buscaminas,
 *  	similar al de Windows. El juego consta de un tablero cuadrado en
 *  	el que en varias casillas hay minas escondidas. El objetivo es ir
 *  	inspeccionando casillas hasta que todas las casillas libres estén
 *  	destapadas. Durante este proceso hay que evitar encontrarse con una mina.
 *
 *  Reglas del juego:
 *  Las casillas que no han sido aún inspeccionadas tienen oculto su contenido.
 *  Inicialmente todas las casillas están ocultas.
 *  El usuario va escogiendo casillas para inspeccionar. Si el jugador destapa una
 *  casilla con mina pierde el juego.
 *  Si, por el contrario, logra levantar todas las casillas libres sin pisar ninguna
 *  mina, gana. Si la casilla no tiene mina pueden darse dos posibilidades.
 *  La primera es que la casilla sea vecina de alguna mina. En ese caso, la casilla
 *  se considera inspeccionada y se muestra el n´umero de casillas vecinas que tienen
 *  minas. Se consideran vecinas las casillas adyacentes tanto vertical, horizontal
 *  como diagonalmente. Si la casilla inspeccionada no tiene minas alrededor, las
 *  casillas vecinas se van destapando automáticamente. Este proceso se repite
 *  para las casillas adyacentes que tampoco tienen minas alrededor. Se para de
 *  levantar casillas cuando el área que se está destapando acaba rodeada de
 *  casillas que sí tienen minas a su lado. En la figura se ve el tablero antes
 *  y después de inspeccionar la casilla (2, 2).
 *
 *  Estructura del programa:
 *  El tablero se representará en memoria mediante un array bidimiensional de
 *  casillas. Cada casilla debe contener suficiente información para saber si contiene
 *  o no una mina, cuántas minas vecinas hay y si ha sido ya inspeccionada.
 *  El algoritmo para levantar las casillas es un algoritmo recursivo. El caso
 *  recursivo será cuando se inspeccione una casilla que previamente no ha sido
 *  inspeccionada y no tiene minas vecinas. En ese caso se procederá a levantar
 *  recursivamente todas las casillas de alrededor. Todos los demás casos son casos base.
 */

#ifndef TEMP_H_
	#define TEMP_H_

	typedef enum eBool{false, true} bool;
	typedef struct rCelda
		{
			bool bMina;
			int iMinas;
			bool bDesc;
		}rCelda_t;

	typedef enum eDificultad{test, bajo, medio, alto} eDificultad_t;

	typedef rCelda_t **ppTablero_t;
	typedef rCelda_t *pTablero_t;

	typedef struct rTablero
		{
			ppTablero_t tablero;
			//int iDimension;
			eDificultad_t eDificultad;
		} rTablero_t;

	#define TAM 2


	//Crea tablero
		//param: rTablero_t no iniciado//
		//param: tamaño
		//param: dificultad
	bool fCreaTablero(rTablero_t *rTablero, const eDificultad_t eDificultad);

	//Descubre una celda
	bool fDescubreFicha(rTablero_t *rTablero, const int iFila, const int iColumna);

	//Dibuja el tablero
	bool fDibujaTablero(const rTablero_t rTablero, char *sTablero);


#endif /* TEMP_H_ */
