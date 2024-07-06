#include <iostream>
using namespace std;
int count=0;
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
    count++;
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

// void insertAtBegin(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     // Node *temp = head;
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     else
//     {
//     count++;

//         newNode->next = head;
//         head = newNode;
//     }
// }

void getMid(Node*head){
    if (head == NULL)
    {
        cout<<"no node "<<endl;
        return;
    }
    Node* slow=head;
    Node* fast =head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"Middle node : "<<slow->data<<endl;
    
    
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
    getMid(head);

    

    cout<<"Number of nodes : "<<count<<endl;

    


    
    return 0;
}