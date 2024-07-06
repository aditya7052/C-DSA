//reverse a stack without using extra space (using recursion)

#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &stack, int num ){
    if(stack.empty()){
        stack.push(num);
        return;
    }
    int num1 = stack.top();
    stack.pop();
    insertAtBottom(stack, num);
    stack.push(num1);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) return;
    // storing top element in a new variable
    int num = stack.top();

    stack.pop();

    reverseStack(stack);
    insertAtBottom(stack, num);
}
int main()
{
    
    return 0;
}