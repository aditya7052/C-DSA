#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}
int sum = 0;
int getSum(int arr[], int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int add = getSum(arr + 1, size - 1);
    sum = add + arr[0];

    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    // cout<<isSorted(arr,5);
    cout << getSum(arr, 5);
    return 0;
}