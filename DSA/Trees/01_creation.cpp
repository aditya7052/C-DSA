#include <iostream>
using namespace std;
class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// Tree * root;
void preOrder(Tree *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Tree *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->right->right = new Tree(5);

    preOrder(root);
    cout << endl;
    inOrder(root);

    return 0;
}