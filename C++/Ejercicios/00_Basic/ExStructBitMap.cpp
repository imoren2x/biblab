#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct mapaBitsA {
	int numero;
	unsigned short int campo1:3;
	unsigned short int campo2:4;
	unsigned short int campo3:2;
	unsigned short int campo4:1;
	unsigned short int campo5:6;
	float n;
};

struct mapaBitsB {
	unsigned char bit0:1;
	unsigned char bit1:1;
	unsigned char bit2:1;
	unsigned char bit3:1;
	unsigned char bit4:1;
	unsigned char bit5:1;
	unsigned char bit6:1;
	unsigned char bit7:1;
};

struct mapaBitsC {
	unsigned short int campo1:3;
	unsigned short int campo2:4;
	unsigned short int campo3:2;
	unsigned short int campo4:1;
	unsigned short int campo5:6;
};

struct mapaBitsD {
	unsigned char campo1:5;
	unsigned char campo2:5;
};

typedef struct mapaBits {
	unsigned short int campo1:3;
	unsigned short int campo2:4;
	unsigned short int campo3:2;
	unsigned short int campo4:1;
	unsigned short int campo5:6;
} mapaBits_t;

string getBitString(int a);
string getBitString(mapaBits_t mb);

int main() {
	mapaBits_t x;
	x.campo2 = 12;
	x.campo4 = 1;
	cout << x.campo2 << endl;
	cout << x.campo4 << endl;

	cout << getBitString(x) << endl;

	system("pause");
	return 0;
}

string getBitString(mapaBits_t mb) {

	return getBitString(mb.campo1) + " "
		 + getBitString(mb.campo2) + " "
	 	 + getBitString(mb.campo3) + " "
		 + getBitString(mb.campo4) + " "
		 + getBitString(mb.campo5);
}

string getBitString(int a) {
	string bitString("00000000");

	int aux = 0;

	//printf("a = %d\n", a);
	for( int i = 0; i <= 7; i++) {
		int digit = ( a >> aux ) & 0x01;
		bitString[i] = (char) ( digit > 0 ) ? '1' : '0';
		// printf(" digit = %d\n", digit );
		aux++;
	}
	bitString[8] = '\0';

	return bitString;
}