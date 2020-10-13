#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=0,*tail=0;

void create()
{
    struct node *newnode;
    int i,n;
    printf("enter the number of nodes you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=tail=newnode;
            head->prev=head;
            tail->next=tail;
        }
        else
        {
            newnode->prev=tail;
            newnode->next=head;
            tail->next=newnode;
            head->prev=newnode;
            tail=newnode;  
        }
    }
}
void display()
{
    struct node *temp;
    int count=1;
    temp=head;
    printf("your nodes are\n");
    while(temp!=tail)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d\n",temp->data);
    printf("the number of nodes present---->%d",count);

}
void main()
{
    int a;
    while(a!=3)
    {
        printf("\nType 1 to create doubly circular linked list\nType 2 to display that list\nType 3 to exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        create();
        break;
        
        case 2:
        display();
        break;
        }

    }
    
}