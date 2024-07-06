#include<iostream>
using namespace std;

void reversing(int arr[],int size){
    int start=0;
    int end=size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
 
}

int main()
{
    int arr[7]={2,5,9,6,3,1,8};
    reversing(arr,7);
    
    return 0;
}