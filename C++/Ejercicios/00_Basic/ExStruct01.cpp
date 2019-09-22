// example about structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movie_r {
  string title;
  int year;
} mine, yours;

void printmovie (struct movie_r movie);

int main (  ) {
  string mystr;

  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;

  cout << "Enter title: ";
  getline (cin, yours.title);
  cout << "Enter year: ";
  getline (cin, mystr);
  stringstream(mystr) >> yours.year;

  cout << "My favorite movie is:\n ";
  printmovie (mine);
  cout << "And yours is:\n ";
  printmovie (yours);

  return 0;
}

void printmovie (struct movie_r movie) {
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}