/*
 ============================================================================
 Name        : mergesort.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
	Escribe un algoritmo recursivo que ordene un array de la siguiente
	forma:
		Sea k el índice del elemento mitad del array.
		Ordena los elementos hasta a[k], incluyéndolo.
		Ordena los elementos siguientes.
		Mezcla los dos subarrays en un único array ordenado.
	Este método de clasificación interna se denomina ordenación por mezcla,
	o Mergesort.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Mergesort(const int *pos, const int len);

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int Mergesort(const int *pos, const int len) {
	if ( len == 2 ) {
		if ( pos[0] > pos[1] ) {
			int temp;
			pos[0] = temp;
			pos[1] = pos[0];
			pos[1] = temp;
		}
	} if ( k%2 == 0 ) { //0, 1, ..., 9 len = 10//

		//array1 = sort( pos, len/2 - 1 );
		//array2 = sort( pos[len/2], len/2 - 1);
		Mergesort(sort( pos, len/2 - 1 ), sort( pos[len/2], len/2 - 1));
	} else {
		sort( pos, (len+1)/2 );
		sort( pos[(len+1)/2], (len-1)/2 );
		Mergesort(array1, array2);
	}
}
