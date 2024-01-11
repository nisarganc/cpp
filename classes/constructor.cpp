#include<iostream>
using namespace std;

class Myclass
{
public:
    Myclass(){
        cout<<"Non parameterized constructor called.. "<<endl;
    }
    Myclass(int a){
        cout<<"Parameterized constructor called.. "<<endl;
    }
};

int main()
{
    Myclass m1;
    Myclass m2(10);
}
