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
void Insertion_Any()
{
    struct node *newnode,*temp;
    int position,counter,i,n;
    temp=head;
    printf("=================================================================\n");
    printf("Insertion In Between\n");
    printf("=================================================================\n");
    printf("Enter The Number Of Nodes You Want\n");
    scanf("%d",&n);
    printf("Enter The Position Where You Want To Store Your Node\n");
    scanf("%d",&position);
    temp=head;
    for(i=1;position>i;i++)
    {
        temp=temp->next;
    }
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        newnode=newnode->next;
        newnode->prev=temp->next;
    }
}
void Insertion_End()
{
    struct node *newnode,*temp;
    int n,i;
    printf("=================================================================\n");
    printf("Insertion From The End\n");
    printf("=================================================================\n");
    printf("Enter The Number Of Nodes You Want\n");
    scanf("%d",&n);
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&newnode->data);
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
        temp=newnode;
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
    Display();
    if(head!=NULL)
    {
        Insert_B();
        Display();
    }
    Insertion_Any();
    Display();
    Insertion_End();
    Display();
    Deletion_Any();
    Display();
    Deletion_b();
    Display();
    Deletion_End();
    Display();
}