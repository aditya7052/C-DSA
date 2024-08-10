// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int> &vec, int start, int mid, int end){
//     vector<int>temp;
//     int left=start;
//     int right=mid+1;

//     while (left<= mid && right <= end)
//     {
//         if(vec[left] <= vec[right])
//         temp.push_back(vec[left++]);

//         else
//         temp.push_back(vec[right++]);
//     }

//     while (left<=end)
//     {
//         temp.push_back(vec[left++]);
//     }

//     while (right<=end)
//     {
//         temp.push_back(vec[right++]);
//     }

//     for (int  i = start; i <= end; i++)
//     {
//         vec[i] = temp[i-start];
//     }

// }

// void mergeSort(vector<int> &vec,int start,int end){
//     if(start >= end) return;

//     int mid=(start+end)/2;

//     mergeSort(vec,start,mid);//recursion call of 1st part of array
//     mergeSort(vec,mid+1,end);//recursion call of 2nd part of array
//     merge(vec,start,mid,end);
// }
// int main()
// {
//     vector<int> vec={3,2,8,5,1,4,10};
//     int n=7;
//     cout<<"Befor sorting : ";
//     // for(int i: vec){
//     //     cout<<vec[i]<< " ";
//     // }cout<<endl;

//     // cout<<"after sorting : ";
//     // mergeSort(vec,0,n-1);
//     // for(int i: vec){
//     //     cout<<vec[i]<< " ";
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<vec[i]<<" ";
//     }cout<<endl;
//     mergeSort(vec,0,n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<vec[i]<<" ";
//     }cout<<endl;

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &vec, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;
    while (left <= mid && right <= end)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left++]);
        }
        else
        {
            temp.push_back(vec[right++]);
        }
    }
    while (left <= mid)
    {
        temp.push_back(vec[left++]);
    }
    while (right <= end)
    {
        temp.push_back(vec[right++]);
    }

    for (int i = start; i <= end; ++i)
    {
        vec[i] = temp[i - start];
    }
}

void mergeSort(vector<int> &vec, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    mergeSort(vec, start, mid);
    mergeSort(vec, mid + 1, end);
    merge(vec, start, mid, end);
}

int main()
{
    vector<int> vec = {3, 2, 8, 5, 1, 4, 10};
    int n = 7;
    cout << "Before Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    mergeSort(vec, 0, n - 1);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }


    
    cout << endl;
}