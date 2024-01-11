#include <iostream>
using namespace std;
class  Student
{
    private:
                       int regno , semis;
    public:
                        void read()
                        {
                            cout << "Enter register number and semister" << endl;
                            cin >> regno >> semis;
                        }
                        void write()
                        {
                            cout << "-------------------" << endl
                                     << "register no  :" << regno << endl
                                     << "semister          :" << semis << endl
                                     << "-------------------" << endl;
                        }

                        int operator == ( Student arg )
                        {
                            return semis == arg.semis ? 1 : 0;
                        }

                         int operator != ( Student arg )
                        {
                            return semis != arg.semis ? 1 : 0;
                        }

};

int main()
{
    Student s1, s2;
    s1.read();
    s2.read();

    if( s1 != s2 )
        cout << "Diff semister" << endl;
    else
        cout << "Same semister" << endl;
   return 0;
}


