#include<iostream>
using namespace std;
class Android1
{
public:
            void sms()
            {
                cout << "Message related functionality \n";
            }
            void call()
            {
                cout << "Call related functionality\n";
            }
};

class Android2 : public Android1
{
public:
            void camera()
            {
                cout << "U can access all functionality of camera \n";
            }

            void security()
            {
                cout << "Data security , Secured payment and other features \n";
            }
};

int main ()
{
   Android2 a;
    a.call();
    a.camera();
    a.security();
    a.sms();

    return 0;
}
