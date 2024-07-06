// STL -> Standard Template Library - provides a set of programming tools to implement algorithm and data structure like vectors, list, queue etc.
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    vector<int> num {1,2,3,4};
    vector<int>:: iterator itr;
    num.push_back(100);//add some element at the last

    //access
    // cout<<"Element at 3 is : "<<num.at(100)<<endl;
    num.at(0)=50;

    num.pop_back();

    //iterators -> They are used to point to the memory address of a vector element, they somehow act like pointers

   itr=num.begin();
//    itr=num.begin()+1;
   cout<<*itr<<endl;
   cout<<*(itr+1)<<endl;

    // for(int item: num){
    //     cout<<item<<" ";
    // }

    for(itr = num.begin(); itr !=num.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;

}