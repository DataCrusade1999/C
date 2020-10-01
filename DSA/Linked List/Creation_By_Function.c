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
    int a=0,n;
    printf("Enter The Number Of Nodes You Want To Exit Type 0\n");
    scanf("%d",&n);
    while(a<n)
    {
        struct node *tail;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            head=newnode;
            tail=newnode;
            tail->next=NULL;
        }
        else
        {
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            tail->next=newnode;
            tail=newnode;
            tail->next=NULL;  
        }
        a++;
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
    printf("The Number Of Nodes Are--->%d",count); 
    }
     
}
void main()
{
    Create();
    Display();
}

