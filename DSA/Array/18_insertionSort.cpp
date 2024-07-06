#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){


for (int i = 0; i < size; i++)
{
    
    int j=i;
    while (j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
    }
    
}
for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 8, 5, 6};
    insertionSort(arr, 6);
    return 0;
}