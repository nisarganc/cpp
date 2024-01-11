#include <iostream>
using namespace std;
 void displayDate( int , int , int , char = '/');
int main()
{
   displayDate( 12 , 4 , 2012 );
   displayDate( 21 , 9 , 2010 , '-');
    return 0;
}
void displayDate( int d, int m, int y, char sep )
{
    cout << d << sep << m << sep << y << endl;
}
