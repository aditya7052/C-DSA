#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size=5;
    int sLarge=-1;
    int arr[size]={1,2,3,4,5};
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]> max)
        {
            max=arr[i];
        }
        
    }
    cout<<max << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sLarge && arr[i] < max )
        {
            sLarge=arr[i];
        }
        
    }
    cout << sLarge << endl;
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    

    return 0;
}