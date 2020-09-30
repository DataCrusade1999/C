#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
void Create()
{
    struct node *newnode;
    int a,n;
    a=0;
    printf("Enter The Number Of Nodes You Want\n");
    while(a<n){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode=NULL)
        {
            printf("Memeory Allocation Has Been Failed\n");
        }
        if(head=NULL)
        {
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            newnode->prev=NULL;
        }

    }

    
}