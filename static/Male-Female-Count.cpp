 #include <iostream>
using namespace std;
class College
{
private:
            int regno;
            char gender;
            static int mc , fc;
public:
            void admission( )
            {
                cout << "Enter regno and gender" << endl;
                cin >> regno >> gender;
                if( gender == 'm' || gender == 'M' ) mc++;
                else
                fc++;
            }

            void cancellation( )
            {
               if( gender == 'm' || gender == 'M' ) mc--;
               else
                    fc--;
            }

            void mydetails()
            {
                cout << "----------------------------" << endl;
                cout << "Register no :" << regno << endl;
                cout << "Gender        :" << gender << endl;
                cout << "----------------------------" << endl;
            }

            static void report( )
            {
                   cout << "----------------------------" << endl;
                   cout << "Male count      :" << mc << endl;
                   cout << "Female count  :" << fc << endl;
                   cout << "Total                 :" << mc+fc << endl;
                   cout << "----------------------------" << endl;
            }

};
int College::mc = 0 , College::fc=0;

int main()
{
    College s1 , s2 , s3 , s4;
    s1.admission();
    s2.admission();
    s3.admission();
    s4.admission();

    s1.mydetails();
    s2.mydetails();
    s3.mydetails();
    s4.mydetails();

    College::report();
    s1.cancellation();
    s2.cancellation();
    College::report();
    return 0;
}


