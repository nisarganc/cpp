#include <iostream>
using namespace std;
int sum ( int , int , int=0 );
int main()
{
    cout << "Sum = " << sum ( 10 , 20 ) << endl;
    cout << "Sum = " << sum ( 10 , 20 , 30 ) << endl;
    return 0;
}
int sum ( int a , int b , int c )
{
    return a + b + c;
}


