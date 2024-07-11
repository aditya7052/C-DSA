/*
Binary search tree-
1-> The left subtree of a node contains only nodes with keys less than the node's key
2-> the right subtree of a node will contain only nodes with keys greater than the node's key
3-> The left and right subtree each must be a BST. there must be no duplicates nodes
*/

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
Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);

    else
        root->right = insert(root->right, val);

    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root =insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 7);

    inorder(root);
    return 0;
}