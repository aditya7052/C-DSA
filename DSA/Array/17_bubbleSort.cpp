#include <iostream>
using namespace std;
                                            // thoda sudharna hai
void bubbleSort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        int has = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                has = 1;
            }
        }
        if (has == 0)
        {
            cout << "sorted" << endl;
            break;
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
    bubbleSort(arr, 6);

    return 0;
}