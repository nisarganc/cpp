 #include <iostream>
using namespace std;
class iBrowse
{
private:
                int cid , hrs , used;
                static int thrs , tused , slno;
public:
                iBrowse( int v = 10)
                {
                    cid = slno++;
                    hrs = v;
                    used = 0;
                }

                void Browse( int h )
                {
                    int rem = hrs - used;
                    if( h > rem )
                        cout <<"Sorry not enough hours left , plz recharge" << endl;
                    else{
                        used = used + h;   // customer hours
                        tused = tused + h;   // for management
                    }
                }

                void Myaccount()
                {
                    cout << "----------------------------------" << endl;
                    cout << "Account number         :" << cid  << endl;
                    cout << "Hours alloted              :" << hrs << endl;
                    cout << "Used                           :" << used << endl;
                    cout << "Remaining                  :" << hrs-used << endl;
                    cout << "----------------------------------" << endl;
                }

                static void Report()
                {
                    cout << "----------------------------------" << endl;
                    cout << "Customers count     :" << slno-1000 << endl;
                    cout << "Total hrs alloted       :" << thrs << endl;
                    cout << "Total used                :" << tused << endl;
                    cout << "Remaining                :" << thrs - tused << endl;
                    cout << "----------------------------------" << endl;
                }

};

int iBrowse::thrs = 500 , iBrowse::tused=0 , iBrowse::slno = 1000;

int main()
{
    iBrowse::Report();

    iBrowse alan , bob( 25);
    alan.Browse(3);
    bob.Browse(1);

    alan.Myaccount();
    bob.Myaccount();

    iBrowse::Report();
    return 0;
}


