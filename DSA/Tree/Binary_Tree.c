#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node *create(){
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data in the node;To exit enter -1\n");
    scanf("%d",&x);
    if (x==-1)
    {
        return 0;
    }


    newnode->data = x;
    printf("Enter the left child\n");
    newnode->left = create();
    printf("Enter the right child\n");
    newnode->right = create();

    return newnode;


}

void preorder(struct node *root){
    if (root==0)
    {
        return;
    }
    else
    {
        printf("%3d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
    
}

void main(){
    struct node *rootptr=0;
    rootptr = create();
    printf("The preorder traversal is:");
    preorder(rootptr);

}