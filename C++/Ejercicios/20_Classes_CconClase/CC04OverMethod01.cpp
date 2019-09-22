#include <iostream>
#include <cstdlib>

using namespace std;

struct punto3D {
	float x, y, z;
};

class punto {
	public:
		/* Constructor */
		punto(float xi, float yi, float zi) :
			x(xi), y(yi), z(zi) {}
		punto(punto3D p) : x(p.x), y(p.y), z(p.z) {}

		void Asignar(float xi, float yi, float zi) {
			x = xi;
			y = yi;
			z = zi;
		}
		void Asignar(punto3D p) {
			Asignar(p.x, p.y, p.z);
		}
		void Ver() {
			cout << "(" << x << "," << y
			<< "," << z << ")" << endl;
		}
	private:
		float x, y, z;
};

int main() {
	punto P(0,0,0);
	punto3D p3d = {32,45,74};

	P.Ver();
	P.Asignar(p3d);
	P.Ver();
	P.Asignar(12,35,12);
	P.Ver();

	system("pause");
	return 0;
}