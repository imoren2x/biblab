#include <iostream>
#include <string>

using namespace std;

//void exceptFun(string str);//throw all exceptions//
void exceptFun(string str) throw(int, char, float, unsigned int, std::bad_alloc);//throw exceptions indicated//

int main() {

	try {
		try {
			try {
				exceptFun("int");
				exceptFun("float");
				exceptFun("unsigned int");
			} catch (int i) {
				cout << "Capturada la exception de tipo int: " << i << endl;
		} catch (float k) {
			cout << "Capturada la exception de tipo float: " << k << endl;
	}} catch (unsigned int x) {
			cout << "Capturada la exception de tipo float: " << x << endl;
	}} catch (char c) {
		cout << "Capturada la exception de tipo char." << endl;
		cout << "El valor de c es: " << c << endl;
	}

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();

	return 0;
}

//void exceptFun(string str) {//throw all exceptions//
void exceptFun(string str) throw(int, char, float, unsigned int, std::bad_alloc) {//throw exceptions indicated//
	float f = 3.25;
	unsigned int u = 5;

	if (str.compare("int") == 0) {
		throw 3;
	} else if (str.compare("char") == 0) {
		throw 'x';
	} else if (str.compare("float") == 0) {
		throw f;
	} else if (str.compare("unsigned int") == 0) {
		throw u;
	}
}