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
bool findKey(Node* root, int target){

    if(root == NULL) return false;
    if(root->data == target) return true;

    if(target > root->data){
        return findKey(root->right,target);
    }
    else
    return findKey(root->left,target);
}

Node*  minValue(Node* root){
    Node* temp =root;
    while (temp->left !=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node*  MaxValue(Node* root){
    Node* temp =root;
    while (temp->right !=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
Node *deleteFromBst(Node *root, int val)
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
        int minVal = minValue(root->right)->data;
        //replace the val
        root->data=minVal;
        root->right=deleteFromBst(root->right,minVal);
    }
    else if (root->data >val){

    }
}

int main()
{
    Node *root = NULL;
    root =insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 7);

    // inorder(root);
    cout<<findKey(root,7)<<endl;
    cout<<"Min value : "<<minValue(root)<<endl;
    cout<<"Max value : "<<MaxValue(root)<<endl;

    return 0;
}