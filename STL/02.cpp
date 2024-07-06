// Set -> 
// 1. Unique elements - no two elements in a set can be equal 
// 2. Immutable - We can add or remove elements from a set, but we can't change the values of existing element
// 3. Sorted - 

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
//     // set<int> set1 = {3,8,1,4,9,8};   // for ascending 
//     set<int, greater<int>> set1 = {3,8,1,4,9,8};    //for descending

//     set1.insert(20); // 
//     set1.erase(1);      //delete value form the set
//   //  set1.clear();       //delete all elements
//     int s=set1.size();

//     // for(int i: set1){
//     //     cout<<i<<" ";
//     // }
//     cout<<s;



        // ----------------------------Unordered set--------------------------------
        unordered_set<int> un_set1={4,2,6,1,3,9,4};
        un_set1.insert(20);
        for(int i: un_set1){
            cout<<i<<" ";
        }
    return 0;
}