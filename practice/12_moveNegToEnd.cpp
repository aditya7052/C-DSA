#include<iostream>
#include<vector>
using namespace std;

void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> arr2;
        for(int i=0;0<arr.size();i++){
        if(arr[i] > 0)
        {
            arr2[i]=arr[i];
        }
            else
            arr2[i]=arr[i]
        }

        for (int i = 0; i < arr2.size(); i++)
        {
            cout<<arr2[i];
        }
        
}

int main()
{
    vector<int> vec={1,-1,3,2,-7};
    segregateElements(vec);
    return 0;
}