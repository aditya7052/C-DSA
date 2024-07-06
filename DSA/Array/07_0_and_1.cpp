#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={1,0,0,1,0};
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
        
    }
    cout<<count<<endl;//

    for (int i = 0; i < count; i++)
    {
        arr[i]=0;
    }

    for (int i = count; i < size; i++)
    {
        arr[i]=1;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}