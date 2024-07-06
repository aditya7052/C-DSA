#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];  //creating 2d array --> 3*4 = 12* 4(int_size) = 48 bytes reserved

    //taking user input row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++ )
        {
            cin>>arr[row][col];
        }
        
    }

    cout<<endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++ )
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}