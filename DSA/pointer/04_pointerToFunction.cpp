// find factorial of a number using pointer to function method.
#include<iostream>
using namespace std;
long int fact(int x){
    int i,fact=1;
    for (int i = 1; i <= x; i++)
    {
        fact=fact *i;
    }
return fact;
}
int main()
{
    int n,j;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}