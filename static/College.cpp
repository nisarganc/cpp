#include <iostream>
using namespace std;
class College
{
private:
            int regno;
            char name[20];
            static int count;
public:
            void newAdmission()
            {
                cout << "Enter regno and name" << endl;
                cin >> regno >> name;
                count++;
            }

            void myDetails()
            {
                cout << "-------------------------" << endl
                        << "Register no : " << regno << endl
                        << "Name         :" << name << endl
                        << "--------------------------" << endl;
            }

            static void Report()
            {
                cout << "-------------------------" << endl
                        << "Count of students = " << count << endl
                        << "-------------------------" << endl;
            }
};
int College::count = 0;
int main()
{
    College s1 , s2;
    s1.newAdmission();
    s2.newAdmission();

    s1.myDetails();
    s2.myDetails();

    College::Report();      // :: scope resolution operator
    return 0;
}



