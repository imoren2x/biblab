// Inclusions list
#include <iostream>
#include <cstdlib>
#include "CComplejos.hpp"

// Global declarations
using namespace std;


//CComplejo class methods//

void CComplejo::asigna_real(const double r)
{
    real = r;
}

void CComplejo::asigna_imag(const double i)
{
    imag = i;
}

double CComplejo::parte_real() const
{
    return real;
}

double CComplejo::parte_imag() const
{
    return imag;
}

void CComplejo::suma(const CComplejo &a, const CComplejo &b)
{
    real = a.real + b.real;
    imag = a.imag + b.imag;
}
