#include<stdio.h>
#include<stdlib.h>
struct Creation
{
    int data;
    struct Creation *next;
};
struct Creation *tail=0,*newnode;
int count=1,position;
void Create()
{
    struct Creation *newnode;
    int n,i;
    printf("Enter the number of nodes you want to create\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct Creation*)malloc(sizeof(struct Creation));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
           newnode->next=tail->next;
           tail->next=newnode;
           tail=newnode;
        }
    }
    printf("Ignore the value below\n");
    printf("%d\n",tail->next->data); //Sanity Check :)
}
void Display()
{
    struct Creation *traverse;
    traverse=tail->next;
    int counter=1;
    if(tail==0)
    {
        printf("List is empty\n");
    }
    else
    {

        printf("Your nodes are\n");
        while(traverse->next!=tail->next)
    {

        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
        counter++;
    }
        printf("%d\n",traverse->data);
        printf("Number of nodes are-->%d",counter);
    }  
    
}
void Insertion_b()
{
    int i,n;
    printf("enter the number of nodes you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct Creation*)malloc(sizeof(struct Creation));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode; 
        }
        
    }
    printf("Ignore the value below\n");
    printf("%d\n",tail->next->data); //Sanity Check :)
}
void Insertion_end()
{
    int i,n;
    printf("enter the number of nodes you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct Creation*)malloc(sizeof(struct Creation));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode; 
            tail=newnode;
        }
        
    }
    printf("Ignore the value below\n");
    printf("%d\n",tail->next->data); //Sanity Check :)
}
void Insertion_Any()
{
    struct Creation *temp;
    int i=1,a,s;
    printf("enter the position where you want to insert your node\n");
    scanf("%d",&position);
    temp=tail->next;
    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
    if(position<0||position>count)
    {
        printf("Invalid Position enter something greater than %d but less than %d",count);

    }
    else if(position==1)
    {
        Insertion_b();
    }
    else
    {
        printf("Enter number of nodes you want\n");
        scanf("%d",&a);
        for(s=0;s<a;s++)
        {
            newnode=(struct Creation*)malloc(sizeof(struct Creation));
            printf("Enter data\n");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;

        }
        
    }
    
}
void delbeg()
{
    struct Creation *temp;
    if(tail==0)
    {
        printf("List is empty");
    }
    else if(tail==tail->next)
    {
        temp=tail;
        tail=0;
        free(temp);
    }
    printf("Deletion from begginning operation has been executed\n");
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
}
void delend()
{
    struct Creation *prev,*current;
    current=tail->next;
    printf("Deletion from end operation has been executed");
    while(current->next!=tail->next)
    {
        prev=current;
        current=current->next;
    }
    prev->next=tail->next;
    tail=prev;
    free(current);
}
void del_any()
{
    struct Creation *prev,*current;
    int i=1,pos;
    current=tail->next;
    printf("Enter the position where you want to delete from\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        delbeg();
    }
    else
    {

        while(i<pos)
    {
        prev=current;
        current=current->next;
        i++;
    }
        prev->next=current->next;
        free(current);
    }
}
void reverse()
{
    struct Creation *prev,*current,*nextnode;
    current=tail->next;
    nextnode=current->next;
    if(tail==0)
    {
        printf("list is empty\n");
    }
    else
    {
        while(current!=tail)
    {
        prev=current;
        current=nextnode;
        nextnode=current->next;
        current->next=prev;
    }
        nextnode->next=tail;
        tail=nextnode;
        
    }
}
void main()
{
    int a;
    while(a!=9)
    {
        printf("\nType 1 To Create A CLL\nType 2 to Display that list\nType 3 to insert node at beggining\nType 4 to insert at end\nType 5 to insert anywhere\nType 6 to delete from the end\nType 7 to delete from anywhere\nType 8 to reverse the list\nType 9 to exit\n");
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
    Insertion_b();
    break;

    case 4:
    Insertion_end();
    break;

    case 5:
    Insertion_Any();
    break;

    case 6:
    delend();
    break;

    case 7:
    del_any();
    break;

    case 8:
    reverse();
    break;

    }
    }  
}