#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getMax(int arr[],int size){
    int max=0;
    for (int i = 0; i < 5; i++)
    {  
        if (max <= arr[i])
        {
            swap(max,arr[i]);
        } 
    }
    cout<<max<<endl;
}

int getMin(int arr[],int size){
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5]={5,9,-15,6,3};
    getMax(arr,5);
    getMin(arr,5);
    
    
    return 0;
}