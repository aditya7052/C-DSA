#include<iostream>
#include<queue>
using namespace std;

void display(priority_queue<int> pq){
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(4);
    pq.push(20);
    // cout<<pq.top();
    display(pq);
    return 0;
}