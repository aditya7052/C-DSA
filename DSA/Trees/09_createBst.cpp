
//make main function

#include<iostream>
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
Node* sortedArrayBST(int arr[], int s, int e){
    if (s>e) return NULL;
    int mid=(s+e)/2;

    Node* root= new Node(arr[mid]);
    root->left = sortedArrayBST(arr,s,mid-1);
    root->right=sortedArrayBST(arr,mid+1,e);

    return root;
    
    
}
int main()
{
    
    return 0;
}