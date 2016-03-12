#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* insert(int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}

void  leftLeaveSum(struct node* root,int* sum)
{
    
    if(root == NULL)
    {
        return ;
    }
    else if(root->left && (root->left->left == NULL && root->left->right == NULL))
    {
        *sum += root->left->data;
    }
    leftLeaveSum(root->left,sum);
    leftLeaveSum(root->right,sum);
}
int main()
{
    int sum=0;
    struct node *root   = insert(26);
    root->left          = insert(10);
    root->right         = insert(3);
    root->left->left    = insert(4);
    root->left->right   = insert(6);
    root->right->left   = insert(3);
    
    leftLeaveSum(root,&sum);
    
    printf("sum of left leaves is %d",sum);
    
    return 0;
}

