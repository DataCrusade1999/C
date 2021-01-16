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
    int a,n;
    printf("Enter The Number Of Nodes You Want To Exit Type 0\n");
    scanf("%d",&n);
    for(a=0;a<n;a++)
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
void Insert_B()
{
    struct node *newnode,*temp;
    int a,n;
    printf("How Many Nodes You Want To Insert At The Beginning\n");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        temp=head;
        head=newnode;
        head->prev=NULL;
        head->next=temp;
        temp->prev=newnode;
    }
}
void main()
{
    Create();
    if(head!=NULL)
    {
        Insert_B();
    } 
    Display();
}