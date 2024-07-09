#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *Left;
    Node *Right;

    Node(int val)
    {
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

int sumAtK(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    // First we will create a queue and push root and NULL
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp != NULL)
        {
            if (level == k)
            {
                sum += temp->data;
            }
            if (temp->Left)
            {
                q.push(temp->Left);
            }
            if (temp->Right)
            {
                q.push(temp->Right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

// count the total number of tree
int countNodes(Node *root)
{
    if (root == NULL)
        return 0;

    // int leftCount = countNodes(root->Left);
    // int rightCount=countNodes(root->Right);
    // return leftCount +rightCount +1;

    return countNodes(root->Left) + countNodes(root->Right) + 1;
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;

    // int leftSum = 0;
    // leftSum += sum(root->Left);

    // int rightSum = 0;
    // rightSum += sum(root->Right);

    // return root->data + leftSum + rightSum;

    return sum(root->Left) + sum(root->Right) + root->data;
}

int calculateHeight(Node *root)
{
    if (root == NULL)
        return 0;

    // int leftHeight = calculateHeight(root->Left);
    // int rightHeight=calculateHeight(root->Right);
    // int a = max(leftHeight,rightHeight);
    // return a+1;

    return max(calculateHeight(root->Left), calculateHeight(root->Right)) + 1;
}

void sumReplace(Node *root)
{
    if (root == NULL)
        return ;

    sumReplace(root->Left);
    sumReplace(root->Right);

    if (root->Left != NULL)
    {
        root->data += root->Left->data;
    }
    if (root->Right != NULL)
    {
        root->data += root->Right->data;
    }
}

int main()
{
    Node *root = new Node(9);
    root->Left = new Node(31);
    root->Right = new Node(18);
    root->Left->Left = new Node(19);
    root->Left->Right = new Node(3);
    root->Left->Left->Left = new Node(20);

    // cout <<"Sum of K level elements : "<< sumAtK(root, 2) << endl;

    // cout <<"Total count of nodes : "<< countNodes(root) << endl;
    // cout <<"sum of all nodes : "<<  sum(root) << endl;

    cout << calculateHeight(root) << endl;
    return 0;
}