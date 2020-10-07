#include<stdio.h>
#include<stdlib.h>
struct Creation
{
    int data;
    struct Creation *next;
};
struct Creation *tail=0;
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
    int count=1;
    traverse=tail->next;
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
    }
        printf("%d\n",traverse->data);
        printf("Number of nodes are-->%d",count);
    }  
    
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