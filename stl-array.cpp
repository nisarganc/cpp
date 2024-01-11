// SLT array

#include <iostream>

#include <array>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;
 
int main() {
 
  array<int, 5> ar1={3, 4, 5, 1, 2};
  array<string, 2> ar2 = {string("I am"), "Nisarga"};

  cout << "Sizes of arrays are" << endl;
  cout << ar1.size() << endl;
  cout << ar2.size() << endl; 

  for (int i=0; i<ar1.size(); ++i)
  {
    cout << ar1[i] << " "; 
  }

  cout << ar1.front() << endl;
  cout << ar1.back() << endl;

  return 0;
}