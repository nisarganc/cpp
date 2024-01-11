#include <iostream>
using namespace std;
class  Student
{
    private:        int regno , semis;
    public:
                        void read()
                        {
                            cout << "Enter register number and semis" << endl;
                            cin >> regno >> semis;
                        }
                        void write()
                        {
                            cout << "-------------------" << endl
                                     << "register no  :" << regno << endl
                                     << "semis          :" << semis << endl
                                     << "-------------------" << endl;
                        }

                        void operator ++()
                        {
                            semis++;
                            if( semis > 8 )
                                semis = 8;
                        }
};

int main()
{
    Student s1 , s2;
    s1.read();
    s2.read();
    ++s1;
    ++s2;
    s1.write();
    s2.write();
    return 0;
}


