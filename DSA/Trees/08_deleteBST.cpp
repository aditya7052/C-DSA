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

Node *dleteFromBst(Node *root, int val)
{
    if (root == NULL)
        return root;

    if (root->data == val)
    {
        // 1. zero child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 2. one child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 3. two child
        // either find max from the left subtree or min from the right subtree
        int minVal = minVal
    }
    else if (root->data >val){

    }
}

int main()
{
    Node *root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 7);

    return 0;
}