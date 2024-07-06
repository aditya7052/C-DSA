// Lower Bound
// --> Given a sorted array of N integers and an in integer x, find the lower bound of x
// Lower Bound algo finds the first or the smallest index in a sorted array where the value at that given index is greater than or equal to a given key i.
#include <iostream>
using namespace std;

int lowwrBound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] <= key)
        {
            start = mid + 1;
            // return mid;
        }

        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return size;
}

int main()
{
    int arr[6] = {3, 5, 7, 8, 15};
    int ind = lowwrBound(arr, 5, 8);
    cout << ind;
    return 0;
}