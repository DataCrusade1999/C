#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void Create()
{
    int a,n;
    printf("Enter The Number Of Nodes You Want?\n");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        struct node *tail;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            tail->next=NULL;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
            tail->next=NULL;  
        }
    }
}
void Display()
{
    int count=0;
    struct node *traverse=head;
    if(head==NULL)
    {
        printf("List Is Empty");
    }
    else
    {
        printf("Your Nodes Are\n");
        while(traverse!=0)
    {
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("The Number Of Nodes Are-->%d",count); 
    }
     
}
void main()
{
    Create();
    Display();
}
