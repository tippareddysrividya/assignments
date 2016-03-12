#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int sum(struct node *root)
{
    if(root == 0)
    {
        return 0;
    }
    return sum(root->left) + root->data + sum(root->right);
}

struct node* insert(int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = 0;
    newnode->right = 0;
    return(newnode);
}

int SumTreeCheck(struct node* node)
{
    int lefttree, righttree;
    if(node ==0 ||(node->left == 0 && node->right == 0))
    {
        return 1;
    }
    lefttree = sum(node->left);
    righttree = sum(node->right);
    if((node->data == lefttree + righttree)&&SumTreeCheck(node->left) && SumTreeCheck(node->right))
    {
        return 1;
    }
    
    return 0;
}


int main()
{
    struct node *root   = insert(26);
    root->left          = insert(10);
    root->right         = insert(3);
    root->left->left    = insert(4);
    root->left->right   = insert(6);
    root->right->right  = insert(3);
    if(SumTreeCheck(root))
    {
        printf("Binary tree is a sumtree");
    }
    else
    {
        printf("Binary tree is not a sumtree");
    }
    return 0;
}
