#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL,*traverse,*newnode,*traverse1;
    int a,n,count,position;
    printf("Enter The Number Of Nodes You Want\n");
    scanf("%d",&n);
    a=0;
    while(a<n){
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL){
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            head=newnode;
            traverse=newnode;
            traverse->next=NULL;
        }
        else{
            printf("Enter Data\n");
            scanf("%d",&newnode->data);
            traverse->next=newnode;
            traverse=newnode;
            traverse->next=NULL;
        }
        a++;

    }
    if(head!=NULL)
    {
        count=0;
        traverse=head;
        printf("Your Nodes Are\n");
        while(traverse!=0)
        {
            printf("%d\n",traverse->data);
            traverse=traverse->next;
            count++;
        }
        printf("The Number Of Your Nodes Are--->%d\n",count);
    }
    printf("============================================================================================================\n");
    printf("Deletion From Beggining\n");
    printf("============================================================================================================\n");
    if(head==NULL)
    {
        printf("The List is Empty\n");
    }
    else
    {
        traverse=head;
        head=head->next;
        free(traverse);
        count=0;
        traverse=head;
        while(traverse!=0)
        {
            printf("%d\n",traverse->data);
            traverse=traverse->next;
            count++;
        }
        printf("The Number Of Your Nodes Are--->%d\n",count);
        
    }
    printf("============================================================================================================\n");
    printf("Deletion From End\n");
    printf("============================================================================================================\n");
    if(head==NULL)
    {
        printf("The List Is Empty");
    }
    else
    {
        traverse=head;
        while(traverse->next!=0)
        {
            traverse1=traverse;
            traverse=traverse->next;
        }
        traverse1->next=NULL;
        free(traverse);
        count=0;
        traverse=head;
        while(traverse!=0)
        {
            printf("%d\n",traverse->data);
            traverse=traverse->next;
            count++;
        }
        printf("The Number Of Your Nodes Are--->%d\n",count);
    
    }
    
}