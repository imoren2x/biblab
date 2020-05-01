#include <iostream>

using namespace std;

int* newNode(int i);

int main(int argc, char* argv[]) {
	//
	int* ptri = newNode('a');

	printf("Integer value: %c", *ptri);
	//
	delete ptri;
}

int* newNode(int i) {
	int* ptri = new int;

	*ptri = i;

	return ptri;
}