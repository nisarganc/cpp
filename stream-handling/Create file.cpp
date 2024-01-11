#include<iostream>
#include<fstream>
using namespace std;
 int main()
{
   int empno;
   char name[20];
   cout << "Enter employ number and name \n";
   cin >> empno >> name;

   ofstream fp;
   fp.open( "f:/factory.txt", ios::app );
   fp << empno << "\t" << name << endl;
   fp.close();
}
