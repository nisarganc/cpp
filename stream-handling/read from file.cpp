#include<iostream>
#include<fstream>
using namespace std;
 int main()
{
   ifstream fp;
   fp.open( "f:/factory.txt", ios::in );
   if( fp.fail())
    cout << "Data file missing ,please recheck path \n";
   else
   {
    char data[80];
    do
    {
        fp.getline( data , 80 );
        cout << data << endl;
    }
    while( !fp.eof());
    fp.close();
   }
}
