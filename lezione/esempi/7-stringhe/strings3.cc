//  Example 7.3, page 189
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// MODIFIED BY ROBERTO SEBASTIANI

using namespace std;
#include <iostream>

const int DIM = 4;
int main()
{
  char word[DIM];
  cout << word << endl;
  do {
    if (cin >> word)
      cout << "\t\"" << word << "\"\n";
    else
      break;
  } while (word[0] != '.');
  return 0;
}
