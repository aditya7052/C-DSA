// input-->  5 0 9 3 0 1
// output-->  5 9 3  1 0 0

#include <iostream>
using namespace std;

int main()
{
    int size = 6, count = 0;
    int arr[size] = {5, 0, 9, 3, 0, 1};

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    // cout<<count<<endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }

    for (int i = size - count; i < size; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }

    
    

    return 0;
}
