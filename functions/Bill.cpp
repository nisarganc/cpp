#include <iostream>
using namespace std;
template<class P,class Q>
double Bill( P a , Q b );
int main()
{
    cout << Bill( 12 , 5 ) << endl;
    cout <<Bill( 78.435 , 45 )<< endl;
    cout <<Bill( 78 , 124.454)<< endl;
    cout <<Bill( 78.23 , 89.3 )<< endl;
    return 0;
}

template<class P,class Q>
double Bill( P a , Q b )
{
  return a*b;
}

