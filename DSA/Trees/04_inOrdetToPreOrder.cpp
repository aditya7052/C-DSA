#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int start, int end, int curr)
{
    for (int i = 0; i < end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
        return -1;
    }
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    int i = 0;
    int curr = preorder[i];
    i++;
    Node *node = new Node(curr);

    if (start == end)
        return node;

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->left = buildTree(preorder, inorder, pos + 1, end);
}
int main()
{
    int preOrder[] = {1, 2, 3, 4, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    int n=sizeof(inOrder)/sizeof(inOrder[0]);
    cout<<buildTree(preOrder,inOrder,0,n-1);

    


    return 0;
}