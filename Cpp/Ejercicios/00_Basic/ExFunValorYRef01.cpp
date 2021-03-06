// passing parameters by reference
#include <iostream>
#include <cstdlib>
using namespace std;

//Llamar por valor implica llamar al constructor de copia
// con los problemas que ello conlleva: constructor pesado
//Criterio general:
//	Entrada: const &z ref cte (no llama constructor)
//	Salida: &y


void duplicate (const int& a, //input
	int& b, //output
	int& c	//
	) {
  //a*=2;
  b *= 2 + a;
  c *= 2;
}

int main () {
  int x=1, y=3, z=7;
  cout << "Input: " << endl;
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
  duplicate (x, y, z);
  cout << "Output: " << endl;
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return EXIT_SUCCESS;
}

//Referencia: Head First Design Patterns//