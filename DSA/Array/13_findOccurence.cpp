// first ocurrence

#include <iostream>
using namespace std;

int findOcurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;

            // end= mid-1;   --> for first ouccurence index
            start = mid + 1; // -->  --> for last ouccurence index
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main()
{
    int arr[6] = {1, 2, 2, 3, 3, 3};
    int ind = findOcurrence(arr, 6, 3);
    cout << ind;
    return 0;
}