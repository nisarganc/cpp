#include<iostream>
using namespace std;
class A
{
public:
         static int add( int a , int b )
         {
          return a +b;
         }
};

class B : public A
{
public:
         static int mul( int a , int b )
         {
            int s=0;
            for( int i=1; i<=b; i++)
                s = add( s , a );

            return s;
         }
};

int main ()
{
    cout << A::add(10,4) << endl;
    cout << B::mul( 2 , 4 ) << endl;
    return 0;
}
