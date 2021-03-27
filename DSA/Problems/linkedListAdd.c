#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=0,*newnode=0,*traverse=0;

void create(){
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;
    if (head==0)
    {
        head=traverse=newnode;
    }
    else
    {
        traverse->next=newnode;
        traverse=newnode;
        newnode->next=0;
    }
}

void display(){
    struct node* traverse;
    int count=0;
    traverse=head;
    printf("The elements are\n");
    while (traverse!=0)
    {
        printf("%3d",traverse->data);
        traverse=traverse->next;
        count++;
    }
    printf("\nThe number of nodes is-->%d\n",count);
    
}

void add(){
    struct node* traverse=0;
    int sum=0;
    traverse=head;
    while (traverse!=0)
    {
        sum=sum+traverse->data;
        traverse=traverse->next;
    }
    printf("\nThe sum is -->%d\n",sum);
    
}

void main(){
    int a;
    while (a!=4)
    {
        printf("\nType 1 to create\nType 2 display\nType 3 to add the numerical data in the linked list\nType 4 to exit\n");
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
        add();
        break;

        case 4:
        printf("Exited\n");
        break;
        
        default:
        printf("Wrong Choice\n");
        break;
        }
    }

}