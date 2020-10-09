#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
void create()
{
    int i,n,a;
    struct node *newnode,*temp;
    printf("Enter the number of nodes you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=newnode;
            temp=newnode;
            temp->next=0;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            temp->next=0;
        }

    }
    printf("===========================================================================================\n");
    printf("Enter the number of nodes you want to concatnate\n");
    printf("===========================================================================================\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        temp->next=newnode;
        temp=newnode;
        temp->next=0;
    }

}
void display()
{
    struct node *traverse;
    int count=0;
    printf("===========================================================================================\n");
    printf("your nodes are\n");
    printf("===========================================================================================\n");
    traverse=head;
    while(traverse!=0)
    {
        printf("%d\n",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("number of nodes are--->%d",count);
}
void main()
{
    create();
    display();
}