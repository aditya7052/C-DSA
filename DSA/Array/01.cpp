#include <iostream>
using namespace std;

void add(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}
int main()
{
    int size1;
    cout<<"Enter size : "<<endl;
    int arr[size1];
    for (int i = 0; i < size1; i++)
    {
        cin>>arr[i];
    }
    
    add(arr, size1);

    // for(int item: arr){
    //     cout<<item<<" ";
    // }

    return 0;
}