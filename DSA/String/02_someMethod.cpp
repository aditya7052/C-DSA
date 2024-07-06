#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Hello world, how are you? ";
    cout<<str<<endl;
    // str.append("Hi, I am fine.");
    int idx = str.find("world");
    cout<<idx<<endl;

    string str2 ="test";
    str.insert(6, "test" );
    cout<<str;


    return 0;
}