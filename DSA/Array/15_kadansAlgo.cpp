#include <iostream>
#//include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int size)
{
    // int max = -1;
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<maxSubArray(arr, 8);
// cout<<"sd";
    return 0;
}