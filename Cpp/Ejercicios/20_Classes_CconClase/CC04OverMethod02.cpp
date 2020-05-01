#include <iostream>
#include <cstdlib>

using namespace std;

class punto {
	public:
		/** Constructor */
		punto(float xi, float yi, float zi) :
			x(xi), y(yi), z(zi) {}

		void Asignar(float xi, float yi = 0, float zi = 0) {
			x = xi;
			y = yi;
			z = zi;
		}
		void Ver() {
			cout << "(" << x << "," << y << ","
			<< z << ")" << endl;
		}
	private:
		float x, y, z;
};

int main() {
	punto P(0,0,0);

	P.Ver();
	P.Asignar(12);
	P.Ver();
	P.Asignar(16, 35);
	P.Ver();
	P.Asignar(34, 43, 12);
	P.Ver();

	system("pause");
	return 0;
}