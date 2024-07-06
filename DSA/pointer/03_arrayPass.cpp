//To pass array elements to the function using call by reference method
#include<iostream>
using namespace std;

void display(int *num){
    cout<<*num<< " ";
}
int main()
{
    int i=0, arr[]={10,20,30,40,50};
    while (i<5)
    {
        display(&arr[i]);
        i++;
    }
    
    return 0;
}