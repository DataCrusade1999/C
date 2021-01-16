#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
void Create()
{
    int a=0,n;
    printf("Enter The Number Of Nodes You Want To Exit Type 0\n");
    scanf("%d",&n);
    while(a<n)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            head=tail=newnode;
            head->prev=NULL;
            tail->next=NULL;
        }
        else
        {
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
            tail->next=NULL;  
        }
        a++;
    }
}
void Display()
{
    if(head==NULL)
    {
        printf("The List Is Empty");
    }
    else
    {
        int count=0;
        struct node *traverse=head;
        printf("Your Nodes Are\n");
        while(traverse!=0)
    {
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("The Number Of Nodes Are--->%d",count);  
    } 
}
void main()
{
    Create();
    Display();
}