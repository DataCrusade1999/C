#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*newnode;

void Enqueue()
{
    int x;
    printf("Enter The Element You Want to Enqueue\n");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;     
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void Dequeue()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("The Queue is Empty");
    }
    else
    {
        printf("The Dequeued Element is %d",front->data);
        temp=front;
        front=front->next;
        free(temp);
    }
    
}

void Display()
{
    struct node *traverse;
    if(front==0 && rear==0)
    {
        printf("The Queue is Empty");
    }

    else
    {
        traverse=front;
        printf("The Elements of the Queue Are\n");
        while (traverse!=0)
        {
            printf("%d\n",traverse->data);
            traverse=traverse->next;   
        }  
    }   
}

void Peek()
{
    printf("%d Is The First Element\n",front->data);
}

void main()
{
    int a;

    while(a!=5)
    {
        printf("\nType 1 to Enqueue\nType 2 to Dequeue\nType 3 to Display\nType 4 to Peek\nType 5 to Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        Enqueue();
        break;

        case 2:
        Dequeue();
        break;

        case 3:
        Display();
        break;

        case 4:
        Peek();
        break;

        case 5:
        printf("Exited!!");
        break;
        
        default:
        printf("Wrong Choice");
        break;
        }
    }
    
}