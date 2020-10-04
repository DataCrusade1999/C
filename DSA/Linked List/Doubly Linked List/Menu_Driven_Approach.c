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
    int count=0;
    struct node *traverse=head;
    if(head==NULL)
    {
        printf("The List Is Empty");
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
void Deletion_b()
{
    struct node *temp;
    printf("Nodes After Deletion From The Begginning\n");
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void Deletion_Any()
{
    struct node *current,*temp,*placeholder;
    int pos,internal_counter;
    printf("============================================================================\n");
    printf("Deletion From Anywhere\n");
    printf("============================================================================\n");
    printf("Enter Position Of The Node You Want To Delete\n");
    scanf("%d",&pos);
    placeholder=head;
    internal_counter=0;
    while(placeholder!=0)
    {
        placeholder=placeholder->next;
        internal_counter++;
    }
    if(pos>internal_counter)
    {
        printf("Enter something less than -->%d\n",internal_counter);
    }
    current=head;
    temp=head;
    for(internal_counter=1;pos>internal_counter;internal_counter++)
    {
        current=current->next;
    }
    for(internal_counter=1;pos-1>internal_counter;internal_counter++)
    {
        temp=temp->next;
    }
    temp->next=current->next;
    temp=temp->next;
    temp->prev=current->prev;
    free(current);
}
void Deletion_End()
{
    struct node *temp,*current;
    current=head;
    temp=head;
    printf("Deletion from End\n");
    while(temp->next!=0)
    {
        temp=temp->next;
        current=current->next;
    }
    temp=temp->prev;
    temp->next=NULL;
    free(current);
}
void main()
{
    Create();
    Display();
    Deletion_Any();
    Display();
    Deletion_b();
    Display();
    Deletion_End();
    Display();
}