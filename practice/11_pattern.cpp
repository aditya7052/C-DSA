#include<iostream>
using namespace std;
/*
1 1 1       1 0 1
1 0 1       0 0 0
1 1 1       1 0 1
*/
int main()
{
    int arr[3][3]={1,1,1,1,0,1,1,1,1};
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j]=0;
            }
                cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}