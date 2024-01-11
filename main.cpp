// Demonstrate the use of header files, functions, arrays, pointers, references, and input/output


#include <iostream> // #include <bits/stdc++.h> imports all header files but makes compilation slow
using namespace std; // to avoid std::cout everytime

int my_function(int a, int b)
{
    return a+b;
}

int main()
{
    cout<<"Hello World!"<< "\a"<<endl;
    cout<<"Function Call: "<<my_function(2,3)<<endl;

    // array
    int arr[5];
    arr[0] = 5;
    
    // pointer
    int *ptr;
    ptr = &arr[0];
    cout<<"ptr = "<<ptr<<endl;
    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"*ptr = "<<*ptr<<endl;

    // reference
    int& ref = arr[0];
    cout<<"ref = "<<ref<<endl;

    char name[5];
    cin.getline(name, 90); 

    // Print output 
    cout << name << endl;
    return 0;
}