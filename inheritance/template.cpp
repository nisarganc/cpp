#include<iostream>
using namespace std;

class Engineer
{
private:
    int salary;
public:
    Engineer()
    {
        salary = 30000;
    }
    void hikeSalary()
    {
        salary += salary*0.10;
        cout<<"Salary of engineer hiked by 10%"<<endl;
    }
};

class CEO
{
private:
    int salary;
public:
    CEO()
    {
        salary = 300000;
    }
    void hikeSalary()
    {
        salary += salary*0.30;
        cout<<"Salary of CEO hiked by 30%"<<endl;
    }
};

template <class T>
void hikeSalary(T obj)
{
    obj.hikeSalary();
}

int main()
{
    Engineer e;
    CEO ceo;
    hikeSalary(e);
    hikeSalary(ceo);
}

