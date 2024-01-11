// Demonstrate the use of classes in C++

#include <iostream>
using namespace std;

class MyClass
{
    public:
        int a;
        int b;
        MyClass()
        {
            cout<<"welcome to my class"<<endl;
        }
        int my_function(int a, int b)
        {
            return a+b;
        }
        

};

int main()
{
    MyClass obj;
    obj.a = 5;
    obj.b = 6;
    cout<<"obj.a = "<<obj.a<<endl;
    cout<<"obj.b = "<<obj.b<<endl;
    cout<<"obj.my_function(2,3) = "<<obj.my_function(2,3)<<endl;

    int n;
    string s;
    cout<<"enter a number and string: "<<endl;
    cin>>n>>s;
    cout<<"n = "<<n<<s<<endl;

    return 0;
}