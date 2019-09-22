// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define N_MOVIES 3

struct movie_r {
  string title;
  int year;
} films [N_MOVIES];

void printmovie (struct movie_r movie);

int main (  ) {
  string mystr;
  int n;

  for (n = 0; n < N_MOVIES; n++) {
    cout << "Enter title: ";
    getline (cin,films[n].title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> films[n].year;
  }

  cout << "\nYou have entered these movies:\n";
  for (n = 0; n < N_MOVIES; n++)
    printmovie (films[n]);

  return 0;
}

void printmovie (struct movie_r movie) {
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}