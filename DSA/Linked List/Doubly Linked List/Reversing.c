#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
            head=tail=newnode;
            newnode->prev=NULL;
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
void R_Display()
{
    int count=0;
    struct node *traverse=head;
    if(head==NULL)
    {
        printf("Reversed List Is Empty\n");
    }
    else
    {

        printf("Your Nodes Are(Reversed)\n");
        while(traverse->next!=0)
    {

        traverse=traverse->next;
    }
        while(traverse!=0)
    {
        printf("%d\n",traverse->data);
        traverse=traverse->prev;
        count++;
    }
        printf("The Number Of Nodes Are--->%d",count);  
        
    }
}
void Display()
{
    struct node *traverse=head;
    int count=0;
    if(head==NULL)
    {
        printf("The List Is Empty\n");
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
    printf("The Number Of Nodes Are--->%d\n",count);
    }
}
void main()
{
    Create();
    Display();
    R_Display();
}