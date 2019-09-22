// constructing lists
#include <iostream>
#include <list>

/**
 * List
 * Lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions.
 */


int main () {
  // constructors used in the same order as described above:
  std::list<int> first; // empty list of ints
  std::list<int> second (4,100); // four ints with value 100
  std::list<int> third (second.begin(),second.end());  // iterating through second
  std::list<int> fourth (third); // a copy of third

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  //Insert 15 in first element
  std::list<int>::iterator itTemp = fifth.begin();
  fifth.insert(itTemp, 15);
  itTemp++;
  fifth.erase(itTemp);

  std::cout << "The contents of fifth are: ";
  for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    std::cout << *it << ' ';

  std::cout << '\n';

  return 0;
}