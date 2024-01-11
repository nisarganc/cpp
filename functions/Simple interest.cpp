#include <iostream>
using namespace std;
float SI ( float , float , float = 12);
int main()
{
    float amt , time;
    int ch;
    cout << "Enter loan amount and loan tenture time" << endl;
    cin >> amt >> time;
    cout << "1. Loan on regular rate of interest" << endl
             << "2. Loan on consideration" << endl;
             cin >> ch;
             if( ch == 1 )
                cout << SI( amt  , time )<< endl;
             else
             {
                 cout << "Enter rate of interest" << endl;
                 float i;
                 cin >> i;
                 cout << SI ( amt , time , i ) << endl;
             }
    return 0;
}

float SI ( float p , float t , float r )
{
    float interest = ( p * t * r )/100.0;
    return interest;
}

