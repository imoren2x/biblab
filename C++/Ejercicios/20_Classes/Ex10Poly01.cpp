// pointers to base class
#include <iostream>
using namespace std;

class CPolygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
	// Caso A (vacio)//
	//int area() { return 5; } //Caso B
	//int virtual area() { return 5; } //Caso C
};

class CRectangle: public CPolygon {
  public:
    int area ()
      { return (width * height); }
};

class CTriangle: public CPolygon {
  public:
    int area ()
      { return (width * height / 2); }
};

int main () {
  CRectangle rect;
  CTriangle trgl;
  CPolygon * ppoly1 = &rect;
  CPolygon * ppoly2 = &trgl;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  cout << rect.area() << endl;
  cout << trgl.area() << endl;

  //cout << ppoly1 -> area() << endl;//Caso A: Compilation error
  //cout << ppoly2 -> area() << endl;//Caso A: Compilation error

  //cout << ppoly1 -> area() << endl;//Caso B: devuelve 5
  //cout << ppoly2 -> area() << endl;//Caso B: devuelve 5

  //cout << ppoly1 -> area() << endl;//Caso C: devuelve 20
  //cout << ppoly2 -> area() << endl;//Caso C: devuelve 10

  return 0;
}