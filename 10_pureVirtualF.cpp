// Pure virtual functions 
// Why?
// if a function doesn't have any use in the case class but the function must be implemented by all its derived classes
// A class that contains a pure virtual function is known as abstract class.

#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()=0;
};
class B: public A{
    public:
    void display() {
        cout<<"B"<<endl;
    }
};
class C: public A{
    public:
    void display() {
        cout<<"C"<<endl;
    }
};

int main()
{
    B b;
    
    return 0;
}