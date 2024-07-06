#include <iostream>
#include <bits/stdc++.h>

// bool pairSum(int arr[],int size,int key){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == key)
//             {

//                 cout<<arr[i] <<" "<<arr[j];
//                 return true;
//             }
//         }

//     }
//     return false;
// }

// int main()
// {
//     int arr[4]={4,3,1,2};
//     int key =7;

//     bool b = pairSum(arr,4,key);
//     cout<<endl;
//     cout<<b;
//     return 0;
// }

// Second Approch----------------------------------------------------------------------



using namespace std;

bool pairSum(int arr[], int size, int target)
{
    sort(arr[0], arr[size]);
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        int sum;
        sum = arr[i] + arr[j];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            i++;
        }
        else
            j--;
    }
    return false;
}

int main()
{
    int size = 5;
    int arr[size] = {4, 8, 3, 4, 6};
    int key = 11;

    return 0;
}