/*
 ============================================================================
 Name        : 3_Pascal.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
            Llamar a la función desde consola con un argumento que indica el
            número de filas que se formará en el triángulo de Pascal.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int ifPascal(const int i, const int j);

int main(int argn, char *argv[]) {
    int iI, iJ, iK;

    iI = atoi(argv[1]);
    for (iJ = 0; iJ <= iI; iJ++) {
        for (iK = 0; iK <= iJ; iK++) {
            printf("%d ", ifPascal(iJ, iK));
        }
        printf("\n");
    }

    //printf("\n");
    //system("pause");
    return EXIT_SUCCESS;
}

int ifPascal(const int i, const int j) {
    if ( ( ( i == 0 ) && ( j == 0 ) ) || ( i == j ) || ( j == 0) ) {
        return 1;
    } else {
        return ifPascal(i-1, j) + ifPascal(i-1, j-1);
    }
}
