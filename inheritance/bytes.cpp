#include<iostream>
#pragma pack(1)
using namespace std;
class Android1
{
private:
            int x;
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
private:
            char ch;
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
   cout << sizeof(a) << endl;
   return 0;
}
