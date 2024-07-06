#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        } 
    }
    return false;
}

void reverse(int arr[],int size){
    for (int i = size-1; i>= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7]={2,5,9,6,3,1,8};
    bool b=linearSearch(arr,7,3);
    cout<<b<<endl;

    reverse(arr,7);


    return 0;
}