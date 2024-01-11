#include<iostream>
using namespace std;
class Time
{
private:
                int h , m , s;
                void Increment()
                {
                    s++;
                    if( s == 60 )
                    {
                         s = 0;
                         m++;
                         if( m == 60 )
                         {
                             m = 0;
                             h++;
                             if( h == 24 )
                                h = 0;
                         }
                    }
                }
public:
             void setTime( int hour , int min , int sec )
             {
                 h = hour;
                 m = min;
                 s = sec;
             }

             void operator ++( )  // preincrement
             {
                    Increment();
                    cout << h << ":" << m << ":" << s << endl;
             }

             void operator ++(int) // post increment
             {
                  cout << h << ":" << m << ":" << s << endl;
                   Increment();
             }

             void display()
             {
                  cout << h << ":" << m << ":" << s << endl;
             }

             int operator == ( Time arg)
             {
                  return h==arg.h && m==arg.m && s==arg.s  ? 1 : 0;
             }
  };


int main()
{
    Time alarm , systime;
    alarm.setTime( 11 , 30 , 45 );
    systime.setTime( 23 , 20 , 50);

    for( ; ; )
    {
        systime++;
        systime.display();
        if( systime == alarm)
        {
            cout << "Ding dong....." << endl;
            break;
        }
    }

}






