#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void reverseQueue(queue<int> &q, int a)
{
    stack<int> s;
    for (int i = 0; i < a; i++)
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
}
int main()
{
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    printQueue(q);
    reverseQueue(q, 5);
    printQueue(q);

    return 0;
}