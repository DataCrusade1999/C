#include<stdio.h>
#include<stdlib.h>
struct Creation
{
    int data;
    struct Creation *next;
};
struct Creation *head=0;
void Create()
{
    struct Creation *newnode,*temp;
    int n,i;
    printf("Enter the number of nodes you want to create\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct Creation*)malloc(sizeof(struct Creation));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            temp->next=0; 
        }
        temp->next=head;
    }
}
void Display()
{
    struct Creation *traverse;
    int count=1;
    traverse=head;
    printf("Your nodes are\n");
    while(traverse->next!=head)
    {
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("%d\n",traverse->data);
    printf("Number of nodes are-->%d",count);
}
void Insertion_b()
{
    struct Creation *temp,*newnode,*tail;
    int n,i;
    printf("Enter the number of nodes you want at begginning\n");
    scanf("%d",&n);
    tail=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    for(i=0;i<n;i++)
    {
        newnode=(struct Creation*)malloc(sizeof(struct Creation));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        temp=head;
        head=newnode;
        head->next=temp;
        temp=head;
    }
    tail->next=head;
}
void main()
{
    int a;
    while(a!=4)
    {
        printf("\nType 1 To Create A CLL\nType 2 to Display that list\nType 3 to insert nodes at begginning\nType 4 to exit the programme\n");
        scanf("%d",&a);
        switch (a)
    {
    case 1:
    Create();
    break;
    
    case 2:
    Display();
    break;

    case 3:
    if(head!=0)
    {
        Insertion_b();
        break;
    }
    else
    {
        printf("List is empty\n");    
    }
    }
    }  
}