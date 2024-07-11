#include<iostream>
using namespace std;

int main()
{
    char input1;
    cout<<"Enter input 1 : ";
    cin>>input1;

    char input2;
    cout<<"Enter input 2 : ";
    cin>>input2;
    int a=0;

    for (char i = input1; i <= input2; i++)
    {
         a= int(input1) + int(input2);
    }
    cout<<a;
    
    return 0;
}