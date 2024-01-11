#include <iostream>
using namespace std;
template<class T>
void swap( T &a , T &b );
int main()
{
    int a , b;
    float f1 , f2;
    char c1 , c2;
    cout << "Enter int value" << endl;
    cin >> a >> b;
    cout << "Enter float value" << endl;
    cin >> f1 >> f2;
    cout << "Enter character value" << endl;
    cin >> c1 >> c2;
    swap( a , b);
    swap( f1 , f2 );
    swap( c1 , c2 );
    cout << "After swapping" << endl;
    cout << a << "\t" << b << endl
             << f1 << "\t" << f2 << endl
             << c1 << "\t"<< c2 << endl;
    return 0;
}

template<class T>
void swap( T &a , T &b )
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

