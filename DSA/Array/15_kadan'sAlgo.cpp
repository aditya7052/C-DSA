#include <iostream>
#//include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int size)
{
    int max = -1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}
int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int sum = maxSubArray(arr, 8);
    cout << sum << endl;
    cout << "done";

    return 0;
}