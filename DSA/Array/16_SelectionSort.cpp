//Time Complexity --> O(n2)
#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
for (int i = 0; i < 5; i++)
    {
        int min = i;

        for (int j = i + 1; j < 6; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            swap(arr[min], arr[i]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {4, 2, 10, 8, 6, 1};
    selectionSort(arr,6);

    return 0;
}