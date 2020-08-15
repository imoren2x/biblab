// pointer to functions
#include <iostream>
using namespace std;

/**
 * Pointer to functions
 * Definicion
 * Asignacion/apuntar
 * Llamada
 * Argumento de una funcion
 *   Formal parameter
 *   Actual parameter
 */

int addition (int a, int b) {
	return (a + b);
}

int substraction (int a, int b) {
	return (a - b);
}

//As formal parameter of a function//
int operation (int x, int y, int (*functocall)(int, int)) {
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main (  ) {
  int m,n;
  int (*minus)(int,int) = substraction; //Assigning/Pointing//
  minus = substraction;//Assigning/Pointing//

  //Llamada//
  cout << "Addition: 1 + 1 = " << (*minus)(1, 1) << endl;
  cout << "Addition: 1 + 1 = " << minus(1, 1) << endl;

  //As actual parameter of a function//
  m = operation (7, 5, addition);
  cout << "Addition: 7 + 5 = " << m << endl;
  n = operation (20, m, minus);
  cout << "Substraction: 20 - m = " << n << endl;

  return 0;
}