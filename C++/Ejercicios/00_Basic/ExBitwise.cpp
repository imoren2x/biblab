#include <iostream>
#include <string>

using namespace std;

string getBitString(int a);

int main( ) {

  int a, b, c, d;

  a = 0xd3; // = 11010011
  cout << "BitString(a) = " << getBitString(a) << endl;
  b = 0xf5; // = 11110101
  cout << "BitString(b) = " << getBitString(b) << endl;
  c = 0x1e; // = 00011110
  cout << "BitString(c) = " << getBitString(c) << endl;
  d = a | b; // 11010011 | 11110101 = 11110111 -> 0xf7
  cout << "BitString(a | b) = " << getBitString(d) << endl;
  d = b & c; // 11110101 & 00011110 = 00010100 -> 0x14
  cout << "BitString(b | c) = " << getBitString(d) << endl;
  d = a ^ c; // 11010011 ^ 00011110 = 11001101 -> 0xcd
  cout << "BitString(a ^ c) = " << getBitString(d) << endl;
  d = ~c; // ~00011110 = 11100001 -> 0xe1
  cout << "BitString(d = ~c) = " << getBitString(d) << endl;
  d = c << 3; // 00011110 << 3 = 11110000 -> 0xf0
  cout << "BitString(c << 3) = " << getBitString(d) << endl;
  d = a >> 4; // 11010011 >> 4 = 00001101 -> 0x0d
  cout << "BitString(a >> 4) = " << getBitString(d) << endl;
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