#include <iostream>
using namespace std;
void table ( int , int = 10);
int main()
{
    table ( 3 );
    table ( 5 , 15 );
    return 0;
}

void table( int num , int range  )
{
    for( int i=1; i<=range; i++)
        cout << num << " x "<< i << " = " << num*i << endl;
}
