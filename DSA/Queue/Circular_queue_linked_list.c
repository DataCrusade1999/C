#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*newnode;

void Enqueue(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    
}

void Dequeue()
{
    struct node *temp=front;
    if(front==0 && rear==0)
    {
        printf("The queue is empty");
    }
    else if (front==rear)
    {
        printf("The Dequeued Element is %d\n",front->data);
        front=rear=0;
        free(temp);
    }
    else
    {
        printf("The Dequeued Element is %d\n",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
       
}

void peek()
{
    if(front==0 && rear==0)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The front element is %d",front->data);
    }

}

void display()
{
    struct node *temp=front;

    if(front==0 && rear==0)
    {
        printf("The queue is empty");
    }

    else
    {
        printf("The elements of the queue are\n");
        while (temp->next!=front)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
        
    }
    
}

void main()
{
    int a,x;

    while(a!=5)
    {
        printf("\nType 1 to Enqueue\nType 2 to Dequeue\nType 3 to Display\nType 4 to Peek\nType 5 to Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        printf("Enter the number\n");
        scanf("%d",&x);
        Enqueue(x);
        break;

        case 2:
        Dequeue();
        break;

        case 3:
        display();
        break;

        case 4:
        peek();
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