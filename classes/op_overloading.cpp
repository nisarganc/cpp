#include<iostream>
using namespace std;
class Employ
{
private:
                int empno , sal , exp;
public:
              friend istream& operator >> ( istream &in , Employ &arg)
              {
                cout << "Enter employ number, experience, and salary"<< endl;
                in >> arg.empno >> arg.exp >> arg.sal;
                return in;
              }

              friend ostream& operator << ( ostream &out , Employ &arg)
              {
                  out << "---------------------------" << endl;
                  out << "Employ number :" << arg.empno << endl;
                  out << "Experience        :" << arg.exp << endl;
                  out << "Salary                :" << arg.sal << endl;
                  out << "---------------------------" << endl;
                  return out;
              }

              int operator == ( Employ arg )
              {
                  return exp == arg.exp ? 1 : 0;
              }

               int operator != ( Employ arg )
              {
                  return exp != arg.exp ? 1 : 0;
              }

              int operator < ( Employ arg )
              {
                  return exp < arg.exp ? 1 : 0;
              }

              int operator > ( Employ arg )
              {
                  return exp > arg.exp ? 1 : 0;
              }

              void operator +=( int val )
              {
                  sal = sal + val;
              }
};

int main()
{
Employ e1 , e2;
cin >> e1 >> e2;
if( e1 != e2 )
{
if( e1 > e2 )
    e1+=5000;
else
    e2+=5000;
}
else
{
    e1+=5000;
    e2+=5000;
}
cout << e1 << e2;
return 0;
}






