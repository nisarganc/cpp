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
            void ringtone()
            {
                cout << "tone-1" << endl;
                cout << "tone-2" << endl;
                cout << "tone-3" << endl;
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

             void ringtone()
            {
                Android1::ringtone();  // invoking base class function from derived class
                cout << "digital-effect-1" << endl;
                cout << "digital-effect-2" << endl;
                cout << "digital-effect-3" << endl;
            }
};

int main ()
{
   Android2 a;
    a.ringtone();
    return 0;
}
