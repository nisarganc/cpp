#include<iostream>
using namespace std;
class Employ
{
private:
                int empno , sal , exp;
public:
              void read()
              {
                cout << "Enter employ number, experience and salary"<< endl;
                cin >> empno >> exp >> sal;
              }
              void write()
              {
                  cout << "---------------------------" << endl;
                  cout << "Employ number :" << empno << endl;
                  cout << "Experience        :" << exp << endl;
                  cout << "Salary                :" << sal << endl;
                  cout << "---------------------------" << endl;
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

              Employ operator + ( int val  )
              {
                  sal = sal + val;
                  return *this;
              }
};

int main()
{
Employ e1 , e2;
e1.read();
e2.read();
if( e1 != e2 )
{
            if( e1 < e2 )
                e2+=5000;
        else
                e1+=5000;
}
    else
    {
            e1+=5000;
            e2 = e2 + 5000;
    }

e1.write();
e2.write();

return 0;
}






