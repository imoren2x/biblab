#include <iostream>
using namespace std;

struct complejo {
	float a,b;
};

/* Prototipo del operador + para complejos */
complejo operator +(complejo a, complejo b);

int main() {
	complejo x = {10,32};
	complejo y = {21,12};
	complejo z;

	/* Uso del operador sobrecargado + con complejos */
	z = x + y;
	cout << z.a << "," << z.b << endl;
	cin.get();
	return 0;
}

/* Definición del operador + para complejos */
complejo operator +(complejo a, complejo b) {
	complejo temp = {a.a+b.a, a.b+b.b};
	return temp;
}