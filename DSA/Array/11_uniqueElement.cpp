
// input -> 1 1 2 2 2 3 3
// output -> 1 2 3

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != arr[i+1])
        {
            count++;
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        } 
        else{
        arr[i+1]=arr[i];
        }
    }
    // cout << count<<endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    return 0;
}