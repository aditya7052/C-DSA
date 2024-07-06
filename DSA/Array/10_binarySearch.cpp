#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start + end)/2;

    if(arr[mid] == key){
        return mid;
    }
    while (start <= end)
    {
        if (key > arr[mid])
        {
            //goto right part of array
            start = mid+1;
        }
        else{
        //goto left
        end = mid -1;
        }

        mid =(start+end)/2;
        
    }
    return -1;

    

}

int main()
{
    
    int arr[6]= {10 ,11,20,40,15,30};
    int key=20;

    int result =binarySearch(arr,6,20);
    cout<<result<<endl;
    return 0;
}