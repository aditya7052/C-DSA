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