#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> v2){
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2[i].size(); j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    // vector<int> vec1 = {1,2,3,4};
    vector<vector<int>> v1 = {{1,2,3},{4,5},{6,7,8}};
    
    display(v1);
    return 0;
}