#include <iostream>
using namespace std;
template<class P,class Q>
void add( P a , Q b );
int main()
{
    add( 12 , 5 );
    add( 78.435 , 45 );
    add( 78 , 124.454);
    add( 78.23 , 89.3 );
    return 0;
}

template<class P,class Q>
void add( P a , Q b )
{
  cout <<"Sum = " <<  a +b << endl;
}

