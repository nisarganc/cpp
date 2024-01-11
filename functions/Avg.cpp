#include <iostream>
using namespace std;
float avg( int , int );
float avg( int , int , int );
int main()
{
    int t1 , t2 , t3;
    int ch;
    cout << "1. Student attended 2 tests" << endl;
    cout << "2. Student attended 3 tests" << endl;
    cin >> ch;
    if( ch == 1 )
    {
        cout << "Enter score in test-1 and test-2" << endl;
        cin >> t1 >> t2;
        cout  << avg( t1,t2);
    }
    else if( ch == 2 )
    {
        cout << "Enter score in test-1,  test-2 , test-3 " << endl;
        cin >> t1 >> t2 >> t3;
        cout  << avg( t1,t2, t3);
    }
    return 0;
}

float avg( int a , int b )
{
    return (a+b)/2.0;
}

float avg( int a , int b , int c )
{
    if( a <= b && a <= c )
        return avg(b,c);
    else if( b <= c && b <= a )
        return avg( a , c );
    else
        return avg( a , b);
}
