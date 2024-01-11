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
    cin >> p;
    ofstream fp;
    fp.open("f:/stars.txt", ios::app );
    fp.write( (char *)&p , sizeof(p));
    fp.close();
}
