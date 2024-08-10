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
void insertAtBegin(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(Node *head, int num)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == num)
            return true;

        temp = temp->next;
    }
    return false;
}

void deleteNode(Node *&head, int val)
{
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head=head->next;
    delete temp;
}

void deleteAtTail(Node *&head){
    Node *temp=head;
    while (temp->next->next != NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    
}
void reverse(Node*& head){
    Node* next=NULL;
    Node* prev= NULL;
    Node* curr= head;

    while (curr != NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
    }
    head=prev;
    
}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 5);
    display(head);
    insertAtBegin(head, 25);
    insertAtBegin(head, 35);
    display(head);
    reverse(head);
    display(head);

    cout << search(head, 20)<<endl;
    deleteNode(head, 25);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);

    return 0;
}