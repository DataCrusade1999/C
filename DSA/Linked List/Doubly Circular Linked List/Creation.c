#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=0,*tail=0,*newnode;
int i,n;

void create()
{
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
void insert_beg()
{
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
            head->next=head;
        }
        else
        {
            newnode->next=head;
            newnode->prev=tail;
            head->prev=newnode;
            tail->next=newnode;
            head=newnode;  
        } 
    }
}
void insert_end()
{
    printf("enter the number of nodes you want at the end\n");
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
            head->next=head;
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
void insert_any()
{
    struct node *temp,*traverse;
    int position,internal_counter=1;
    temp=head;
    traverse=head;
    while(traverse!=tail)
    {
        traverse=traverse->next;
        internal_counter++;
    }
    printf("enter the position where you want to insert the node\n");
    scanf("%d",&position);
    for(i=1;i<position-1;i++)
    {
        temp=temp->next;
    }
    if(position==1)
    {
        insert_beg();
    }
    else if(position<1||position>internal_counter)
    {
        printf("enter valid position less than ---->%d but not less than 1",internal_counter);
    }
    else
    {
        printf("enter the number of nodes you want to insert\n");
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
                 head->next=head;
            }
            else
            {
                newnode->prev=temp;
                newnode->next=temp->next;
                temp->next->prev=newnode;
                temp->next=newnode;
                temp=newnode;  
            }  
        } 
    }
}
void main()
{
    int a;
    while(a!=5)
    {
        printf("\nType 1 to create doubly circular linked list\nType 2 to display that list\nType 3 to insert anywhere\nType 4 to insert at the end\nType 5 to exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        create();
        break;
        
        case 2:
        display();
        break;

        case 3:
        insert_any();
        break;

        case 4:
        insert_end();
        break;
        }

    }
    
}