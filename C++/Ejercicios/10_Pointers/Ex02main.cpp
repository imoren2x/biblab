#include <iostream>
using namespace std;

int main (  ) {
  //Variable definitions//
  int numbers[5];
  int * p;

  //1 Primera position//
  p = numbers;//Equivalent to p = &numbers[0];
  *p = 10;//Equivalent to number[0] = 10;
  //2 Segunda posicion//
  p++;//Apunta a la siguiente posicion del array//
  *p = 20;//Equivalent to number[1] = 10;
  //3 Tercera position//
  p = &numbers[2];
  *p = 30;
  //4 Cuarta position//
  p = numbers + 3;
  *p = 40;
  //5 Quinta position//
  p = numbers;
  *(p+4) = 50;
  //Mostrar valores//
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;
}