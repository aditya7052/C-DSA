#include<iostream>
using namespace std;

class Base
{
    public:
    void print(){
        cout<<"Base class"<<endl;
    }
};
class Derived
{
    public:
    void print(){
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    Derived d1;
    d1.print();

    
    return 0;
}