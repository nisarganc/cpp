#include<iostream>
using namespace std;

class Software
{
public:
    Software()
    {
        cout<<"I'm a Set of programs designed to do a task\n";
    }
};

class ApplicationSoftware : public Software
{
public:
    ApplicationSoftware()
    {
        cout<<"I'm a software designed to provide new functionalities\n";
    }
};

class SystemSoftware : public Software
{
public:
    SystemSoftware()
    {
        cout<<"I'm a software designed to communicate between user and hardware\n";
    }
};

class OS : public SystemSoftware
{
public:
    OS()
    {
        cout<<"I provide functionalities such as GUI, Memory Management etc...\n";
    }
};

class VMWare : public ApplicationSoftware, SystemSoftware
{
public:
    VMWare()
    {
        cout<<"I'm your Linux portal to Windows machine"<<endl;
    }
};

int main()
{
    VMWare vmware;
}
