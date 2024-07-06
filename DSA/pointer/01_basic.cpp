#include <iostream>
using namespace std;

int main()
{
    // int a=5;
    // int* ptr=&a;
    // cout<<*ptr<<endl; //value at location store in b --> 5
    // cout<<ptr<<endl; //value of ptr
    // cout<<&ptr<<endl; // address of ptr
    // cout<<&a;        // address of a

    int b = 10;
    int *ptr1 = &b;
    cout << sizeof(ptr1) << endl; // based on computer architecure

    char c = 20;
    char *ptr2 = &c;
    cout << sizeof(ptr2) << endl; // based on computer architecure

    double d = 30;
    double *ptr3 = &d;
    cout << sizeof(ptr3) << endl; // based on computer architecure

    //Bad practice
    /*
    int *ptr4;  //garbage value -->segmantation fault
    cout<<(*ptr4);
    */

   int* ptr =0;
   cout<<*ptr<<endl;


    return 0;
}