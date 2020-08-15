//#include <stdio.h>
//#include <stdlib.h>
#include <ansi.h>

int main()
{
    FILE *f;
    int result;

    f = fopen("holamundo.txt", "wt");

    result = fprintf(f, "Hola, mundo!\n");//12
    result = fprintf(f, "Hello, world!\n");//13
    result = fprintf(f, "Orbis, te saluto!");//17

    printf("Posicion actual del puntero a fichero: %d", ftell(f));
    fseek(f, 3, SEEK_CUR);
    fprintf(f, "\n imoren2x");

//fwrite("Hola, mundo!!!", 20, 100, f);//función para escritura general.

	result = fclose(f);
    system("pause");
    return 0;
}
