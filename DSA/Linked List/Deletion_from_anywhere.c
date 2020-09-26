#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL,*traverse,*newnode,*traverse1;
    int a,n,count,position,counter;
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
        counter=1;
        while(traverse!=0)
        {
            printf("%d\tThe Position of The Node Is-->%d\n",traverse->data,counter);
            traverse=traverse->next;
            count++;
            counter++;
        }
        printf("There Are %d Nodes In Your Linked List\n",count);
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
        counter=1;
        printf("Your Nodes Are\n");
        while(traverse!=0)
        {
            printf("%d\tThe Position of The Node Is-->%d\n",traverse->data,counter);
            traverse=traverse->next;
            count++;
            counter++;
        }
        printf("There Are %d Nodes In Your Linked List\n",count);
        
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
        counter=1;
        printf("Your Nodes Are\n");
        while(traverse!=0)
        {
            printf("%d\tThe Position of The Node Is-->%d\n",traverse->data,counter);
            traverse=traverse->next;
            count++;
            counter++;
        }
       printf("There Are %d Nodes In Your Linked List\n",count);
    
    }
    printf("============================================================================================================\n");
    printf("Deletion From Specified Place\n");
    printf("============================================================================================================\n");
    printf("Enter The Position of The Node You Want To Delete\n");
    scanf("%d",&position);
    if(position>count)
    {
        printf("Enter A Valid Position Less Than---> %d",count);
    }
    else if(head==NULL)
    {
        printf("The List Is Empty");
    }
    else
    {
        count=1;
        traverse=head;
        while(position-1>count)
        {
            traverse=traverse->next;
            count++;
        }
        traverse1=traverse->next;
        traverse->next=traverse1->next;
        free(traverse1);
        traverse=head;
        count=0;
        counter=1;
        printf("Your Nodes Are\n");
        while(traverse!=0)
        {
            printf("%d\tThe Position of The Node Is-->%d\n",traverse->data,counter);
            traverse=traverse->next;
            count++;
            counter++;
        }
        printf("There Are %d Nodes In Your Linked List\n",count);
    }
    
}
// So I've Put Position If The Nodes Sideways Because I Want The User To Know By Typing Which Position He/She Could Delete The Desired Node The Program
//Could Be Made Much More Interactive By Adding "if" Or Other Control Statements.