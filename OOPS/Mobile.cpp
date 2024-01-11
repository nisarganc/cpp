#include <iostream>
using namespace std;
class Mobile
{
private:
            int curr;
public:
            void activate()
            {
              curr = 10;
            }

            void recharge( int v )
            {
                curr = curr + v;
            }

            int myBalance()
            {
                return curr;
            }
};

int main()
{
    Mobile s1 , s2;
    s1.activate();  // 10 rs
    s2.activate();
    s1.recharge( 10 );
    cout << s1.myBalance( );
    return 0;
}



