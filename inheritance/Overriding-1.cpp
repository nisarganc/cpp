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
            void camera()
            {
                cout << "click and save image" << endl;
            }
};

class Android2 : public Android1
{
public:

            void security()
            {
                cout << "Data security , Secured payment and other features \n";
            }

             void camera()
            {
                cout << "auto focus , color correction , red eye removal , face detection , noise removal , 0.5 sec video stored along with image, geo info" << endl;
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
