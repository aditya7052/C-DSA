#include<iostream>
using namespace std;
class Employee{
public:
    virtual void salary()=0;
};

class FullTime : public Employee
{
public:
    void salary() {
        cout<<"Salary of FullTime employee"<<endl;
    }
};

class CE : public Employee
{
    public:
    void salary() {
        cout<<"Salary of CE "<<endl;
    }
};

int main()
{
    Employee *e;
    FullTime f;
    CE ce;
    e=&f;
    e->salary();
    e=&ce;
    e->salary();
    return 0;
}