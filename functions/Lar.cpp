#include <iostream>
using namespace std;
int lar( int , int );
int main()
{
    int a , b , c;
    cout << "Enter 3 values" << endl;
    cin >> a >> b >> c;
    cout << "Largest = " << lar ( lar( a , b) , c ) << endl;
    return 0;
}

int lar ( int n1 , int n2 )
{
  return n1 > n2 ? n1 : n2;
}





