#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val){
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

void printLevelOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    // First we will create a queue and push root and NULL
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->Left)
            {
                q.push(temp->Left);
            }
            if (temp->Right)
            {
                q.push(temp->Right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->Left = new Node(2);
    root->Right = new Node(3);
    root->Left->Left = new Node(4);
    root->Left->Right = new Node(5);
    printLevelOrder(root);
}