#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

/* Prototipo de función */
void permutaciones(char *, int l = 0);

int main(int argc, char *argv[]) {

	char palabra[255];// = "ABCD";//"ABCDE";
	cout << "Introduce una palabra: " << endl;
	cout << ">> ";
	cin >> palabra;

	permutaciones(palabra);

	system("pause");
	return 0;
}

void permutaciones(char * cad, int l) {
	char c; /* variable auxiliar para intercambio */
	int i, j; /* variables para bucles */
	int n = strlen(cad);

	for(i = 0; i < n-l; i++) {
		if (n-l > 2) permutaciones(cad, l+1);
		else cout << cad << ", " << endl;
		/* Intercambio de posiciones */
		c = cad[l];
		cad[l] = cad[l+i+1];
		cad[l+i+1] = c;
		//
		if ( l + i == n - 1 ) {
			for (j = l; j < n; j++)
				cad[j] = cad[j+1];

			cad[n] = 0;
		}
	}
}