#include <iostream>
#include <cstdlib>

using namespace std;

class A {
	public:
		A(int i=0) : a(i) {}
		void Ver() { cout << a << endl; }
	private:
		int a;
	friend void Ver(A); // "Ver" es amiga de la clase A
};

void Ver(A Xa) {
	// La funci�n Ver puede acceder a miembros privados
	// de la clase A, ya que ha sido declarada "amiga" de A
	cout << Xa.a << endl;
}

int main() {
	A Na(10);
	Ver(Na); // Ver el valor de Na.a
	Na.Ver(); // Equivalente a la anterior

	system("pause");
	return 0;
}