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
void main()
{
    int a;
    while(a!=3)
    {
        printf("\nType 1 To Create A CLL\nType 2 to Display that list\nType 3 to exit the programme\n");
        scanf("%d",&a);
        switch (a)
    {
    case 1:
    Create();
    break;
    
    case 2:
    Display();
    break;
    }
    }  
}