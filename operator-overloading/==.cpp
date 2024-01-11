#include <iostream>
using namespace std;
class  Student
{
    private:
                       int regno , semis;
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

                        int operator == ( Student arg )
                        {
                            return semis == arg.semis ? 1 : 0;
                        }
};

int main()
{
    Student s1, s2;
    s1.read();
    s2.read();

    if( s1 == s2 )
        cout << "Same semis" << endl;
    else
        cout << "Diff semis" << endl;
   return 0;
}


