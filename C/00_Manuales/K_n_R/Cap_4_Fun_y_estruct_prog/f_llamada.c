/*
 * ClaseAlmacenExtern.c
 *
 *  Created on: 14/11/2010
 *      Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>

extern int x; //x es externa//

int funcion()
{
	return x;
}

int funcion2()
{
	static int y = 5;
	y++;

	return y;
}
