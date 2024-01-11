#include <iostream>
using namespace std;
int cube (int);
int main()
{
    int a , b , c;
    cout << "Enter value for a & b "<< endl;
    cin >> a >> b;
    c = cube( a) + cube(b);
    cout << "Result = " << c << endl;
    return 0;
}

int cube( int num )
{
    int res;
    res = num * num * num;
    return res;
}





