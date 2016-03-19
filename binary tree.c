#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
    {
        return create(key);
    }
    if (key < node->data)
    {
        node->left  = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
    }
    return node;
}


void preorder(struct node *node)
{
    if(node == NULL)
    {
        return;
    }
    else
    {
        printf("%d  ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}


void inorder(struct node *node)
{
    if(node == NULL)
    {
        return;
    }
    else
    {
        inorder(node->left);
        printf("%d  ",node->data);
        inorder(node->right);
    }
}


void postorder(struct node *node)
{
    if(node == NULL)
    {
        return;
    }
    else
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d  ",node->data);
    }
}


int main()
{
    struct node *root   = NULL;
    int choice,value;
    char flag='y';
    printf("menu\n");
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.preordertraversal\n");
    printf("4.inordertraversal\n");
    printf("5.postordertraversal\n");
    
    do
    {
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter the element to insert");
                scanf("%d",&value);
                root = insert(root,value);
                break;
            case 2:
                printf("enter the element to delete");
                scanf("%d",&value);
                //delete(root,value);
                break;
            case 3:
                printf("\npreorder traversal of a given tree\n");
                preorder(root);
                break;
            case 4:
                printf("\ninorder traversal of a given tree\n");
                inorder(root);
                break;
            case 5:
                printf("\npostorder traversal of a given tree\n");
                postorder(root);
                break;
            default:
                printf("enter valid choice");
        }
        printf("do you want any operations again(y/n)");
        getchar();
        scanf("%c",&flag);
    }while(flag == 'y');
    
    return 0;
}
