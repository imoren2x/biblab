#include <array>
#include <iostream>

/**
 * template < class T, size_t N > class array;
 * Array class
 * Arrays are fixed-size sequence containers: they hold a specific number of elements ordered in a strict linear sequence.
 *
 */

#define N 3
using namespace std;

int main() {
	std::array<int, N> myarray = {1981, 1, 27};

	cout << "Size of the array: " << myarray.size() << " elements." << endl << endl;

	cout << "First element: " << myarray[0] << endl;
	cout << "Last element: " << myarray[N-1] << endl << endl;

	std::cout << "myarray contains:";

	std::array<int, N>::iterator it;
	for ( it = myarray.begin(); it != myarray.end(); it++ )
		std::cout << ' ' << *it;

	std::cout << '\n';

	cout << "\n\n Pulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}