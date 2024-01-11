// SLT vector

#include <iostream>

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;
 
int main() {

    vector<int> v;

    for (int i = 1; i <= 5; i++)
        v.push_back(i);
 
    cout << "Output of begin and end: ";
    for (auto i = v.begin(); i != v.end(); ++i){
        cout << *i << " ";
    }

    return 0;
}