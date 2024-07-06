#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkTarget(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int totalSum(int arr[][4], int row, int col)
{
    int sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int rowSum(int arr[][4], int row, int col)
{
    int max = INT_MIN;
    int count = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
            // arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            count = i;
        }
    }
    cout << "Row = " << count << endl<<"Max sum = ";
    return max;
}


int colSum(int arr[][4], int row, int col)
{
    int max = INT_MIN;
    int count = -1;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
            // arr[i][j];
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        if (sum > max)
        {
            max = sum;
            count = i;
        }
    }
    cout << "Col = " << count << endl<<"Max sum = ";
    return max;
}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // cout << checkTarget(arr, 7, 3, 4)<<endl;

    // cout<<"Total sum = "<<totalSum(arr, 3, 4);

    // cout << rowSum(arr, 3, 4);
    cout << colSum(arr, 3, 4);
    return 0;
}