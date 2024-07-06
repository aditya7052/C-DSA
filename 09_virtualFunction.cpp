// Runtime polymorphism --> Late binding
// virtual function is a member function in the base class that you redefine in the derived class.

#include<iostream>
using namespace std;
class Base
{  
    public:
    virtual void  display(){
        cout<<"Base class"<<endl;
    }
};
class Derived: public Base
{  
    public:
    void display (){
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    Derived d1;
    Base *ptr = &d1;
    ptr->display();
    return 0;
}