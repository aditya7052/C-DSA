#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter row number : ";
    cin>>row;

    int col;
    cout<<"Enter col number : ";
    cin>>col;

    // int *ptr= new int[3];  // static 
    int **arr = new int* [row]; // 2d array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deallocate memory
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    
    delete []arr;
    
    
        return 0;
}