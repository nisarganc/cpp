#include<iostream>
#include<fstream>
using namespace std;
class Axis
{
private:
                int x , y , speed;
public:
               friend istream & operator >> ( istream &in , Axis &arg)
               {
                   in >> arg.x >> arg.y >> arg.speed;
                   return in;
               }

               friend ostream & operator << ( ostream &out, Axis &arg )
               {
                   out << "(" << arg.x << "," << arg.y << ")" << endl;
                   return out;
               }
};

 int main()
{
    Axis p;
    fstream fp;
    fp.open("f:/stars.txt", ios::in );
    fp.seekg( 0 , ios::end);  // move 0 bytes from end nothing but end itself
    int records = fp.tellg( ) / sizeof( p );
    fp.seekg( 0, ios::beg );
    for( int i=1; i<=records; i++)
    {
        fp.read( (char*)&p , sizeof(p));
        cout << p << endl;
    }
    fp.close();
}
