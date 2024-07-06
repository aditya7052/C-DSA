#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node *kReverse(Node *&head, int k)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;
    int count = 0;

    while (curr != NULL && count < k)
    {
        
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
        cout<<count<<"\t";
    }

    if (next != NULL)
        head->next = kReverse(next, k);

    return prev;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "--> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    print(head);

    head = kReverse(head, 2);
    print(head);

    return 0;
}