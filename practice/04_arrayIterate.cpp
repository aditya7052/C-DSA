#include<iostream>
using namespace std;

int main()
{
    
    int a,size=6;
    int arr[size]={5,8,9,6,1,7};
    
    cout<<"enter number : "<<endl;
    cin>>a;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[size-a]<<" ";
        a++;
        
    }
    
    
    return 0;
}