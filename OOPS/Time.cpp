#include <iostream>
using namespace std;
class Time
{
private:
                int h , m , s;
public:
            void setTime( int hour , int min , int sec )
            {
                if( hour <=24 )
                h = hour;
                else
                h = 0;

                if( min <= 60 )
                m = min;
                else
                m = 0;

                if( sec <= 60 )
                s = sec;
                else
                s = 0;
            }

            void printMessage()
            {
                if( h < 12 )
                    cout << "Good morning" << endl;
                else if( h < 16 )
                    cout << "Good afternoon" << endl;
                else
                    cout << "Good evening" << endl;
            }
};

int main()
{
    Time t;
    t.setTime( 10 , 29 , 30 );
    t.printMessage();
    return 0;
}



