// Inclusions list
#include <iostream>
#include <cstdlib>
#include "CComplejos.hpp"

// Global declarations
using namespace std;


int main() {
    CComplejo a, b, s;

    a.asigna_real(1.0);
    a.asigna_imag(3.0);
    b.asigna_real(2.0);
    b.asigna_imag(7.0);
    s.suma(a,b);

    cout << s.parte_real() << ", " << s.parte_imag() << " i" << endl;

    system("pause");

	return EXIT_SUCCESS;
}
