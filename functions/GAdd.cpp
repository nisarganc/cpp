#include <iostream>
using namespace std;
template<class T>
void add( T a , T b );
int main()
{
    int a , b;
    float f1 , f2;
    cout << "Enter int value" << endl;
    cin >> a >> b;
    add( a , b );
    add( 1.3 , 3.4);

    return 0;
}

template<class T>
void add( T a , T b )
{
  cout <<"Sum = " <<  a +b << endl;
}

