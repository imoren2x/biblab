// Inclusions list
#include <iostream>
#include <cstdlib>

// Global declarations
using namespace std;

class CComplejo {
    private:
        //atributes
        double real, imag;
        //methods are implemented separately.

    public:
        void asigna_real(const double r);
        void asigna_imag(const double i);
        double parte_real() const;
        double parte_imag() const;
        void suma(const CComplejo &a, const CComplejo &b);
    };

